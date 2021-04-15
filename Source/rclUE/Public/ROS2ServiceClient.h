// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ROS2Node.h"
#include "Srvs/ROS2GenericSrv.h"
#include "ROS2ServiceClient.generated.h"

DECLARE_DYNAMIC_DELEGATE_OneParam(FServiceClientCallback, UROS2GenericSrv *, Service);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RCLUE_API UROS2ServiceClient : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UROS2ServiceClient();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void Init();
	
	UFUNCTION(BlueprintCallable)
	void InitializeService();
	
	// with a callback function, this might not needed anymore, eliminating the need to create Publisher classes for each MsgClass
	UFUNCTION(BlueprintCallable)
	void UpdateAndSendRequest();
	
	UFUNCTION()
	virtual void Destroy();
	
	// this information is redundant with Topic, but it's used to initialize it
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ServiceName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UROS2GenericSrv> SrvClass;

	// used to pass data for the request
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FServiceClientCallback RequestDelegate;

	// used to receive answer
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FServiceClientCallback AnswerDelegate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	AROS2Node* ownerNode;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TEnumAsByte<UROS2State> State = UROS2State::Created;
		
	rcl_client_t client;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UROS2GenericSrv *Service;

	bool Ready;

protected:
	UFUNCTION()
	void SendRequest();

	const void* req;
	const void* res;
};
