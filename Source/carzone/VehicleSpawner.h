// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "VehicleSpawner.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CARZONE_API UVehicleSpawner : public USceneComponent
{
	GENERATED_BODY()

public:	
	UVehicleSpawner();

protected:
	virtual void BeginPlay() override;

public:	
		
};
