// Copyright 2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"

#include "Srvs/ROS2GenericSrv.h"
#include "rclcUtilities.h"
#include "ue_msgs/srv/delete_entity.h"

#include "ROS2DeleteEntitySrv.generated.h"

// potential problem: if this struct is defined multiple times!
USTRUCT(Blueprintable)
struct RCLUE_API FDeleteEntity_Request
{
	GENERATED_BODY()

public:
	FString name;
	

	void SetFromROS2(ue_msgs__srv__DeleteEntity_Request data)
	{
    	name.AppendChars(data.name.data, data.name.size);

		
	}

	void SetROS2(ue_msgs__srv__DeleteEntity_Request& data) const
	{
    	if (data.name.data != nullptr)
		{
			free(data.name.data);
		}
		data.name.data = (char*)malloc((name.Len()+1)*sizeof(char));
		memcpy(data.name.data, TCHAR_TO_ANSI(*name), (name.Len()+1)*sizeof(char));
		data.name.size = name.Len();
		data.name.capacity = name.Len() + 1;

		
	}
};

USTRUCT(Blueprintable)
struct RCLUE_API FDeleteEntity_Response
{
	GENERATED_BODY()

public:
	bool success;
	FString status_message;
	

	void SetFromROS2(ue_msgs__srv__DeleteEntity_Response data)
	{
    	success = data.success;

		status_message.AppendChars(data.status_message.data, data.status_message.size);

		
	}

	void SetROS2(ue_msgs__srv__DeleteEntity_Response& data) const
	{
    	data.success = success;

		if (data.status_message.data != nullptr)
		{
			free(data.status_message.data);
		}
		data.status_message.data = (char*)malloc((status_message.Len()+1)*sizeof(char));
		memcpy(data.status_message.data, TCHAR_TO_ANSI(*status_message), (status_message.Len()+1)*sizeof(char));
		data.status_message.size = status_message.Len();
		data.status_message.capacity = status_message.Len() + 1;

		
	}
};

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
	void SetInputs(const FDeleteEntity_Request Input);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetInputs(FDeleteEntity_Request& Input) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetOutput(const FDeleteEntity_Response Output);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetOutput(FDeleteEntity_Response& Output) const;
	
	// TODO these are for a future refactoring, as it requires to adapt the rest of the codes
	// used by client
  	UFUNCTION(BlueprintCallable)
	void SetRequest(const FDeleteEntity_Request Request);
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void GetRequest(FDeleteEntity_Request& Request) const;
	
	// used by service
  	UFUNCTION(BlueprintCallable)
	void SetResponse(const FDeleteEntity_Response Response);
	
	// used by client
  	UFUNCTION(BlueprintCallable)
	void GetResponse(FDeleteEntity_Response& Response) const;
	
	virtual void* GetRequest() override;
	virtual void* GetResponse() override;

private:
	virtual FString SrvRequestToString() const override;
	virtual FString SrvResponseToString() const override;

	ue_msgs__srv__DeleteEntity_Request DeleteEntity_req;
	ue_msgs__srv__DeleteEntity_Response DeleteEntity_res;
};