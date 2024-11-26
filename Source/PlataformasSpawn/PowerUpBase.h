// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlataformasSpawnCharacter.h"
#include "PowerUpBase.generated.h"

UCLASS()
class PLATAFORMASSPAWN_API APowerUpBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APowerUpBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void AplicarEfecto(class APlataformasSpawnCharacter* Personaje) PURE_VIRTUAL(APowerUpBase::AplicarEfecto();)
protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* PowerUpMesh;
};
