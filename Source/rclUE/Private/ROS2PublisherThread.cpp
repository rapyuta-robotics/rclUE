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

void FROS2PublisherThread::timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
    rcl_ret_t rc;
    RCLC_UNUSED(last_call_time);
    if (timer != NULL)
    {
        UE_LOG(LogTemp, Log, TEXT("Timer: time since last call %d"), (int) last_call_time);
        //rc = rcl_publish(&my_pub, &pub_msg, NULL);
        // if (rc == RCL_RET_OK) {
        //   UE_LOG(LogTemp, Log, TEXT("Published message %s"), *FString(ANSI_TO_TCHAR(pub_msg.data.data)));
        // } else {
        //   UE_LOG(LogTemp, Log, TEXT("timer_callback: Error publishing message %s"), *FString(ANSI_TO_TCHAR(pub_msg.data.data)));
        // }
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("timer_callback Error: timer parameter is NULL"));
    }
}


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
    if (context->Get().allocator->allocate == nullptr ||
        context->Get().allocator->deallocate == nullptr || 
        context->Get().allocator->zero_allocate == nullptr ||
        context->Get().allocator->reallocate == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("Allocator problems in ROS2PublisherThread!"));
    }

    RCSOFTCHECK(rclc_timer_init_default(&timer, &context->Get(), RCL_MS_TO_NS(timer_timeout), FROS2PublisherThread::timer_callback));

    PublisherComponent->InitializeMessage();
        
    executor = rclc_executor_get_zero_initialized_executor();
    // total number of handles = #subscriptions + #timers
    unsigned int num_handles = 1;
    // UE_LOG(LogTemp, Log, TEXT("Debug: number of DDS handles: %u"), num_handles);
    rclc_executor_init(&executor, &context->Get().context, num_handles, context->Get().allocator);

    RCSOFTCHECK(rclc_executor_add_timer(&executor, &timer)); // problem here too!

    UE_LOG(LogTemp, Warning, TEXT("Thread Init - Done"));

    return true;
}

uint32 FROS2PublisherThread::Run()
{
    UE_LOG(LogTemp, Warning, TEXT("Thread Run"));

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
    UE_LOG(LogTemp, Warning, TEXT("Thread Stop"));
    
    // clean up
    UE_LOG(LogTemp, Warning, TEXT("rclc_executor_fini"));
    RCSOFTCHECK(rclc_executor_fini(&executor));
    UE_LOG(LogTemp, Warning, TEXT("rcl_publisher_fini"));
    RCSOFTCHECK(rcl_publisher_fini(&pub, PublisherComponent->GetOwnerNode()->GetNode()));
    UE_LOG(LogTemp, Warning, TEXT("rcl_timer_fini"));
    RCSOFTCHECK(rcl_timer_fini(&timer));

    UE_LOG(LogTemp, Warning, TEXT("Thread Stop - Done"));
}