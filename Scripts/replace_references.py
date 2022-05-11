from subprocess import check_output
import os, sys, shutil, re
 
ros2 = '/home/vilkun/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib' # sys.argv[1]
ros2Libs = ros2 + '/lib/'

def RunCommandForEveryLib(commandArgsList):
    print('>', ' '.join(commandArgsList))
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
    if libFileNameNew != libFileNameOld and os.path.exists(libFileNameOld):
        if os.path.exists(libFileNameNew):
            os.remove(libFileNameNew)

        os.rename(libFileNameOld, libFileNameNew)

    command = 'patchelf --set-soname ' + soname + ' ' + libFileNameNew
    print('>', command)
    os.system(command)
    RunCommandForEveryLib(['patchelf', '--replace-needed', fileName, soname])

versionMarker = '.so.'
libsReplacements = dict()
for dirpath,subdirs,files in os.walk(ros2):
        for file in files:
            if file.endswith('.so') or versionMarker in file:
                fullName = os.path.join(dirpath, file)
                lddInfoRaw = os.popen('ldd ' + fullName).read()
                
                for rawInfoLine in lddInfoRaw.split('\n'):
                    if versionMarker in rawInfoLine and 'not found' in rawInfoLine:
                        libNameVersioning = rawInfoLine.split('=>')[0].lstrip().rstrip()
                        libName = libNameVersioning.split(versionMarker)[0] + '.so'
                        potentialFullName = ros2Libs + libName

                        if os.path.exists(potentialFullName):
                            libsReplacements[libNameVersioning] = libName
                        else:
                            print('[Error] Failed to find potential lib:', potentialFullName)


libsReplacements = dict(sorted(libsReplacements.items())) 
#[print(libNameVersioning, libName) for libNameVersioning, libName in libsReplacements.items()]
for libNameVersioning, libName in libsReplacements.items():
    ReplaceSonameWithFileRemove(libName, libNameVersioning)

RunCommandForEveryLib(['patchelf', '--force-rpath', '--set-rpath', r'${ORIGIN}:/lib/x86_64-linux-gnu/'])
#/usr/local/lib:/usr/local/lib64


#print('Patching rpath for every lib...')
#RunCommandForEveryLib(['patchelf', '--force-rpath', '--set-rpath', r'${ORIGIN}'])

#ReplaceSonameWithFileRemove('libfastcdr.so', 'libfastcdr.so.1')
#ReplaceSonameWithFileRemove('libfastrtps.so', 'libfastrtps.so.2')


#ReplaceSonameWithFileRemove('librmw_dds_common__rosidl_typesupport_fastrtps_cpp.so', 'librmw_dds_common__rosidl_typesupport_fastrtps_cpp.so')

# ReplaceSonameWithFileRemove('libconsole_bridge.so', 'libconsole_bridge.so.1.0')
# ReplaceSonameWithFileRemove('libyaml-cpp.so', 'libyaml-cpp.so.0.6')
# ReplaceSonameWithFileRemove('liburdfdom_model.so', 'liburdfdom_model.so.1.0')
# ReplaceSonameWithFileRemove('liburdfdom_model_state.so', 'liburdfdom_model_state.so.1.0')
# ReplaceSonameWithFileRemove('liburdfdom_sensor.so', 'liburdfdom_sensor.so.1.0')
# ReplaceSonameWithFileRemove('liburdfdom_world.so', 'liburdfdom_world.so.1.0')
# ReplaceSonameWithFileRemove('liborocos-kdl.so', 'liborocos-kdl.so.1.4')
# ReplaceSonameWithFileRemove('libddsc.so', 'libddsc.so.0')
# ReplaceSonameWithFileRemove('libOgreMain.so', 'libOgreMain.so.1.12.1')
# ReplaceSonameWithFileRemove('libOgrePaging.so', 'libOgrePaging.so.1.12.1 ')
# ReplaceSonameWithFileRemove('libOgreOverlay.so', 'libOgreOverlay.so.1.12.1 ')



