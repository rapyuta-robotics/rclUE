

Please follow  :ref:`setup_and_run_ue_project` to setup UE project 
and open  `ROS2TopicExample.umap <https://github.com/rapyuta-robotics/turtlebot3-UE/blob/devel/Content/Maps/ROS2TopicExamples.umap>`_.

-----------------------------
C++ Publisher
-----------------------------

^^^^^^^^^^^^^^^^^^
.cpp code overview
^^^^^^^^^^^^^^^^^^
.. code-block:: C++

    //ROS2SubscriberNode.cpp

    AROS2SubscriberNode::AROS2SubscriberNode()
    {
        Node = CreateDefaultSubobject<UROS2NodeComponent>(TEXT("ROS2NodeComponent"));

        // these parameters can be change from BP
        Node->Name = TEXT("subscriber_node");
        Node->Namespace = TEXT("cpp");
    }

    void AROS2SubscriberNode::BeginPlay()
    {
        Super::BeginPlay();
        Node->Init();

        ROS2_CREATE_SUBSCRIBER(Node, this, TopicName, UROS2StrMsg::StaticClass(), &AROS2SubscriberNode::MsgCallback);
    }

    void AROS2SubscriberNode::MsgCallback(const UROS2GenericMsg* InMsg)
    {
        const UROS2StrMsg* stringMsg = Cast<UROS2StrMsg>(InMsg);
        if (stringMsg)
        {
            FROSStr msg;
            stringMsg->GetMsg(msg);
            UE_LOG_WITH_INFO_NAMED(LogTurtlebot3, Log, TEXT("%s"), *msg.Data);
        }
    }


^^^^^^^^^^^^^^^^^^
Examin the code
^^^^^^^^^^^^^^^^^^

On a ROS2PublisherNode Actor, NodeComponent is created and initialized at constructor.
NodeComponent is created.

UROS2NodeComponent is created at here but ROS2 Node is not created/initialized yet.
We initialize ROS2 Node at BeginPlay,
a method for Actors that gets called when we start the simulation.

.. code-block:: C++

    AROS2PublisherNode::AROS2PublisherNode()
    {
        Node = CreateDefaultSubobject<UROS2NodeComponent>(TEXT("ROS2NodeComponent"));

        // these parameters can be change from BP
        Node->Name = TEXT("publisher_node");
        Node->Namespace = TEXT("cpp");
    }

One reason to initialize in Beginplay is that we want to create ROS2 Node when simulation is started.
UE Class constructor is called before simulation start as well in some cases, e.g. Actor is placed in the level.
Please check `UE actor LifeCycle <https://docs.unrealengine.com/5.1/en-US/unreal-engine-actor-lifecycle/>`_ 
for more understanding of Actor Lifecycle but it is not required to understand fully to use rclUE.

Another important distinction is that by initializing things in BeginPlay,
variables (such as publication frequency) can be set in the editor
and their change will be reflected when running the simulation.
If, in contrast, we initialize things in the constructor,
variables changed in the editor would not reflect in the simulation,
unless we restart the editor.

When simulation starts, BeginPlay is called. In the BeginPlay, firstly create and initialize ROS2 Node.

.. code-block:: C++

        Node->Init();

then starts adding publishers. We intorduce 3 ways to add publisher here.


Non Loop Publisher
~~~~~~~~~~~~~~~~~~~~~~

This will create publisher and publish message once. 
It is very straightforward way to publish msg, i.e. create publisher, create msg, and publish msg.

.. code-block:: C++

        // 1. Non Loop Publisher
        // 1.1 Create publisher
        Publisher = Node->CreatePublisher(TopicName, UROS2Publisher::StaticClass(), UROS2StrMsg::StaticClass(), UROS2QoS::KeepLast);

        // 1.2 Create msg
        FROSStr msg;
        msg.Data = FString::Printf(TEXT("%s from non loop publisher"), *Message);
        CastChecked<UROS2StrMsg>(Publisher->TopicMessage)->SetMsg(msg);

        // 1.3 publish
        Publisher->Publish();

Loop Publisher
~~~~~~~~~~~~~~~~~~~~~~

You can create Loop publisher by using ROS2_CREATE_LOOP_PUBLISHER_WITH_QOS macro.
This macro will create publisher and add it to node.
Then it will call AROS2PublisherNode::UpdateMessage method periodically.


