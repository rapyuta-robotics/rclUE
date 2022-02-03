
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiDOFJointTrajectoryPoint_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "MultiDOFJointTrajectoryPoint_Support.h"
#include "MultiDOFJointTrajectoryPoint_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace trajectory_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'MultiDOFJointTrajectoryPoint_' support classes.

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
            #define TTYPENAME   MultiDOFJointTrajectoryPoint_TYPENAME

            /* Defines */
            #define TDataWriter MultiDOFJointTrajectoryPoint_DataWriter
            #define TData       trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_

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
            #define TTYPENAME   MultiDOFJointTrajectoryPoint_TYPENAME

            /* Defines */
            #define TDataReader MultiDOFJointTrajectoryPoint_DataReader
            #define TDataSeq    MultiDOFJointTrajectoryPoint_Seq
            #define TData       trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_

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
            #define TTYPENAME    MultiDOFJointTrajectoryPoint_TYPENAME
            #define TPlugin_new  trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_Plugin_new
            #define TPlugin_delete  trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_Plugin_delete

            /* Defines */
            #define TTypeSupport MultiDOFJointTrajectoryPoint_TypeSupport
            #define TData        trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_
            #define TDataReader  MultiDOFJointTrajectoryPoint_DataReader
            #define TDataWriter  MultiDOFJointTrajectoryPoint_DataWriter
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
} /* namespace trajectory_msgs  */

