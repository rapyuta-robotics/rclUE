import os, sys, shutil

folderFrom  = '/home/vilkun/ros2_foxy/build'
ros2 = '/home/vilkun/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib'
ros2Lib = ros2 + '/lib'
ros2Include = ros2 + '/include'
#libsInclude = set()

for dirpath,subdirs,files in os.walk(ros2Include):
    for file in files:
        if file.endswith('.so') or '.so.' in file:
            fileFrom = os.path.join(dirpath, file)
            fileTo = ros2Lib + '/' + file
            shutil.copy(fileFrom, fileTo)

            os.remove(fileFrom)
            #libsInclude.add(file)


# add allowed only space:
# current are:
# ue4_interfaces
# ue_msgs
# action_msgs
# builtin_interfaces
# example_interfaces
# fastcdr
# fastrtps
# geometry_msgs
# nav_msgs
# rcl.
# rcl_
# rclc.
# rcpputils
# rcutils
# rmw
# rosgraph_msgs
# rosidl
# sensor_msgs
# std_msgs
# tf2_msgs
# tracetools
# unique_identifier_msgs
# yaml
filesCount = 0

for dirpath,subdirs,files in os.walk(folderFrom):
    for file in files:
        #if (file.endswith('.so') or '.so.' in file) and \
           # (
        if file.endswith('.so') and not any(elem in file for elem in ['python', 'Codec_', 'Plugin_', 'RenderSystem_', '_test_type_support']):
            filesCount += 1
            fileFrom = os.path.join(dirpath, file)
            fileTo = ros2Lib + '/' + file

            if os.path.exists(fileTo):
                os.remove(fileTo)

            #file not in filesExisted and \
            #if not os.path.exists(fileTo) and \
            print(fileTo)
            shutil.copy(fileFrom, fileTo)

print('Found libs to copy and replace:', filesCount)

#'generator_c.', 
#, '_c.'
# and \
#            not any(elem in file for elem in ['rosidl_typesupport_c', 'ue4_interfaces', 'action_msgs', 'geometry_msgs'])
#, 'libmemory_tools_interpose.so', 'libperformance_test_fixture.so'


for dirpath,subdirs,files in os.walk(ros2Lib):
    for file in files:
#        if any(elem in file for elem in ['python', '.so.', 'connext']):
        if any(elem in file for elem in ['.so.']):
            os.remove(os.path.join(dirpath, file))