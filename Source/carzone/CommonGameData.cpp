// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonGameData.h"

TArray<FCarData> UCommonGameData::GetAllVehicles() const
{

	TArray<FCarData> all_vehicles;
	FString context_string;
	
	if(ensure(IsValid(AllVehiclesDT) == false))
	{
	 	return TArray<FCarData>();
	}
	
	 for (const auto& name : AllVehiclesDT->GetRowNames())
	 {
	 	const FCarData* car_data = AllVehiclesDT->FindRow<FCarData>(name, context_string);
	 	all_vehicles.Add(*car_data);
	 }
	
	 return all_vehicles;
}
