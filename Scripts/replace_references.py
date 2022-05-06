from subprocess import check_output
import os, sys, shutil
 
ros2 = '/home/vilkun/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib' # sys.argv[1]
ros2Libs = ros2 + '/lib/'

def RunCommandForEveryLib(commandArgsList):
    for dirpath,subdirs,files in os.walk(ros2):
        for file in files:
            if file.endswith('.so') or '.so.' in file:
                fullName = os.path.join(dirpath, file)
                resultRaw = ''
                command = commandArgsList
                command.append(fullName)
                try:
                    resultRaw = check_output(command)
                except Exception:
                    print('[Error] file:', file)

    
def ReplaceSonameWithFileRemove(soname, fileName):
    libFileNameNew = ros2Libs + soname
    libFileNameOld = ros2Libs + fileName

    # leave only one file, starting from *.so.*, but rename it after all to *.so
    if os.path.exists(libFileNameOld):
        if os.path.exists(libFileNameNew):
            os.remove(libFileNameNew)

        os.rename(libFileNameOld, libFileNameNew)

    print('Patching soname and all reference to it:', soname)
    os.system('patchelf --set-soname ' + soname + ' ' + libFileNameNew)
    RunCommandForEveryLib(['patchelf', '--replace-needed', fileName, soname])

#ReplaceSonameWithFileRemove('libfastcdr.so', 'libfastcdr.so.1')
#ReplaceSonameWithFileRemove('libfastrtps.so', 'libfastrtps.so.2')
#ReplaceSonameWithFileRemove('Codec_EXR.so', 'Codec_EXR.so.1.12.1')
#ReplaceSonameWithFileRemove('Codec_STBI.so', 'Codec_STBI.so.1.12.1')


print('Patching rpath for every lib...')
#RunCommandForEveryLib(['patchelf', '--set-rpath', '${ORIGIN}/../../../../../../UE/UnrealEngine/../../work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib/lib'])
RunCommandForEveryLib(['patchelf', '--set-rpath', '/home/vilkun/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib/lib'])

# RUNPATH              /home/vilkun/ros2_foxy/install/builtin_interfaces/lib:
# /home/vilkun/ros2_foxy/install/unique_identifier_msgs/lib:
# /home/vilkun/ros2_foxy/install/rosidl_typesupport_introspection_cpp/lib:
# /home/vilkun/ros2_foxy/install/rosidl_typesupport_introspection_c/lib:
# /home/vilkun/ros2_foxy/install/rosidl_typesupport_cpp/lib:
# /home/vilkun/ros2_foxy/install/rosidl_typesupport_c/lib:
# /home/vilkun/ros2_foxy/install/rosidl_runtime_c/lib:
# /home/vilkun/ros2_foxy/install/rcpputils/lib:
# /home/vilkun/ros2_foxy/install/rcutils/lib:
  
print('Done')
#print('Patching: librclc.so')
#os.system('patchelf --add-needed ' + 'librmw_fastrtps_cpp.so' + ' ' + os.path.join(ros2Libs, 'librclc.so'))
   