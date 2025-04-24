// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "TopDownCharacter.h"
#include "Engine/LocalPlayer.h"

ATopDownPlayerController::ATopDownPlayerController()
{
	bShowMouseCursor = false;
}

void ATopDownPlayerController::Move(const FInputActionValue& InputActionValue)
{
	FVector2D MovementVector = InputActionValue.Get<FVector2D>();

	APawn* ControlledPawn = GetPawn();
	if (ControlledPawn)
	{
		ControlledPawn->AddMovementInput(FVector::ForwardVector, MovementVector.Y);
		ControlledPawn->AddMovementInput(FVector::RightVector, MovementVector.X);
	}
}

void ATopDownPlayerController::Look()
{
	if (APawn* ControlledPawn = GetPawn())
	{
		FVector WorldLocation, WorldDirection;
		if (DeprojectMousePositionToWorld(WorldLocation, WorldDirection))
		{
			float PawnZ = ControlledPawn->GetActorLocation().Z;
			float T = (PawnZ - WorldLocation.Z) / WorldDirection.Z;
			FVector GroundMousePos = WorldLocation + (WorldDirection * T);
			
			LookDirection = (GroundMousePos - ControlledPawn->GetActorLocation()).GetSafeNormal2D();
		}
	}
}

void ATopDownPlayerController::Fire(const FInputActionValue& InputActionValue)
{
	if (ATopDownCharacter* ControlledCharacter = Cast<ATopDownCharacter>(GetPawn()))
	{
		ControlledCharacter->FireProjectile(LookDirection);
	}
}

void ATopDownPlayerController::Dash(const FInputActionValue& InputActionValue)
{
}

void ATopDownPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(InputMappingContext, 0);
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		EnhancedInputComponent->BindAction(IA_Move, ETriggerEvent::Triggered, this, &ATopDownPlayerController::Move);
		EnhancedInputComponent->BindAction(IA_Fire, ETriggerEvent::Triggered, this, &ATopDownPlayerController::Fire);
		EnhancedInputComponent->BindAction(IA_Dash, ETriggerEvent::Triggered, this, &ATopDownPlayerController::Dash);
	}
}

void ATopDownPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	Look();
}
