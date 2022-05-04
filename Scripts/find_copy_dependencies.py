import os, sys, shutil
from find_libs_dependensies import FindLibsDependencies

# ! run command before using this script '. ~/ros2_foxy/install/local_setup.bash'

ros2 = '/home/vilkun/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib/lib' # sys.argv[1]
#libInit = '/home/vilkun/work/build_foxy/rclc/rclc/build/rclc/librclc.so' #'/home/vilkun/work/build_foxy/rcl/rcl/build/rcl/librcl.so' # sys.argv[2]
libInit = '/home/vilkun/ros2_foxy/install/rmw_dds_common/lib/librmw_dds_common__rosidl_typesupport_introspection_c.so'

prefixSystem = '/lib/x86_64-linux-gnu'
prefixRos2 = '/home/vilkun/ros2_foxy/install'

libs = FindLibsDependencies(libInit, prefixSystem, prefixRos2)

for lib in libs:
    copyTo = ros2 + '/' + os.path.basename(lib)

    if os.path.exists(copyTo):
        os.remove(copyTo)

    print('Updating:', copyTo)
    shutil.copy(lib, copyTo)