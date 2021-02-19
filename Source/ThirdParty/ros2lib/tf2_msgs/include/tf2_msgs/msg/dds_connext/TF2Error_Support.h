
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TF2Error_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TF2Error_Support_1249152670_h
#define TF2Error_Support_1249152670_h

/* Uses */
#include "TF2Error_.h"

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)

class __declspec(dllimport) DDSTypeSupport;
class __declspec(dllimport) DDSDataWriter;
class __declspec(dllimport) DDSDataReader;

#endif

namespace tf2_msgs {
    namespace msg {
        namespace dds_ {
            namespace TF2Error_Constants {
            } /* namespace TF2Error_Constants  */
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
                TF2Error_TypeSupport, 
                TF2Error_);

            DDS_DATAWRITER_CPP(TF2Error_DataWriter, TF2Error_);
            DDS_DATAREADER_CPP(TF2Error_DataReader, TF2Error_Seq, TF2Error_);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace tf2_msgs  */

#endif  /* TF2Error_Support_1249152670_h */

