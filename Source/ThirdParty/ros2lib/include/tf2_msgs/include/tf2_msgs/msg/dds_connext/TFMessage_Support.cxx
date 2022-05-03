
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TFMessage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "TFMessage_Support.h"
#include "TFMessage_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace tf2_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'TFMessage_' support classes.

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
            #define TTYPENAME   TFMessage_TYPENAME

            /* Defines */
            #define TDataWriter TFMessage_DataWriter
            #define TData       tf2_msgs::msg::dds_::TFMessage_

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
            #define TTYPENAME   TFMessage_TYPENAME

            /* Defines */
            #define TDataReader TFMessage_DataReader
            #define TDataSeq    TFMessage_Seq
            #define TData       tf2_msgs::msg::dds_::TFMessage_

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
            #define TTYPENAME    TFMessage_TYPENAME
            #define TPlugin_new  tf2_msgs::msg::dds_::TFMessage_Plugin_new
            #define TPlugin_delete  tf2_msgs::msg::dds_::TFMessage_Plugin_delete

            /* Defines */
            #define TTypeSupport TFMessage_TypeSupport
            #define TData        tf2_msgs::msg::dds_::TFMessage_
            #define TDataReader  TFMessage_DataReader
            #define TDataWriter  TFMessage_DataWriter
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

