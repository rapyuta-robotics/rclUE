// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.


#include "ROS2Thread.h"
#include "ROS2Node.h"


// Sets default values
FROS2Thread::FROS2Thread(AROS2Node* Node)
{
	if (Node)
	{
		OwnerNode = Node;
	}
}

bool FROS2Thread::Init()
{
	bStopThread = false;

	counter = 0;

	return true;
}

uint32 FROS2Thread::Run()
{
	while (!bStopThread)
	{
		counter++;

		OwnerNode->iterationCounterTest.Enqueue(counter);
	}

	return 0;
}

void FROS2Thread::Stop()
{

}
