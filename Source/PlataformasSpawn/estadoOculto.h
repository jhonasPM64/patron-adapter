// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyActionStrategy.h"
#include "estadoOculto.generated.h"

UCLASS()
class PLATAFORMASSPAWN_API AestadoOculto : public AActor, public IEnemyActionStrategy
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AestadoOculto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	virtual void ExecuteAction(AEnemigo_Lobo* Enemy) override;
	virtual void InitializeStrategy() override;
};
