// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownCharacter.h"

#include "TopDownProjectile.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ATopDownCharacter::ATopDownCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ATopDownCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATopDownCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATopDownCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATopDownCharacter::FireProjectile(FVector Direction)
{
	if (ProjectileClass)
	{
		FVector SpawnLocation = GetActorLocation() + Direction * 100;
		FRotator SpawnRotation = Direction.Rotation();

		ATopDownProjectile * Projectile = GetWorld()->SpawnActor<ATopDownProjectile>(
			ProjectileClass,
			SpawnLocation,
			SpawnRotation);

		if (Projectile)
		{
			Projectile->Owner = this;
			Projectile->FireProjectile(Direction);
		}
	}
}

