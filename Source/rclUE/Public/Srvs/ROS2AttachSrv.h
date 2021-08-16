// Copyright 2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "ue_msgs/srv/attach.h"

#include "ROS2AttachSrv.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FAttach_Request
{
	GENERATED_BODY()

public:
	FString name1;
	FString name2;
	

	void SetFromROS2(ue_msgs__srv__Attach_Request data)
	{
    	name1.AppendChars(data.name1.data, data.name1.size);

		name2.AppendChars(data.name2.data, data.name2.size);

		
	}

	void SetROS2(ue_msgs__srv__Attach_Request& data) const
	{
    	if (data.name1.data != nullptr)
		{
			free(data.name1.data);
		}
		data.name1.data = (char*)malloc((name1.Len()+1)*sizeof(char));
		memcpy(data.name1.data, TCHAR_TO_ANSI(*name1), (name1.Len()+1)*sizeof(char));
		data.name1.size = name1.Len();
		data.name1.capacity = name1.Len() + 1;

		if (data.name2.data != nullptr)
		{
			free(data.name2.data);
		}
		data.name2.data = (char*)malloc((name2.Len()+1)*sizeof(char));
		memcpy(data.name2.data, TCHAR_TO_ANSI(*name2), (name2.Len()+1)*sizeof(char));
		data.name2.size = name2.Len();
		data.name2.capacity = name2.Len() + 1;

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FAttach_Response
{
	GENERATED_BODY()

public:
	bool success;
	

	void SetFromROS2(ue_msgs__srv__Attach_Response data)
	{
    	success = data.success;

		
	}

	void SetROS2(ue_msgs__srv__Attach_Response& data) const
	{
    	data.success = success;

		
	}
};

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
	void SetInputs(const FAttach_Request Input);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetInputs(FAttach_Request& Input) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetOutput(const FAttach_Response Output);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetOutput(FAttach_Response& Output) const;
	
	// TODO these are for a future refactoring, as it requires to adapt the rest of the codes
	// used by client
  	UFUNCTION(BlueprintCallable)
	void SetRequest(const FAttach_Request Request);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetRequest(FAttach_Request& Request) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetResponse(const FAttach_Response Response);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetResponse(FAttach_Response& Response) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	ue_msgs__srv__Attach_Request Attach_req;
	ue_msgs__srv__Attach_Response Attach_res;
};