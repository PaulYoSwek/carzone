// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CommonVehicleData.h"
#include "VehicleBase.h"

#include "VehicleDatabase.generated.h"


// USTRUCT(BlueprintType)
// struct FVehicleDataRow : public FTableRowBase
// {
// 	GENERATED_BODY()
//
// public:
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
// 	TEnumAsByte<ECarType> VehicleType;
//
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
// 	FVehicleData CommonVehicleDataRow;
// 	
// 	UPROPERTY(EditAnywhere, BlueprintReadWrite)
// 	TSubclassOf<AVehicleBase> Vehicle;
// };


UCLASS()
class CARZONE_API UVehicleDatabase : public UGameInstanceSubsystem
{
	GENERATED_BODY()

	public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	
	private:
	//FVehicleDataRow m_Database;

	void LoadDatabase();
};
