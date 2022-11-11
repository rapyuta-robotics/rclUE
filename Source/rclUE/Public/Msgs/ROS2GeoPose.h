#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/geo_pose.h"


// Include directives for member types
#include "Msgs/ROS2GeoPoint.h"
#include "Msgs/ROS2Quaternion.h"

#include "ROS2GeoPose.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSGeoPose
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeoPose;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGeographicCoordinates position;
    // rclc type: geographic_msgs__msg__GeoPoint position

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FQuat orientation = FQuat(EForceInit::ForceInitToZero);
    // rclc type: geometry_msgs__msg__Quaternion orientation

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        position = ROS2MsgToUE::From(in_ros_data.position);
        orientation = ROS2MsgToUE::From(in_ros_data.orientation);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(position, out_ros_data.position);
        UEToROS2Msg::Set(orientation, out_ros_data.orientation);
    }
};

UCLASS()
class RCLUE_API UROS2GeoPose : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeoPose;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__GeoPose__init(&geo_pose_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__GeoPose__fini(&geo_pose_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, GeoPose);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSGeoPose& Input)
    {
        Input.SetROS2(geo_pose_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSGeoPose& Output) const
    {
        Output.SetFromROS2(geo_pose_msg);
    }

    virtual void* Get() override
    {
        return &geo_pose_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename geo_pose_msg;
};
