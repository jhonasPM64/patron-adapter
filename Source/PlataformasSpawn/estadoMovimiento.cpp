// Fill out your copyright notice in the Description page of Project Settings.


#include "estadoMovimiento.h"
#include "Enemigo_Lobo.h"

// Sets default values
AestadoMovimiento::AestadoMovimiento()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AestadoMovimiento::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AestadoMovimiento::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AestadoMovimiento::InitializeStrategy()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Estado de movimiento iniciada."));
	}
}

