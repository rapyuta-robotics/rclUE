// Fill out your copyright notice in the Description page of Project Settings.


#include "ROS2ServiceClient.h"


// Sets default values for this component's properties
UROS2ServiceClient::UROS2ServiceClient()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UROS2ServiceClient::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("Client BeginPlay"));

	if (ownerNode == nullptr)
	{
		ownerNode = Cast<AROS2Node>(GetOwner());
	}

	Super::BeginPlay();

	if (ownerNode != nullptr)
	{
		Init();
	}
	else
	{
	UE_LOG(LogTemp, Error, TEXT("Client BeginPlay - Owner not set"));
	}
	
	UE_LOG(LogTemp, Warning, TEXT("Client BeginPlay - Done"));	
}


// Called every frame
void UROS2ServiceClient::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UROS2ServiceClient::Init()
{
	check(ownerNode != nullptr);
	if (State == UROS2State::Created && ownerNode->State == UROS2State::Initialized)
	{
		InitializeService();

		check(IsValid(Service));

		const rosidl_service_type_support_t * srv_type_support = Service->GetTypeSupport(); // this should be a parameter, but for the moment we leave it fixed

		client = rcl_get_zero_initialized_client();
  		rcl_client_options_t client_opt = rcl_client_get_default_options();
		rcl_ret_t rc = rcl_client_init(&client, ownerNode->GetNode(), srv_type_support, TCHAR_TO_ANSI(*ServiceName), &client_opt);
			
		State = UROS2State::Initialized;
	}
	else if (State == UROS2State::Initialized && ownerNode->State == UROS2State::Initialized)
	{
		UE_LOG(LogTemp, Error, TEXT("Client Init - already initialized!"));
	}
	else if (ownerNode->State == UROS2State::Created)
	{
		UE_LOG(LogTemp, Error, TEXT("Client Init (%s) - Node needs to be initialized before client!"), *ServiceName);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Client Init - this shouldn't happen!"));
	}
}

void UROS2ServiceClient::InitializeService()
{
	UE_LOG(LogTemp, Log, TEXT("Initializing Service"));
	if (ServiceName != FString() && SrvClass)
	{
		Service = NewObject<UROS2GenericSrv>(this, SrvClass);

		if (ensure(IsValid(Service)))
		{
			Service->Init();
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Topic (%s) is nullptr!"), *ServiceName);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("ServiceName or SrvClass uninitialized!"));
	}
}

void UROS2ServiceClient::Destroy()
{
	UE_LOG(LogTemp, Warning, TEXT("Client Destroy"));
	if (Service != nullptr)
	{
		Service->Fini();
	}

	if (ownerNode != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Client Destroy - rcl_client_fini"));
		RCSOFTCHECK(rcl_client_fini(&client, ownerNode->GetNode()));
	}
	UE_LOG(LogTemp, Warning, TEXT("Client Destroy - Done"));
}

void UROS2ServiceClient::UpdateAndSendRequest()
{
    UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));
	check(State == UROS2State::Initialized);
	check(IsValid(ownerNode));
	
	RequestDelegate.ExecuteIfBound(Service);
	SendRequest();
}

void UROS2ServiceClient::SendRequest()
{
    UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(__FUNCTION__));
	check(State == UROS2State::Initialized);
	check(ownerNode != nullptr);

	req = Service->GetRequest();

	int64_t seq;
	rcl_ret_t rc = rcl_send_request(&client, req, &seq);
}