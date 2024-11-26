// Fill out your copyright notice in the Description page of Project Settings.


#include "estadoVolando.h"
#include "Enemigo_Lobo.h"

// Sets default values
AestadoVolando::AestadoVolando()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AestadoVolando::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AestadoVolando::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AestadoVolando::InitializeStrategy()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("Estado de volar iniciada."));
	}
}

