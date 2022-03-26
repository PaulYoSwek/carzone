// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "CarBase.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS(Blueprintable)
class CARZONE_API ACarBase : public APawn
{
	GENERATED_BODY()

	public:
	// Sets default values for this pawn's properties
	ACarBase();

	// UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	// UStaticMeshComponent* Root;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Body;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USpringArmComponent* SpringArm;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* Camera;
	
	virtual void Tick(float DeltaTime) override;

	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	protected:
	virtual void BeginPlay() override;
};
