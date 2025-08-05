/**
 * @file rclcUtilities.h
 * @brief Header containing utilities and includes that are needed/useful in almost any class in rclUE
 * @copyright Copyright 2020-2022 Rapyuta Robotics Co., Ltd.
 */

#pragma once

// std

#include <cstdlib>
#include <cstring>
#include <random>

// UE
#include "HAL/UnrealMemory.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UObject/Object.h"
#include "Misc/EngineVersionComparison.h" 

#if UE_VERSION_NEWER_THAN(5, 5, 0)
#include "Misc/App.h"
#include "TimerManager.h"
#endif

// rclUE msgs
#include "builtin_interfaces/msg/detail/time__struct.h"
#include "geometry_msgs/msg/quaternion.h"
#include "geometry_msgs/msg/transform.h"
#include "geometry_msgs/msg/vector3.h"
#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"
#include "rosidl_runtime_c/u16string_functions.h"
#include "std_msgs/msg/string.h"

// rclUE others
#include "logUtilities.h"
#include "rcl/graph.h"
#include "rcl/wait.h"
#include "rcl_action/wait.h"
#include "rclc/rclc.h"

#include "rclcUtilities.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogROS2, Log, All);

static TAutoConsoleVariable<int32> CVarRclUERcsSoftCheck(
    TEXT("RCLUE.RCSOFTCHECK"),
    0,
    TEXT("Exit UE with rcl function error or not.\n")
        TEXT("<=0: Continue without exiting UE even with rcl functions return error code.")
            TEXT("  1: Exit UE with rcl functions error code.)\n"),
    ECVF_Scalability | ECVF_RenderThreadSafe);

//! this macro can be used on rcl functions that return an error code
#define RCSOFTCHECK(fn)                                                                                     \
    {                                                                                                       \
        rcl_ret_t temp_rc = fn;                                                                             \
        if ((temp_rc != RCL_RET_OK))                                                                        \
        {                                                                                                   \
            UE_LOG_WITH_INFO(LogTemp,                                                                       \
                             Error,                                                                         \
                             TEXT("Failed status on line %d (function %s): %d. Continuing."),               \
                             __LINE__,                                                                      \
                             *FString(__FUNCTION__),                                                        \
                             (int)temp_rc);                                                                 \
            static const auto CVar = IConsoleManager::Get().FindConsoleVariable(TEXT("RCLUE.RCSOFTCHECK")); \
            if (CVar->GetInt())                                                                             \
            {                                                                                               \
                check(temp_rc == 0);                                                                        \
            }                                                                                               \
        }                                                                                                   \
    }

/**
 * @brief used to add states to classes (e.g. to avoid double initializations)
 *
 */
UENUM()
enum UROS2State
{
    Created UMETA(DisplayName = "Created"),
    Initialized UMETA(DisplayName = "Initialized"),
};

/**
 * @brief used to set [QoS policies](https://docs.ros.org/en/foxy/Concepts/About-Quality-of-Service-Settings.html)
 * also check rmw/types.h for details
 */
UENUM()
enum class UROS2QoS : uint8
{
    Default UMETA(DisplayName = "Default"),
    SensorData UMETA(DisplayName = "SensorData"),
    DynamicBroadcaster UMETA(DisplayName = "DynamicBroadcaster"),
    StaticBroadcaster UMETA(DisplayName = "StaticBroadcaster"),
    ClockPub UMETA(DisplayName = "ClockPub"),
    KeepLast UMETA(DisplayName = "KeepLast"),
    Parameters UMETA(DisplayName = "Parameters"),
    Services UMETA(DisplayName = "Services"),
    ParameterEvents UMETA(DisplayName = "ParameterEvents"),
    System UMETA(DisplayName = "System"),
    UnknownQoS UMETA(DisplayName = "UnknownQoS"),
};

//! profiles provided by rclUE
static const rmw_qos_profile_t rclUE_qos_profile_keep_last = {RMW_QOS_POLICY_HISTORY_KEEP_LAST,
                                                              1,
                                                              RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                                                              RMW_QOS_POLICY_DURABILITY_VOLATILE,
                                                              RMW_QOS_DEADLINE_DEFAULT,
                                                              RMW_QOS_LIFESPAN_DEFAULT,
                                                              RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
                                                              RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
                                                              false};

