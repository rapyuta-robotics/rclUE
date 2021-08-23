// Copyright (C) Rapyuta Robotics

#include "Tools/UEUtilities.h"

UConversionUtils::UConversionUtils(FObjectInitializer const& ObjectInit)
{

}

FVector UConversionUtils::VectorUEToROS(const FVector Input)
{
    return ConversionUtils::VectorUEToROS(Input);
}

FVector UConversionUtils::RotationUEToROS(const FVector Input)
{
    return ConversionUtils::RotationUEToROS(Input);
}

FQuat UConversionUtils::QuatUEToROS(const FQuat Input)
{
    return ConversionUtils::QuatUEToROS(Input);
}

FVector UConversionUtils::VectorROSToUE(const FVector Input)
{
    return ConversionUtils::VectorROSToUE(Input);
}

FVector UConversionUtils::RotationROSToUE(const FVector Input)
{
    return ConversionUtils::RotationROSToUE(Input);
}

FQuat UConversionUtils::QuatROSToUE(const FQuat Input)
{
    return ConversionUtils::QuatROSToUE(Input);
}