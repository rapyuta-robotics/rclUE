// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ROS2Node.h"
#include "Actions/ROS2GenericAction.h"
#include <rcl_action/action_client.h>
#include "ROS2ActionClient.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FActionClientCallback, UROS2GenericAction *, Action);

// should be refactored with Service and Pub
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RCLUE_API UROS2ActionClient : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UROS2ActionClient();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void Init();
	
	UFUNCTION(BlueprintCallable)
	void InitializeAction();
	
	UFUNCTION()
	void Destroy();

	UFUNCTION(BlueprintCallable)
	void UpdateAndSendGoal();

	UFUNCTION(BlueprintCallable)
	void SendGoal();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ActionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UROS2GenericAction> ActionClass;

	// used to pass data for the request
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FActionClientCallback SetGoalDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FActionClientCallback GoalResponseDelegate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FActionClientCallback FeedbackDelegate;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FActionClientCallback ResultDelegate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AROS2Node* ownerNode;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TEnumAsByte<UROS2State> State = UROS2State::Created;

	rcl_action_client_t client;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UROS2GenericAction *Action;

private:

	const void* goal;
	const void* result;
	const void* feedback;
};