//! profiles provided by rclUE
static const rmw_qos_profile_t rclUE_qos_profile_sensor_data = {RMW_QOS_POLICY_HISTORY_KEEP_LAST,
                                                                5,
                                                                RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT,
                                                                RMW_QOS_POLICY_DURABILITY_VOLATILE,
                                                                RMW_QOS_DEADLINE_DEFAULT,
                                                                RMW_QOS_LIFESPAN_DEFAULT,
                                                                RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
                                                                RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
                                                                false};

//! profiles provided by rclUE
static const rmw_qos_profile_t rclUE_qos_profile_clock_pub = {RMW_QOS_POLICY_HISTORY_KEEP_LAST,
                                                              10,
                                                              RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                                                              RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL,
                                                              RMW_QOS_DEADLINE_DEFAULT,
                                                              RMW_QOS_LIFESPAN_DEFAULT,
                                                              RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
                                                              RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
                                                              false};

//! profiles provided by rclUE
static const rmw_qos_profile_t rclUE_qos_profile_dynamic_broadcaster = {RMW_QOS_POLICY_HISTORY_KEEP_LAST,
                                                                        100,
                                                                        RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                                                                        RMW_QOS_POLICY_DURABILITY_VOLATILE,
                                                                        RMW_QOS_DEADLINE_DEFAULT,
                                                                        RMW_QOS_LIFESPAN_DEFAULT,
                                                                        RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
                                                                        RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
                                                                        false};

//! profiles provided by rclUE
static const rmw_qos_profile_t rclUE_qos_profile_static_broadcaster = {RMW_QOS_POLICY_HISTORY_KEEP_LAST,
                                                                       1,
                                                                       RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                                                                       RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL,
                                                                       RMW_QOS_DEADLINE_DEFAULT,
                                                                       RMW_QOS_LIFESPAN_DEFAULT,
                                                                       RMW_QOS_POLICY_LIVELINESS_SYSTEM_DEFAULT,
                                                                       RMW_QOS_LIVELINESS_LEASE_DURATION_DEFAULT,
                                                                       false};

//! Look-Up Table matching enum with rcl profiles
static const TMap<UROS2QoS, rmw_qos_profile_t> QoS_LUT = {{UROS2QoS::Default, rmw_qos_profile_default},
                                                          {UROS2QoS::SensorData, rclUE_qos_profile_sensor_data},
                                                          {UROS2QoS::DynamicBroadcaster, rclUE_qos_profile_dynamic_broadcaster},
                                                          {UROS2QoS::StaticBroadcaster, rclUE_qos_profile_static_broadcaster},
                                                          {UROS2QoS::ClockPub, rclUE_qos_profile_clock_pub},
                                                          {UROS2QoS::KeepLast, rclUE_qos_profile_keep_last},
                                                          {UROS2QoS::Parameters, rmw_qos_profile_parameters},
                                                          {UROS2QoS::Services, rmw_qos_profile_services_default},
                                                          {UROS2QoS::ParameterEvents, rmw_qos_profile_parameter_events},
                                                          {UROS2QoS::System, rmw_qos_profile_system_default},
                                                          {UROS2QoS::UnknownQoS, rmw_qos_profile_unknown}};

/**
 * @brief Custom timer manager.  This try to execute delegate at a given fixed rate.
 * Default timer wait given rate from last execution, this timer wait given rate from desired execution time.
 */
UCLASS()
class URRTimerManager : public UObject
{
    GENERATED_BODY()
public:
    FString LogInfo;

protected:
    UPROPERTY()
    bool bEnabled = true;

    UPROPERTY()
    float Rate = 0.f;

    UPROPERTY()
    float DesiredTime = 0.f;

    //! Timer handler for periodic publisher
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    FTimerHandle TimerHandle;

    FTimerDelegate Delegate;

    FTimerDelegate TimerDelegate;

    //! internal property used to log throttle.
    UPROPERTY()
    float LogLastHit = 0.f;

public:
    void StopTimer()
    {
        bEnabled = false;
        GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
        UE_LOG_WITH_INFO(LogTemp, Log, TEXT("[%s] Timer stopped"), *LogInfo);
    }

