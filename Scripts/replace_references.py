import os, sys, shutil
 
ros2 = '/home/vilkun/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib' # sys.argv[1]
ros2Libs = ros2 + '/lib/'

libfastcdrRaw = 'libfastcdr.so' 
libfastcdr = ros2Libs + libfastcdrRaw
libfastcdr1Raw = libfastcdrRaw + '.1'
libfastcdr1 = ros2Libs + libfastcdr1Raw

if os.path.exists(libfastcdr1):
    if os.path.exists(libfastcdr):
        os.remove(libfastcdr)
        
    os.rename(libfastcdr1, libfastcdr)

print('Patching: libfastcdr.so')
os.system('patchelf --set-soname ' + libfastcdrRaw + ' ' + libfastcdr)

libfastrtpsRaw = 'libfastrtps.so'
libfastrtps = ros2Libs + libfastrtpsRaw
libfastrtps2Raw = libfastrtpsRaw + '.2'
libfastrtps2 = ros2Libs + libfastrtps2Raw

if os.path.exists(libfastrtps2):
    os.rename(libfastrtps2, libfastrtps)

print('Patching: libfastrtps.so')
os.system('patchelf --set-soname ' + libfastrtpsRaw + ' ' + libfastrtps)

print('Patching: librclc.so')
os.system('patchelf --add-needed ' + 'librmw_fastrtps_cpp.so' + ' ' + os.path.join(ros2Libs, 'librclc.so'))

for dirpath,subdirs,files in os.walk(ros2):
    for file in files:
        if file.endswith('.so') or '.so.' in file:
            fullName = os.path.join(dirpath, file)
            print('Patching:', fullName)
            os.system('patchelf --replace-needed ' + libfastcdr1Raw + ' ' +  libfastcdrRaw + ' ' + fullName)
            os.system('patchelf --replace-needed ' + libfastrtps2Raw + ' ' +  libfastrtpsRaw + ' ' + fullName)
   