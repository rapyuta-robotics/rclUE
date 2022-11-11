#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "nav_msgs/msg/occupancy_grid.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2MapMetaData.h"

#include "ROS2OccupancyGrid.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSOccupancyGrid
{
    GENERATED_BODY()

    using ros_msg_c_typename = nav_msgs__msg__OccupancyGrid;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSMapMetaData info;
    // rclc type: nav_msgs__msg__MapMetaData info

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<int> data;
    // rclc type: rosidl_runtime_c__int8__Sequence data

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        info.SetFromROS2(in_ros_data.info);
        data = ROS2MsgToUE::FromSequence<int>(in_ros_data.data);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        info.SetROS2(out_ros_data.info);
        UEToROS2Msg::SetSequence(data, out_ros_data.data);
    }
};

UCLASS()
class RCLUE_API UROS2OccupancyGrid : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = nav_msgs__msg__OccupancyGrid;

public:
    virtual void Init() override
    {
        nav_msgs__msg__OccupancyGrid__init(&occupancy_grid_msg);
    }

    virtual void Fini() override
    {
        nav_msgs__msg__OccupancyGrid__fini(&occupancy_grid_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, OccupancyGrid);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSOccupancyGrid& Input)
    {
        Input.SetROS2(occupancy_grid_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSOccupancyGrid& Output) const
    {
        Output.SetFromROS2(occupancy_grid_msg);
    }

    virtual void* Get() override
    {
        return &occupancy_grid_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename occupancy_grid_msg;
};
