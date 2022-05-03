import os, sys, shutil

# don't forget:
# sudo apt install ros-foxy-rclc 
# sudo apt install ros-foxy-rclc-lifecycle
ros2Path = '/opt/ros/foxy'
ros2IncludePath = ros2Path + '/include'
ros2Includes = dict()
ros2LibPath = ros2Path + '/lib'
ros2Libs = dict()

for dirName in os.listdir(ros2IncludePath):
    dirFull = os.path.join(ros2IncludePath, dirName)

    if os.path.isdir(dirFull):
        ros2Includes[dirName] = dirFull

for dirName in os.listdir(os.getcwd()):
    dirFull = os.path.join(os.getcwd(), dirName)

    if os.path.isdir(dirFull) and dirName not in ['ue_msgs', 'ue4_interfaces', 'rosidl_adapter', 'rosidl_parser','rosidl_generator_c']:
        dirIncludeFull = dirFull + '/include'

        if dirName in ros2Includes:
            shutil.rmtree(dirIncludeFull)
            libFolder = dirIncludeFull + '/' + dirName
            shutil.copytree(ros2Includes[dirName], libFolder)
            # libFolderMsg = libFolder + '/msg'

            # if os.path.isdir(libFolderMsg):
            #     shutil.rmtree(libFolderMsg)

            # libFolderSrv = libFolder + '/srv'

            # if os.path.isdir(libFolderSrv):
            #     shutil.rmtree(libFolderSrv)
        else:
            print('Cannot find include folder in ros2:', dirFull)


for dirpath,subdirs,files in os.walk(ros2LibPath):
    for file in files:
        if file.endswith('.so'):
            fullName = os.path.join(dirpath, file)
            ros2Libs[file] = fullName

for dirpath,subdirs,files in os.walk(os.getcwd()): 
    for file in files:
        if file.endswith('.so') and not file.startswith('libue_msgs') and not file.startswith('libue4_interfaces'):
            fullName = os.path.join(dirpath, file)

            if ros2Libs.get(file) == None:
                print('Cannot find lib file in ros2:', fullName)

                if file.endswith('librclc.so'):
                    print('For librclc.so call:', 'sudo apt install ros-foxy-rclc')
            else:
                os.remove(fullName)
                shutil.copy(ros2Libs[file], dirpath)                