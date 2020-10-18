// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ClayCharacter.generated.h"

UCLASS()
class CLAYMAN_API AClayCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	void MoveVertical(float AxisValue);
	void MoveHorizontal(float AxisValue);

public:
	// Sets default values for this character's properties
	AClayCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
