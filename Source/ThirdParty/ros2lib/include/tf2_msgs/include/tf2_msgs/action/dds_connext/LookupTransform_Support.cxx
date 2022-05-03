
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LookupTransform_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "LookupTransform_Support.h"
#include "LookupTransform_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'LookupTransform_Goal_' support classes.

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
            #define TTYPENAME   LookupTransform_Goal_TYPENAME

            /* Defines */
            #define TDataWriter LookupTransform_Goal_DataWriter
            #define TData       tf2_msgs::action::dds_::LookupTransform_Goal_

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
            #define TTYPENAME   LookupTransform_Goal_TYPENAME

            /* Defines */
            #define TDataReader LookupTransform_Goal_DataReader
            #define TDataSeq    LookupTransform_Goal_Seq
            #define TData       tf2_msgs::action::dds_::LookupTransform_Goal_

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
            #define TTYPENAME    LookupTransform_Goal_TYPENAME
            #define TPlugin_new  tf2_msgs::action::dds_::LookupTransform_Goal_Plugin_new
            #define TPlugin_delete  tf2_msgs::action::dds_::LookupTransform_Goal_Plugin_delete

            /* Defines */
            #define TTypeSupport LookupTransform_Goal_TypeSupport
            #define TData        tf2_msgs::action::dds_::LookupTransform_Goal_
            #define TDataReader  LookupTransform_Goal_DataReader
            #define TDataWriter  LookupTransform_Goal_DataWriter
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
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'LookupTransform_SendGoal_Request_' support classes.

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
            #define TTYPENAME   LookupTransform_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataWriter LookupTransform_SendGoal_Request_DataWriter
            #define TData       tf2_msgs::action::dds_::LookupTransform_SendGoal_Request_

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
            #define TTYPENAME   LookupTransform_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataReader LookupTransform_SendGoal_Request_DataReader
            #define TDataSeq    LookupTransform_SendGoal_Request_Seq
            #define TData       tf2_msgs::action::dds_::LookupTransform_SendGoal_Request_

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
            #define TTYPENAME    LookupTransform_SendGoal_Request_TYPENAME
            #define TPlugin_new  tf2_msgs::action::dds_::LookupTransform_SendGoal_Request_Plugin_new
            #define TPlugin_delete  tf2_msgs::action::dds_::LookupTransform_SendGoal_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport LookupTransform_SendGoal_Request_TypeSupport
            #define TData        tf2_msgs::action::dds_::LookupTransform_SendGoal_Request_
            #define TDataReader  LookupTransform_SendGoal_Request_DataReader
            #define TDataWriter  LookupTransform_SendGoal_Request_DataWriter
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
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'LookupTransform_SendGoal_Response_' support classes.

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
            #define TTYPENAME   LookupTransform_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataWriter LookupTransform_SendGoal_Response_DataWriter
            #define TData       tf2_msgs::action::dds_::LookupTransform_SendGoal_Response_

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
            #define TTYPENAME   LookupTransform_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataReader LookupTransform_SendGoal_Response_DataReader
            #define TDataSeq    LookupTransform_SendGoal_Response_Seq
            #define TData       tf2_msgs::action::dds_::LookupTransform_SendGoal_Response_

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
            #define TTYPENAME    LookupTransform_SendGoal_Response_TYPENAME
            #define TPlugin_new  tf2_msgs::action::dds_::LookupTransform_SendGoal_Response_Plugin_new
            #define TPlugin_delete  tf2_msgs::action::dds_::LookupTransform_SendGoal_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport LookupTransform_SendGoal_Response_TypeSupport
            #define TData        tf2_msgs::action::dds_::LookupTransform_SendGoal_Response_
            #define TDataReader  LookupTransform_SendGoal_Response_DataReader
            #define TDataWriter  LookupTransform_SendGoal_Response_DataWriter
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
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'LookupTransform_Result_' support classes.

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
            #define TTYPENAME   LookupTransform_Result_TYPENAME

            /* Defines */
            #define TDataWriter LookupTransform_Result_DataWriter
            #define TData       tf2_msgs::action::dds_::LookupTransform_Result_

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
            #define TTYPENAME   LookupTransform_Result_TYPENAME

            /* Defines */
            #define TDataReader LookupTransform_Result_DataReader
            #define TDataSeq    LookupTransform_Result_Seq
            #define TData       tf2_msgs::action::dds_::LookupTransform_Result_

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
            #define TTYPENAME    LookupTransform_Result_TYPENAME
            #define TPlugin_new  tf2_msgs::action::dds_::LookupTransform_Result_Plugin_new
            #define TPlugin_delete  tf2_msgs::action::dds_::LookupTransform_Result_Plugin_delete

            /* Defines */
            #define TTypeSupport LookupTransform_Result_TypeSupport
            #define TData        tf2_msgs::action::dds_::LookupTransform_Result_
            #define TDataReader  LookupTransform_Result_DataReader
            #define TDataWriter  LookupTransform_Result_DataWriter
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
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'LookupTransform_GetResult_Request_' support classes.

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
            #define TTYPENAME   LookupTransform_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataWriter LookupTransform_GetResult_Request_DataWriter
            #define TData       tf2_msgs::action::dds_::LookupTransform_GetResult_Request_

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
            #define TTYPENAME   LookupTransform_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataReader LookupTransform_GetResult_Request_DataReader
            #define TDataSeq    LookupTransform_GetResult_Request_Seq
            #define TData       tf2_msgs::action::dds_::LookupTransform_GetResult_Request_

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
            #define TTYPENAME    LookupTransform_GetResult_Request_TYPENAME
            #define TPlugin_new  tf2_msgs::action::dds_::LookupTransform_GetResult_Request_Plugin_new
            #define TPlugin_delete  tf2_msgs::action::dds_::LookupTransform_GetResult_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport LookupTransform_GetResult_Request_TypeSupport
            #define TData        tf2_msgs::action::dds_::LookupTransform_GetResult_Request_
            #define TDataReader  LookupTransform_GetResult_Request_DataReader
            #define TDataWriter  LookupTransform_GetResult_Request_DataWriter
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
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'LookupTransform_GetResult_Response_' support classes.

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
            #define TTYPENAME   LookupTransform_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataWriter LookupTransform_GetResult_Response_DataWriter
            #define TData       tf2_msgs::action::dds_::LookupTransform_GetResult_Response_

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
            #define TTYPENAME   LookupTransform_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataReader LookupTransform_GetResult_Response_DataReader
            #define TDataSeq    LookupTransform_GetResult_Response_Seq
            #define TData       tf2_msgs::action::dds_::LookupTransform_GetResult_Response_

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
            #define TTYPENAME    LookupTransform_GetResult_Response_TYPENAME
            #define TPlugin_new  tf2_msgs::action::dds_::LookupTransform_GetResult_Response_Plugin_new
            #define TPlugin_delete  tf2_msgs::action::dds_::LookupTransform_GetResult_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport LookupTransform_GetResult_Response_TypeSupport
            #define TData        tf2_msgs::action::dds_::LookupTransform_GetResult_Response_
            #define TDataReader  LookupTransform_GetResult_Response_DataReader
            #define TDataWriter  LookupTransform_GetResult_Response_DataWriter
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
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'LookupTransform_Feedback_' support classes.

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
            #define TTYPENAME   LookupTransform_Feedback_TYPENAME

            /* Defines */
            #define TDataWriter LookupTransform_Feedback_DataWriter
            #define TData       tf2_msgs::action::dds_::LookupTransform_Feedback_

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
            #define TTYPENAME   LookupTransform_Feedback_TYPENAME

            /* Defines */
            #define TDataReader LookupTransform_Feedback_DataReader
            #define TDataSeq    LookupTransform_Feedback_Seq
            #define TData       tf2_msgs::action::dds_::LookupTransform_Feedback_

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
            #define TTYPENAME    LookupTransform_Feedback_TYPENAME
            #define TPlugin_new  tf2_msgs::action::dds_::LookupTransform_Feedback_Plugin_new
            #define TPlugin_delete  tf2_msgs::action::dds_::LookupTransform_Feedback_Plugin_delete

            /* Defines */
            #define TTypeSupport LookupTransform_Feedback_TypeSupport
            #define TData        tf2_msgs::action::dds_::LookupTransform_Feedback_
            #define TDataReader  LookupTransform_Feedback_DataReader
            #define TDataWriter  LookupTransform_Feedback_DataWriter
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
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'LookupTransform_FeedbackMessage_' support classes.

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
            #define TTYPENAME   LookupTransform_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataWriter LookupTransform_FeedbackMessage_DataWriter
            #define TData       tf2_msgs::action::dds_::LookupTransform_FeedbackMessage_

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
            #define TTYPENAME   LookupTransform_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataReader LookupTransform_FeedbackMessage_DataReader
            #define TDataSeq    LookupTransform_FeedbackMessage_Seq
            #define TData       tf2_msgs::action::dds_::LookupTransform_FeedbackMessage_

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
            #define TTYPENAME    LookupTransform_FeedbackMessage_TYPENAME
            #define TPlugin_new  tf2_msgs::action::dds_::LookupTransform_FeedbackMessage_Plugin_new
            #define TPlugin_delete  tf2_msgs::action::dds_::LookupTransform_FeedbackMessage_Plugin_delete

            /* Defines */
            #define TTypeSupport LookupTransform_FeedbackMessage_TypeSupport
            #define TData        tf2_msgs::action::dds_::LookupTransform_FeedbackMessage_
            #define TDataReader  LookupTransform_FeedbackMessage_DataReader
            #define TDataWriter  LookupTransform_FeedbackMessage_DataWriter
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
    } /* namespace action  */
} /* namespace tf2_msgs  */

