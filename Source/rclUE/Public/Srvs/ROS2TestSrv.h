// Copyright 2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "ue4_interfaces/srv/add_ints.h"

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
	void SetInputs(const int64 a, const int64 b);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetInputs(int64& a, int64& b) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetOutput(const int64 res);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetOutput(int64& res) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual const FString SrvRequestToString() const override;
	virtual const FString SrvResponseToString() const override;

	ue4_interfaces__srv__AddInts_Request ue4test_req;
	ue4_interfaces__srv__AddInts_Response ue4test_res;
};
