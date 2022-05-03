
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Fibonacci_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include "Fibonacci_Support.h"
#include "Fibonacci_Plugin.h"

#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'Fibonacci_Goal_' support classes.

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
            #define TTYPENAME   Fibonacci_Goal_TYPENAME

            /* Defines */
            #define TDataWriter Fibonacci_Goal_DataWriter
            #define TData       example_interfaces::action::dds_::Fibonacci_Goal_

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
            #define TTYPENAME   Fibonacci_Goal_TYPENAME

            /* Defines */
            #define TDataReader Fibonacci_Goal_DataReader
            #define TDataSeq    Fibonacci_Goal_Seq
            #define TData       example_interfaces::action::dds_::Fibonacci_Goal_

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
            #define TTYPENAME    Fibonacci_Goal_TYPENAME
            #define TPlugin_new  example_interfaces::action::dds_::Fibonacci_Goal_Plugin_new
            #define TPlugin_delete  example_interfaces::action::dds_::Fibonacci_Goal_Plugin_delete

            /* Defines */
            #define TTypeSupport Fibonacci_Goal_TypeSupport
            #define TData        example_interfaces::action::dds_::Fibonacci_Goal_
            #define TDataReader  Fibonacci_Goal_DataReader
            #define TDataWriter  Fibonacci_Goal_DataWriter
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
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'Fibonacci_SendGoal_Request_' support classes.

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
            #define TTYPENAME   Fibonacci_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataWriter Fibonacci_SendGoal_Request_DataWriter
            #define TData       example_interfaces::action::dds_::Fibonacci_SendGoal_Request_

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
            #define TTYPENAME   Fibonacci_SendGoal_Request_TYPENAME

            /* Defines */
            #define TDataReader Fibonacci_SendGoal_Request_DataReader
            #define TDataSeq    Fibonacci_SendGoal_Request_Seq
            #define TData       example_interfaces::action::dds_::Fibonacci_SendGoal_Request_

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
            #define TTYPENAME    Fibonacci_SendGoal_Request_TYPENAME
            #define TPlugin_new  example_interfaces::action::dds_::Fibonacci_SendGoal_Request_Plugin_new
            #define TPlugin_delete  example_interfaces::action::dds_::Fibonacci_SendGoal_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport Fibonacci_SendGoal_Request_TypeSupport
            #define TData        example_interfaces::action::dds_::Fibonacci_SendGoal_Request_
            #define TDataReader  Fibonacci_SendGoal_Request_DataReader
            #define TDataWriter  Fibonacci_SendGoal_Request_DataWriter
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
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'Fibonacci_SendGoal_Response_' support classes.

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
            #define TTYPENAME   Fibonacci_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataWriter Fibonacci_SendGoal_Response_DataWriter
            #define TData       example_interfaces::action::dds_::Fibonacci_SendGoal_Response_

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
            #define TTYPENAME   Fibonacci_SendGoal_Response_TYPENAME

            /* Defines */
            #define TDataReader Fibonacci_SendGoal_Response_DataReader
            #define TDataSeq    Fibonacci_SendGoal_Response_Seq
            #define TData       example_interfaces::action::dds_::Fibonacci_SendGoal_Response_

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
            #define TTYPENAME    Fibonacci_SendGoal_Response_TYPENAME
            #define TPlugin_new  example_interfaces::action::dds_::Fibonacci_SendGoal_Response_Plugin_new
            #define TPlugin_delete  example_interfaces::action::dds_::Fibonacci_SendGoal_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport Fibonacci_SendGoal_Response_TypeSupport
            #define TData        example_interfaces::action::dds_::Fibonacci_SendGoal_Response_
            #define TDataReader  Fibonacci_SendGoal_Response_DataReader
            #define TDataWriter  Fibonacci_SendGoal_Response_DataWriter
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
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'Fibonacci_Result_' support classes.

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
            #define TTYPENAME   Fibonacci_Result_TYPENAME

            /* Defines */
            #define TDataWriter Fibonacci_Result_DataWriter
            #define TData       example_interfaces::action::dds_::Fibonacci_Result_

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
            #define TTYPENAME   Fibonacci_Result_TYPENAME

            /* Defines */
            #define TDataReader Fibonacci_Result_DataReader
            #define TDataSeq    Fibonacci_Result_Seq
            #define TData       example_interfaces::action::dds_::Fibonacci_Result_

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
            #define TTYPENAME    Fibonacci_Result_TYPENAME
            #define TPlugin_new  example_interfaces::action::dds_::Fibonacci_Result_Plugin_new
            #define TPlugin_delete  example_interfaces::action::dds_::Fibonacci_Result_Plugin_delete

            /* Defines */
            #define TTypeSupport Fibonacci_Result_TypeSupport
            #define TData        example_interfaces::action::dds_::Fibonacci_Result_
            #define TDataReader  Fibonacci_Result_DataReader
            #define TDataWriter  Fibonacci_Result_DataWriter
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
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'Fibonacci_GetResult_Request_' support classes.

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
            #define TTYPENAME   Fibonacci_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataWriter Fibonacci_GetResult_Request_DataWriter
            #define TData       example_interfaces::action::dds_::Fibonacci_GetResult_Request_

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
            #define TTYPENAME   Fibonacci_GetResult_Request_TYPENAME

            /* Defines */
            #define TDataReader Fibonacci_GetResult_Request_DataReader
            #define TDataSeq    Fibonacci_GetResult_Request_Seq
            #define TData       example_interfaces::action::dds_::Fibonacci_GetResult_Request_

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
            #define TTYPENAME    Fibonacci_GetResult_Request_TYPENAME
            #define TPlugin_new  example_interfaces::action::dds_::Fibonacci_GetResult_Request_Plugin_new
            #define TPlugin_delete  example_interfaces::action::dds_::Fibonacci_GetResult_Request_Plugin_delete

            /* Defines */
            #define TTypeSupport Fibonacci_GetResult_Request_TypeSupport
            #define TData        example_interfaces::action::dds_::Fibonacci_GetResult_Request_
            #define TDataReader  Fibonacci_GetResult_Request_DataReader
            #define TDataWriter  Fibonacci_GetResult_Request_DataWriter
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
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'Fibonacci_GetResult_Response_' support classes.

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
            #define TTYPENAME   Fibonacci_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataWriter Fibonacci_GetResult_Response_DataWriter
            #define TData       example_interfaces::action::dds_::Fibonacci_GetResult_Response_

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
            #define TTYPENAME   Fibonacci_GetResult_Response_TYPENAME

            /* Defines */
            #define TDataReader Fibonacci_GetResult_Response_DataReader
            #define TDataSeq    Fibonacci_GetResult_Response_Seq
            #define TData       example_interfaces::action::dds_::Fibonacci_GetResult_Response_

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
            #define TTYPENAME    Fibonacci_GetResult_Response_TYPENAME
            #define TPlugin_new  example_interfaces::action::dds_::Fibonacci_GetResult_Response_Plugin_new
            #define TPlugin_delete  example_interfaces::action::dds_::Fibonacci_GetResult_Response_Plugin_delete

            /* Defines */
            #define TTypeSupport Fibonacci_GetResult_Response_TypeSupport
            #define TData        example_interfaces::action::dds_::Fibonacci_GetResult_Response_
            #define TDataReader  Fibonacci_GetResult_Response_DataReader
            #define TDataWriter  Fibonacci_GetResult_Response_DataWriter
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
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'Fibonacci_Feedback_' support classes.

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
            #define TTYPENAME   Fibonacci_Feedback_TYPENAME

            /* Defines */
            #define TDataWriter Fibonacci_Feedback_DataWriter
            #define TData       example_interfaces::action::dds_::Fibonacci_Feedback_

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
            #define TTYPENAME   Fibonacci_Feedback_TYPENAME

            /* Defines */
            #define TDataReader Fibonacci_Feedback_DataReader
            #define TDataSeq    Fibonacci_Feedback_Seq
            #define TData       example_interfaces::action::dds_::Fibonacci_Feedback_

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
            #define TTYPENAME    Fibonacci_Feedback_TYPENAME
            #define TPlugin_new  example_interfaces::action::dds_::Fibonacci_Feedback_Plugin_new
            #define TPlugin_delete  example_interfaces::action::dds_::Fibonacci_Feedback_Plugin_delete

            /* Defines */
            #define TTypeSupport Fibonacci_Feedback_TypeSupport
            #define TData        example_interfaces::action::dds_::Fibonacci_Feedback_
            #define TDataReader  Fibonacci_Feedback_DataReader
            #define TDataWriter  Fibonacci_Feedback_DataWriter
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
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            /**
            <<IMPLEMENTATION>>

            Defines:   TData,
            TDataWriter,
            TDataReader,
            TTypeSupport

            Configure and implement 'Fibonacci_FeedbackMessage_' support classes.

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
            #define TTYPENAME   Fibonacci_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataWriter Fibonacci_FeedbackMessage_DataWriter
            #define TData       example_interfaces::action::dds_::Fibonacci_FeedbackMessage_

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
            #define TTYPENAME   Fibonacci_FeedbackMessage_TYPENAME

            /* Defines */
            #define TDataReader Fibonacci_FeedbackMessage_DataReader
            #define TDataSeq    Fibonacci_FeedbackMessage_Seq
            #define TData       example_interfaces::action::dds_::Fibonacci_FeedbackMessage_

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
            #define TTYPENAME    Fibonacci_FeedbackMessage_TYPENAME
            #define TPlugin_new  example_interfaces::action::dds_::Fibonacci_FeedbackMessage_Plugin_new
            #define TPlugin_delete  example_interfaces::action::dds_::Fibonacci_FeedbackMessage_Plugin_delete

            /* Defines */
            #define TTypeSupport Fibonacci_FeedbackMessage_TypeSupport
            #define TData        example_interfaces::action::dds_::Fibonacci_FeedbackMessage_
            #define TDataReader  Fibonacci_FeedbackMessage_DataReader
            #define TDataWriter  Fibonacci_FeedbackMessage_DataWriter
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
} /* namespace example_interfaces  */

