// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class SHADOWPLATFORM_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Interact
	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void CalculateStartEndVectors(const UCameraComponent* Camera, FVector& Start, FVector& End);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	/*			Input Functions			*/
	UFUNCTION(BlueprintCallable, Category = "Input")
	void MoveForward(const FInputActionValue& Value);
	
	UFUNCTION(BlueprintCallable, Category = "Input")
	void MoveRight(const FInputActionValue& Value);
	
	UFUNCTION(BlueprintCallable, Category = "Input")
	void Look(const FInputActionValue& Value); 

	UFUNCTION(BlueprintCallable, Category = "Input")
	void Climb(const FInputActionValue& Value);

public:

	/*			Camera Component			*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	float InteractDistance = 200.0f;

	/*			Input Actions			*/

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	class UInputMappingContext* DefaultMappingContext;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	class UInputAction* MoveForwardAction;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	class UInputAction* MoveRightAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	class UInputAction* LookAction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	class UInputAction* JumpAction;
};
