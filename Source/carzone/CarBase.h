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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Root;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* Body;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USpringArmComponent* SpringArm;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCameraComponent* Camera;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* WheelFR;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* WheelFL;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* WheelRR;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* WheelRL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SuspensionFR;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SuspensionFL;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SuspensionRR;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SuspensionRL;
	
	UPROPERTY(BlueprintReadOnly)
	TArray<UStaticMeshComponent*> AllWheels;
	
	UPROPERTY(BlueprintReadOnly)
    TArray<UStaticMeshComponent*> FrontWheels;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="WheelSetup")
	float WheelRadius = 20.0f;
	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	protected:
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable, Category="Movement")
	void Move(const float direction);
	
	private:	
	void Suspension();
};
