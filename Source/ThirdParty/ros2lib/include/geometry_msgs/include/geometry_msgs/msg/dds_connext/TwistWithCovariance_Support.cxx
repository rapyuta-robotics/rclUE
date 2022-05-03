
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistWithCovariance_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "TwistWithCovariance_Support.h"
#include "TwistWithCovariance_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'TwistWithCovariance_' support classes.

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
            #define TTYPENAME   TwistWithCovariance_TYPENAME

            /* Defines */
            #define TDataWriter TwistWithCovariance_DataWriter
            #define TData       geometry_msgs::msg::dds_::TwistWithCovariance_

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
            #define TTYPENAME   TwistWithCovariance_TYPENAME

            /* Defines */
            #define TDataReader TwistWithCovariance_DataReader
            #define TDataSeq    TwistWithCovariance_Seq
            #define TData       geometry_msgs::msg::dds_::TwistWithCovariance_

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
            #define TTYPENAME    TwistWithCovariance_TYPENAME
            #define TPlugin_new  geometry_msgs::msg::dds_::TwistWithCovariance_Plugin_new
            #define TPlugin_delete  geometry_msgs::msg::dds_::TwistWithCovariance_Plugin_delete

            /* Defines */
            #define TTypeSupport TwistWithCovariance_TypeSupport
            #define TData        geometry_msgs::msg::dds_::TwistWithCovariance_
            #define TDataReader  TwistWithCovariance_DataReader
            #define TDataWriter  TwistWithCovariance_DataWriter
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
} /* namespace geometry_msgs  */

