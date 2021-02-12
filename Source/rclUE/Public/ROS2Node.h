// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "ROS2Context.h"
#include "ROS2Executor.h"
#include "ROS2Topic.h"

#include "ROS2Node.generated.h"


/**
 * ROS2 Node that additionally acts as a factory for Publishers, Subscribers, Clients, Services
 */
UCLASS(Blueprintable)
class RCLUE_API AROS2Node : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AROS2Node();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
public:
	UFUNCTION(BlueprintCallable)
	void Init();

	UFUNCTION(BlueprintCallable)
	FString GetName();
	
	UFUNCTION(BlueprintCallable)
	FString GetNamespace();

	rcl_node_t* GetNode();

	UFUNCTION(BlueprintCallable)
	void SetName(FString NodeName);

	UFUNCTION(BlueprintCallable)
	void SetNamespace(FString NodeNamespace);

	UFUNCTION(BlueprintCallable)
	void Subscribe(UROS2Topic* Topic); // Topic could be a struct with everything associated with it

private:
	UFUNCTION()
	UROS2Context* GetContext();

	UPROPERTY(VisibleAnywhere)
	UROS2Context* context;

	UPROPERTY(VisibleAnywhere)
	UROS2Executor* executor;

	rcl_node_t node;
	
	TMap<FString, rcl_subscription_t> subs; // map topic to sub to avoid double subs
	
	rcl_wait_set_t wait_set;

	UPROPERTY(EditAnywhere)
	FString Name = TEXT("node");
	
	UPROPERTY(EditAnywhere)
	FString Namespace = TEXT("ros_global");

	UPROPERTY(EditAnywhere)
	int NSubscriptions = 1;

	UPROPERTY(EditAnywhere)
	int SubIdx = 0;

	UPROPERTY(EditAnywhere)
	int NGuardConditions = 0;

	UPROPERTY(EditAnywhere)
	int NTimers = 0;

	UPROPERTY(EditAnywhere)
	int NClients = 0;

	UPROPERTY(EditAnywhere)
	int NServices = 0;

	UPROPERTY(EditAnywhere)
	int NEvents = 0;
};
