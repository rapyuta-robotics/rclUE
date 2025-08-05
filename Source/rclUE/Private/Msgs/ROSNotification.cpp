#include "Msgs/ROSNotification2D.h"

void UROSNotification2DMsg::Init()
{
    guided_vr_interfaces__msg__Notification2D__init(&Notification2D_msg);
}

void UROSNotification2DMsg::Fini()
{
    guided_vr_interfaces__msg__Notification2D__fini(&Notification2D_msg);
}

const rosidl_message_type_support_t* UROSNotification2DMsg::GetTypeSupport() const
{
    return ROSIDL_GET_MSG_TYPE_SUPPORT(guided_vr_interfaces, msg, Notification2D);
}

void UROSNotification2DMsg::SetMsg(const FROSNotification2D& Input)
{
    Input.SetROS2(Notification2D_msg);
}

void UROSNotification2DMsg::GetMsg(FROSNotification2D& Output) const
{
    Output.SetFromROS2(Notification2D_msg);
}

void* UROSNotification2DMsg::Get()
{
    return &Notification2D_msg;
}

FString UROSNotification2DMsg::MsgToString() const
{
    // Provide a readable summary
    return FString::Printf(
        TEXT("Notification2D(Source=%s, Level=%d, Id=%d, PolygonPoints=%d)"),
        *FString(Notification2D_msg.source.data.data),
        Notification2D_msg.level.data,
        Notification2D_msg.id,
        static_cast<int32>(Notification2D_msg.polygon.size)
    );
}