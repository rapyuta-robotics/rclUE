import os, sys, shutil

p = '/home/vilkun/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib'
#p = '/opt/ros/foxy/lib'
folderName = 'info_ros'

if os.path.isdir(folderName):
    shutil.rmtree(folderName)

os.mkdir(folderName)

libs = list()

for dirpath,subdirs,files in os.walk(p):
    for file in files:
        if file.endswith('.so') or '.so.' in file:
            fullName = os.path.join(dirpath, file)
            #command = 'patchelf --replace-needed librmw_dds_common__rosidl_typesupport_fastrtps_cpp.so rmw_dds_common__rosidl_typesupport_fastrtps_cpp.so ' + fullName
            #command = 'readelf -Wa ' + fullName + ' > ' + folderName + '/' + file + '.txt'
            #command = 'ld ' + fullName + ' > ' + folderName + '/' + file + '.txt'
            #command = 'readelf -Ws ' + fullName + ' > ' + folderName + '/' + file + '.txt'
            #command = 'readelf -d ' + fullName + ' |head -20 > ' + folderName + '/' + file + '.txt'
            #command = 'readelf -d ' + fullName + ' > ' + folderName + '/' + file + '.txt'
            #command = 'ldd ' + fullName + ' > ' + folderName + '/' + file + '.txt'
            #command = 'objdump -x ' + fullName +' |grep RPATH'+ ' > ' + folderName + '/' + file + '.txt'
            #command = 'objdump -x ' + fullName + ' > ' + folderName + '/' + file + '.txt'
            #nm --demangle
            
            libs.append(file)
            #print(command)
            #os.system(command)
            
libs.sort()
libsSet = set()

print('All libs names:')
print('"' + '",\n"'.join(libs) + '"')

print('Checking duplications...')
for lib in libs:
    if lib in libsSet:
        print('Duplication:', lib)
    else:
        libsSet.add(lib)

print('Error. Duplications were found') if len(libs) != len(libsSet) else print('All ok. Duplications are not found')