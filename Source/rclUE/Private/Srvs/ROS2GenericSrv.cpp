// Fill out your copyright notice in the Description page of Project Settings.


#include "Srvs/ROS2GenericSrv.h"

DEFINE_LOG_CATEGORY(LogROS2Srv);

const rosidl_service_type_support_t* UROS2GenericSrv::GetTypeSupport() const
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return nullptr;
}

void UROS2GenericSrv::Init()
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
}

void UROS2GenericSrv::Fini()
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
}

void* UROS2GenericSrv::GetRequest()
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return nullptr;
}

void* UROS2GenericSrv::GetResponse()
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return nullptr;
}

void UROS2GenericSrv::PrintRequestToLog(rcl_ret_t rc, FString NodeName) const
{
	if (rc == RCL_RET_OK)
	{
		UE_LOG(LogROS2Srv, Log, TEXT("Request (node %s) message %s"), *NodeName, *SrvRequestToString());
	} 
	else 
	{
		UE_LOG(LogROS2Srv, Log, TEXT("timer_callback: Error with request (node %s) %s"), *NodeName, *SrvRequestToString());
	}
}

void UROS2GenericSrv::PrintResponseToLog(rcl_ret_t rc, FString NodeName) const
{
	if (rc == RCL_RET_OK)
	{
		UE_LOG(LogROS2Srv, Log, TEXT("Response (node %s) message %s"), *NodeName, *SrvResponseToString());
	} 
	else 
	{
		UE_LOG(LogROS2Srv, Log, TEXT("timer_callback: Error with request (node %s) %s"), *NodeName, *SrvResponseToString());
	}
}

FString UROS2GenericSrv::SrvRequestToString() const
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return FString();
}

FString UROS2GenericSrv::SrvResponseToString() const
{
	ensureMsgf(false, TEXT("This should not be called (%s)"), *__LOG_INFO__);
	return FString();
}
