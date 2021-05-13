// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Srvs/ROS2GenericSrv.h"
#include "Msgs/ROS2EntityStateMsg.h"
#include "rclcUtilities.h"
#include <ue_msgs/srv/get_entity_state.h>

#include "ROS2GetEntityStateSrv.generated.h"

/**
 * 
 */
UCLASS()
class RCLUE_API UROS2GetEntityStateSrv : public UROS2GenericSrv
{
	GENERATED_BODY()

public:
  	UFUNCTION(BlueprintCallable)
	virtual void Init() override;

  	UFUNCTION(BlueprintCallable)
	virtual void Fini() override;

	virtual const rosidl_service_type_support_t* GetTypeSupport() const override;
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void SetInputs(FString Name, FString ReferenceFrame);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetInputs(FString& Name, FString& ReferenceFrame);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetOutput(FEntityStateData data, bool Success);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetOutput(FEntityStateData& data, bool& Success);
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;
	
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

private:
	ue_msgs__srv__GetEntityState_Request entity_state_req;
	ue_msgs__srv__GetEntityState_Response entity_state_res;
};
