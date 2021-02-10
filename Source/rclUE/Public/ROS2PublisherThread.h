// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.

#pragma once

#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <rosgraph_msgs/msg/clock.h>

#include "CoreMinimal.h"
#include "Core/Public/HAL/Runnable.h"


class FRunnableThread;
class UROS2Publisher;

/**
 * 
 */
class FROS2PublisherThread : public FRunnable
{
public:
	FROS2PublisherThread(UROS2Publisher* PublisherComponent);
	~FROS2PublisherThread();

	virtual bool Init();

	virtual uint32 Run();

	virtual void Stop();

	bool bSpin;

    static void timer_callback(rcl_timer_t * timer, int64_t last_call_time);

private:
	UROS2Publisher* PublisherComponent;

	uint32 timer_timeout;
	
	rclc_executor_t executor;
	rcl_timer_t timer; // this is not needed? callback should be on Tick?
	
	rcl_publisher_t pub;
};
