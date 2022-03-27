// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CommonVehicleData.h"
#include "CarBase.h"

#include "Datatables.generated.h"

USTRUCT(BlueprintType)
struct FVehicleDataRow : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECarType> VehicleType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVehicleData CommonVehicleDataRow;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AVehicleBase> Vehicle;
};


class CARZONE_API Datatables
{
public:
	Datatables();
	~Datatables();
	
};
