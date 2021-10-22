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
		// counter++;

		// OwnerNode->iterationCounterTest.Enqueue(counter);
		if (OwnerNode->Subscriptions.Num() > 0 || OwnerNode->Clients.Num() > 0 || OwnerNode->Services.Num() > 0)
		{
			SpinSome();
		}
	}

	return 0;
}

void FROS2Thread::Stop()
{
   	for (auto& s : Subscriptions)
    {
        RCSOFTCHECK(rcl_subscription_fini(&s.rcl_subscription, &node));
    }

    for (auto& s : Services)
    {
        RCSOFTCHECK(rcl_service_fini(&s.rcl_service, &node));
    }

    TArray<UActorComponent*> PubComponents;
    GetComponents(UROS2Publisher::StaticClass(), PubComponents, true);
    for (auto& c : PubComponents)
    {
        UROS2Publisher* Pub = Cast<UROS2Publisher>(c);
        if (Pub != nullptr)
        {
            Pub->Destroy();
        }
    }

    RCSOFTCHECK(rcl_wait_set_fini(&wait_set));
}

void FROS2Thread::SpinSome()
{
	// all of the stuff in ROS2Node needs to be tracked by the thread instead,
	// ROS2Node should suspend this thread before adding new elements
	if (!rcl_wait_set_is_valid(&wait_set))
    {
        RCSOFTCHECK(rcl_wait_set_fini(&wait_set));
        wait_set = rcl_get_zero_initialized_wait_set();
        RCSOFTCHECK(rcl_wait_set_init(&wait_set,
                                      Subscriptions.Num() + ActionClients.Num() * 2,
                                      NGuardConditions,
                                      NTimers + ActionServers.Num(),
                                      Clients.Num() + ActionClients.Num() * 3,
                                      Services.Num() + ActionServers.Num() * 3,
                                      NEvents,
                                      &Support->Get().context,
                                      rcl_get_default_allocator()));
    }

    RCSOFTCHECK(rcl_wait_set_clear(&wait_set));

    for (auto& s : Subscriptions)
    {
        RCSOFTCHECK(rcl_wait_set_add_subscription(&wait_set, &s.rcl_subscription, nullptr));
    }

    for (auto& c : Clients)
    {
        RCSOFTCHECK(rcl_wait_set_add_client(&wait_set, &c->client, nullptr));
    }

    for (auto& s : Services)
    {
        RCSOFTCHECK(rcl_wait_set_add_service(&wait_set, &s.rcl_service, nullptr));
    }

    for (auto& a : ActionClients)
    {
        RCSOFTCHECK(rcl_action_wait_set_add_action_client(&wait_set, &a->client, nullptr, nullptr));
    }

    for (auto& a : ActionServers)
    {
        RCSOFTCHECK(rcl_action_wait_set_add_action_server(&wait_set, &a->server, nullptr));
    }

    rcl_ret_t rc = rcl_wait(&wait_set, 0);
    RCLC_UNUSED(rc);

    HandleSubscriptions();
    HandleServices();
    HandleClients();

    for (auto& a : ActionServers)
    {
        a->ProcessReady(&wait_set);
    }

    for (auto& a : ActionClients)
    {
        a->ProcessReady(&wait_set);
    }
}

void FROS2Thread::HandleSubscriptions()
{
    for (int i = 0; i < wait_set.size_of_subscriptions; i++)
    {
        if (wait_set.subscriptions[i])
        {
            const rcl_subscription_t* currentSub = wait_set.subscriptions[i];
            for (auto& s : Subscriptions)
            {
                if (&s.rcl_subscription == currentSub)
                {
                    s.Ready = true;
                }
            }
        }
    }

    for (auto& s : Subscriptions)
    {
        if (s.Ready == true)
        {
            void* data = s.TopicMsg->Get();
            rmw_message_info_t messageInfo;
            RCSOFTCHECK(rcl_take(&s.rcl_subscription, data, &messageInfo, nullptr));

            const FSubscriptionCallback* SubCallback = &s.Callback;
            SubCallback->ExecuteIfBound(s.TopicMsg);

            s.Ready = false;
        }
    }
}

void FROS2Thread::HandleServices()
{
    for (int i = 0; i < wait_set.size_of_services; i++)
    {
        if (wait_set.services[i])
        {
            const rcl_service_t* currentService = wait_set.services[i];
            for (auto& s : Services)
            {
                if (&s.rcl_service == currentService)
                {
                    s.Ready = true;
                }
            }
        }
    }

    for (auto& s : Services)
    {
        if (s.Ready == true)
        {
            rmw_service_info_t req_info;
            void* data = s.Service->GetRequest();
            RCSOFTCHECK(rcl_take_request_with_info(&s.rcl_service, &req_info, data));

            UE_LOG(LogROS2Node, Log, TEXT("Executing Service (%s)"), *__LOG_INFO__);

            const FServiceCallback* SrvCallback = &s.Callback;
            SrvCallback->ExecuteIfBound(s.Service);

            RCSOFTCHECK(rcl_send_response(&s.rcl_service, &req_info.request_id, s.Service->GetResponse()));

            s.Ready = false;
        }
    }
}

void FROS2Thread::HandleClients()
{
    for (int i = 0; i < wait_set.size_of_clients; i++)
    {
        if (wait_set.clients[i])
        {
            const rcl_client_t* current_client = wait_set.clients[i];
            for (auto& c : Clients)
            {
                if (&c->client == current_client)
                {
                    c->Ready = true;
                }
            }
        }
    }

    for (auto& c : Clients)
    {
        if (c->Ready == true)
        {
            rmw_service_info_t req_info;
            void* data = c->Service->GetResponse();
            RCSOFTCHECK(rcl_take_response_with_info(&c->client, &req_info, data));

            UE_LOG(LogROS2Node, Log, TEXT("Executing Answer Delegate for Service Client (%s)"), *__LOG_INFO__);

            const FServiceClientCallback* SrvClientCallback = &c->AnswerDelegate;
            SrvClientCallback->ExecuteIfBound(c->Service);

            c->Ready = false;
        }
    }
}