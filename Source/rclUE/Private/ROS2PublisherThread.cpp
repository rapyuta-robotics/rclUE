// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.


#include "ROS2PublisherThread.h"
#include "ROS2Publisher.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include <functional>
#include "rclcUtilities.h"
#include "ROS2Context.h"
#include "Kismet/GameplayStatics.h"
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
	UE_LOG(LogTemp, Warning, TEXT("Thread Init"));
    bSpin = true;
  
  	timer_timeout = 1.f/(float)PublisherComponent->GetPubFrequency()*1000;
	UROS2Context* context = PublisherComponent->GetWorld()->GetGameInstance()->GetSubsystem<UROS2Subsystem>()->GetContext();

    // empty callback here
    RCSOFTCHECK(rclc_timer_init_default(&timer, &context->Get(), RCL_MS_TO_NS(timer_timeout), nullptr));

    PublisherComponent->InitializeMessage();
      
	executor = rclc_executor_get_zero_initialized_executor();
	// total number of handles = #subscriptions + #timers
	unsigned int num_handles = 1;
	// UE_LOG(LogTemp, Log, TEXT("Debug: number of DDS handles: %u"), num_handles);
	rclc_executor_init(&executor, &context->Get().context, num_handles, context->Get().allocator);

	RCSOFTCHECK(rclc_executor_add_timer(&executor, &timer));

	UE_LOG(LogTemp, Warning, TEXT("Thread Init - Done"));

	return true;
}

uint32 FROS2PublisherThread::Run()
{
	// UE_LOG(LogTemp, Warning, TEXT("Thread Run"));

    // // spin thread
	// while (bSpin)
    // {
    //     PublisherComponent->UpdateMessage();
    //     rclc_executor_spin_some(&executor, RCL_MS_TO_NS(timer_timeout));
    // }

    return 0;
}

void FROS2PublisherThread::Stop()
{
	UE_LOG(LogTemp, Warning, TEXT("Thread Stop"));
	UROS2Context* context = PublisherComponent->GetWorld()->GetGameInstance()->GetSubsystem<UROS2Subsystem>()->GetContext();

	// clean up
	RCSOFTCHECK(rclc_executor_fini(&executor));
	RCSOFTCHECK(rcl_publisher_fini(&pub, PublisherComponent->GetOwnerNode()->GetNode()));
	RCSOFTCHECK(rcl_timer_fini(&timer));
	RCSOFTCHECK(rcl_node_fini(PublisherComponent->GetOwnerNode()->GetNode()));
	RCSOFTCHECK(rclc_support_fini(&context->Get()));
	UE_LOG(LogTemp, Warning, TEXT("Thread Stop - Done"));
}