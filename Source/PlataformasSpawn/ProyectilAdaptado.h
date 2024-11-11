// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AdaptadorInterface.h"
#include "ADAPTER_GALAGA_L08Projectile.h" //4.- llamamos a la clase mediante una libreria
#include "ProyectilAdaptado.generated.h"

UCLASS()	
class PLATAFORMASSPAWN_API AProyectilAdaptado : public AActor, public IAdaptadorInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProyectilAdaptado();

	 virtual void Cargar() override; // 2.-funcion virtual desde la interfaz

	 void SetVelocidad(float NuevaVelocidad); //estas 2 lineas pueden configurar una velocidad adicional
	 void Disparar(FVector Direccion);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//IAdaptadorInterface* proyectilExterno; // 3.-puntero para 
	UProjectileMovementComponent* ProjectileMovement; // Asegúrate de que esta línea esté presente

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	AADAPTER_GALAGA_L08Projectile* ProyectilExterno; //5.- con un puntero de galaga creamos una direccion
};
