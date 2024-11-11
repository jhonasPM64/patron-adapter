// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ADAPTER_GALAGA_L08Projectile.h"
#include "PlataformasSpawnCharacter.generated.h"

// Forward declaration de AProyectil
class Aproyectil;

UCLASS(config = Game)
class APlataformasSpawnCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	//void PostInitializeComponents();

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
public:
	// Funci�n para disparar el proyectil
	void DispararProyectil();

private:
	//7.- actualizamos la parte para que el personaje dispare
	UPROPERTY(EditDefaultsOnly, Category = "Proyectil")
	//TSubclassOf<AADAPTER_GALAGA_L08Projectile> ClaseProyectil;

	// End of APawn interface
	UClass* ClaseProyectil; // Puntero a la clase del proyectil

public:
	APlataformasSpawnCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
