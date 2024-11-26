// Fill out your copyright notice in the Description page of Project Settings.


#include "estadoOculto.h"
#include "Enemigo_Lobo.h"

// Sets default values
AestadoOculto::AestadoOculto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AestadoOculto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AestadoOculto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AestadoOculto::InitializeStrategy()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Estado Oculto iniciada."));
	}
}

