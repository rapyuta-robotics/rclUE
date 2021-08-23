// Copyright (C) Rapyuta Robotics

#pragma once

#include <Msgs/ROS2OdometryMsg.h>
#include "UEUtilities.generated.h"

namespace ConversionUtils
{

    // UE to ROS conversion
    // cm -> m
    // Left handed -> Right handed
    inline static FVector VectorUEToROS(const FVector &Input)
    {
        FVector Output = Input;

        Output.X = Output.X/100.0f;
        Output.Y = -Output.Y/100.0f;
        Output.Z = Output.Z/100.0f;

        return Output;
    }
    
    inline static FVector RotationUEToROS(const FVector &Input)
    {
        FVector Output = Input;

        Output.X = -Output.X;
        Output.Z = -Output.Z;

        return Output;
    }

    inline static FQuat QuatUEToROS(const FQuat &Input)
    {
        FQuat Output = Input;

        Output.X = -Output.X;
        Output.Z = -Output.Z;

        return Output;
    }

    inline static FTransform TransformUEToROS(const FTransform &Input)
    {
        FTransform Output = Input;

        Output.SetTranslation(VectorUEToROS(Input.GetTranslation()));
        Output.SetRotation(QuatUEToROS(Input.GetRotation()));

        return Output;
    }

    inline static FOdometryData OdomUEToROS(const FOdometryData &Input)
    {
        FOdometryData Output = Input;

        Output.position = VectorUEToROS(Output.position);
        Output.orientation = QuatUEToROS(Output.orientation);

        Output.linear = VectorUEToROS(Output.linear);
        Output.angular = VectorUEToROS(Output.angular);

        return Output;
    }


    // // ROS to UE conversion
    // // m -> cm
    // // Right handed -> Left handed
    inline static FVector VectorROSToUE(const FVector &Input)
    {
        FVector Output = Input;

        Output.X = Output.X*100.0f;
        Output.Y = -Output.Y*100.0f;
        Output.Z = Output.Z*100.0f;

        return Output;
    }

    inline static FVector RotationROSToUE(const FVector &Input)
    {
        FVector Output = Input;

        Output.X = -Output.X;
        Output.Z = -Output.Z;

        return Output;
    }

    inline static FQuat QuatROSToUE(const FQuat &Input)
    {
        FQuat Output = Input;

        Output.X = -Output.X;
        Output.Z = -Output.Z;

        return Output;
    }

    inline static FTransform TransformROSToUE(const FTransform &Input)
    {
        FTransform Output = Input;

        Output.SetTranslation(VectorROSToUE(Input.GetTranslation()));
        Output.SetRotation(QuatROSToUE(Input.GetRotation()));

        return Output;
    }

    inline static FOdometryData OdomROSToUE(const FOdometryData &Input)
    {
        FOdometryData Output = Input;

        Output.position = VectorROSToUE(Output.position);
        Output.orientation = QuatROSToUE(Output.orientation);

        Output.linear = VectorROSToUE(Output.linear);
        Output.angular = VectorROSToUE(Output.angular);

        return Output;
    }

}

UCLASS()
class UConversionUtils : public UBlueprintFunctionLibrary
{
    GENERATED_UCLASS_BODY()

    // UE to ROS conversion
    // cm -> m
    // Left handed -> Right handed

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FVector VectorUEToROS(const FVector &Input);

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FVector RotationUEToROS(const FVector &Input);

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FQuat QuatUEToROS(const FQuat &Input);

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FTransform TransformUEToROS(const FTransform &Input);

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FOdometryData OdomUEToROS(const FOdometryData &Input);
    
    // ROS to UE conversion
    // m -> cm
    // Right handed -> Left handed

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FVector VectorROSToUE(const FVector &Input);

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FVector RotationROSToUE(const FVector &Input);

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FQuat QuatROSToUE(const FQuat &Input);

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FTransform TransformROSToUE(const FTransform &Input);

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FOdometryData OdomROSToUE(const FOdometryData &Input);
};