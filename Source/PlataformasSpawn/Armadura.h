// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "decorator.h"
#include "Armadura.generated.h"

UCLASS()
class PLATAFORMASSPAWN_API AArmadura : public AActor, public Idecorator
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmadura();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Armadura() override;

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ArmaduraMesh;
};
