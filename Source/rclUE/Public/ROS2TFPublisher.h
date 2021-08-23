// Copyright (C) Rapyuta Robotics

#pragma once

#include <Msgs/ROS2TFMsg.h>
#include "CoreMinimal.h"
#include "ROS2Publisher.h"
#include <Msgs/ROS2GenericMsg.h>
#include <Tools/UEUtilities.h>
#include "Kismet/GameplayStatics.h"
#include "Math/TransformNonVectorized.h"

#include "ROS2TFPublisher.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), Blueprintable, meta=(BlueprintSpawnableComponent) )
class RCLUE_API UROS2TFPublisher : public UROS2Publisher
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsStatic = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString FrameId = TEXT("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ChildFrameId = TEXT("");

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform TF;

	UFUNCTION(BlueprintCallable)
	void InitTFPublisher(AROS2Node *Node);

	UFUNCTION(BlueprintCallable)
	void SetTransform(FVector Translation, FQuat Rotation);

	UFUNCTION(BlueprintCallable)
	void UpdateTFMsg(UROS2GenericMsg *Message);
};
