// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Srvs/ROS2GenericSrv.h"
#include "Msgs/ROS2EntityStateMsg.h"
#include "rclcUtilities.h"
#include <ue_msgs/srv/spawn_entity.h>

#include "ROS2SpawnEntitySrv.generated.h"

/**
 * 
 */
UCLASS()
class RCLUE_API UROS2SpawnEntitySrv : public UROS2GenericSrv
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
	void SetInputs(FString xml, FString RobotNamespace, FEntityStateData data);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetInputs(FString& xml, FString& RobotNamespace, FEntityStateData& data);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetOutput(bool Success, FString status_message);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetOutput(bool& Success, FString& status_message);
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;
	
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

private:
	ue_msgs__srv__SpawnEntity_Request spawn_entity_req;
	ue_msgs__srv__SpawnEntity_Response spawn_entity_res;
};