.. code-block:: C++

        // 2. Loop Publisher
        ROS2_CREATE_LOOP_PUBLISHER_WITH_QOS(Node,
                                            this,
                                            TopicName,
                                            UROS2Publisher::StaticClass(),
                                            UROS2StrMsg::StaticClass(),
                                            PublicationFrequencyHz,
                                            &AROS2PublisherNode::UpdateMessage,
                                            UROS2QoS::Default,
                                            LoopPublisher);

UpdateMessage method do a simillar things as Non Loop Publisher.
Since loop publisher will call Publish() method automatically, you just needs to create and set msg.

.. code-block:: C++

    void AROS2PublisherNode::UpdateMessage(UROS2GenericMsg* InMessage)
    {
        FROSStr msg;
        msg.Data = FString::Printf(TEXT("%s %d"), *Message, Count++);
        CastChecked<UROS2StrMsg>(InMessage)->SetMsg(msg);
    }

ROS2_CREATE_LOOP_PUBLISHER_WITH_QOS 's implementation is following.
It uses UE's dynamic delegate to call bound function periodically. 
You can find more information about UE's dynamic delegate 
`here <https://docs.unrealengine.com/5.1/en-US/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/TDelegates/>`_.

.. code-block:: C++

    DECLARE_DYNAMIC_DELEGATE_OneParam(FTopicCallback, UROS2GenericMsg*, InTopicMessage);

    #define ROS2_CREATE_LOOP_PUBLISHER_WITH_QOS(                                                                                  \
        InROS2Node, InUserObject, InTopicName, InPublisherClass, InMsgClass, InPubFrequency, InCallback, InQoS, OutPublisher)     \
        if (ensure(IsValid(InROS2Node)))                                                                                          \
        {                                                                                                                         \
            FTopicCallback cb;                                                                                                    \
            cb.BindDynamic(InUserObject, InCallback);                                                                             \
            OutPublisher = InROS2Node->CreateLoopPublisher(InTopicName, InPublisherClass, InMsgClass, InPubFrequency, cb, InQoS); \
        }


Custom Publisher class
~~~~~~~~~~~~~~~~~~~~~~
You can create publisher from user defined child class of UROS2Publisher.
This is useful when you want to add some custom logic to publisher which is used in many places.

.. code-block:: C++

        // 3. Use Custom Publisher class
        // UpdateMessage is overriden in child class.
        StringPublisher = CastChecked<URRROS2StringPublisher>(
            Node->CreateLoopPublisherWithClass(TopicName, URRROS2StringPublisher::StaticClass(), 1.f));
        StringPublisher->Message = FString::Printf(TEXT("%s from custom class"), *Message);

UROS2StringPublisher's implementation is following. 
UROS2StringPublisher is a child class of UROS2Publisher and override constructor and UpdateMessage method.

Constructor is used to set default publisher settings and 
add user defined logic to UpdateMessage method which is called periodically if PublicationFrequencyHz > 0.

.. code-block:: C++

    // RRROS2StringPublisher.cpp
    #include "Msgs/ROS2Str.h"

    URRROS2StringPublisher::URRROS2StringPublisher()
    {
        MsgClass = UROS2StrMsg::StaticClass();
        PublicationFrequencyHz = 1;
        QoS = UROS2QoS::DynamicBroadcaster;
        SetDefaultDelegates();    //use UpdateMessage as update delegate
    }

    void URRROS2StringPublisher::UpdateMessage(UROS2GenericMsg* InMessage)
    {
        FROSStr msg;
        msg.Data = Message;
        CastChecked<UROS2StrMsg>(InMessage)->SetMsg(msg);
    }




To add a subscription, after the node is initialized,
we bind a callback function to the object of type
FSubscriptionCallback and call AddSubscription.

In this example, we used a publisher and a subscriber node
to keep it simple, but in practical use cases,
the elements presented should be integrated
in the actors that need these functionalities.

Blueprint
^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. raw:: html

   <iframe width="560" height="315" src="https://www.youtube.com/embed/n40sYyrkAt0" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

.. image:: images/publisher_bp.png

Setup of a ROS2 Node with a string publisher: initialize
the Actor ROS2Node actor, then add the ActorComponent
Publisher and initialize it on the node that will publish the message.
The node and publisher parameters (node name, message type,
topic name and publication frequency) are set in the Details panel
(note that the red line connects to the callback function shown at the bottom).

.. image:: images/subscriber_bp.png

Setup of a ROS2 Node with a string subscriber: initialize the Actor ROS2Node actor,
then add the subscription and bind callback function which
prints the logs on the window (note that the red line connects
to the callback function shown at the bottom).

Note that this is only one of the many ways in which a pubsub can be set up.
