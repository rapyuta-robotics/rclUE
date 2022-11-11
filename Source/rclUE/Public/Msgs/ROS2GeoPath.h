#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/geo_path.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2GeoPoseStamped.h"

#include "ROS2GeoPath.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSGeoPath
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeoPath;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSGeoPoseStamped> poses;
    // rclc type: geographic_msgs__msg__GeoPoseStamped__Sequence poses

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        poses = ROS2MsgToUE::FromStructSequence<FROSGeoPoseStamped>(in_ros_data.poses);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::SetStructSequence(poses, out_ros_data.poses);
    }
};

UCLASS()
class RCLUE_API UROS2GeoPath : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeoPath;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__GeoPath__init(&geo_path_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__GeoPath__fini(&geo_path_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, GeoPath);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSGeoPath& Input)
    {
        Input.SetROS2(geo_path_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSGeoPath& Output) const
    {
        Output.SetFromROS2(geo_path_msg);
    }

    virtual void* Get() override
    {
        return &geo_path_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename geo_path_msg;
};
