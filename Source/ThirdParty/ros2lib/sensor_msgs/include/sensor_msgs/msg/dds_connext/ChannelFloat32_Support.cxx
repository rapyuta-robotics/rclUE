
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ChannelFloat32_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "ChannelFloat32_Support.h"
#include "ChannelFloat32_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'ChannelFloat32_' support classes.

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
            #define TTYPENAME   ChannelFloat32_TYPENAME

            /* Defines */
            #define TDataWriter ChannelFloat32_DataWriter
            #define TData       sensor_msgs::msg::dds_::ChannelFloat32_

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
            #define TTYPENAME   ChannelFloat32_TYPENAME

            /* Defines */
            #define TDataReader ChannelFloat32_DataReader
            #define TDataSeq    ChannelFloat32_Seq
            #define TData       sensor_msgs::msg::dds_::ChannelFloat32_

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
            #define TTYPENAME    ChannelFloat32_TYPENAME
            #define TPlugin_new  sensor_msgs::msg::dds_::ChannelFloat32_Plugin_new
            #define TPlugin_delete  sensor_msgs::msg::dds_::ChannelFloat32_Plugin_delete

            /* Defines */
            #define TTypeSupport ChannelFloat32_TypeSupport
            #define TData        sensor_msgs::msg::dds_::ChannelFloat32_
            #define TDataReader  ChannelFloat32_DataReader
            #define TDataWriter  ChannelFloat32_DataWriter
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
} /* namespace sensor_msgs  */

