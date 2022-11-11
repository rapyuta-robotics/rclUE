#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "nav_msgs/msg/path.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2PoseStamped.h"

#include "ROS2Path.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSPath
{
    GENERATED_BODY()

    using ros_msg_c_typename = nav_msgs__msg__Path;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSPoseStamped> poses;
    // rclc type: geometry_msgs__msg__PoseStamped__Sequence poses

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        poses = ROS2MsgToUE::FromStructSequence<FROSPoseStamped>(in_ros_data.poses);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        UEToROS2Msg::SetStructSequence(poses, out_ros_data.poses);
    }
};

UCLASS()
class RCLUE_API UROS2Path : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = nav_msgs__msg__Path;

public:
    virtual void Init() override
    {
        nav_msgs__msg__Path__init(&path_msg);
    }

    virtual void Fini() override
    {
        nav_msgs__msg__Path__fini(&path_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, Path);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSPath& Input)
    {
        Input.SetROS2(path_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSPath& Output) const
    {
        Output.SetFromROS2(path_msg);
    }

    virtual void* Get() override
    {
        return &path_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename path_msg;
};
