// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonData.h"

#include "CommonGameData.generated.h"

UCLASS(BlueprintType)
class CARZONE_API UCommonGameData : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* AllVehiclesDT;

	UFUNCTION(BlueprintCallable)
	TArray<FCarData> GetAllVehicles() const;
};
