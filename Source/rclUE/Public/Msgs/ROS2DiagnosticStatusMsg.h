// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from diagnostic_msgs/msg/DiagnosticStatus.msg - do not modify

#pragma once

#include <CoreMinimal.h>

#include "diagnostic_msgs/msg/diagnostic_status.h"

#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

#include "ROS2DiagnosticStatusMsg.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSDiagnosticStatus
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Level = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Message;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HardwareId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ValuesKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> ValuesValue;

	

	void SetFromROS2(const diagnostic_msgs__msg__DiagnosticStatus& in_ros_data)
	{
    	Level = in_ros_data.level;

		Name.AppendChars(in_ros_data.name.data, in_ros_data.name.size);

		Message.AppendChars(in_ros_data.message.data, in_ros_data.message.size);

		HardwareId.AppendChars(in_ros_data.hardware_id.data, in_ros_data.hardware_id.size);

		for (auto i = 0; i < in_ros_data.values.size; ++i)
		{
			ValuesKey.Emplace("");
			ValuesKey[i].AppendChars(in_ros_data.values.data[i].key.data,in_ros_data.values.data[i].key.size);
		}

		for (auto i = 0; i < in_ros_data.values.size; ++i)
		{
			ValuesValue.Emplace("");
			ValuesValue[i].AppendChars(in_ros_data.values.data[i].value.data,in_ros_data.values.data[i].value.size);
		}

		
	}

	void SetROS2(diagnostic_msgs__msg__DiagnosticStatus& out_ros_data) const
	{
    	out_ros_data.level = Level;

		{
			FTCHARToUTF8 strUtf8( *Name );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.name.data != nullptr)
		{
			free(out_ros_data.name.data);
		}
		out_ros_data.name.data = (decltype(out_ros_data.name.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.name.data)));
		memcpy(out_ros_data.name.data, TCHAR_TO_UTF8(*Name), (strLength+1)*sizeof(char));
			out_ros_data.name.size = strLength;
			out_ros_data.name.capacity = strLength + 1;
		}

		{
			FTCHARToUTF8 strUtf8( *Message );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.message.data != nullptr)
		{
			free(out_ros_data.message.data);
		}
		out_ros_data.message.data = (decltype(out_ros_data.message.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.message.data)));
		memcpy(out_ros_data.message.data, TCHAR_TO_UTF8(*Message), (strLength+1)*sizeof(char));
			out_ros_data.message.size = strLength;
			out_ros_data.message.capacity = strLength + 1;
		}

		{
			FTCHARToUTF8 strUtf8( *HardwareId );
			int32 strLength = strUtf8.Length();
			if (out_ros_data.hardware_id.data != nullptr)
		{
			free(out_ros_data.hardware_id.data);
		}
		out_ros_data.hardware_id.data = (decltype(out_ros_data.hardware_id.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.hardware_id.data)));
		memcpy(out_ros_data.hardware_id.data, TCHAR_TO_UTF8(*HardwareId), (strLength+1)*sizeof(char));
			out_ros_data.hardware_id.size = strLength;
			out_ros_data.hardware_id.capacity = strLength + 1;
		}

		if (out_ros_data.values.data != nullptr)
		{
			free(out_ros_data.values.data);
		}
		out_ros_data.values.data = (decltype(out_ros_data.values.data))malloc(ValuesKey.Num() * (sizeof(ValuesKey) + sizeof(ValuesValue)));
		out_ros_data.values.size = ValuesKey.Num();
		out_ros_data.values.capacity = ValuesKey.Num();
		for (auto i = 0; i < ValuesKey.Num(); ++i)
		{
			{
				FTCHARToUTF8 strUtf8( *ValuesKey[i] );
			int32 strLength = strUtf8.Length();
				out_ros_data.values.data[i].key.data = (decltype(out_ros_data.values.data[i].key.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.values.data[i].key.data)));
		memcpy(out_ros_data.values.data[i].key.data, TCHAR_TO_UTF8(*ValuesKey[i]), (strLength+1)*sizeof(char));
				out_ros_data.values.data[i].key.size = strLength;
				out_ros_data.values.data[i].key.capacity = strLength + 1;
			}

			{
				FTCHARToUTF8 strUtf8( *ValuesValue[i] );
			int32 strLength = strUtf8.Length();
				out_ros_data.values.data[i].value.data = (decltype(out_ros_data.values.data[i].value.data))malloc((strLength+1)*sizeof(decltype(*out_ros_data.values.data[i].value.data)));
		memcpy(out_ros_data.values.data[i].value.data, TCHAR_TO_UTF8(*ValuesValue[i]), (strLength+1)*sizeof(char));
				out_ros_data.values.data[i].value.size = strLength;
				out_ros_data.values.data[i].value.capacity = strLength + 1;
			}

			}
	
	}
};

UCLASS()
class RCLUE_API UROS2DiagnosticStatusMsg : public UROS2GenericMsg
{
	GENERATED_BODY()

public:
	virtual void Init() override;
	virtual void Fini() override;

	virtual const rosidl_message_type_support_t* GetTypeSupport() const override;
	
  	UFUNCTION(BlueprintCallable)
	void SetMsg(const FROSDiagnosticStatus& Input);
	
  	UFUNCTION(BlueprintCallable)
	void GetMsg(FROSDiagnosticStatus& Output) const;
	
	virtual void* Get() override;

private:
	virtual FString MsgToString() const override;

	diagnostic_msgs__msg__DiagnosticStatus diagnostic_status_msg;
};