    void SetTimer(FTimerDelegate const& InDelegate, float InRate)
    {
        StopTimer();
        Rate = InRate;
        Delegate = InDelegate;
        bEnabled = true;
        DesiredTime = UGameplayStatics::GetTimeSeconds(GetWorld()) + Rate;

        TimerDelegate = FTimerDelegate::CreateUObject(this, &URRTimerManager::SetTimerImple);
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, Rate, false);
        UE_LOG_WITH_INFO(LogTemp, Log, TEXT("[%s] Timer started"), *LogInfo);
    }

    void SetTimerImple()
    {
        if (!bEnabled)
        {
            bEnabled = true;
            return;
        }

        // function call. Make sure delegate is bound.
        if (Delegate.IsBound())
        {
            Delegate.ExecuteIfBound();
        }
        else
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("[%s] Delegate is not bound"), *LogInfo);
        }

        float now = UGameplayStatics::GetTimeSeconds(GetWorld());

        // update DesiredTime
        DesiredTime += Rate;

        float wt = DesiredTime - now;
        if (wt <= 0)
        {
            UE_LOG_WITH_INFO_THROTTLE(5,
                                      LogLastHit,
                                      LogTemp,
                                      Warning,
                                      TEXT("[%s] Delegate function call take longer than Rate or StepSize is not "
                                           "small enough to meet target Rate=%f, "
                                           "StepSize=%f."),
                                      *LogInfo,
                                      Rate,
                                      FApp::GetFixedDeltaTime());
            // Make sure that function call happens at next tick.
            wt = FApp::GetFixedDeltaTime() * 0.5;
            DesiredTime = now + wt;
        }
        // define lambda
        GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, wt, false);
    }
};

