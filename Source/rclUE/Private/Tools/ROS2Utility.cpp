// Copyright (C) Rapyuta Robotics


#include "Tools/ROS2Utility.h"


// Sets default values for this component's properties
UROS2Utility::UROS2Utility()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UROS2Utility::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UROS2Utility::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

// todo implmement generic conversion
FVector UROS2Utility::VectorUEToROS(const FVector Input){
	FVector Output = Input;

	Output.X = Output.X/100.0f;
    Output.Y = -Output.Y/100.0f;
    Output.Z = Output.Z/100.0f;

	return Output;
}

FVector UROS2Utility::RotationUEToROS(const FVector Input){
	FVector Output = Input;

	Output.X = -Output.X;
	Output.Z = -Output.Z;

	return Output;
}

FQuat UROS2Utility::QuatUEToROS(const FQuat Input){
	FQuat Output = Input;

	Output.X = -Output.X;
	Output.Z = -Output.Z;

	return Output;
}

FTransform UROS2Utility::TransformUEToROS(const FTransform Input){
	FTransform Output = Input;
	
	Output.SetTranslation(VectorUEToROS(Input.GetTranslation()));
	Output.SetRotation(QuatUEToROS(Input.GetRotation()));

	return Output;
}

FOdometryData UROS2Utility::OdomUEToROS(const FOdometryData Input){
	FOdometryData Output = Input;
	
	Output.position = VectorUEToROS(Output.position);
	Output.orientation = QuatUEToROS(Output.orientation);

	Output.linear = VectorUEToROS(Output.linear);
	Output.angular = VectorUEToROS(Output.angular);

	return Output;
}

FVector UROS2Utility::VectorROSToUE(const FVector Input){
	FVector Output = Input;

	Output.X = Output.X*100.0f;
    Output.Y = -Output.Y*100.0f;
    Output.Z = Output.Z*100.0f;

	return Output;
}

FVector UROS2Utility::RotationROSToUE(const FVector Input){
	FVector Output = Input;

	Output.X = -Output.X;
	Output.Z = -Output.Z;

	return Output;
}

FQuat UROS2Utility::QuatROSToUE(const FQuat Input){
	FQuat Output = Input;

	Output.X = -Output.X;
	Output.Z = -Output.Z;

	return Output;
}

FTransform UROS2Utility::TransformROSToUE(const FTransform Input){
	FTransform Output = Input;
	
	Output.SetTranslation(VectorROSToUE(Input.GetTranslation()));
	Output.SetRotation(QuatROSToUE(Input.GetRotation()));

	return Output;
}

FOdometryData UROS2Utility::OdomROSToUE(const FOdometryData Input){
	FOdometryData Output = Input;
	
	Output.position = VectorROSToUE(Output.position);
	Output.orientation = QuatROSToUE(Output.orientation);

	Output.linear = VectorROSToUE(Output.linear);
	Output.angular = VectorROSToUE(Output.angular);

	return Output;
}