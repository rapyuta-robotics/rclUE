// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#pragma once

#include "ROS2Support.h"

#include <Components/ActorComponent.h>
#include <Containers/Map.h>
#include <CoreMinimal.h>

#include "ROS2Node.generated.h"

class UROS2Publisher;
class UROS2ServiceClient;
class UROS2ActionServer;
class UROS2ActionClient;

// Reminder: functions bound to delegates must be UFUNCTION
DECLARE_DYNAMIC_DELEGATE_OneParam(FSubscriptionCallback, const UROS2GenericMsg*, Message);
DECLARE_DYNAMIC_DELEGATE_OneParam(FServiceCallback, UROS2GenericSrv*, Service);
DECLARE_DYNAMIC_DELEGATE_OneParam(FActionCallback, UROS2GenericAction*, Action);
DECLARE_DYNAMIC_DELEGATE(FSimpleCallback);

// these structs assume that the MAP containing them is short enough
// that iterating through them is not a performance bottleneck
USTRUCT(Blueprintable)
struct RCLUE_API FSubscription
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TopicName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UROS2GenericMsg> TopicType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UROS2GenericMsg* TopicMsg;

	rcl_subscription_t rcl_subscription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSubscriptionCallback Callback;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Ready;
};

USTRUCT(Blueprintable)
struct RCLUE_API FService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ServiceName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UROS2GenericSrv> ServiceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UROS2GenericSrv* Service;

	rcl_service_t rcl_service;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FServiceCallback Callback;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Ready;
};

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
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable)
	void Init();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = TEXT("node");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Namespace = TEXT("ros_global");

	rcl_node_t* GetNode();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TEnumAsByte<UROS2State> State = UROS2State::Created;

	// It is up to the user to ensure that subscriptions are only added once
	UFUNCTION(BlueprintCallable)
	void AddSubscription(const FString TopicName,
						 const TSubclassOf<UROS2GenericMsg> MsgClass,
						 const FSubscriptionCallback Callback);

	UFUNCTION(BlueprintCallable)
	void AddPublisher(UROS2Publisher* Publisher);

	UFUNCTION(BlueprintCallable)
	void AddClient(UROS2ServiceClient* Client);

	UFUNCTION(BlueprintCallable)
	void AddService(const FString ServiceName, const TSubclassOf<UROS2GenericSrv> SrvClass, const FServiceCallback Callback);

	UFUNCTION(BlueprintCallable)
	void AddActionClient(UROS2ActionClient* ActionClient);

	UFUNCTION(BlueprintCallable)
	void AddActionServer(UROS2ActionServer* ActionServer);

	// Queries/Diagnostics
	UFUNCTION(BlueprintCallable)
	const TMap<FString, FString> GetListOfNodes();

	UFUNCTION(BlueprintCallable)
	const TMap<FString, FString> GetListOfTopics();

	UFUNCTION(BlueprintCallable)
	const TMap<FString, FString> GetListOfServices();

	// wait_set quantities
	UPROPERTY(VisibleAnywhere, Category = "Diagnostics")
	int NGuardConditions = 0;

	UPROPERTY(VisibleAnywhere, Category = "Diagnostics")
	int NTimers = 0;

	UPROPERTY(VisibleAnywhere, Category = "Diagnostics")
	int NEvents = 0;

protected:
	UFUNCTION()
	UROS2Support* GetSupport();

	// this will be handled by the executor as anything related to the wait_set
	UFUNCTION()	   // uint64 is apparently not supported by BP - might need some changes here
	void SpinSome();

	rcl_wait_set_t wait_set;

	UPROPERTY()
	UROS2Support* Support;

	rcl_node_t node;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSubscription> Subscriptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FService> Services;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UROS2Publisher*> Publishers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UROS2ServiceClient*> Clients;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UROS2ActionClient*> ActionClients;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UROS2ActionServer*> ActionServers;

	UPROPERTY()
	FTimerHandle TimerHandle;

private:
	UFUNCTION()
	void HandleSubscriptions();

	UFUNCTION()
	void HandleServices();

	UFUNCTION()
	void HandleClients();
};
