

Please follow the instructions in  :ref:`setup_and_run_ue_project` to set up the UE project 
and open `ROS2TopicExample.umap <https://github.com/rapyuta-robotics/turtlebot3-UE/blob/devel/Content/Maps/ROS2TopicExamples.umap>`_.

-----------------------------
C++ Publisher
-----------------------------

^^^^^^^^^^^^^^^^^^
.cpp code overview
^^^^^^^^^^^^^^^^^^
.. code-block:: C++

    //ROS2PublisherNode.cpp

    AROS2PublisherNode::AROS2PublisherNode()
    {
        Node = CreateDefaultSubobject<UROS2NodeComponent>(TEXT("ROS2NodeComponent"));

        // these parameters can be change from BP
        Node->Name = TEXT("publisher_node");
        Node->Namespace = TEXT("cpp");
    }

    void AROS2PublisherNode::BeginPlay()
    {
        Super::BeginPlay();

        Node->Init();

        // Create publisher with 3 different way.
        // 1. Non Loop Publisher
        // 2. Loop Publisher
        // 3. Custom Publisher class

        // 1. Non Loop Publisher
        // 1.1 Create publisher
        Publisher = Node->CreatePublisher(TopicName, UROS2Publisher::StaticClass(), UROS2StrMsg::StaticClass(), UROS2QoS::KeepLast);

        // 1.2 Create msg
        FROSStr msg;
        msg.Data = FString::Printf(TEXT("%s from non loop publisher"), *Message);
        CastChecked<UROS2StrMsg>(Publisher->TopicMessage)->SetMsg(msg);

        // 1.3 publish
        Publisher->Publish();

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

        // 3. Use Custom Publisher class
        // UpdateMessage is overriden in child class.
        StringPublisher = CastChecked<URRROS2StringPublisher>(
            Node->CreateLoopPublisherWithClass(TopicName, URRROS2StringPublisher::StaticClass(), 1.f));
        StringPublisher->Message = FString::Printf(TEXT("%s from custom class"), *Message);
    }

    void AROS2PublisherNode::UpdateMessage(UROS2GenericMsg* InMessage)
    {
        FROSStr msg;
        msg.Data = FString::Printf(TEXT("%s %d"), *Message, Count++);
        CastChecked<UROS2StrMsg>(InMessage)->SetMsg(msg);
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




-----------------------------
BP Publisher
-----------------------------

Blueprint implementation of publisher is very similar to C++ implementation.
Blueprint provide you to set logic/process, parametrs and etc from editor.

\* please enlarge image if font is too small or open BP class in the editor.

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Overview of BP Publisher
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. image:: ../images/publisher_overview.png

Same as C++, BP class has 3 type of publishers, Non Loop Publisher, Loop Publisher and Custom Publisher.

The main difference of publishers is it uses UROS2PublisherComponent instead of UROS2Publisher.
Since UROS2PublisherComponent is child class of UActorComponent, you can easily add to the Actor and set parameters 
from editor. 

Each publisher is attached to Actor shown in left `components` panel.

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Detailes of BP Publisher
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. image:: ../images/publisher_node.png

Initialize ROS2 Node with BeginPlay event. You can set ROSNode parameters from right `detail` panel. 
Name and Namespace are set in the panel.

Non Loop Publisher
~~~~~~~~~~~~~~~~~~~~~~

.. image:: ../images/publisher_non_loop.png

Compared to C++, in Blueprint, the Publisher is already generated as a Component before BeginPlay, 
so instead we use AddPublisher. 
AddPublisher initializes the Publisher. The CreatePublisher in C++ calls AddPublisher internally.

You can see parameters such as Topic Name, Publisher Class, Msg Class are set in the right `detail` panel.

Loop Publisher
~~~~~~~~~~~~~~~~~~~~~~

.. image:: ../images/publisher_loop.png

Call back function is bounded with custom event, red node in the center.
You can use UE function as a callback function as well.

Custom Publisher class
~~~~~~~~~~~~~~~~~~~~~~

.. image:: ../images/publisher_custom.png

To set paramter to custom publisher object, we create a variable of custom publisher class and set it to the publisher component.
