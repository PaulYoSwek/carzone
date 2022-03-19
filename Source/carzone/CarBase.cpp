// Fill out your copyright notice in the Description page of Project Settings.

#include "CarBase.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/BillboardComponent.h"

ACarBase::ACarBase()
{
	PrimaryActorTick.bCanEverTick = true;

	//Setup components
	Root = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Base"));
	RootComponent = Root;
	
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	Body->SetupAttachment(Root);
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(Body);
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	
	// WheelFR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WheelFR"));
	// WheelFR->SetupAttachment(SuspensionFR);
	//
	// WheelFL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WheelFL"));
	// WheelFL->SetupAttachment(SuspensionFL);
	//
	// WheelRR = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WheelRR"));
	// WheelRR->SetupAttachment(SuspensionRR);
	//
	// WheelRL = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WheelRL"));
	// WheelRL->SetupAttachment(SuspensionRL);
	
	//Setup wheels
	AllWheels.Add(WheelFR);
	AllWheels.Add(WheelFL);
	AllWheels.Add(WheelRR);
	AllWheels.Add(WheelRL);
	
	FrontWheels.Add(WheelFR);
	FrontWheels.Add(WheelFL);
}

void ACarBase::BeginPlay()
{
	Super::BeginPlay();
}

void ACarBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACarBase::Move(const float direction)
{
	// for (const auto wheel : FrontWheels)
	// {
	// 	const FVector force_direction = (wheel->GetForwardVector() * 1000000) * direction;
	// 	const FVector force_location = wheel->GetComponentLocation();
	// 	wheel->AddImpulseAtLocation(force_direction, force_location);
	// 	DrawDebugLine(GetWorld(), force_location, force_location + wheel->GetForwardVector() * 500, FColor::Red, false, 0.2f, 5.0f);
	// }
}

void ACarBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

