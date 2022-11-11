#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "unique_identifier_msgs/msg/uuid.h"



#include "ROS2UUID.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSUUID
{
    GENERATED_BODY()

    using ros_msg_c_typename = unique_identifier_msgs__msg__UUID;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int> uuid = ArrayInitialisers::IntArray<int>(16);
    // rclc type: uint8_t uuid[16]

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        uuid = ROS2MsgToUE::FromArray(in_ros_data.uuid);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        UEToROS2Msg::SetSequence(uuid, out_ros_data.uuid);
    }
};

UCLASS()
class RCLUE_API UROS2UUID : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = unique_identifier_msgs__msg__UUID;

public:
    virtual void Init() override
    {
        unique_identifier_msgs__msg__UUID__init(&uuid_msg);
    }

    virtual void Fini() override
    {
        unique_identifier_msgs__msg__UUID__fini(&uuid_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(unique_identifier_msgs, msg, UUID);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSUUID& Input)
    {
        Input.SetROS2(uuid_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSUUID& Output) const
    {
        Output.SetFromROS2(uuid_msg);
    }

    virtual void* Get() override
    {
        return &uuid_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename uuid_msg;
};
