#! /usr/bin/env python3
import sys

URL_BASE = 'https://docs.unrealengine.com/4.27/en-US/ProgrammingAndScripting/'
URL_GAMEARCHITECTURE = URL_BASE + 'GameplayArchitecture/'
UE_MACROS = {
    'UCLASS'    : URL_BASE + 'ProgrammingWithCPP/UnrealArchitecture/Objects/', 
    'UINTERFACE': URL_GAMEARCHITECTURE + 'Interfaces/', 
    'USTRUCT'   : URL_GAMEARCHITECTURE + 'Structs/', 
    'UFUNCTION' : URL_GAMEARCHITECTURE + 'Functions/', 
    'UPROPERTY' : URL_GAMEARCHITECTURE + 'Properties/',
    'UENUM'     : URL_GAMEARCHITECTURE + 'Properties/'
}

with open(sys.argv[1], 'r') as f:
    for line in f:
        for key in UE_MACROS:
            if line.lstrip().startswith(key):
                line = '''
                /*! 
                 * [{}]({})
                 */
                '''.format(line.strip(), UE_MACROS[key])
        print(line)
