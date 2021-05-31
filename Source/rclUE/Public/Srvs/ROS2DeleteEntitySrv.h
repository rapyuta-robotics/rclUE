// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include <ue_msgs/srv/delete_entity.h>

#include "ROS2DeleteEntitySrv.generated.h"

/**
 * 
 */
UCLASS()
class RCLUE_API UROS2DeleteEntitySrv : public UROS2GenericSrv
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
	void SetInputs(FString Name);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetInputs(FString& Name);
	
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
	ue_msgs__srv__DeleteEntity_Request delete_entity_req;
	ue_msgs__srv__DeleteEntity_Response delete_entity_res;
};
