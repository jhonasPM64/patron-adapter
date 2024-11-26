// Fill out your copyright notice in the Description page of Project Settings.


#include "estadoQuieto.h"
#include "Enemigo_Lobo.h"

// Sets default values
AestadoQuieto::AestadoQuieto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AestadoQuieto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AestadoQuieto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AestadoQuieto::InitializeStrategy()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Purple, TEXT("Estado pasivo iniciada"));
	}
}

