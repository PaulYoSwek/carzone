// Fill out your copyright notice in the Description page of Project Settings.


#include "VehicleDatabase.h"

void UVehicleDatabase::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	LoadDatabase();
}

void UVehicleDatabase::LoadDatabase()
{
	//m_Database
}
