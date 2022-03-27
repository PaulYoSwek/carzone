// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonData.h"

#include "PlayerGameData.generated.h"

USTRUCT(BlueprintType)
struct FVehicleData
{
	GENERATED_BODY()

	FCarData CarData;

	//Add possible attachments?
};

UCLASS(BlueprintType)
class CARZONE_API UPlayerGameData : public UObject
{
	GENERATED_BODY()
	
};
