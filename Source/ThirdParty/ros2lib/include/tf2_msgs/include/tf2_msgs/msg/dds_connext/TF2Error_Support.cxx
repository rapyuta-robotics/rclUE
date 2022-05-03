
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TF2Error_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "TF2Error_Support.h"
#include "TF2Error_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace tf2_msgs {
    namespace msg {
        namespace dds_ {
            namespace TF2Error_Constants {
            } /* namespace TF2Error_Constants  */

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'TF2Error_' support classes.

            Note: Only the #defined classes get defined
            */

            /* ----------------------------------------------------------------- */
            /* DDSDataWriter
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataWriter, TData
            */

            /* Requires */
            #define TTYPENAME   TF2Error_TYPENAME

            /* Defines */
            #define TDataWriter TF2Error_DataWriter
            #define TData       tf2_msgs::msg::dds_::TF2Error_

            #include "dds_cpp/generic/dds_cpp_data_TDataWriter.gen"

            #undef TDataWriter
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* DDSDataReader
            */

            /**
            <<IMPLEMENTATION >>

            Defines:   TDataReader, TDataSeq, TData
            */

            /* Requires */
            #define TTYPENAME   TF2Error_TYPENAME

            /* Defines */
            #define TDataReader TF2Error_DataReader
            #define TDataSeq    TF2Error_Seq
            #define TData       tf2_msgs::msg::dds_::TF2Error_

            #include "dds_cpp/generic/dds_cpp_data_TDataReader.gen"

            #undef TDataReader
            #undef TDataSeq
            #undef TData

            #undef TTYPENAME

            /* ----------------------------------------------------------------- */
            /* TypeSupport

            <<IMPLEMENTATION >>

            Requires:  TTYPENAME,
            TPlugin_new
            TPlugin_delete
            Defines:   TTypeSupport, TData, TDataReader, TDataWriter
            */

            /* Requires */
            #define TTYPENAME    TF2Error_TYPENAME
            #define TPlugin_new  tf2_msgs::msg::dds_::TF2Error_Plugin_new
            #define TPlugin_delete  tf2_msgs::msg::dds_::TF2Error_Plugin_delete

            /* Defines */
            #define TTypeSupport TF2Error_TypeSupport
            #define TData        tf2_msgs::msg::dds_::TF2Error_
            #define TDataReader  TF2Error_DataReader
            #define TDataWriter  TF2Error_DataWriter
            #define TGENERATE_SER_CODE
            #define TGENERATE_TYPECODE

            #include "dds_cpp/generic/dds_cpp_data_TTypeSupport.gen"

            #undef TTypeSupport
            #undef TData
            #undef TDataReader
            #undef TDataWriter
            #undef TGENERATE_TYPECODE
            #undef TGENERATE_SER_CODE
            #undef TTYPENAME
            #undef TPlugin_new
            #undef TPlugin_delete

        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace tf2_msgs  */

