// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from diagnostic_msgs/msg/DiagnosticArray.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "diagnostic_msgs/msg/diagnostic_array.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2DiagnosticStatus.h"
#include "Msgs/ROS2Header.h"
#include "diagnostic_msgs/msg/detail/diagnostic_status__functions.h"

// Generated
#include "ROS2DiagnosticArray.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSDiagnosticArray
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSDiagnosticStatus> Status;

    FROSDiagnosticArray()
    {
    }

    void SetFromROS2(const diagnostic_msgs__msg__DiagnosticArray& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        UROS2Utils::SequenceROSToUEArray<diagnostic_msgs__msg__DiagnosticStatus, FROSDiagnosticStatus>(
            in_ros_data.status.data, Status, in_ros_data.status.size);
    }

    void SetROS2(diagnostic_msgs__msg__DiagnosticArray& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        if (out_ros_data.status.data)
        {
            diagnostic_msgs__msg__DiagnosticStatus__Sequence__fini(&out_ros_data.status);
        }
        if (!diagnostic_msgs__msg__DiagnosticStatus__Sequence__init(&out_ros_data.status, Status.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.status  "));
        }
        UROS2Utils::ArrayUEToROSSequence<diagnostic_msgs__msg__DiagnosticStatus, FROSDiagnosticStatus>(
            Status, out_ros_data.status.data, Status.Num());
    }
};

UCLASS()
class RCLUE_API UROS2DiagnosticArrayMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSDiagnosticArray& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSDiagnosticArray& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    diagnostic_msgs__msg__DiagnosticArray diagnostic_array_msg;
};
