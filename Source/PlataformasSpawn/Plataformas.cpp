// Fill out your copyright notice in the Description page of Project Settings.


#include "Plataformas.h"

// Sets default values
APlataformas::APlataformas()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> 
		Plataforma(TEXT("StaticMesh'/Game/Geometry/PlataformaMesh/uploads_files_4917076_picatinny_deck_l.uploads_files_4917076_picatinny_deck_l'"));

	PlataformaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plataforma_Mesh"));
	PlataformaMesh->SetRelativeScale3D(FVector(1.2, 1.2, 1.5));
	PlataformaMesh->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));
	PlataformaMesh->SetStaticMesh(Plataforma.Object);
	SetRootComponent(PlataformaMesh);
	//PlataformaMesh->SetCollisionProfileName(TEXT("NoCollision"));
	velocidad = 100.f;
	DireccionMovimiento = FVector(0.f, 0.f, 1.f);
	DireccionMovimientoAux = FVector(0.f, 1.f, 0.f);
	mover = false;
}

// Called when the game starts or when spawned
void APlataformas::BeginPlay()
{
	Super::BeginPlay();
    LimiteSuperior = GetActorLocation() + FVector(0.0f, 0.0f, 150.f);
    LimiteInferior = GetActorLocation() + FVector(0.0f, 0.0f, -100.f);
	LimiteSuperiorAux = GetActorLocation()+ FVector(0.0f, 150.0f, 0.f);
	LimiteInferiorAux = GetActorLocation() + FVector(0.0f, -100.0f, 0.0f);	
}

// Called every frame
void APlataformas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    if (mover == true)
    {
        if(direccion == 1)
		{
			FVector ActorLocation = GetActorLocation();
			float NuevaPosicionZ = ActorLocation.Z + (DireccionMovimiento.Z * DeltaTime * velocidad);

			if (NuevaPosicionZ >= LimiteSuperior.Z)
			{
				NuevaPosicionZ = LimiteSuperior.Z;
				DireccionMovimiento.Z *= -1;

			}
			else if (NuevaPosicionZ <= LimiteInferior.Z)
			{
				NuevaPosicionZ = LimiteInferior.Z;
				DireccionMovimiento.Z *= -1;

			}
			FVector NuevaPosicion1 = FVector(LimiteSuperior.X, LimiteSuperior.Y, NuevaPosicionZ);

			SetActorLocation(NuevaPosicion1);
		}
		else if (direccion == 2)
		{
			FVector ActorLocationAux = GetActorLocation();
			float NuevaPosicionZAux = ActorLocationAux.Y + (DireccionMovimientoAux.Y * DeltaTime * velocidad);

			if (NuevaPosicionZAux >= LimiteSuperiorAux.Y)
			{
				NuevaPosicionZAux = LimiteSuperiorAux.Y;
				DireccionMovimientoAux.Y*= -1;

			}
			else if (NuevaPosicionZAux <= LimiteInferiorAux.Y)
			{
				NuevaPosicionZAux = LimiteInferiorAux.Y;
				DireccionMovimientoAux.Y *= -1;

			}
			FVector NuevaPosicion2 = FVector(LimiteSuperiorAux.X, NuevaPosicionZAux, LimiteSuperiorAux.Z);

			SetActorLocation(NuevaPosicion2);
			
		}
    }
}