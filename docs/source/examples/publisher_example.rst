

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


.. _publisher_examin_code:

^^^^^^^^^^^^^^^^^^
Examin the code
^^^^^^^^^^^^^^^^^^

The UROS2NodeComponent is created and initialized in the constructor of the ROS2PublisherNode Actor. 
However, the ROS2 Node is not yet created/initialized at this point. 
The initialization of the ROS2 Node occurs during the BeginPlay method, 
which is called when the simulation starts.

One reason to initialize in BeginPlay is to create a ROS2 Node when the simulation starts. 
It is important to note that the UE Class constructor may also be called before simulation start, for example, 
when an Actor is placed in the level. For a better understanding of Actor Lifecycle, please refer to the
`UE Actor LifeCycle <https://docs.unrealengine.com/5.1/en-US/unreal-engine-actor-lifecycle/>`_ 
However, understanding the entire lifecycle is not necessary to use rclUE.

Another significant difference is that by initializing in BeginPlay, 
variables such as publication frequency can be set in the editor and 
their changes will be reflected when running the simulation.
If, in contrast, we initialize things in the constructor,
variables changed in the editor would not reflect in the simulation,
unless we restart the editor.

.. code-block:: C++

    AROS2PublisherNode::AROS2PublisherNode()
    {
        Node = CreateDefaultSubobject<UROS2NodeComponent>(TEXT("ROS2NodeComponent"));

        // these parameters can be change from BP
        Node->Name = TEXT("publisher_node");
        Node->Namespace = TEXT("cpp");
    }

When simulation starts, BeginPlay is called. In the BeginPlay, 
firstly create and initialize ROS2 Node by Node->Init().

.. code-block:: C++

    void AROS2PublisherNode::BeginPlay()
    {
        Super::BeginPlay();

        Node->Init();

then starts adding publishers. We intorduce 3 ways to add publisher here.


Non Loop Publisher
~~~~~~~~~~~~~~~~~~~~~~

This will create publisher and publish message once. 
It is a very straightforward way to publish a message, 
which involves creating a publisher, creating a message, and publishing the message.

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

You can create a loop publisher by using the ROS2_CREATE_LOOP_PUBLISHER_WITH_QOS macro. 
This macro creates a publisher and adds it to the node, 
and then it periodically calls the AROS2PublisherNode::UpdateMessage method.

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

UpdateMessage method does similar things as a non-loop publisher. 
Since the loop publisher automatically calls the "Publish()" method, 
you only need to create and set the message.

.. code-block:: C++

    void AROS2PublisherNode::UpdateMessage(UROS2GenericMsg* InMessage)
    {
        FROSStr msg;
        msg.Data = FString::Printf(TEXT("%s %d"), *Message, Count++);
        CastChecked<UROS2StrMsg>(InMessage)->SetMsg(msg);
    }

The implementation of ROS2_CREATE_LOOP_PUBLISHER_WITH_QOS is as follows. 
It uses Unreal Engine's dynamic delegate to call a bound function periodically. 
You can find more information about Unreal Engine's dynamic delegate 
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

You can create a publisher by defining a child class of UROS2Publisher. 
This is useful when you want to add some custom logic to the publisher that will be used in multiple places.

.. code-block:: C++

        // 3. Use Custom Publisher class
        // UpdateMessage is overriden in child class.
        StringPublisher = CastChecked<URRROS2StringPublisher>(
            Node->CreateLoopPublisherWithClass(TopicName, URRROS2StringPublisher::StaticClass(), 1.f));
        StringPublisher->Message = FString::Printf(TEXT("%s from custom class"), *Message);

The implementation of UROS2StringPublisher is as follows. 
UROS2StringPublisher is a child class of UROS2Publisher.

The constructor is used to set default publisher settings. 
You can add user-defined logic by overriding the UpdateMessage method, which is called periodically if PublicationFrequencyHz > 0.

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

Blueprint implementation of a publisher is very similar to a C++ implementation. 
Blueprints allow you to set logic/processes, parameters, and other details from the editor.

\* Please enlarge the image if the font is too small, or open the BP class in the editor.

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Overview of BP Publisher
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. image:: ../images/publisher_overview.png


Similar to the C++ implementation, the BP class has three types of publishers: 
Non-Loop Publisher, Loop Publisher, and Custom Publisher.

The main difference from the C++ implementation is that 
it uses UROS2PublisherComponent instead of UROS2Publisher. 
As UROS2PublisherComponent is a child class of UActorComponent, 
you can easily add it to the Actor and set parameters from the editor.

Each publisher is attached to an Actor, which is displayed in the `components`` panel on the left.

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Detailes of BP Publisher
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. image:: ../images/publisher_node.png

Initialize the ROS2 Node using the BeginPlay event. 
You can set the ROSNode parameters, such as Name and Namespace, 
from the `detail` panel on the right.

Non Loop Publisher
~~~~~~~~~~~~~~~~~~~~~~

.. image:: ../images/publisher_non_loop.png

Compared to C++, which uses CreatePublisher(), 
in Blueprint, the Publisher is already generated as a Component before BeginPlay. 
Therefore, we use AddPublisher to initialize the Publisher instead. 
The CreatePublisher function in C++ internally calls AddPublisher.

You can see that parameters such as Topic Name, Publisher Class, and Msg Class are set in the right `details`` panel..

Loop Publisher
~~~~~~~~~~~~~~~~~~~~~~

.. image:: ../images/publisher_loop.png

Callback function is bound to a custom event, indicated by the red node in the center. 
This callback function is executed at regular intervals with a specified frequency.

Custom Publisher class
~~~~~~~~~~~~~~~~~~~~~~

.. image:: ../images/publisher_custom.png

To set parameters for a custom publisher object, 
we need to create a variable of the custom publisher class and then assign it to the publisher component.
