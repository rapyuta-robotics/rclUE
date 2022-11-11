#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "geographic_msgs/msg/geographic_map_changes.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2GeographicMap.h"
#include "Msgs/ROS2UUID.h"

#include "ROS2GeographicMapChanges.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSGeographicMapChanges
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeographicMapChanges;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSGeographicMap diffs;
    // rclc type: geographic_msgs__msg__GeographicMap diffs

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FROSUUID> deletes;
    // rclc type: unique_identifier_msgs__msg__UUID__Sequence deletes

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        diffs.SetFromROS2(in_ros_data.diffs);
        deletes = ROS2MsgToUE::FromStructSequence<FROSUUID>(in_ros_data.deletes);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        diffs.SetROS2(out_ros_data.diffs);
        UEToROS2Msg::SetStructSequence(deletes, out_ros_data.deletes);
    }
};

UCLASS()
class RCLUE_API UROS2GeographicMapChanges : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = geographic_msgs__msg__GeographicMapChanges;

public:
    virtual void Init() override
    {
        geographic_msgs__msg__GeographicMapChanges__init(&geographic_map_changes_msg);
    }

    virtual void Fini() override
    {
        geographic_msgs__msg__GeographicMapChanges__fini(&geographic_map_changes_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(geographic_msgs, msg, GeographicMapChanges);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSGeographicMapChanges& Input)
    {
        Input.SetROS2(geographic_map_changes_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSGeographicMapChanges& Output) const
    {
        Output.SetFromROS2(geographic_map_changes_msg);
    }

    virtual void* Get() override
    {
        return &geographic_map_changes_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename geographic_map_changes_msg;
};
