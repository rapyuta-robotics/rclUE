import os, sys, shutil

# this script forces to link libraries again on next IDE run

cwd = os.getcwd()
turtlebot3Binaries = cwd + '/../../../Binaries' 
rclUEBinaries = cwd + '/../Binaries'
rclUEBuildCS =  cwd + '/../Source/rclUE/rclUE.Build.cs'

if os.path.isdir(turtlebot3Binaries):
    print('Removing:', turtlebot3Binaries)
    shutil.rmtree(turtlebot3Binaries)

if os.path.isdir(rclUEBinaries):
    print('Removing:', rclUEBinaries)
    shutil.rmtree(rclUEBinaries)


if os.path.isfile(rclUEBuildCS):
    print('Invalidating:', rclUEBuildCS)
    content = ''

    with open(rclUEBuildCS, 'r') as f:
        content = f.read()

    # workaround with extra-new symbol, flip-flop with-without that symbol
    if content[-1] == '\n':
        content = content[:-1]
    else:
        content += '\n'

    with open(rclUEBuildCS, 'w') as f:
        f.write(content)

print('Done')