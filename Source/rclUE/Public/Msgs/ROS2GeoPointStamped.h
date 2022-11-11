#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/geo_point_stamped.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2GeoPoint.h"

#include "ROS2GeoPointStamped.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSGeoPointStamped
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeoPointStamped;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FGeographicCoordinates position;
    // rclc type: geographic_msgs__msg__GeoPoint position

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        position = ROS2MsgToUE::From(in_ros_data.position);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::Set(position, out_ros_data.position);
    }
};

UCLASS()
class RCLUE_API UROS2GeoPointStamped : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeoPointStamped;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__GeoPointStamped__init(&geo_point_stamped_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__GeoPointStamped__fini(&geo_point_stamped_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, GeoPointStamped);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSGeoPointStamped& Input)
    {
        Input.SetROS2(geo_point_stamped_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSGeoPointStamped& Output) const
    {
        Output.SetFromROS2(geo_point_stamped_msg);
    }

    virtual void* Get() override
    {
        return &geo_point_stamped_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename geo_point_stamped_msg;
};
