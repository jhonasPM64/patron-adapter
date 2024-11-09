// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/ProjectileMovementComponent.h"
#include "ProyectilAdaptado.h"
#include "Engine/World.h"

// Sets default values
AProyectilAdaptado::AProyectilAdaptado()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	if (GetWorld())
	{
		ProyectilExterno = GetWorld()->SpawnActor<AADAPTER_GALAGA_L08Projectile>(AADAPTER_GALAGA_L08Projectile::StaticClass()); //6.- llamamos a un proyectil y lo 
	}
}

// Called when the game starts or when spawned
void AProyectilAdaptado::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProyectilAdaptado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProyectilAdaptado::Cargar()
{
	ProyectilExterno->SetActorLocation(GetActorLocation()); 
	UE_LOG(LogTemp, Warning, TEXT("Proyectil adaptado ha sido activado"));
}

void AProyectilAdaptado::SetVelocidad(float NuevaVelocidad)
{
	if (ProyectilExterno && ProyectilExterno->GetProjectileMovement())//configuracion de velocidad del proyectil
	{
		ProyectilExterno->GetProjectileMovement()->InitialSpeed = NuevaVelocidad;
		ProyectilExterno->GetProjectileMovement()->MaxSpeed = NuevaVelocidad;
	}
}

void AProyectilAdaptado::Disparar(FVector Direccion)
{
	if (ProyectilExterno)
	{
		ProyectilExterno->SetActorLocation(GetActorLocation());
		ProyectilExterno->GetProjectileMovement()->Velocity = Direccion * ProyectilExterno->GetProjectileMovement()->InitialSpeed;
	}
}
