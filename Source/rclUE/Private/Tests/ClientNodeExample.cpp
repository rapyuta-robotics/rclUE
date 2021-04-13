// Copyright (c) 2020 Rapyuta Robotics Co., Ltd.


#include "Tests/ClientNodeExample.h"

#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <stdio.h>
#include <unistd.h>

#include "rclcUtilities.h"

ue4_interfaces__srv__AddInts_Request AClientNodeExample::req;
ue4_interfaces__srv__AddInts_Response AClientNodeExample::res;

void AClientNodeExample::client_callback(const void * msg)
{
  ue4_interfaces__srv__AddInts_Response * msgin = (ue4_interfaces__srv__AddInts_Response *) msg;
  UE_LOG(LogTemp, Log, TEXT("Received service response %ld * %ld = %ld."), AClientNodeExample::req.a, AClientNodeExample::req.b, msgin->sum);
}

// Sets default values
AClientNodeExample::AClientNodeExample()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AClientNodeExample::BeginPlay()
{
	Super::BeginPlay();
	
	rcl_allocator_t allocator = rcl_get_default_allocator();
	rclc_support_t support;

	// create init_options
	RCSOFTCHECK(rclc_support_init(&support, 0, nullptr, &allocator));

	// create node
	rcl_node_t node = rcl_get_zero_initialized_node();
	RCSOFTCHECK(rclc_node_init_default(&node, "ue4_srv_example_client_rclc", "", &support));

	// create client
	rcl_client_t client;
	RCSOFTCHECK(rclc_client_init_default(&client, &node, ROSIDL_GET_SRV_TYPE_SUPPORT(ue4_interfaces, srv, AddInts), "/ue4srvexample"));

	// create executor
	rclc_executor_t executor = rclc_executor_get_zero_initialized_executor();
	RCSOFTCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));

	unsigned int rcl_wait_timeout = 10;         // in ms
	RCSOFTCHECK(rclc_executor_set_timeout(&executor, RCL_MS_TO_NS(rcl_wait_timeout)));
	RCSOFTCHECK(rclc_executor_add_client(&executor, &client, &AClientNodeExample::res, AClientNodeExample::client_callback));

	int64_t seq;
	ue4_interfaces__srv__AddInts_Request__init(&AClientNodeExample::req);
	AClientNodeExample::req.a = v1;
	AClientNodeExample::req.b = v2;

	sleep(2);   // Sleep a while to ensure DDS matching before sending request

	RCSOFTCHECK(rcl_send_request(&client, &AClientNodeExample::req, &seq))
	UE_LOG(LogTemp, Log, TEXT("Send service request %ld + %ld."), AClientNodeExample::req.a, AClientNodeExample::req.b);

	rclc_executor_spin_some(&executor, 1000 * (1000 * 1000));

	RCSOFTCHECK(rcl_client_fini(&client, &node));
	RCSOFTCHECK(rcl_node_fini(&node));
}

// Called every frame
void AClientNodeExample::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

