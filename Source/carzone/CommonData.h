// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"

#include "CommonData.generated.h"

UENUM()
enum ECarType
{
	Tank      UMETA(DisplayName = "Tank"),
	Speed     UMETA(DisplayName = "Speed"),
	Support   UMETA(DisplayName = "Support"),
};

USTRUCT(BlueprintType)
struct FWheelData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WheelData")
	UStaticMesh* Mesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "WheelData")
	int32 Suspension;
	
	//TODO: possible things to add
	//WheelSize, friction, IsShootable, what kind of attack the wheel has or trail it leaves behind
};

USTRUCT(BlueprintType)
struct FCarData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CarData")
	TEnumAsByte<ECarType> Type;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CarData")
	UStaticMesh* Mesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CarData")
	FWheelData WheelType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CarData")
	int32 Speed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CarData")
	int32 Weight;

	//TODO: Add a unique weapon here as well
};

class CARZONE_API CommonData
{
public:
	CommonData();
	~CommonData();
	
};
