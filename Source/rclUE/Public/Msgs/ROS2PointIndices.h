// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from pcl_msgs/msg/PointIndices.msg - do not
// modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "pcl_msgs/msg/point_indices.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2Header.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Generated
#include "ROS2PointIndices.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSPointIndices
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader Header;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int> Indices;

    FROSPointIndices()
    {
    }

    void SetFromROS2(const pcl_msgs__msg__PointIndices& in_ros_data)
    {
        Header.SetFromROS2(in_ros_data.header);

        UROS2Utils::SequenceROSToUEArray<int, int>(in_ros_data.indices.data, Indices, in_ros_data.indices.size);
    }

    void SetROS2(pcl_msgs__msg__PointIndices& out_ros_data) const
    {
        Header.SetROS2(out_ros_data.header);

        rosidl_runtime_c__int32__Sequence__fini(&out_ros_data.indices);
        rosidl_runtime_c__int32__Sequence__init(&out_ros_data.indices, Indices.Num());
        UROS2Utils::ArrayUEToROSSequence<int, int>(Indices, out_ros_data.indices.data, Indices.Num());
    }
};

UCLASS()
class RCLUE_API UROS2PointIndicesMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPointIndices& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPointIndices& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    pcl_msgs__msg__PointIndices point_indices_msg;
};