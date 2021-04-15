// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Containers/Map.h"

#include "ROS2Context.h"

#include "ROS2Node.generated.h"

class UROS2Publisher;
class UROS2ServiceClient;

DECLARE_DYNAMIC_DELEGATE_OneParam(FSubscriptionCallback, const UROS2GenericMsg *, Message);
DECLARE_DYNAMIC_DELEGATE_OneParam(FServiceCallback, const UROS2GenericSrv *, Service);

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
	UROS2GenericMsg * TopicMsg;

	rcl_subscription_t RCLSubscription;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSubscriptionCallback Callback;
	
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
	~AROS2Node();

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name = TEXT("node");
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Namespace = TEXT("ros_global");

	rcl_node_t* GetNode();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TEnumAsByte<UROS2State> State = UROS2State::Created;



	// It is up to the user to ensure that subscriptions are only added once
	UFUNCTION(BlueprintCallable)
	void AddSubscription(FString TopicName, TSubclassOf<UROS2GenericMsg> MsgClass, FSubscriptionCallback Callback);

	UFUNCTION(BlueprintCallable)
	void AddPublisher(UROS2Publisher* Publisher);

	UFUNCTION(BlueprintCallable)
	void AddClient(UROS2ServiceClient* Client);

	UFUNCTION(BlueprintCallable)
	void AddService(FString ServiceName, TSubclassOf<UROS2GenericSrv> SrvClass, FServiceCallback Callback);

	

	// create comms - why are these separate?!
	UFUNCTION(BlueprintCallable)
	void CreateServices();



	// Queries/Diagnostics
	UFUNCTION(BlueprintCallable)
	TMap<FString, FString> GetListOfNodes();

	UFUNCTION(BlueprintCallable)
	TMap<FString, FString> GetListOfTopics();

	UFUNCTION(BlueprintCallable)
	TMap<FString, FString> GetListOfServices();



	// wait_set quantities
	UPROPERTY(VisibleAnywhere,Category="Diagnostics")
	int NGuardConditions = 0;

	UPROPERTY(VisibleAnywhere,Category="Diagnostics")
	int NTimers = 0;

	UPROPERTY(VisibleAnywhere,Category="Diagnostics")
	int NClients = 0;

	UPROPERTY(VisibleAnywhere,Category="Diagnostics")
	int NServices = 0;

	UPROPERTY(VisibleAnywhere,Category="Diagnostics")
	int NEvents = 0;

protected:
	UFUNCTION()
	UROS2Context* GetContext();

	// this will be handled by the executor as anything related to the wait_set
	UFUNCTION() // uint64 is apparently not supported by BP - might need some changes here
	void SpinSome();
	
	rcl_wait_set_t wait_set;

	UPROPERTY()
	UROS2Context* context;

	rcl_node_t node;

	// does it even need to be a map?
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FSubscription> Subscriptions;


	// can be merged with services by using a struct?
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, TSubclassOf<UROS2GenericSrv>> ServicesToProvide;
	
	// can be merged with srvCallbacks by using a struct?
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FServiceCallback> ServicesToCallback;



	UPROPERTY(BlueprintReadOnly)
	TArray<UROS2Publisher *> pubs;

	// used for wait_set
	UPROPERTY()
	TArray<UROS2ServiceClient *> srvClients;

	// used for wait_set
	TMap<UROS2GenericSrv *, rcl_service_t> services; // map services to servers
	
	UPROPERTY()
	TMap<UROS2GenericSrv *, FServiceCallback> srvCallbacks; // could be combined with above
	
	UPROPERTY()
	FTimerHandle timerHandle;

private:
};
