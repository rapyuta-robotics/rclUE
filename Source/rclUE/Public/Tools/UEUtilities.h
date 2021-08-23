// Copyright (C) Rapyuta Robotics

#pragma once

#include "UEUtilities.generated.h"

namespace ConversionUtils
{

    // UE to ROS conversion
    // cm -> m
    // Left handed -> Right handed
    inline static FVector VectorUEToROS(const FVector Input)
    {
        FVector Output = Input;

        Output.X = Output.X/100.0f;
        Output.Y = -Output.Y/100.0f;
        Output.Z = Output.Z/100.0f;

        return Output;
    }
    
    inline static FVector RotationUEToROS(const FVector Input)
    {
        FVector Output = Input;

        Output.X = -Output.X;
        Output.Z = -Output.Z;

        return Output;
    }

    inline static FQuat QuatUEToROS(const FQuat Input)
    {
        FQuat Output = Input;

        Output.X = -Output.X;
        Output.Z = -Output.Z;

        return Output;
    }



    // // ROS to UE conversion
    // // m -> cm
    // // Right handed -> Left handed
    inline static FVector VectorROSToUE(const FVector Input)
    {
        FVector Output = Input;

        Output.X = Output.X*100.0f;
        Output.Y = -Output.Y*100.0f;
        Output.Z = Output.Z*100.0f;

        return Output;
    }

    inline static FVector RotationROSToUE(const FVector Input)
    {
        FVector Output = Input;

        Output.X = -Output.X;
        Output.Z = -Output.Z;

        return Output;
    }

    inline static FQuat QuatROSToUE(const FQuat Input)
    {
        FQuat Output = Input;

        Output.X = -Output.X;
        Output.Z = -Output.Z;

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
    static FVector VectorUEToROS(const FVector Input);

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FVector RotationUEToROS(const FVector Input);

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FQuat QuatUEToROS(const FQuat Input);


    // ROS to UE conversion
    // m -> cm
    // Right handed -> Left handed

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FVector VectorROSToUE(const FVector Input);

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FVector RotationROSToUE(const FVector Input);

    UFUNCTION(BlueprintCallable, Category="Conversion")
    static FQuat QuatROSToUE(const FQuat Input);
};