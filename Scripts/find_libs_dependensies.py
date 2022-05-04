import os, sys

# ! run command before using this script '. ~/ros2_foxy/install/local_setup.bash'

def FindLibsRecursive(libs, lib, prefixSystem, prefixRos2):
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
                FindLibsRecursive(libs, path, prefixSystem, prefixRos2)
        else:
            print('[Warning] unknown prefix:', name, path)

def FindLibsDependencies(libInit, prefixSystem, prefixRos2):
    libs = set()
    libs.add(libInit)
    FindLibsRecursive(libs, libInit, prefixSystem, prefixRos2)

    return libs