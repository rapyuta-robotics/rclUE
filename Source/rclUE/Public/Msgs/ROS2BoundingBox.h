#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/bounding_box.h"


// Include directives for member types
#include "Msgs/ROS2GeoPoint.h"

#include "ROS2BoundingBox.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSBoundingBox
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__BoundingBox;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGeographicCoordinates min_pt;
    // rclc type: geographic_msgs__msg__GeoPoint min_pt

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGeographicCoordinates max_pt;
    // rclc type: geographic_msgs__msg__GeoPoint max_pt

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        min_pt = ROS2MsgToUE::From(in_ros_data.min_pt);
        max_pt = ROS2MsgToUE::From(in_ros_data.max_pt);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::Set(min_pt, out_ros_data.min_pt);
        UEToROS2Msg::Set(max_pt, out_ros_data.max_pt);
    }
};

UCLASS()
class RCLUE_API UROS2BoundingBox : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__BoundingBox;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__BoundingBox__init(&bounding_box_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__BoundingBox__fini(&bounding_box_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, BoundingBox);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSBoundingBox& Input)
    {
        Input.SetROS2(bounding_box_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSBoundingBox& Output) const
    {
        Output.SetFromROS2(bounding_box_msg);
    }

    virtual void* Get() override
    {
        return &bounding_box_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename bounding_box_msg;
};
