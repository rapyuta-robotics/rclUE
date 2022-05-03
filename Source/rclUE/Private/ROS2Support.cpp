// Copyright 2020-2021 Rapyuta Robotics Co., Ltd.

#include "ROS2Support.h"

rclc_support_t& UROS2Support::Get()
{
    return support;
}

void UROS2Support::Init()
{
    allocator = rcl_get_default_allocator();
    
    // because of hardcode inside:
    // ~/ros2_foxy/src/ros2/rcpputils/src/find_library.cpp find_library_path()
    //string ldLibraryPath = envVars[ldLibraryPathKey] + Path.Combine(ROS2LibPath, "lib") + ":";
   // Environment.SetEnvironmentVariable(ldLibraryPathKey, ldLibraryPath);

    void* handle = dlopen( "librmw_fastrtps_cpp.so", RTLD_LAZY );
    void* handle1 = dlopen( "librmw_fastrtps_cpp.so", RTLD_LAZY | RTLD_GLOBAL );
    void* handle2 = dlopen( "librmw_fastrtps_cpp.so", RTLD_NOW | RTLD_GLOBAL );
    void* handle3 = FPlatformProcess::GetDllHandle(TEXT("librmw_fastrtps_cpp.so"));
    UE_LOG(LogTemp, Warning, TEXT("VITYO librmw_fastrtps_cpp.so %s"), handle ? TEXT("not null") : TEXT("null"));
            
    rcl_ret_t rc = rclc_support_init(&support, 0, nullptr, &allocator);
    UE_LOG(LogTemp, Warning, TEXT("VITYO rclc_support_init %d"), rc);
    RCSOFTCHECK(rc);
}  

void UROS2Support::Fini()
{
    RCSOFTCHECK(rclc_support_fini(&support));
}