UCLASS()
class UROS2Utils : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    static bool IsEqualRWMRequestId(rmw_request_id_t service1, rmw_request_id_t service2)
    {
        if (service1.sequence_number != service2.sequence_number)
        {
            return false;
        }
        for (int i = 0; i < 16; i++)
        {
            if (service1.writer_guid[i] != service2.writer_guid[i])
            {
                return false;
            }
        }
        return true;
    }

    static bool IsEqualWMSrvInfo(rmw_service_info_t service1, rmw_service_info_t service2, bool check_received_timestamp = true)
    {
        if (!UROS2Utils::IsEqualRWMRequestId(service1.request_id, service2.request_id))
        {
            return false;
        }
        if (service1.source_timestamp != service2.source_timestamp)
        {
            return false;
        }
        if (check_received_timestamp && service1.received_timestamp != service2.received_timestamp)
        {
            return false;
        }
        return true;
    }

    static builtin_interfaces__msg__Time FloatToROSStamp(const float InTimeSec)
    {
        builtin_interfaces__msg__Time stamp;
        stamp.sec = static_cast<int32>(InTimeSec);
        stamp.nanosec = uint32((InTimeSec - stamp.sec) * 1e+09f);
        return stamp;
    }

    static builtin_interfaces__msg__Time GetCurrentROS2Time(const UObject* InContextObject)
    {
        return FloatToROSStamp(UGameplayStatics::GetTimeSeconds(InContextObject->GetWorld()));
    }

    static float ROSStampToFloat(const builtin_interfaces__msg__Time& InTimeStamp)
    {
        return InTimeStamp.sec + InTimeStamp.nanosec * 1e-09f;
    }

    static void GenerateRandomUUID16(TArray<uint8, TFixedAllocator<16>>& OutUUID)
    {
        OutUUID.Reset();
        for (int8 i = 0; i < 16; i++)
        {
            OutUUID.Add(std::random_device{}());
        }
    }

    static int32 GetStringRequiredCapacity(const FString& InStr)
    {
        FTCHARToUTF8 strUtf8(*InStr);
        return (strUtf8.Length() + 1) + sizeof(size_t) + sizeof(size_t);
    }

    static int32 GetStringArrayRequiredCapacity(const TArray<FString>& InStrList)
    {
        int32 totalCapacity = 0;
        for (const auto& str : InStrList)
        {
            totalCapacity += GetStringRequiredCapacity(str);
        }
        return totalCapacity;
    }

    static void StringUEToStdMsg(const FString& InStr, std_msgs__msg__String& OutStdMsg)
    {
        const unsigned int msgStringCapacity = InStr.Len() + 1;
        if (OutStdMsg.data.data != nullptr)
        {
            free(OutStdMsg.data.data);
        }
        OutStdMsg.data.data = (char*)malloc(msgStringCapacity);
        OutStdMsg.data.capacity = msgStringCapacity;
        snprintf(OutStdMsg.data.data, OutStdMsg.data.capacity, "%s", TCHAR_TO_UTF8(*InStr));
        OutStdMsg.data.size = strlen(OutStdMsg.data.data);
    }

    // mainly used by SetFromROS2 and SetROS2 in the autogenerated msg files
    // General type and specific types, i.e. FString, FVector, FQuat, FTransform and array of those types

    /**
     * @brief Allocate resources for ROS array.
     *
     * @tparam TSequence
     * @param InSequence
     * @param size
     */
    template<typename TSequence>
    static void ROSSequenceResourceAllocation(TSequence& InSequence, const int size)
    {
        if (InSequence.data != nullptr)
        {
            free(InSequence.data);
            InSequence.data = nullptr;
        }
        InSequence.data = (decltype(InSequence.data))malloc(size * sizeof(decltype(*(InSequence.data))));
        InSequence.size = size;
        InSequence.capacity = size;
    }

    /**
     * @brief Convert UE array to ROSSequence.
     *
     * @tparam TSequence
     * @tparam T
     * @param InArray
     * @param OutSequence
     * @param size
     */
    template<typename TSequence, typename T>
    static void ArrayUEToROSSequence(const TArray<T>& InArray, TSequence* OutSequence, const int size)
    {
        for (auto i = 0; i < size; ++i)
        {
            if constexpr (TIsArithmetic<T>::Value)
            {
                OutSequence[i] = InArray[i];
            }
            else
            {
                InArray[i].SetROS2(OutSequence[i]);
            }
        }
    }

    /**
     * @brief Convert ROSSequence to UE Array
     *
     * @tparam TSequence
     * @tparam T
     * @param InSequence
     * @param OutArray
     * @param size
     */
    template<typename TSequence, typename T>
    static void SequenceROSToUEArray(const TSequence* InSequence, TArray<T>& OutArray, const int size)
    {
        OutArray.SetNum(size);
        for (auto i = 0; i < size; ++i)
        {
            if constexpr (TIsArithmetic<T>::Value)
            {
                OutArray[i] = InSequence[i];
            }
            else
            {
                OutArray[i].SetFromROS2(InSequence[i]);
            }
        }
    }

    // String
    /**
     * @brief Convert ROS string to UE FString
     *
     * @tparam T rosidl_runtime_c__String or rosidl_runtime_c__U16String
     * @param InStr
     * @return FString
     */
    template<typename T>
    static FString StringROSToUE(const T& InStr)
    {
        FString outStr;
        if (InStr.data)
        {
            outStr.AppendChars(InStr.data, InStr.size);
        }
        return outStr;
    }

    /**
     * @brief Convert ROS string sequence to UE FString array
     *
     * @tparam T rosidl_runtime_c__String or rosidl_runtime_c__U16String
     * @param InStrSequence
     * @param OutStrArray
     * @param size
     */
    template<typename T>
    static void StringSequenceROSToUEArray(const T* InStrSequence, TArray<FString>& OutStrArray, const int size)
    {
        OutStrArray.Empty();
        for (size_t i = 0; i < size; ++i)
        {
            OutStrArray.Emplace(StringROSToUE<T>(InStrSequence[i]));
        }
    }

    /**
     * @brief Convert UE FString to ros string
     *
     * @param InStr
     * @param OutStr
     * @sa
     * https://github.com/ros2/rosidl_typesupport_opensplice/blob/master/rosidl_typesupport_opensplice_c/resource/msg__type_support_c.cpp.em
     */
    static bool StringUEToROS(const FString& InStr, rosidl_runtime_c__String& OutStr)
    {
        if (!OutStr.data)
        {
            rosidl_runtime_c__String__init(&OutStr);
        }
        bool succeeded = rosidl_runtime_c__String__assign(&OutStr, TCHAR_TO_ANSI(*InStr));
        if (!succeeded)
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to assign string : %s"), *InStr);
            return false;
        }

        return true;
    }

    /**
     * @brief Convert UE FString to ros string
     *
     * @param InStr
     * @param OutStr
     * @sa
     * https://github.com/ros2/rosidl_typesupport_opensplice/blob/master/rosidl_typesupport_opensplice_c/resource/msg__type_support_c.cpp.em
     */
    static bool U16StringUEToROS(const FString& InStr, rosidl_runtime_c__U16String& OutStr)
    {
        if (!OutStr.data)
        {
            rosidl_runtime_c__U16String__init(&OutStr);
        }
        bool succeeded = rosidl_runtime_c__U16String__assignn_from_char(&OutStr, TCHAR_TO_ANSI(*InStr), InStr.Len());
        if (!succeeded)
        {
            UE_LOG_WITH_INFO(LogTemp, Error, TEXT("failed to assign u16string : %s"), *InStr);
            return false;
        }

        return true;
    }

    /**
     * @brief Convert UE FString array to ROS sequence
     *
     * @param InStrList
     * @param OutStrSequence
     * @param size
     */
    static void StringArrayUEToROSSequence(const TArray<FString>& InStrList,
                                           rosidl_runtime_c__String* OutStrSequence,
                                           const int size)
    {
        for (auto i = 0; i < size; ++i)
        {
            StringUEToROS(InStrList[i], OutStrSequence[i]);
        }
    }

    /**
     * @brief Convert UE FString array to ROS sequence
     *
     * @param InStrList
     * @param OutStrSequence
     * @param size
     */
    static void U16StringArrayUEToROSSequence(const TArray<FString>& InStrList,
                                              rosidl_runtime_c__U16String* OutStrSequence,
                                              const int size)
    {
        for (auto i = 0; i < size; ++i)
        {
            U16StringUEToROS(InStrList[i], OutStrSequence[i]);
        }
    }

    // Vectpr
    /**
     * @brief Convert ROS geometry_msgs__msg__Vector3 or geometry_msgs__msg__Point to UE FVector.
     *
     * @tparam TVector geometry_msgs__msg__Vector3 or geometry_msgs__msg__Point.
     * @param InROSVector
     * @return FVector
     */
    template<typename TVector>
    static FVector VectorROSToUE(const TVector& InROSVector)
    {
        return FVector(InROSVector.x, InROSVector.y, InROSVector.z);
    }

    /**
     * @brief Convert ROS geometry_msgs__msg__Vector3 or geometry_msgs__msg__Point to UE FVector.
     *
     * @tparam TVector geometry_msgs__msg__Vector3 or geometry_msgs__msg__Point
     * @param InROSVector
     * @param OutUEVector
     * @param size
     */
    template<typename TVector>
    static void VectorSequenceROSToUEArray(const TVector* InROSVector, TArray<FVector>& OutUEVector, const int size)
    {
        OutUEVector.Empty();
        for (auto i = 0; i < size; ++i)
        {
            OutUEVector.Emplace(InROSVector[i].x, InROSVector[i].y, InROSVector[i].z);
        }
    }

    /**
     * @brief Convert UE FVector to ROS geometry_msgs__msg__Vector3 or geometry_msgs__msg__Point.
     *
     * @tparam TVector geometry_msgs__msg__Vector3 or geometry_msgs__msg__Point.
     * @param InUEVector
     * @return TVector
     */
    template<typename TVector>
    static TVector VectorUEToROS(const FVector& InUEVector)
    {
        TVector OutROSVector;
        OutROSVector.x = InUEVector.X;
        OutROSVector.y = InUEVector.Y;
        OutROSVector.z = InUEVector.Z;

        return OutROSVector;
    }

    /**
     * @brief Convert UE FVector to ROS geometry_msgs__msg__Vector3 or geometry_msgs__msg__Point.
     * malloc and free must be done before this function call.
     * @tparam TVector geometry_msgs__msg__Vector3 or geometry_msgs__msg__Point.
     * @param InUEVector
     * @param OutROSVector
     * @param size
     */
    template<typename TVector>
    static void VectorArrayUEToROSSequence(const TArray<FVector>& InUEVector, TVector* OutROSVector, const int size)
    {
        for (auto i = 0; i < size; ++i)
        {
            OutROSVector[i].x = InUEVector[i].X;
            OutROSVector[i].y = InUEVector[i].Y;
            OutROSVector[i].z = InUEVector[i].Z;
        }
    }

    // Quat
    /**
     * @brief Convert ROS geometry_msgs__msg__Quaternion to UE FQuat.
     *
     * @param InROSQuat
     * @return FQuat
     */
    static FQuat QuatROSToUE(const geometry_msgs__msg__Quaternion& InROSQuat)
    {
        return FQuat(InROSQuat.x, InROSQuat.y, InROSQuat.z, InROSQuat.w);
    }

    /**
     * @brief Convert ROS geometry_msgs__msg__Quaternion to UE FQuat.
     *
     * @param InROSQuat
     * @param OutUEQuat
     * @param size
     */
    static void QuatSequenceROSToUEArray(const geometry_msgs__msg__Quaternion* InROSQuat, TArray<FQuat> OutUEQuat, const int size)
    {
        OutUEQuat.Empty();
        for (auto i = 0; i < size; ++i)
        {
            OutUEQuat.Emplace(InROSQuat[i].x, InROSQuat[i].y, InROSQuat[i].z, InROSQuat[i].w);
        }
    }

    /**
     * @brief Convert UE FQuat to ROS geometry_msgs__msg__Quaternion.
     *
     * @param InUEQuat
     * @return geometry_msgs__msg__Quaternion
     */
    static geometry_msgs__msg__Quaternion QuatUEToROS(const FQuat& InUEQuat)
    {
        geometry_msgs__msg__Quaternion OutROSQuat;
        OutROSQuat.x = InUEQuat.X;
        OutROSQuat.y = InUEQuat.Y;
        OutROSQuat.z = InUEQuat.Z;
        OutROSQuat.w = InUEQuat.W;

        return OutROSQuat;
    }

    /**
     * @brief Convert UE FQuat to ROS geometry_msgs__msg__Quaternion.
     * malloc and free must be done before this function call.
     * @param InUEQuat
     * @param OutROSQuat
     * @param size
     */
    static void QuatArrayUEToROSSequence(const TArray<FQuat>& InUEQuat, geometry_msgs__msg__Quaternion* OutROSQuat, const int size)
    {
        for (auto i = 0; i < size; ++i)
        {
            OutROSQuat[i].x = InUEQuat[i].X;
            OutROSQuat[i].y = InUEQuat[i].Y;
            OutROSQuat[i].x = InUEQuat[i].Z;
            OutROSQuat[i].w = InUEQuat[i].W;
        }
    }

    // Transform
    /**
     * @brief Convert ROS geometry_msgs__msg__Transform to UE FTransform.
     *
     * @param InROSTF
     * @return FTransform
     */
    static FTransform TransformROSToUE(const geometry_msgs__msg__Transform& InROSTF)
    {
        return FTransform(QuatROSToUE(InROSTF.rotation), VectorROSToUE<geometry_msgs__msg__Vector3>(InROSTF.translation));
    }

    /**
     * @brief Convert ROS geometry_msgs__msg__Transform to UE FTransform.
     *
     * @param InROSTF
     * @param OutUETF
     * @param size
     */
    static void TransformSequenceROSToUEArray(const geometry_msgs__msg__Transform* InROSTF,
                                              TArray<FTransform>& OutUETF,
                                              const int size)
    {
        OutUETF.Empty();
        for (auto i = 0; i < size; ++i)
        {
            OutUETF.Emplace(QuatROSToUE(InROSTF[i].rotation), VectorROSToUE<geometry_msgs__msg__Vector3>(InROSTF[i].translation));
        }
    }

    /**
     * @brief Convert UE FTransform to ROS geometry_msgs__msg__Transform.
     *
     * @param InUETF
     * @return geometry_msgs__msg__Transform
     */
    static geometry_msgs__msg__Transform TransformUEToROS(const FTransform& InUETF)
    {
        geometry_msgs__msg__Transform OutROSTF;
        OutROSTF.translation = VectorUEToROS<geometry_msgs__msg__Vector3>(InUETF.GetTranslation());
        OutROSTF.rotation = QuatUEToROS(InUETF.GetRotation());

        return OutROSTF;
    }

    /**
     * @brief Convert  ROS geometry_msgs__msg__Transform to UE FTransform
     *
     * @param InUETF
     * @param OutROSTF
     * @param size
     */
    static void TransformArrayUEToROSSequence(const TArray<FTransform>& InUETF,
                                              geometry_msgs__msg__Transform* OutROSTF,
                                              const int size)
    {
        for (auto i = 0; i < size; ++i)
        {
            OutROSTF[i].translation = VectorUEToROS<geometry_msgs__msg__Vector3>(InUETF[i].GetTranslation());
            OutROSTF[i].rotation = QuatUEToROS(InUETF[i].GetRotation());
        }
    }
};
