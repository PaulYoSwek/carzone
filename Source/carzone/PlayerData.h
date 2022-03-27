// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonVehicleData.h"

#include "PlayerData.generated.h"

USTRUCT(BlueprintType)
struct FGarageData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WheelData")
	TArray<TEnumAsByte<VehicleID>> MyVehicles;
};

UCLASS(Blueprintable)
class CARZONE_API UPlayerData : public UObject
{
	GENERATED_BODY()
	
	public:
	UPlayerData();

	void AddVehicle(VehicleID vehicleID);
	bool HasVehicle(VehicleID vehicleID) const;

	private:
	FGarageData GarageData;
	
};
