// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include <ue_msgs/srv/attach.h>

#include "ROS2AttachSrv.generated.h"

/**
 * 
 */
UCLASS()
class RCLUE_API UROS2AttachSrv : public UROS2GenericSrv
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
	void SetInputs(FString Name1, FString Name2);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetInputs(FString& Name1, FString& Name2);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetOutput(bool Success);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetOutput(bool& Success);
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;
	
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

private:
	ue_msgs__srv__Attach_Request attach_req;
	ue_msgs__srv__Attach_Response attach_res;
};
