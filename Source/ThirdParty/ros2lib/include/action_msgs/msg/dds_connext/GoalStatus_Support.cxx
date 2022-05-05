
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GoalStatus_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "GoalStatus_Support.h"
#include "GoalStatus_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace action_msgs {
    namespace msg {
        namespace dds_ {
            namespace GoalStatus_Constants {
            } /* namespace GoalStatus_Constants  */

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'GoalStatus_' support classes.

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
            #define TTYPENAME   GoalStatus_TYPENAME

            /* Defines */
            #define TDataWriter GoalStatus_DataWriter
            #define TData       action_msgs::msg::dds_::GoalStatus_

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
            #define TTYPENAME   GoalStatus_TYPENAME

            /* Defines */
            #define TDataReader GoalStatus_DataReader
            #define TDataSeq    GoalStatus_Seq
            #define TData       action_msgs::msg::dds_::GoalStatus_

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
            #define TTYPENAME    GoalStatus_TYPENAME
            #define TPlugin_new  action_msgs::msg::dds_::GoalStatus_Plugin_new
            #define TPlugin_delete  action_msgs::msg::dds_::GoalStatus_Plugin_delete

            /* Defines */
            #define TTypeSupport GoalStatus_TypeSupport
            #define TData        action_msgs::msg::dds_::GoalStatus_
            #define TDataReader  GoalStatus_DataReader
            #define TDataWriter  GoalStatus_DataWriter
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
} /* namespace action_msgs  */

