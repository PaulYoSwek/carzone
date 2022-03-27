// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonGameData.h"

TArray<FVehicleDataRow> UCommonGameData::GetAllCarsData()
{

	TArray<FVehicleDataRow> all_cars;
	FString context_string;
	
	if(!ensure(IsValid(AllCarsDT)))
	{
	 	return TArray<FVehicleDataRow>();
	}
	
	for (auto& name : AllCarsDT->GetRowNames())
	{
		FVehicleDataRow* car_data = AllCarsDT->FindRow<FVehicleDataRow>(name, context_string);

		if(car_data != nullptr)
		{
			all_cars.Add(*car_data);
		}
	}
	
	return all_cars;
}
