

Please follow the instructions in  :ref:`setup_and_run_ue_project` to setup the UE project 
and open  `ROS2TopicExample.umap <https://github.com/rapyuta-robotics/turtlebot3-UE/blob/devel/Content/Maps/ROS2TopicExamples.umap>`_.

-----------------------------
C++ Subscriber
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

On an AROS2SubscriberNode Actor, similar to the AROS2PublisherrNode, 
NodeComponent is created and initialized in the constructor but ROS2 Node is not created here.
Please check :ref:`publisher_examin_code` for the reason.

.. code-block:: C++

    AROS2SubscriberNode::AROS2SubscriberNode()
    {
        Node = CreateDefaultSubobject<UROS2NodeComponent>(TEXT("ROS2NodeComponent"));

        // these parameters can be change from BP
        Node->Name = TEXT("subscriber_node");
        Node->Namespace = TEXT("cpp");
    }


When the simulation starts, BeginPlay is called. 
In BeginPlay, firstly create and initialize the ROS2 Node by calling Node->Init().

.. code-block:: C++

    void AROS2SubscriberNode::BeginPlay()
    {
        Super::BeginPlay();
        Node->Init();


You can create a subscriber by using the ROS2_CREATE_SUBSCRIBER macro, 
which creates a subscriber and adds it to the node. 
When the node receives a message, AROS2SubscriberNode::MsgCallback is called.


.. code-block:: C++

    ROS2_CREATE_SUBSCRIBER(Node, this, TopicName, UROS2StrMsg::StaticClass(), &AROS2SubscriberNode::MsgCallback);

MsgCallback method simply prints the received message in this example.

.. code-block:: C++

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

The implementation of ROS2_CREATE_SUBSCRIBER is as follows. 
It uses Unreal Engine's dynamic delegate to call the bound function 
when the node receives the message. 
You can find more information about Unreal Engine's dynamic delegate .
`here <https://docs.unrealengine.com/5.1/en-US/ProgrammingAndScripting/ProgrammingWithCPP/UnrealArchitecture/TDelegates/>`_.

.. code-block:: C++

    DECLARE_DYNAMIC_DELEGATE_OneParam(FSubscriptionCallback, const UROS2GenericMsg*, InMessage);

    #define ROS2_CREATE_SUBSCRIBER(InROS2Node, InUserObject, InTopicName, InMsgClass, InCallback) \
        if (ensure(IsValid(InROS2Node)))                                                          \
        {                                                                                         \
            FSubscriptionCallback cb;                                                             \
            cb.BindDynamic(InUserObject, InCallback);                                             \
            InROS2Node->CreateSubscriber(InTopicName, InMsgClass, cb);                            \
        }


-----------------------------
BP Subscriber
-----------------------------

Blueprint implementation of a subscriber is very similar to a C++ implementation. 
Blueprints allow you to set logic/processes, parameters, and other details from the editor.

The main difference from the C++ implementation is that 
it uses UROS2SubscriberComponent instead of UROS2Subscriber. 
As UROS2SubscriberComponent is a child class of UActorComponent, 
you can easily add it to the Actor and set parameters from the editor.

.. image:: ../images/subscriber_overview.png

The Subscriber component is attached to an Actor, which is displayed in the `components`` panel on the left.

.. image:: ../images/subscriber_node.png

Initialize the ROS2 Node using the BeginPlay event. 
You can set the ROSNode parameters, such as Name and Namespace, 
from the `detail` panel on the right.

.. image:: ../images/subscriber_component.png

Callback function is bound to a custom event, indicated by the red node in the center. 
This callback function is called when the node receives a message.

