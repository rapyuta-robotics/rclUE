Examples
---------
You can find ROS2 Topic, Service and Action examples in
`turtlebot3-UE <https://github.com/rapyuta-robotics/turtlebot3-UE>`_

This is a simple example of how to use ROS2 Topic, Service and Action in Unreal Engine 5.
Please check `documentation of RapyutaSimulationPlugins <https://rapyutasimulationplugins.readthedocs.io/en/latest/>`_
to learn about how to create ROS enabled robots in Unreal Engine 5.


.. _setup_and_run_ue_project:

^^^^^^^^^^^^^^^^^^^^^^^^
Setup and run UE Project
^^^^^^^^^^^^^^^^^^^^^^^^
1. Download the lastest UE5 for Linux by following `Unreal Engine for Linux <https://www.unrealengine.com/en-US/linux>`_.
2. Clone and build

.. code-block:: shell

    git clone `turtlebot3-UE <https://github.com/rapyuta-robotics/turtlebot3-UE/>`_
    cd turtlebot3-UE
    ./update_project_files.sh
    ./make_editor.sh

3. Run

.. code-block:: shell

    ./run_editor.sh

4. Open `turtlebot3-UE/Content/Maps/ROS2<Topic/Service/Action>Examples.umap` and Play.

Since the prooject is set to use
`ROS2 with Discovery Server <https://docs.ros.org/en/foxy/Tutorials/Advanced/Discovery-Server/Discovery-Server.html>`_
to communicate with ROS2 Node in UE, you needs to execute `source turtlebot3_UE/fastdds_setup.sh`.

\* In `jammy` branch, you can execute `./run_editor false` to run project without Discovery Server.

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Topic/Service/Action Examples
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Blueprint classes are in `turtlebot3-UE/Content/Blueprints/ROS2Examples <https://github.com/rapyuta-robotics/turtlebot3-UE/tree/devel/Content/Blueprints/ROS2Examples>`_.

C++ classes are in `turtlebot3-UE/Source/turtlebot3/ROS2Examples <https://github.com/rapyuta-robotics/turtlebot3-UE/tree/devel/Source/turtlebot3/ROS2Examples>`_.

In the following examples, we used communication components and node
to keep it simple, but in practical use cases,
the elements presented should be integrated
in the actors that need these functionalities.

.. toctree::

    examples/publisher_example
    examples/subscriber_example
    examples/service_client_example
    examples/service_server_example
    examples/action_client_example
    examples/action_server_example
