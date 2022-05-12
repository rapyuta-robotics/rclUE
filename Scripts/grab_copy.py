import os, sys, shutil

# cd ~/ros2_foxy/
# rm -r build install log
# rm -r build_renamed install_renamed
# export ROS_DOMAIN_ID=10
# export RMW_IMPLEMENTATION=rmw_fastrtps_dynamic_cpp
# export MY_UE_FOLDER="/home/vilkun/UE/UnrealEngine"
# export MY_SYS_ROOT_PATH=$MY_UE_FOLDER"/Engine/Extras/ThirdPartyNotUE/SDKs/HostLinux/Linux_x64/v19_clang-11.0.1-centos7/x86_64-unknown-linux-gnu"
# export CC=$MY_SYS_ROOT_PATH"/bin/clang"
# export CXX=$MY_SYS_ROOT_PATH"/bin/clang++"
# export MY_LINKER_FLAGS="-latomic "\
# "-Wl,-rpath=\${ORIGIN} "\
# "-Wl,-rpath-link="$MY_SYS_ROOT_PATH" "\
# "-Wl,-rpath-link="$MY_SYS_ROOT_PATH"/usr/lib "\
# "-Wl,-rpath-link="$MY_SYS_ROOT_PATH"/usr/lib64 "\
# "-Wl,-rpath-link=/usr/lib/x86_64-linux-gnu "\
# "-Wl,-rpath-link=/usr/lib "
# colcon build --cmake-clean-cache --cmake-force-configure --cmake-args "-DCMAKE_SHARED_LINKER_FLAGS='$MY_LINKER_FLAGS'" "-DCMAKE_EXE_LINKER_FLAGS='$MY_LINKER_FLAGS'" "-DBUILD_TESTING=OFF" --no-warn-unused-cli

# cd /home/vilkun/work/build_foxy/rclc/rclc
# rm -r build install log
# rm -r build_renamed install_renamed
# . ~/ros2_foxy/install/local_setup.bash
# colcon build --packages-up-to --allow-overriding rclc --cmake-args "-DCMAKE_SHARED_LINKER_FLAGS='$MY_LINKER_FLAGS'" "-DCMAKE_EXE_LINKER_FLAGS='$MY_LINKER_FLAGS'" "-DBUILD_TESTING=OFF" 




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
           if (file.endswith('.so') or '.so.' in file) and not any(elem in file for elem in ['python', 'Codec_', 'Plugin_', 'RenderSystem_', '_test_type_support']):
#             if file.endswith('.so') and not any(elem in file for elem in ['python', 'Codec_', 'Plugin_', 'RenderSystem_', '_test_type_support']):
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
#            if any(elem in file for elem in ['python', '.so.', 'connext']):
            if any(elem in file for elem in ['python', 'connext']):
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
#removedCount = CleanDir(rclUERosLib)
#print('Removed unused libs:', removedCount)
