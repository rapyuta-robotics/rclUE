// Fill out your copyright notice in the Description page of Project Settings.


#include "Srvs/ROS2TestSrv.h"


const rosidl_service_type_support_t* UROS2TestSrv::GetTypeSupport() const
{
    return ROSIDL_GET_SRV_TYPE_SUPPORT(ue4_interfaces, srv, UE4SrvExample);
}

void UROS2TestSrv::Init()
{
	UE_LOG(LogROS2Msg, Warning, TEXT("UROS2TestSrv::Init"));
    ue4_interfaces__srv__UE4SrvExample_Request__init(&ue4test_req);
    ue4_interfaces__srv__UE4SrvExample_Response__init(&ue4test_res);
    ue4test_req.a = 0;
    ue4test_req.b = 0;
    ue4test_res.res = 0;
}

void UROS2TestSrv::Fini()
{
	UE_LOG(LogROS2Msg, Warning, TEXT("UROS2TestSrv::Fini"));
    ue4_interfaces__srv__UE4SrvExample_Request__fini(&ue4test_req);
    ue4_interfaces__srv__UE4SrvExample_Response__fini(&ue4test_res);
}

void UROS2TestSrv::SetInputs(int64 a, int64 b)
{
    UE_LOG(LogTemp, Warning, TEXT("Set inputs"));
    ue4test_req.a = a;
    ue4test_req.b = b;
}

void UROS2TestSrv::GetInputs(int64& a, int64& b)
{
    UE_LOG(LogTemp, Warning, TEXT("Get inputs"));
    a = ue4test_req.a;
    b = ue4test_req.b;
}

void UROS2TestSrv::SetOutput(int64 res)
{
    UE_LOG(LogTemp, Warning, TEXT("Set output"));
    ue4test_res.res = res;
}

void UROS2TestSrv::GetOutput(int64& res)
{
    UE_LOG(LogTemp, Warning, TEXT("Get output"));
    res = ue4test_res.res;
}

const ue4_interfaces__srv__UE4SrvExample_Request* UROS2TestSrv::GetRequest() const
{
    return &ue4test_req;
}

const ue4_interfaces__srv__UE4SrvExample_Response* UROS2TestSrv::GetResponse() const
{
    return &ue4test_res;
}

void* UROS2TestSrv::GetRequest()
{
    return &ue4test_req;
}

void* UROS2TestSrv::GetResponse()
{
    return &ue4test_res;
}

FString UROS2TestSrv::SrvRequestToString() const
{
	return FString::Printf(TEXT("a: %d, b: %d"), ue4test_req.a, ue4test_req.b);
}

FString UROS2TestSrv::SrvResponseToString() const
{
	return FString::Printf(TEXT("%d"), ue4test_res.res);
}



