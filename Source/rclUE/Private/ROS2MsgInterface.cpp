// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2MsgInterface.h"


// Add default functionality here for any IROS2MsgInterface functions that are not pure virtual.

const rosidl_message_type_support_t* IROS2MsgInterface::GetTypeSupport() const
{
    return nullptr;
}

void IROS2MsgInterface::Init()
{
	UE_LOG(LogTemp, Error, TEXT("Something is wrong if we're here"));
}

void IROS2MsgInterface::Update(const void* data)
{

}

const void* IROS2MsgInterface::Get() const
{
    return nullptr;
}

void* IROS2MsgInterface::Get()
{
    return nullptr;
}

void IROS2MsgInterface::PrintPubToLog(rcl_ret_t rc) const
{

}

void IROS2MsgInterface::PrintSubToLog(rcl_ret_t rc) const
{

}
