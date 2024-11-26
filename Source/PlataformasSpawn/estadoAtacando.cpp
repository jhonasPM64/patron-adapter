// Fill out your copyright notice in the Description page of Project Settings.


#include "estadoAtacando.h"
#include "Enemigo_Lobo.h"

// Sets default values
AestadoAtacando::AestadoAtacando()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AestadoAtacando::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AestadoAtacando::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AestadoAtacando::InitializeStrategy()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Estado de ataque iniciada."));
    }
}


