// Copyright 2021 Rapyuta Robotics Co., Ltd.
// code based on the rclc examples

#pragma once


#include <ue4_interfaces/srv/add_ints.h>

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ClientNodeExample.generated.h"

UCLASS()
class RCLUE_API AClientNodeExample : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AClientNodeExample();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere)
    int v1;
	
	UPROPERTY(EditAnywhere)
    int v2;


	static ue4_interfaces__srv__AddInts_Request req;
	static ue4_interfaces__srv__AddInts_Response res;
	static void client_callback(const void * msg);
};
