// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "decorator.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class Udecorator : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PLATAFORMASSPAWN_API Idecorator
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void Armadura() PURE_VIRTUAL(Idecorator::Armadura();)
	virtual void Arma() PURE_VIRTUAL(Idecorator::Arma();)
};
