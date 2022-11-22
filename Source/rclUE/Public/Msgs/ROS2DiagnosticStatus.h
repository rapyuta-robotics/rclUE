// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from
// diagnostic_msgs/msg/DiagnosticStatus.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "diagnostic_msgs/msg/diagnostic_status.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2KeyValue.h"
#include "diagnostic_msgs/msg/detail/key_value__functions.h"

// Generated
#include "ROS2DiagnosticStatus.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSDiagnosticStatus
{
    GENERATED_BODY()

public:
    static constexpr uint8 OK = 0;
    static constexpr uint8 WARN = 1;
    static constexpr uint8 ERROR = 2;
    static constexpr uint8 STALE = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 Level = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Message;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString HardwareId;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSKeyValue> Values;

    FROSDiagnosticStatus()
    {
    }

    void SetFromROS2(const diagnostic_msgs__msg__DiagnosticStatus& in_ros_data)
    {
        Level = in_ros_data.level;

        Name = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.name);

        Message = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.message);

        HardwareId = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.hardware_id);

        UROS2Utils::SequenceROSToUEArray<diagnostic_msgs__msg__KeyValue, FROSKeyValue>(
            in_ros_data.values.data, Values, in_ros_data.values.size);
    }

    void SetROS2(diagnostic_msgs__msg__DiagnosticStatus& out_ros_data) const
    {
        out_ros_data.level = Level;

        UROS2Utils::StringUEToROS<rosidl_runtime_c__String>(Name, out_ros_data.name);

        UROS2Utils::StringUEToROS<rosidl_runtime_c__String>(Message, out_ros_data.message);

        UROS2Utils::StringUEToROS<rosidl_runtime_c__String>(HardwareId, out_ros_data.hardware_id);

        diagnostic_msgs__msg__KeyValue__Sequence__fini(&out_ros_data.values);
        diagnostic_msgs__msg__KeyValue__Sequence__init(&out_ros_data.values, Values.Num());
        UROS2Utils::ArrayUEToROSSequence<diagnostic_msgs__msg__KeyValue, FROSKeyValue>(
            Values, out_ros_data.values.data, Values.Num());
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

    UFUNCTION(BlueprintCallable)
    static uint8 CONST_OK()
    {
        return FROSDiagnosticStatus::OK;
    }
    UFUNCTION(BlueprintCallable)
    static uint8 CONST_WARN()
    {
        return FROSDiagnosticStatus::WARN;
    }
    UFUNCTION(BlueprintCallable)
    static uint8 CONST_ERROR()
    {
        return FROSDiagnosticStatus::ERROR;
    }
    UFUNCTION(BlueprintCallable)
    static uint8 CONST_STALE()
    {
        return FROSDiagnosticStatus::STALE;
    }

private:
    virtual FString MsgToString() const override;

    diagnostic_msgs__msg__DiagnosticStatus diagnostic_status_msg;
};