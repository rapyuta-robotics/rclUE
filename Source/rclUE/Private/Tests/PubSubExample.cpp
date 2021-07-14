// Copyright 2021 Rapyuta Robotics Co., Ltd.
// based on ROS2 examples


#include "Tests/PubSubExample.h"
#include "rclcUtilities.h"

rcl_publisher_t APubSubExample::my_pub;
std_msgs__msg__String APubSubExample::pub_msg;
std_msgs__msg__String APubSubExample::sub_msg;
static int counter = 0;

void APubSubExample::my_subscriber_callback(const void * msgin)
{
  const std_msgs__msg__String * msg = (const std_msgs__msg__String *)msgin;
  if (msg == NULL) {
    UE_LOG(LogTemp, Log, TEXT("Callback: msg NULL"));
  } else {
    UE_LOG(LogTemp, Log, TEXT("Callback (%d): I heard: %s"), counter++, *FString(ANSI_TO_TCHAR(msg->data.data)));
  }
}

void APubSubExample::my_timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  rcl_ret_t rc;
  RCLC_UNUSED(last_call_time);
  if (timer != NULL) {
    UE_LOG(LogTemp, Log, TEXT("Timer: time since last call %d"), (int) last_call_time);
    rc = rcl_publish(&my_pub, &pub_msg, NULL);
    if (rc == RCL_RET_OK) {
      UE_LOG(LogTemp, Log, TEXT("Published message %s"), *FString(ANSI_TO_TCHAR(pub_msg.data.data)));
    } else {
      UE_LOG(LogTemp, Log, TEXT("timer_callback: Error publishing message %s"), *FString(ANSI_TO_TCHAR(pub_msg.data.data)));
    }
  } else {
    UE_LOG(LogTemp, Log, TEXT("timer_callback Error: timer parameter is NULL"));
  }
}


// Sets default values
APubSubExample::APubSubExample()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APubSubExample::BeginPlay()
{
	UE_LOG(LogTemp, Log, TEXT("BeginPlay start"));

	Super::BeginPlay();

	// pubsub example from https://github.com/ros2/rclc/blob/master/rclc_examples/src/example_executor_convenience.c
	allocator = rcl_get_default_allocator();

    if (allocator.allocate == nullptr ||
        allocator.deallocate == nullptr || 
        allocator.zero_allocate == nullptr ||
        allocator.reallocate == nullptr)
    {
        UE_LOG(LogTemp, Error, TEXT("Allocator problems in PubSubExample!"));
    }

	// create init_options
	rcl_ret_t rc = rclc_support_init(&support, 0, nullptr, &allocator);
	if (rc != RCL_RET_OK)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed status on line %d: %d (PubSubExample). Terminating."),__LINE__,(int)rc);
		UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
	}

	// create node
	rc = rclc_node_init_default(&my_node, "node_0", "executor_examples", &support);
	if (rc != RCL_RET_OK)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed status on line %d: %d (PubSubExample). Terminating."),__LINE__,(int)rc);
		UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
	}

	// create a publisher to publish topic 'topic_0' with type std_msg::msg::String
	// my_pub is global, so that the timer callback can access this publisher.
	const char * topic_name = "topic_0";
  	const rosidl_message_type_support_t * my_type_support = ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String);
	RCSOFTCHECK(rclc_publisher_init_default(&my_pub, &my_node, my_type_support, topic_name));
	
  	// create a timer, which will call the publisher with period=`timer_timeout` ms in the 'my_timer_callback'
	const unsigned int timer_timeout = 1000;
	RCSOFTCHECK(rclc_timer_init_default(&my_timer, &support, RCL_MS_TO_NS(timer_timeout), APubSubExample::my_timer_callback));
	UE_LOG(LogTemp, Log, TEXT("Created timer with timeout %d ms."), timer_timeout);
	
	// assign message to publisher
	std_msgs__msg__String__init(&pub_msg);
	const unsigned int PUB_MSG_CAPACITY = 20;
	pub_msg.data.data = (char*)malloc(PUB_MSG_CAPACITY);
	pub_msg.data.capacity = PUB_MSG_CAPACITY;
	snprintf(pub_msg.data.data, pub_msg.data.capacity, "Hello World!");
	pub_msg.data.size = strlen(pub_msg.data.data);

	// create subscription
  	my_sub = rcl_get_zero_initialized_subscription();
  	RCSOFTCHECK(rclc_subscription_init_default(&my_sub, &my_node, my_type_support, topic_name));
	UE_LOG(LogTemp, Log, TEXT("Created subscriber %s:"), *FString(ANSI_TO_TCHAR(topic_name)));

	// one string message for subscriber
	std_msgs__msg__String__init(&sub_msg);

	////////////////////////////////////////////////////////////////////////////
	// Configuration of RCL Executor
	////////////////////////////////////////////////////////////////////////////
	executor = rclc_executor_get_zero_initialized_executor();
	// total number of handles = #subscriptions + #timers
	unsigned int num_handles = 1 + 1;
	UE_LOG(LogTemp, Log, TEXT("Debug: number of DDS handles: %u"), num_handles);
	rclc_executor_init(&executor, &support.context, num_handles, &allocator);

	RCSOFTCHECK(rclc_executor_add_subscription(&executor, &my_sub, &sub_msg, &APubSubExample::my_subscriber_callback, ON_NEW_DATA));

	RCSOFTCHECK(rclc_executor_add_timer(&executor, &my_timer));
	
	UE_LOG(LogTemp, Log, TEXT("BeginPlay end"));
}

void APubSubExample::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// clean up
	RCSOFTCHECK(rclc_executor_fini(&executor));
	RCSOFTCHECK(rcl_publisher_fini(&my_pub, &my_node));
	RCSOFTCHECK(rcl_timer_fini(&my_timer));
	RCSOFTCHECK(rcl_subscription_fini(&my_sub, &my_node));
	RCSOFTCHECK(rcl_node_fini(&my_node));
	RCSOFTCHECK(rclc_support_fini(&support));

	std_msgs__msg__String__fini(&pub_msg);
	std_msgs__msg__String__fini(&sub_msg);
}

// Called every frame
void APubSubExample::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	rclc_executor_spin_some(&executor, DeltaTime * 1000 * (1000 * 1000));
}

