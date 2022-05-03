import os, sys, shutil
 
#ros2thirdparty = sys.argv[1] + '/' # '~/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib'
ros2thirdparty = '/home/vilkun/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib/'
libfastcdrRaw = 'libfastcdr.so' 
libfastcdr = ros2thirdparty + libfastcdrRaw
libfastcdr1Raw = libfastcdrRaw + '.1'
libfastcdr1 = ros2thirdparty + libfastcdr1Raw

if os.path.exists(libfastcdr1):
    if os.path.exists(libfastcdr):
        os.remove(libfastcdr)
        
    os.rename(libfastcdr1, libfastcdr)

os.system('patchelf --set-soname ' + libfastcdrRaw + ' ' + libfastcdr)

libfastrtpsRaw = 'libfastrtps.so'
libfastrtps = ros2thirdparty + libfastrtpsRaw
libfastrtps2Raw = libfastrtpsRaw + '.2'
libfastrtps2 = ros2thirdparty + libfastrtps2Raw

if os.path.exists(libfastrtps2):
    os.rename(libfastrtps2, libfastrtps)

os.system('patchelf --set-soname ' + libfastrtpsRaw + ' ' + libfastrtps)

# nameNew = 'rmw_dds_common__rosidl_typesupport_fastrtps_cpp.so'
# nameOld = 'lib' + nameNew
# libNameOld = ros2thirdparty + nameOld
# libNameNew = ros2thirdparty + nameNew

# if os.path.exists(libNameOld):
#     os.rename(libNameOld, libNameNew)

# os.system('patchelf --set-soname ' + nameNew + ' ' + libNameNew)

for dirpath,subdirs,files in os.walk(ros2thirdparty):
    for file in files:
        if file.endswith('.so') or '.so.' in file:
            fullName = os.path.join(dirpath, file)
            print(fullName)
            os.system('patchelf --replace-needed ' + libfastcdr1Raw + ' ' +  libfastcdrRaw + ' ' + fullName)
            os.system('patchelf --replace-needed ' + libfastrtps2Raw + ' ' +  libfastrtpsRaw + ' ' + fullName)

            if not file.endswith('librmw_dds_common__rosidl_typesupport_fastrtps_cpp.so'):
                os.system('patchelf --add-needed ' + 'librmw_dds_common__rosidl_typesupport_fastrtps_cpp.so' + ' ' + fullName)
            
            #os.system('patchelf --remove-needed ' + 'librmw_dds_common__rosidl_typesupport_fastrtps_cpp.so' + ' ' + fullName)
            #os.system('patchelf --remove-needed ' + 'librclc.so' + ' ' + fullName)
            #os.system('patchelf --remove-needed ' + 'librclc.so' + ' ' + fullName)
            # os.system('patchelf --remove-needed ' + ros2thirdparty + 'rmw_dds_common__rosidl_typesupport_fastrtps_cpp ' + fullName)
            # os.system('patchelf --remove-needed ' + ros2thirdparty + 'rmw_dds_common__rosidl_typesupport_fastrtps_cpp.so ' + fullName)
            # os.system('patchelf --remove-needed ' + ros2thirdparty + 'librmw_dds_common__rosidl_typesupport_fastrtps_cpp.so ' + fullName)
            # os.system('patchelf --remove-needed ' + ros2thirdparty + 'librmw_dds_common__rosidl_typesupport_fastrtps_cpp ' + fullName)
            # #os.system('patchelf --replace-needed ' + 'rmw_dds_common__rosidl_typesupport_fastrtps_cpp' + ' ' +  nameNew + ' ' + fullName)
            #patchelf  libfoo.so.1 my-program
   