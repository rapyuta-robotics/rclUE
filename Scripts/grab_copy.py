import os, sys, shutil

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

def GrabCopyReplace(folderFrom, folderTo):
    filesCount = 0

    for dirpath,subdirs,files in os.walk(folderFrom):
        for file in files:
            #if (file.endswith('.so') or '.so.' in file) and \
            # (
            if file.endswith('.so') and not any(elem in file for elem in ['python', 'Codec_', 'Plugin_', 'RenderSystem_', '_test_type_support']):
                filesCount += 1
                fileFrom = os.path.join(dirpath, file)
                fileTo = folderTo + '/' + file

                if os.path.exists(fileTo):
                    os.remove(fileTo)

                #file not in filesExisted and \
                #if not os.path.exists(fileTo) and \
                #print(fileTo)
                shutil.copy(fileFrom, fileTo)

    return filesCount

#'generator_c.', 
#, '_c.'
# and \
#            not any(elem in file for elem in ['rosidl_typesupport_c', 'ue4_interfaces', 'action_msgs', 'geometry_msgs'])
#, 'libmemory_tools_interpose.so', 'libperformance_test_fixture.so'

def CleanDir(dir):
    removedCount = 0

    for dirpath,subdirs,files in os.walk(dir):
        for file in files:
            if any(elem in file for elem in ['python', '.so.', 'connext']):
    #        if any(elem in file for elem in ['.so.']):
                fileName = os.path.join(dirpath, file)
                removedCount += 1
                os.remove(fileName)

    return removedCount

def RenameDir(dir, suffix):
    if os.path.isdir(dir):
        print('> rename', dir, dir + suffix)
        os.rename(dir, dir + suffix)

ros = '/home/vilkun/ros2_foxy'
rosBuildFolder  = ros + '/build'
rosInstall  = ros + '/install'
renamedSuffix = '_renamed'
rclUERos = '/home/vilkun/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib'
rclUERosLib = rclUERos + '/lib'
rclUERosInclude = rclUERos + '/include'
rclc = '/home/vilkun/work/build_foxy/rclc/rclc'
rclcBuild = rclc + '/build'
rclcInstall = rclc + '/install'

# remove this at the end
for dirpath,subdirs,files in os.walk(rclUERosInclude):
    for file in files:
        if file.endswith('.so') or '.so.' in file:
            fileFrom = os.path.join(dirpath, file)
            fileTo = rclUERosLib + '/' + file
            shutil.copy(fileFrom, fileTo)

            os.remove(fileFrom)

RenameDir(rosBuildFolder, renamedSuffix)
RenameDir(rosInstall, renamedSuffix)
RenameDir(rclcBuild, renamedSuffix)
RenameDir(rclcInstall, renamedSuffix)
filesCount = GrabCopyReplace(rosBuildFolder + renamedSuffix, rclUERosLib)
print('Found ros libs:', filesCount)
filesCount = GrabCopyReplace(rclcBuild + renamedSuffix, rclUERosLib)
print('Found rclc libs:', filesCount)
removedCount = CleanDir(rclUERosLib)
print('Removed unused libs:', removedCount)
