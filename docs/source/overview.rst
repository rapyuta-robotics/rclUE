Overview of a group of **rclUE** software
==========================================

Features
--------

.. image:: images/features.png

Repositories
------------

.. image:: images/repositories.png

Above figure shows overview of related repositories. Please reference this structure when you create your own ROS2 UE simulations.

`turtlebot3-UE <https://github.com/rapyuta-robotics/turtlebot3-UE>`_
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Basic example repository of ROS2 UE simulation.


`rclUE(this repository) <https://github.com/rapyuta-robotics/rclUE>`_
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
ROS2 integration features such as creating ROS2 Node, publisher/subscriber and etc.

`RapyutaSimulationPlugins <https://rapyutasimulationplugins.readthedocs.io/en/devel/index.html>`_
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Provides feature to create ROS2 controllable actor, e.g. robot and sensors.
Most of the features in top figure are provided by this repository.
Please check `overview of RapyutaSimulationPlugins <https://rapyutasimulationplugins.readthedocs.io/en/devel/overview.html>`_

`UE_tools <https://github.com/rapyuta-robotics/UE_tools>`_
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Provides non UE plugin tools such as custom msg generation for UE.
Please follow README to add new msgs to rclUE.

\* *Please check [CustomMsgExample](https://github.com/yuokamoto/rclUE-Examples/blob/custom_msg_example/Plugins/CustomMsgExample/README.md) as a example of custom msg in different plugin then rclUE.

`UE_msgs <https://github.com/rapyuta-robotics/UE_msgs>`_
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Includes ROS2 msg/srv/action files. Please use `UE_tools <https://github.com/rapyuta-robotics/UE_tools>`_
to generate necessary C++ files for UE plugins.


Other example repositories
--------------------------

`rclUE-Examples <https://github.com/yuokamoto/rclUE-Examples>`_
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Complicated example repository of ROS2 UE simulation including warehouse, human character, etc.

`rclUE_client_example <https://github.com/yuokamoto/rclUE_client_example>`_
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
ROS2 Client example repository to control rclUE-Example project.
