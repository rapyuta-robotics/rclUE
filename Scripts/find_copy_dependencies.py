import os, sys, shutil, re
from find_libs_dependensies import FindLibsDependencies, FindLibsRecursive

# ! run command before using this script '. ~/ros2_foxy/install/local_setup.bash'

ros2 = '/home/vilkun/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib/lib' # sys.argv[1]

# rclc has custom path and it was builded separately, because rclc is not a default sub-part of ros2-foxy
# libraries dependencies start from 'rclc'
# TODO: maybe need to found other main parent as 'rclc'
#   because somewhy (exception, error?) we don't need to forgot other libs dependeciy-tree, which starts from this
libsDependenciesStarts = ['/home/vilkun/work/build_foxy/rclc/rclc/build/rclc/librclc.so', \
    '/home/vilkun/ros2_foxy/install/rmw_fastrtps_cpp/lib/librmw_fastrtps_cpp.so', \
    '/home/vilkun/ros2_foxy/build/rmw_dds_common/librmw_dds_common__rosidl_typesupport_fastrtps_c.so' ]

prefixSystem = '/lib/x86_64-linux-gnu'
prefixRos2 = '/home/vilkun/ros2_foxy/install'
libs = set()

for libInit in libsDependenciesStarts:
    if libInit not in libs:
        libs.add(libInit)
        FindLibsRecursive(libs, libInit, prefixSystem, prefixRos2)

print('Found unique libraries:', len(libs))
libsRenamed = set()
    
for lib in libs:
    libRenamed = lib

    match = re.search(r"install/(.*)/lib/", lib)

    if match:
        libName = match.group(1)
        replaceFrom = 'install/' + libName + '/lib/'
        replaceTo = 'build/' + libName + '/'

        # exceptions
        if libName == 'libyaml_vendor': 
            replaceTo += 'libyaml_install/lib/'
        elif libName == 'fastcdr' or libName == 'fastrtps':
            replaceTo += 'src/cpp/'
        
        libRenamed = lib.replace(replaceFrom, replaceTo)
    
    if os.path.exists(libRenamed):
        libsRenamed.add(libRenamed)
    else:
        print('[Error] Cannot find lib in build folder:',libRenamed)

libs = libsRenamed
libs = list(libs)
libs.sort()

for lib in libs:
    copyTo = ros2 + '/' + os.path.basename(lib)

    if os.path.exists(copyTo):
        os.remove(copyTo)

    print('Updating:', copyTo)
    shutil.copy(lib, copyTo)