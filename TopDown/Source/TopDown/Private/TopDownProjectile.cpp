// Fill out your copyright notice in the Description page of Project Settings.


#include "TopDownProjectile.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ATopDownProjectile::ATopDownProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	Sphere->InitSphereRadius(15.f);
	Sphere->SetCollisionObjectType(ECC_GameTraceChannel1);
	Sphere->SetCollisionResponseToAllChannels(ECR_Block);
	Sphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	Sphere->SetNotifyRigidBodyCollision(true);
	RootComponent = Sphere;

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	ProjectileMovement->UpdatedComponent = RootComponent;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = false;
	ProjectileMovement->ProjectileGravityScale = 1.f;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
}

void ATopDownProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && OtherActor != this && OtherComp)
	{
		if (ParticleSystem)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticleSystem, GetActorLocation());
		}

		
		SetLifeSpan(0.1f);
	}
}

// Called when the game starts or when spawned
void ATopDownProjectile::BeginPlay()
{
	Super::BeginPlay();

	Sphere->OnComponentHit.AddDynamic(this, &ATopDownProjectile::OnHit);
}

// Called every frame
void ATopDownProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATopDownProjectile::FireProjectile(FVector Direction)
{
	if (ProjectileMovement)
	{
		Sphere->IgnoreActorWhenMoving(GetOwner(),true);
		ProjectileMovement->Velocity = Direction * ProjectileMovement->InitialSpeed;
	}
}