# print('Removing references to not found libs...')
# RunCommandForEveryLib(['patchelf', '--remove-needed', 'libnddsc.so'])
# RunCommandForEveryLib(['patchelf', '--remove-needed', 'libnddscore.so'])
# RunCommandForEveryLib(['patchelf', '--remove-needed', 'libnddscpp.so'])
# RunCommandForEveryLib(['patchelf', '--remove-needed', 'librticonnextmsgcpp.so'])
# RunCommandForEveryLib(['patchelf', '--remove-needed', 'librosidl_typesupport_connext_c.so'])
# RunCommandForEveryLib(['patchelf', '--remove-needed', 'librosidl_typesupport_connext_cpp.so'])
# RunCommandForEveryLib(['patchelf', '--remove-needed', 'libbuiltin_interfaces__rosidl_typesupport_connext_c.so'])
# RunCommandForEveryLib(['patchelf', '--remove-needed', 'libbuiltin_interfaces__rosidl_typesupport_connext_cpp.so'])
# RunCommandForEveryLib(['patchelf', '--remove-needed', 'libOgrePaging.so.1.12.1'])
# RunCommandForEveryLib(['patchelf', '--remove-needed', 'libOgreOverlay.so.1.12.1'])
# RunCommandForEveryLib(['patchelf', '--remove-needed', 'libbuiltin_interfaces__python.so'])
# RunCommandForEveryLib(['patchelf', '--remove-needed', 'libgeometry_msgs__python.so'])



print('Done')







#ReplaceSonameWithFileRemove('Codec_EXR.so', 'Codec_EXR.so.1.12.1')
#ReplaceSonameWithFileRemove('Codec_STBI.so', 'Codec_STBI.so.1.12.1')


#RunCommandForEveryLib(['patchelf', '--set-rpath', '${ORIGIN}/../../../../../../UE/UnrealEngine/../../work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib/lib'])
#RunCommandForEveryLib(['patchelf', '--set-rpath', r"${ORIGIN}:${ORIGIN}/..:${ORIGIN}/../..:${ORIGIN}/../../.."]) #/home/vilkun/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib/lib'])
#RunCommandForEveryLib(['patchelf', '--append-rpath', r"${ORIGIN}:${ORIGIN}/..:${ORIGIN}/../..:${ORIGIN}/../../..:${ORIGIN}/../../../..:${ORIGIN}/../../../../..:${ORIGIN}/../../../../../..:/home/vilkun/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib/lib"])




#RunCommandForEveryLib(['patchelf', '--remove-rpath'])

# --set-rpath always sets a RUNPATH, instead of RPATH, so it's a bug.
# to workaround a bug, we use several arguments, see more here https://github.com/NixOS/patchelf/issues/94
# here we try to set RPATH, not RUNPATH value https://man7.org/linux/man-pages/man3/dlopen.3.html 
#RunCommandForEveryLib(['patchelf', '--force-rpath', '--set-rpath', r'${ORIGIN}:${ORIGIN}/../../Source/ThirdParty/ros2lib/lib'])
#RunCommandForEveryLib(['patchelf', '--force-rpath', '--set-rpath', r'${ORIGIN}/../../Source/ThirdParty/ros2lib/lib'])

# sudo apt-get install chrpath
#RunCommandForEveryLib(['chrpath', '--replace', '${ORIGIN}:${ORIGIN}/../../../../../../UE/UnrealEngine/../../work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib/lib'])
 


# RUNPATH              /home/vilkun/ros2_foxy/install/builtin_interfaces/lib:
# /home/vilkun/ros2_foxy/install/unique_identifier_msgs/lib:
# /home/vilkun/ros2_foxy/install/rosidl_typesupport_introspection_cpp/lib:
# /home/vilkun/ros2_foxy/install/rosidl_typesupport_introspection_c/lib:
# /home/vilkun/ros2_foxy/install/rosidl_typesupport_cpp/lib:
# /home/vilkun/ros2_foxy/install/rosidl_typesupport_c/lib:
# /home/vilkun/ros2_foxy/install/rosidl_runtime_c/lib:
# /home/vilkun/ros2_foxy/install/rcpputils/lib:
# /home/vilkun/ros2_foxy/install/rcutils/lib:
  
#print('Patching: librclc.so')
#os.system('patchelf --add-needed ' + 'librmw_fastrtps_cpp.so' + ' ' + os.path.join(ros2Libs, 'librclc.so'))
   