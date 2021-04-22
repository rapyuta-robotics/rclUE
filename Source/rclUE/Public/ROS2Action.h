// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ROS2Node.h"
#include "Actions/ROS2GenericAction.h"
#include "ROS2Action.generated.h"

// this is meant to be an abstract class for ActionServer and Action
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RCLUE_API UROS2Action : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UROS2Action();

public:	
	UFUNCTION(BlueprintCallable)
	void Init();
	
	UFUNCTION(BlueprintCallable)
	void InitializeAction();
	
	UFUNCTION()
	virtual void Destroy();		

	virtual void ProcessReady(rcl_wait_set_t* wait_set);


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ActionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UROS2GenericAction> ActionClass;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UROS2GenericAction *Action;
	

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AROS2Node* ownerNode;


	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TEnumAsByte<UROS2State> State = UROS2State::Created;

private:
	UFUNCTION()
	virtual void InitializeActionComponent();
	
};
