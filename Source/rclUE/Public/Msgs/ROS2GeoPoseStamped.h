#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/geo_pose_stamped.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2GeoPose.h"

#include "ROS2GeoPoseStamped.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSGeoPoseStamped
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeoPoseStamped;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSGeoPose pose;
    // rclc type: geographic_msgs__msg__GeoPose pose

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        pose.SetFromROS2(in_ros_data.pose);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        pose.SetROS2(out_ros_data.pose);
    }
};

UCLASS()
class RCLUE_API UROS2GeoPoseStamped : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeoPoseStamped;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__GeoPoseStamped__init(&geo_pose_stamped_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__GeoPoseStamped__fini(&geo_pose_stamped_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, GeoPoseStamped);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSGeoPoseStamped& Input)
    {
        Input.SetROS2(geo_pose_stamped_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSGeoPoseStamped& Output) const
    {
        Output.SetFromROS2(geo_pose_stamped_msg);
    }

    virtual void* Get() override
    {
        return &geo_pose_stamped_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename geo_pose_stamped_msg;
};
