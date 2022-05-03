import os, sys, shutil

#run command before using this script '. ~/ros2_foxy/install/local_setup.bash'

ros2 = '/home/vilkun/work/turtlebot3-UE/Plugins/rclUE/Source/ThirdParty/ros2lib/lib' # sys.argv[1]
libInit = '/home/vilkun/work/build_foxy/rclc/rclc/build/rclc/librclc.so' #'/home/vilkun/work/build_foxy/rcl/rcl/build/rcl/librcl.so' # sys.argv[2]
prefixSystem = '/lib/x86_64-linux-gnu'
prefixRos2 = '/home/vilkun/ros2_foxy/install'
libs = set()
libs.add(libInit)

def FindLibsRecursive(lib):
    print('[Info] checking:', lib)
    lddInfoRaw = os.popen('ldd ' + lib).read()
    #print(lddInfoRaw)
    lddParsed = []

    for rawInfoLine in lddInfoRaw.split('\n'):
        splitted = rawInfoLine.split('=>')

        if len(splitted) > 1:
            path, hex = splitted[1].lstrip().rstrip().split(' ')
            lddParsed.append([splitted[0].lstrip().rstrip(), path])
        else:
            print('[Warning] Only one arg:', rawInfoLine)

    for name, path in lddParsed:
        if path.startswith(prefixSystem):
            continue
        
        if path.startswith(prefixRos2):
            if path not in libs:
                libs.add(path)
                FindLibsRecursive(path)
        else:
            print('[Warning] unknown prefix:', name, path)

FindLibsRecursive(libInit)

for lib in libs:
    copyTo = ros2 + '/' + os.path.basename(lib)

    if os.path.exists(copyTo):
        os.remove(copyTo)

    print('Updating:', copyTo)
    shutil.copy(lib, copyTo)