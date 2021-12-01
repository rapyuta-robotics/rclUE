

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Fibonacci_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Fibonacci__1767533546_h
#define Fibonacci__1767533546_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            extern const char *Fibonacci_Goal_TYPENAME;

            struct Fibonacci_Goal_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Fibonacci_Goal_TypeSupport;
            class Fibonacci_Goal_DataWriter;
            class Fibonacci_Goal_DataReader;
            #endif

            class Fibonacci_Goal_ 
            {
              public:
                typedef struct Fibonacci_Goal_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Fibonacci_Goal_TypeSupport TypeSupport;
                typedef Fibonacci_Goal_DataWriter DataWriter;
                typedef Fibonacci_Goal_DataReader DataReader;
                #endif

                DDS_Long   order_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Fibonacci_Goal__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Fibonacci_Goal_Seq, Fibonacci_Goal_);

            NDDSUSERDllExport
            RTIBool Fibonacci_Goal__initialize(
                Fibonacci_Goal_* self);

            NDDSUSERDllExport
            RTIBool Fibonacci_Goal__initialize_ex(
                Fibonacci_Goal_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Fibonacci_Goal__initialize_w_params(
                Fibonacci_Goal_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Fibonacci_Goal__finalize(
                Fibonacci_Goal_* self);

            NDDSUSERDllExport
            void Fibonacci_Goal__finalize_ex(
                Fibonacci_Goal_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Fibonacci_Goal__finalize_w_params(
                Fibonacci_Goal_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Fibonacci_Goal__finalize_optional_members(
                Fibonacci_Goal_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Fibonacci_Goal__copy(
                Fibonacci_Goal_* dst,
                const Fibonacci_Goal_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            extern const char *Fibonacci_SendGoal_Request_TYPENAME;

            struct Fibonacci_SendGoal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Fibonacci_SendGoal_Request_TypeSupport;
            class Fibonacci_SendGoal_Request_DataWriter;
            class Fibonacci_SendGoal_Request_DataReader;
            #endif

            class Fibonacci_SendGoal_Request_ 
            {
              public:
                typedef struct Fibonacci_SendGoal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Fibonacci_SendGoal_Request_TypeSupport TypeSupport;
                typedef Fibonacci_SendGoal_Request_DataWriter DataWriter;
                typedef Fibonacci_SendGoal_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                example_interfaces::action::dds_::Fibonacci_Goal_   goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Fibonacci_SendGoal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Fibonacci_SendGoal_Request_Seq, Fibonacci_SendGoal_Request_);

            NDDSUSERDllExport
            RTIBool Fibonacci_SendGoal_Request__initialize(
                Fibonacci_SendGoal_Request_* self);

            NDDSUSERDllExport
            RTIBool Fibonacci_SendGoal_Request__initialize_ex(
                Fibonacci_SendGoal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Fibonacci_SendGoal_Request__initialize_w_params(
                Fibonacci_SendGoal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Fibonacci_SendGoal_Request__finalize(
                Fibonacci_SendGoal_Request_* self);

            NDDSUSERDllExport
            void Fibonacci_SendGoal_Request__finalize_ex(
                Fibonacci_SendGoal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Fibonacci_SendGoal_Request__finalize_w_params(
                Fibonacci_SendGoal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Fibonacci_SendGoal_Request__finalize_optional_members(
                Fibonacci_SendGoal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Fibonacci_SendGoal_Request__copy(
                Fibonacci_SendGoal_Request_* dst,
                const Fibonacci_SendGoal_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            extern const char *Fibonacci_SendGoal_Response_TYPENAME;

            struct Fibonacci_SendGoal_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Fibonacci_SendGoal_Response_TypeSupport;
            class Fibonacci_SendGoal_Response_DataWriter;
            class Fibonacci_SendGoal_Response_DataReader;
            #endif

            class Fibonacci_SendGoal_Response_ 
            {
              public:
                typedef struct Fibonacci_SendGoal_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Fibonacci_SendGoal_Response_TypeSupport TypeSupport;
                typedef Fibonacci_SendGoal_Response_DataWriter DataWriter;
                typedef Fibonacci_SendGoal_Response_DataReader DataReader;
                #endif

                DDS_Boolean   accepted_ ;
                builtin_interfaces::msg::dds_::Time_   stamp_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Fibonacci_SendGoal_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Fibonacci_SendGoal_Response_Seq, Fibonacci_SendGoal_Response_);

            NDDSUSERDllExport
            RTIBool Fibonacci_SendGoal_Response__initialize(
                Fibonacci_SendGoal_Response_* self);

            NDDSUSERDllExport
            RTIBool Fibonacci_SendGoal_Response__initialize_ex(
                Fibonacci_SendGoal_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Fibonacci_SendGoal_Response__initialize_w_params(
                Fibonacci_SendGoal_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Fibonacci_SendGoal_Response__finalize(
                Fibonacci_SendGoal_Response_* self);

            NDDSUSERDllExport
            void Fibonacci_SendGoal_Response__finalize_ex(
                Fibonacci_SendGoal_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Fibonacci_SendGoal_Response__finalize_w_params(
                Fibonacci_SendGoal_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Fibonacci_SendGoal_Response__finalize_optional_members(
                Fibonacci_SendGoal_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Fibonacci_SendGoal_Response__copy(
                Fibonacci_SendGoal_Response_* dst,
                const Fibonacci_SendGoal_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            extern const char *Fibonacci_Result_TYPENAME;

            struct Fibonacci_Result_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Fibonacci_Result_TypeSupport;
            class Fibonacci_Result_DataWriter;
            class Fibonacci_Result_DataReader;
            #endif

            class Fibonacci_Result_ 
            {
              public:
                typedef struct Fibonacci_Result_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Fibonacci_Result_TypeSupport TypeSupport;
                typedef Fibonacci_Result_DataWriter DataWriter;
                typedef Fibonacci_Result_DataReader DataReader;
                #endif

                DDS_LongSeq  sequence_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Fibonacci_Result__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Fibonacci_Result_Seq, Fibonacci_Result_);

            NDDSUSERDllExport
            RTIBool Fibonacci_Result__initialize(
                Fibonacci_Result_* self);

            NDDSUSERDllExport
            RTIBool Fibonacci_Result__initialize_ex(
                Fibonacci_Result_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Fibonacci_Result__initialize_w_params(
                Fibonacci_Result_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Fibonacci_Result__finalize(
                Fibonacci_Result_* self);

            NDDSUSERDllExport
            void Fibonacci_Result__finalize_ex(
                Fibonacci_Result_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Fibonacci_Result__finalize_w_params(
                Fibonacci_Result_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Fibonacci_Result__finalize_optional_members(
                Fibonacci_Result_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Fibonacci_Result__copy(
                Fibonacci_Result_* dst,
                const Fibonacci_Result_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            extern const char *Fibonacci_GetResult_Request_TYPENAME;

            struct Fibonacci_GetResult_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Fibonacci_GetResult_Request_TypeSupport;
            class Fibonacci_GetResult_Request_DataWriter;
            class Fibonacci_GetResult_Request_DataReader;
            #endif

            class Fibonacci_GetResult_Request_ 
            {
              public:
                typedef struct Fibonacci_GetResult_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Fibonacci_GetResult_Request_TypeSupport TypeSupport;
                typedef Fibonacci_GetResult_Request_DataWriter DataWriter;
                typedef Fibonacci_GetResult_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Fibonacci_GetResult_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Fibonacci_GetResult_Request_Seq, Fibonacci_GetResult_Request_);

            NDDSUSERDllExport
            RTIBool Fibonacci_GetResult_Request__initialize(
                Fibonacci_GetResult_Request_* self);

            NDDSUSERDllExport
            RTIBool Fibonacci_GetResult_Request__initialize_ex(
                Fibonacci_GetResult_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Fibonacci_GetResult_Request__initialize_w_params(
                Fibonacci_GetResult_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Fibonacci_GetResult_Request__finalize(
                Fibonacci_GetResult_Request_* self);

            NDDSUSERDllExport
            void Fibonacci_GetResult_Request__finalize_ex(
                Fibonacci_GetResult_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Fibonacci_GetResult_Request__finalize_w_params(
                Fibonacci_GetResult_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Fibonacci_GetResult_Request__finalize_optional_members(
                Fibonacci_GetResult_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Fibonacci_GetResult_Request__copy(
                Fibonacci_GetResult_Request_* dst,
                const Fibonacci_GetResult_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            extern const char *Fibonacci_GetResult_Response_TYPENAME;

            struct Fibonacci_GetResult_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Fibonacci_GetResult_Response_TypeSupport;
            class Fibonacci_GetResult_Response_DataWriter;
            class Fibonacci_GetResult_Response_DataReader;
            #endif

            class Fibonacci_GetResult_Response_ 
            {
              public:
                typedef struct Fibonacci_GetResult_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Fibonacci_GetResult_Response_TypeSupport TypeSupport;
                typedef Fibonacci_GetResult_Response_DataWriter DataWriter;
                typedef Fibonacci_GetResult_Response_DataReader DataReader;
                #endif

                DDS_Octet   status_ ;
                example_interfaces::action::dds_::Fibonacci_Result_   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Fibonacci_GetResult_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Fibonacci_GetResult_Response_Seq, Fibonacci_GetResult_Response_);

            NDDSUSERDllExport
            RTIBool Fibonacci_GetResult_Response__initialize(
                Fibonacci_GetResult_Response_* self);

            NDDSUSERDllExport
            RTIBool Fibonacci_GetResult_Response__initialize_ex(
                Fibonacci_GetResult_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Fibonacci_GetResult_Response__initialize_w_params(
                Fibonacci_GetResult_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Fibonacci_GetResult_Response__finalize(
                Fibonacci_GetResult_Response_* self);

            NDDSUSERDllExport
            void Fibonacci_GetResult_Response__finalize_ex(
                Fibonacci_GetResult_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Fibonacci_GetResult_Response__finalize_w_params(
                Fibonacci_GetResult_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Fibonacci_GetResult_Response__finalize_optional_members(
                Fibonacci_GetResult_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Fibonacci_GetResult_Response__copy(
                Fibonacci_GetResult_Response_* dst,
                const Fibonacci_GetResult_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            extern const char *Fibonacci_Feedback_TYPENAME;

            struct Fibonacci_Feedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Fibonacci_Feedback_TypeSupport;
            class Fibonacci_Feedback_DataWriter;
            class Fibonacci_Feedback_DataReader;
            #endif

            class Fibonacci_Feedback_ 
            {
              public:
                typedef struct Fibonacci_Feedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Fibonacci_Feedback_TypeSupport TypeSupport;
                typedef Fibonacci_Feedback_DataWriter DataWriter;
                typedef Fibonacci_Feedback_DataReader DataReader;
                #endif

                DDS_LongSeq  sequence_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Fibonacci_Feedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Fibonacci_Feedback_Seq, Fibonacci_Feedback_);

            NDDSUSERDllExport
            RTIBool Fibonacci_Feedback__initialize(
                Fibonacci_Feedback_* self);

            NDDSUSERDllExport
            RTIBool Fibonacci_Feedback__initialize_ex(
                Fibonacci_Feedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Fibonacci_Feedback__initialize_w_params(
                Fibonacci_Feedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Fibonacci_Feedback__finalize(
                Fibonacci_Feedback_* self);

            NDDSUSERDllExport
            void Fibonacci_Feedback__finalize_ex(
                Fibonacci_Feedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Fibonacci_Feedback__finalize_w_params(
                Fibonacci_Feedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Fibonacci_Feedback__finalize_optional_members(
                Fibonacci_Feedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Fibonacci_Feedback__copy(
                Fibonacci_Feedback_* dst,
                const Fibonacci_Feedback_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            extern const char *Fibonacci_FeedbackMessage_TYPENAME;

            struct Fibonacci_FeedbackMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Fibonacci_FeedbackMessage_TypeSupport;
            class Fibonacci_FeedbackMessage_DataWriter;
            class Fibonacci_FeedbackMessage_DataReader;
            #endif

            class Fibonacci_FeedbackMessage_ 
            {
              public:
                typedef struct Fibonacci_FeedbackMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Fibonacci_FeedbackMessage_TypeSupport TypeSupport;
                typedef Fibonacci_FeedbackMessage_DataWriter DataWriter;
                typedef Fibonacci_FeedbackMessage_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                example_interfaces::action::dds_::Fibonacci_Feedback_   feedback_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Fibonacci_FeedbackMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Fibonacci_FeedbackMessage_Seq, Fibonacci_FeedbackMessage_);

            NDDSUSERDllExport
            RTIBool Fibonacci_FeedbackMessage__initialize(
                Fibonacci_FeedbackMessage_* self);

            NDDSUSERDllExport
            RTIBool Fibonacci_FeedbackMessage__initialize_ex(
                Fibonacci_FeedbackMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Fibonacci_FeedbackMessage__initialize_w_params(
                Fibonacci_FeedbackMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Fibonacci_FeedbackMessage__finalize(
                Fibonacci_FeedbackMessage_* self);

            NDDSUSERDllExport
            void Fibonacci_FeedbackMessage__finalize_ex(
                Fibonacci_FeedbackMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Fibonacci_FeedbackMessage__finalize_w_params(
                Fibonacci_FeedbackMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Fibonacci_FeedbackMessage__finalize_optional_members(
                Fibonacci_FeedbackMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Fibonacci_FeedbackMessage__copy(
                Fibonacci_FeedbackMessage_* dst,
                const Fibonacci_FeedbackMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace example_interfaces  */

#endif /* Fibonacci_ */

