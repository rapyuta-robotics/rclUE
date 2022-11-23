// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from visualization_msgs/msg/InteractiveMarkerInit.msg - do not modify

#pragma once

// UE
#include "CoreMinimal.h"

// ROS
#include "visualization_msgs/msg/interactive_marker_init.h"

// rclUE
#include "Msgs/ROS2GenericMsg.h"
#include "rclcUtilities.h"

// Generated Msg/Srv/Action(can be empty)
#include "Msgs/ROS2IM.h"
#include "visualization_msgs/msg/detail/interactive_marker__functions.h"

// Generated
#include "ROS2IMInit.generated.h"

USTRUCT(Blueprintable)
struct RCLUE_API FROSIMInit
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ServerId;

    UPROPERTY(EditAnywhere)
    uint64 SeqNum = 0;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSIM> Markers;

    FROSIMInit()
    {
    }

    void SetFromROS2(const visualization_msgs__msg__InteractiveMarkerInit& in_ros_data)
    {
        ServerId = UROS2Utils::StringROSToUE<rosidl_runtime_c__String>(in_ros_data.server_id);

        SeqNum = in_ros_data.seq_num;

        UROS2Utils::SequenceROSToUEArray<visualization_msgs__msg__InteractiveMarker, FROSIM>(
            in_ros_data.markers.data, Markers, in_ros_data.markers.size);
    }

    void SetROS2(visualization_msgs__msg__InteractiveMarkerInit& out_ros_data) const
    {
        UROS2Utils::StringUEToROS(ServerId, out_ros_data.server_id);

        out_ros_data.seq_num = SeqNum;

        if (out_ros_data.markers.data)
        {
            visualization_msgs__msg__InteractiveMarker__Sequence__fini(&out_ros_data.markers);
        }
        if (!visualization_msgs__msg__InteractiveMarker__Sequence__init(&out_ros_data.markers, Markers.Num()))
        {
            UE_LOG(LogTemp, Error, TEXT("failed to create array for field out_ros_data.markers  "));
        }
        UROS2Utils::ArrayUEToROSSequence<visualization_msgs__msg__InteractiveMarker, FROSIM>(
            Markers, out_ros_data.markers.data, Markers.Num());
    }
};

UCLASS()
class RCLUE_API UROS2IMInitMsg : public UROS2GenericMsg
{
    GENERATED_BODY()

public:
    virtual void Init() override;
    virtual void Fini() override;

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override;

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSIMInit& Input);

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSIMInit& Output) const;

    virtual void* Get() override;

private:
    virtual FString MsgToString() const override;

    visualization_msgs__msg__InteractiveMarkerInit interactive_marker_init_msg;
};
