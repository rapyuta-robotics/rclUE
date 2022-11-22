// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from example_interfaces/msg/MultiArrayLayout.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "example_interfaces/msg/multi_array_layout.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2MADim.h"
#include "example_interfaces/msg/detail/multi_array_dimension__functions.h"

// Generated
#include "ROS2MALayout.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSMALayout
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSMADim> Dim;

    UPROPERTY(EditAnywhere)
    unsigned int DataOffset = 0;

    FROSMALayout()
    {
    }

    void SetFromROS2(const example_interfaces__msg__MultiArrayLayout& in_ros_data)
    {
        UROS2Utils::SequenceROSToUEArray<example_interfaces__msg__MultiArrayDimension, FROSMADim>(
            in_ros_data.dim.data, Dim, in_ros_data.dim.size);

        DataOffset = in_ros_data.data_offset;
    }

    void SetROS2(example_interfaces__msg__MultiArrayLayout& out_ros_data) const
    {
        example_interfaces__msg__MultiArrayDimension__Sequence__init(&out_ros_data.dim, Dim.Num());
        UROS2Utils::ArrayUEToROSSequence<example_interfaces__msg__MultiArrayDimension, FROSMADim>(
            Dim, out_ros_data.dim.data, Dim.Num());

        out_ros_data.data_offset = DataOffset;
    }
};

UCLASS()
class RCLUE_API UROS2MALayoutMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSMALayout& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSMALayout& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    example_interfaces__msg__MultiArrayLayout multi_array_layout_msg;
};
