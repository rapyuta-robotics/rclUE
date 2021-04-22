// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include <ue4_interfaces/srv/add_ints.h>

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
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void SetInputs(int64 a, int64 b);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetInputs(int64& a, int64& b);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetOutput(int64 res);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetOutput(int64& res);
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	ue4_interfaces__srv__AddInts_Request ue4test_req;
	ue4_interfaces__srv__AddInts_Response ue4test_res;
};
