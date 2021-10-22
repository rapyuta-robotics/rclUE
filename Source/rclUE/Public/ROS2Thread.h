// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#pragma once

#include "CoreMinimal.h"
#include "Core/Public/HAL/Runnable.h"

class FRunnableThread;
class AROS2Node;

// does this work with dynamic delegates?
// based on https://www.youtube.com/watch?v=tGNaDagBq8E
class RCLUE_API FROS2Thread : public FRunnable
{
	
public:	
	// Sets default values for this actor's properties
	FROS2Thread(AROS2Node* Node);

	virtual bool Init();

	virtual uint32 Run();

	virtual void Stop();

	bool bStopThread;

	AROS2Node* OwnerNode;

	
    rcl_wait_set_t wait_set;

    TArray<FSubscription> Subscriptions;

    TArray<FService> Services;

    TArray<UROS2Publisher*> Publishers;

    TArray<UROS2ServiceClient*> Clients;

    TArray<UROS2ActionClient*> ActionClients;

    TArray<UROS2ActionServer*> ActionServers;

	// // testing
	// int32 counter;

private:
	void SpinSome();
	
    void HandleSubscriptions();

    void HandleServices();

    void HandleClients();
};
