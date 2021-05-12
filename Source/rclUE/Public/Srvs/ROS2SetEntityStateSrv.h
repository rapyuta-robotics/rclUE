// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Srvs/ROS2GenericSrv.h"
#include "Msgs/ROS2EntityStateMsg.h"
#include "rclcUtilities.h"
#include <ue_msgs/srv/set_entity_state.h>

#include "ROS2SetEntityStateSrv.generated.h"

/**
 * 
 */
UCLASS()
class RCLUE_API UROS2SetEntityStateSrv : public UROS2GenericSrv
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
	void SetInputs(FEntityStateData data);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetInputs(FEntityStateData& data);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetOutput(bool Success);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetOutput(bool& Success);
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	ue_msgs__srv__SetEntityState_Request entity_state_req;
	ue_msgs__srv__SetEntityState_Response entity_state_res;
};
