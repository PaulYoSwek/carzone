// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerData.h"

UPlayerData::UPlayerData()
{
}

void UPlayerData::AddVehicle(VehicleID vehicleID)
{
	if(ensure(HasVehicle(vehicleID) == true))
	{
		return;
	}
	
	GarageData.MyVehicles.Add(vehicleID);
}

bool UPlayerData::HasVehicle(VehicleID vehicleID) const
{
	return GarageData.MyVehicles.Contains(vehicleID);
}


