#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/map_feature.h"


// Include directives for member types
#include "Msgs/ROS2UUID.h"
#include "Msgs/ROS2KeyValue.h"

#include "ROS2MapFeature.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSMapFeature
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__MapFeature;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSUUID id;
    // rclc type: unique_identifier_msgs__msg__UUID id

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSUUID> components;
    // rclc type: unique_identifier_msgs__msg__UUID__Sequence components

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSKeyValue> props;
    // rclc type: geographic_msgs__msg__KeyValue__Sequence props

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        id.SetFromROS2(in_ros_data.id);
        components = ROS2MsgToUE::FromStructSequence<FROSUUID>(in_ros_data.components);
        props = ROS2MsgToUE::FromStructSequence<FROSKeyValue>(in_ros_data.props);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        id.SetROS2(out_ros_data.id);
        UEToROS2Msg::SetStructSequence(components, out_ros_data.components);
        UEToROS2Msg::SetStructSequence(props, out_ros_data.props);
    }
};

UCLASS()
class RCLUE_API UROS2MapFeature : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__MapFeature;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__MapFeature__init(&map_feature_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__MapFeature__fini(&map_feature_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, MapFeature);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSMapFeature& Input)
    {
        Input.SetROS2(map_feature_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSMapFeature& Output) const
    {
        Output.SetFromROS2(map_feature_msg);
    }

    virtual void* Get() override
    {
        return &map_feature_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename map_feature_msg;
};
