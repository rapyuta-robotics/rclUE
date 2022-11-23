// Copyright 2021 Rapyuta Robotics Co., Ltd.
// This code has been autogenerated from nav_msgs/msg/GridCells.msg - do not modify

#include "Msgs/ROS2GridCells.h"

#include "Kismet/GameplayStatics.h"

void UROS2GridCellsMsg::Init()
{
    nav_msgs__msg__GridCells__init(&grid_cells_msg);
}

void UROS2GridCellsMsg::Fini()
{
    nav_msgs__msg__GridCells__fini(&grid_cells_msg);
}

const rosidl_message_type_support_t* UROS2GridCellsMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(nav_msgs, msg, GridCells);
}

void UROS2GridCellsMsg::SetMsg(const FROSGridCells& Inputs)
{
    Inputs.SetROS2(grid_cells_msg);
}

void UROS2GridCellsMsg::GetMsg(FROSGridCells& Outputs) const
{
    Outputs.SetFromROS2(grid_cells_msg);
}

void* UROS2GridCellsMsg::Get()
{
    return &grid_cells_msg;
}

FString UROS2GridCellsMsg::MsgToString() const
{
    /* TODO: Fill here */
    checkNoEntry();
    return FString();
}
