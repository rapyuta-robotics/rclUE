// Copyright (C) Rapyuta Robotics


#include "OdomPublisher.h"


// Sets default values for this component's properties
UOdomPublisher::UOdomPublisher()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOdomPublisher::BeginPlay()
{
	Super::BeginPlay();
	
}


// Called every frame
void UOdomPublisher::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

//todo create common Cpp function library
FTransform UOdomPublisher::UEToROS(FTransform Input)
{
    FTransform Output = Input;
    
    FVector Translation = Input.GetTranslation();
    FQuat Rotation = Input.GetRotation();

    // todo properly handle transfrom
    Translation.X = Translation.X/100.0f;
    Translation.Y = -Translation.Y/100.0f;
    Translation.Z = Translation.Z/100.0f;
    Rotation.X = -Rotation.X;
	Rotation.Z = -Rotation.Z;
    
    Output.SetTranslation(Translation);
    Output.SetRotation(Rotation);

    return Output;
}

void UOdomPublisher::InitOdomPublisher(APawn *InPawn, AROS2Node *Node){
    Vehicle = InPawn;
	InitialTransform = Vehicle->GetActorTransform();
	TopicPublisher = NewObject<UROS2Publisher>(this, UROS2Publisher::StaticClass());
	TopicPublisher->RegisterComponent();
	TopicPublisher->MsgClass = UROS2OdometryMsg::StaticClass();
	TopicPublisher->TopicName = TopicName;
	TopicPublisher->PublicationFrequencyHz = PublicationFrequencyHz;
	TopicPublisher->UpdateDelegate.BindDynamic(this, &UOdomPublisher::UpdateOdomMsg);
	Node->AddPublisher(TopicPublisher);
	TopicPublisher->Init(UROS2QoS::KeepLast);

	if(PublishTF){
		TFPublisher = NewObject<UTFPublisher>(this, UTFPublisher::StaticClass());
		TFPublisher->RegisterComponent();
		TFPublisher->IsStatic = false;
		TFPublisher->PublicationFrequencyHz = PublicationFrequencyHz;
		TFPublisher->InitTfPublisher(Node);
	}
}

void UOdomPublisher::UpdateOdomMsg(UROS2GenericMsg *Message){
    FOdometryData OdomData;

    float TimeNow = UGameplayStatics::GetTimeSeconds(GWorld);
	OdomData.sec = (int32_t)TimeNow;
	unsigned long long ns = (unsigned long long)(TimeNow * 1000000000.0f);
	OdomData.nanosec = (uint32_t)(ns - (OdomData.sec * 1000000000ul));

	OdomData.frame_id = FrameId;
	OdomData.child_frame_id = ChildFrameId;

	// FVector Trans = 
	FTransform VehicleTransformROS = UEToROS(Vehicle->GetActorTransform());
	FTransform InitialTransformROS = UEToROS(InitialTransform);
	OdomData.position = (VehicleTransformROS.GetTranslation()- InitialTransformROS.GetTranslation() );
	OdomData.orientation = VehicleTransformROS.GetRotation();
    // todo temporary hardcoded
    // OdomData.pose_covariance = PoseCovariance;
	OdomData.pose_covariance.Init(0,36);
	OdomData.pose_covariance[0] = 0.00001;
	OdomData.pose_covariance[7] = 0.00001;
	OdomData.pose_covariance[14] = 1000000000000.0;
	OdomData.pose_covariance[21] = 1000000000000.0;
	OdomData.pose_covariance[28] = 1000000000000.0;
	OdomData.pose_covariance[35] = 0.001;

	UKinematicsMovementComponent *KinematicsMovementComponent = Cast<UKinematicsMovementComponent>(Vehicle->GetMovementComponent());

	// todo create UE2ROS conversion
	OdomData.linear = KinematicsMovementComponent->Velocity / 100.0f;
	OdomData.linear.Y = - OdomData.linear.Y;
	OdomData.angular = FMath::DegreesToRadians(KinematicsMovementComponent->AngularVelocity);
	OdomData.angular.Z = -OdomData.angular.Z;

    // todo temporary hardcoded
    // OdomData.twist_covariance = TwistCovariance; 
	OdomData.twist_covariance.Init(0,36);
	OdomData.twist_covariance[0] = 0.00001;
	OdomData.twist_covariance[7] = 0.00001;
	OdomData.twist_covariance[14] = 1000000000000.0;
	OdomData.twist_covariance[21] = 1000000000000.0;
	OdomData.twist_covariance[28] = 1000000000000.0;
	OdomData.twist_covariance[35] = 0.001;
    
    UROS2OdometryMsg *OdomMessage = Cast<UROS2OdometryMsg>(Message);
    OdomMessage->Update(OdomData);

	if(PublishTF){
		TFPublisher->IsStatic = false;
		TFPublisher->FrameId = FrameId;
		TFPublisher->ChildFrameId = ChildFrameId;
		TFPublisher->SetTransform(Vehicle->GetActorTransform().GetTranslation()- InitialTransform.GetTranslation(), Vehicle->GetActorTransform().GetRotation());
	}
}