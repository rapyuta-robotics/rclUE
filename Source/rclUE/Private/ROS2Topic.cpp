// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2Topic.h"


UROS2Topic::UROS2Topic()
{
}

UROS2Topic::~UROS2Topic()
{
	//UE_LOG(LogTemp, Error, TEXT("UROS2Topic::~UROS2Topic"));
}

void UROS2Topic::Fini()
{
    Msg->Fini();
}