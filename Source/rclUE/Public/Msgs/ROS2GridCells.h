#pragma once

#include <CoreMinimal.h>
#include "Conversions.h"
#include "ROS2GenericMsg.h"

#include "nav_msgs/msg/grid_cells.h"


// Include directives for member types
#include "Msgs/ROS2Header.h"
#include "Msgs/ROS2Point.h"

#include "ROS2GridCells.generated.h"


USTRUCT(Blueprintable)
struct RCLUE_API FROSGridCells
{
    GENERATED_BODY()

    using ros_msg_c_typename = nav_msgs__msg__GridCells;

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FROSHeader header;
    // rclc type: std_msgs__msg__Header header

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float cell_width;
    // rclc type: float cell_width

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float cell_height;
    // rclc type: float cell_height

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FVector> cells;
    // rclc type: geometry_msgs__msg__Point__Sequence cells

    void SetFromROS2(const ros_msg_c_typename& in_ros_data)
    {
        header.SetFromROS2(in_ros_data.header);
        cell_width = in_ros_data.cell_width;
        cell_height = in_ros_data.cell_height;
        cells = ROS2MsgToUE::FromSequence<FVector>(in_ros_data.cells);
    }

    void SetROS2(ros_msg_c_typename& out_ros_data) const
    {
        header.SetROS2(out_ros_data.header);
        out_ros_data.cell_width = cell_width;
        out_ros_data.cell_height = cell_height;
        UEToROS2Msg::SetSequence(cells, out_ros_data.cells);
    }
};

UCLASS()
class RCLUE_API UROS2GridCells : public UROS2GenericMsg
{
    GENERATED_BODY()

    using ros_msg_c_typename = nav_msgs__msg__GridCells;

public:
    virtual void Init() override
    {
        nav_msgs__msg__GridCells__init(&grid_cells_msg);
    }

    virtual void Fini() override
    {
        nav_msgs__msg__GridCells__fini(&grid_cells_msg);
    }

    virtual const rosidl_message_type_support_t* GetTypeSupport() const override
    {
        return ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, GridCells);
    }

    UFUNCTION(BlueprintCallable)
    void SetMsg(const FROSGridCells& Input)
    {
        Input.SetROS2(grid_cells_msg);
    }

    UFUNCTION(BlueprintCallable)
    void GetMsg(FROSGridCells& Output) const
    {
        Output.SetFromROS2(grid_cells_msg);
    }

    virtual void* Get() override
    {
        return &grid_cells_msg;
    }

private:
    virtual FString ToString() const override
    {
        /* TODO: Fill here */

        checkNoEntry();
        return FString();
    }

    ros_msg_c_typename grid_cells_msg;
};
