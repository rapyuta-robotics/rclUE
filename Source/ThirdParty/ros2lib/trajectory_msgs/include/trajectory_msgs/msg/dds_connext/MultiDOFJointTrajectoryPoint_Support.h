
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiDOFJointTrajectoryPoint_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MultiDOFJointTrajectoryPoint_Support_1217082941_h
#define MultiDOFJointTrajectoryPoint_Support_1217082941_h

/* Uses */
#include "MultiDOFJointTrajectoryPoint_.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

namespace trajectory_msgs {
    namespace msg {
        namespace dds_ {
            /* ========================================================================= */
            /**
            Uses:     T

            Defines:  TTypeSupport, TDataWriter, TDataReader

            Organized using the well-documented "Generics Pattern" for
            implementing generics in C and C++.
            */

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)

            #endif

            DDS_TYPESUPPORT_CPP(
                MultiDOFJointTrajectoryPoint_TypeSupport, 
                MultiDOFJointTrajectoryPoint_);

            DDS_DATAWRITER_CPP(MultiDOFJointTrajectoryPoint_DataWriter, MultiDOFJointTrajectoryPoint_);
            DDS_DATAREADER_CPP(MultiDOFJointTrajectoryPoint_DataReader, MultiDOFJointTrajectoryPoint_Seq, MultiDOFJointTrajectoryPoint_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace trajectory_msgs  */

#endif  /* MultiDOFJointTrajectoryPoint_Support_1217082941_h */

