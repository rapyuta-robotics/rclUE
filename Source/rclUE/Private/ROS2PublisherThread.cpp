// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.


#include "ROS2PublisherThread.h"
#include "ROS2Publisher.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include <functional>
#include "rclcUtilities.h"
#include "GenericPlatform/GenericPlatformMisc.h"


FROS2PublisherThread::FROS2PublisherThread(UROS2Publisher* PublisherComponent)
: PublisherComponent(PublisherComponent)
{
}

FROS2PublisherThread::~FROS2PublisherThread()
{
}

bool FROS2PublisherThread::Init()
{
    bSpin = true;
    
    // this will have to be moved where appropriate - ROS2Subsystem and ROS2Node
	// init of context, node,... moved in appropriate locations
   
	// const char * topic_name = TCHAR_TO_ANSI(*PublisherComponent->GetTopicName());
  	// const rosidl_message_type_support_t * my_type_support = PublisherComponent->GetTypeSupport();
	// RCSOFTCHECK(rclc_publisher_init_default(&pub, &node, my_type_support, topic_name));
  
  	// timer_timeout = 1.f/(float)PublisherComponent->PubFrequencyHz*1000;

    // // empty callback here
    // RCSOFTCHECK(rclc_timer_init_default(&timer, &support, RCL_MS_TO_NS(timer_timeout), nullptr));

    // PublisherComponent->InitializeMessage();
      
	// executor = rclc_executor_get_zero_initialized_executor();
	// // total number of handles = #subscriptions + #timers
	// unsigned int num_handles = 1;
	// UE_LOG(LogTemp, Log, TEXT("Debug: number of DDS handles: %u"), num_handles);
	// rclc_executor_init(&executor, &support.context, num_handles, &allocator);

	// RCSOFTCHECK(rclc_executor_add_timer(&executor, &timer));

	return true;
}

uint32 FROS2PublisherThread::Run()
{
    // spin thread
	while (bSpin)
    {
        PublisherComponent->UpdateMessage();
        rclc_executor_spin_some(&executor, RCL_MS_TO_NS(timer_timeout));
    }

    return 0;
}

void FROS2PublisherThread::Stop()
{
	// clean up
	RCSOFTCHECK(rclc_executor_fini(&executor));
	RCSOFTCHECK(rcl_publisher_fini(&pub, &node));
	RCSOFTCHECK(rcl_timer_fini(&timer));
	RCSOFTCHECK(rcl_node_fini(&node));
	RCSOFTCHECK(rclc_support_fini(&support));
}