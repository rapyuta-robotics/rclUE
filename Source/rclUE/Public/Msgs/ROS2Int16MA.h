// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/Int16MultiArray.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/msg/int16_multi_array.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2MALayout.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2Int16MA.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSInt16MA
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSMALayout Layout;

    UPROPERTY(EditAnywhere)
    TArray<int16> Data;

    FROSInt16MA()
    {
    }

    void SetFromROS2(const example_interfaces__msg__Int16MultiArray& in_ros_data)
    {
        Layout.SetFromROS2(in_ros_data.layout);

        UROS2Utils::SequenceROSToUEArray<int16, int16>(in_ros_data.data.data, Data, in_ros_data.data.size);
    }

    void SetROS2(example_interfaces__msg__Int16MultiArray& out_ros_data) const
    {
        Layout.SetROS2(out_ros_data.layout);

        rosidl_runtime_c__int16__Sequence__init(&out_ros_data.data, Data.Num());
        UROS2Utils::ArrayUEToROSSequence<int16, int16>(Data, out_ros_data.data.data, Data.Num());
    }
};

UCLASS()
class RCLUE_API UROS2Int16MAMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSInt16MA& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSInt16MA& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    example_interfaces__msg__Int16MultiArray int16_multi_array_msg;
};
