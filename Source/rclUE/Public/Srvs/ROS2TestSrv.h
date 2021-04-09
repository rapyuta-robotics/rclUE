// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include <ue4_interfaces/srv/ue4_srv_example.h>

#include "ROS2TestSrv.generated.h"

/**
 * 
 */
UCLASS()
class RCLUE_API UROS2TestSrv : public UROS2GenericSrv
{
	GENERATED_BODY()

public:
  	UFUNCTION(BlueprintCallable)
	virtual void Init() override;

  	UFUNCTION(BlueprintCallable)
	virtual void Fini() override;

	virtual const rosidl_service_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void Update(int a, int b);
	
	const ue4_interfaces__srv__UE4SrvExample_Request* GetRequest() const;
	const ue4_interfaces__srv__UE4SrvExample_Response* GetResponse() const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	ue4_interfaces__srv__UE4SrvExample_Request ue4test_req;
	ue4_interfaces__srv__UE4SrvExample_Response ue4test_res;
};
