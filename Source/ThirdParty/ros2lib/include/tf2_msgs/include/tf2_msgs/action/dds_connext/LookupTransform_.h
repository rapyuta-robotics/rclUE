

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LookupTransform_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LookupTransform__1421503919_h
#define LookupTransform__1421503919_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "geometry_msgs/msg/dds_connext/TransformStamped_.h"
#include "tf2_msgs/msg/dds_connext/TF2Error_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            extern const char *LookupTransform_Goal_TYPENAME;

            struct LookupTransform_Goal_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LookupTransform_Goal_TypeSupport;
            class LookupTransform_Goal_DataWriter;
            class LookupTransform_Goal_DataReader;
            #endif

            class LookupTransform_Goal_ 
            {
              public:
                typedef struct LookupTransform_Goal_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LookupTransform_Goal_TypeSupport TypeSupport;
                typedef LookupTransform_Goal_DataWriter DataWriter;
                typedef LookupTransform_Goal_DataReader DataReader;
                #endif

                DDS_Char *   target_frame_ ;
                DDS_Char *   source_frame_ ;
                builtin_interfaces::msg::dds_::Time_   source_time_ ;
                builtin_interfaces::msg::dds_::Duration_   timeout_ ;
                builtin_interfaces::msg::dds_::Time_   target_time_ ;
                DDS_Char *   fixed_frame_ ;
                DDS_Boolean   advanced_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LookupTransform_Goal__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LookupTransform_Goal_Seq, LookupTransform_Goal_);

            NDDSUSERDllExport
            RTIBool LookupTransform_Goal__initialize(
                LookupTransform_Goal_* self);

            NDDSUSERDllExport
            RTIBool LookupTransform_Goal__initialize_ex(
                LookupTransform_Goal_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LookupTransform_Goal__initialize_w_params(
                LookupTransform_Goal_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LookupTransform_Goal__finalize(
                LookupTransform_Goal_* self);

            NDDSUSERDllExport
            void LookupTransform_Goal__finalize_ex(
                LookupTransform_Goal_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LookupTransform_Goal__finalize_w_params(
                LookupTransform_Goal_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LookupTransform_Goal__finalize_optional_members(
                LookupTransform_Goal_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LookupTransform_Goal__copy(
                LookupTransform_Goal_* dst,
                const LookupTransform_Goal_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            extern const char *LookupTransform_SendGoal_Request_TYPENAME;

            struct LookupTransform_SendGoal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LookupTransform_SendGoal_Request_TypeSupport;
            class LookupTransform_SendGoal_Request_DataWriter;
            class LookupTransform_SendGoal_Request_DataReader;
            #endif

            class LookupTransform_SendGoal_Request_ 
            {
              public:
                typedef struct LookupTransform_SendGoal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LookupTransform_SendGoal_Request_TypeSupport TypeSupport;
                typedef LookupTransform_SendGoal_Request_DataWriter DataWriter;
                typedef LookupTransform_SendGoal_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                tf2_msgs::action::dds_::LookupTransform_Goal_   goal_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LookupTransform_SendGoal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LookupTransform_SendGoal_Request_Seq, LookupTransform_SendGoal_Request_);

            NDDSUSERDllExport
            RTIBool LookupTransform_SendGoal_Request__initialize(
                LookupTransform_SendGoal_Request_* self);

            NDDSUSERDllExport
            RTIBool LookupTransform_SendGoal_Request__initialize_ex(
                LookupTransform_SendGoal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LookupTransform_SendGoal_Request__initialize_w_params(
                LookupTransform_SendGoal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LookupTransform_SendGoal_Request__finalize(
                LookupTransform_SendGoal_Request_* self);

            NDDSUSERDllExport
            void LookupTransform_SendGoal_Request__finalize_ex(
                LookupTransform_SendGoal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LookupTransform_SendGoal_Request__finalize_w_params(
                LookupTransform_SendGoal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LookupTransform_SendGoal_Request__finalize_optional_members(
                LookupTransform_SendGoal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LookupTransform_SendGoal_Request__copy(
                LookupTransform_SendGoal_Request_* dst,
                const LookupTransform_SendGoal_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            extern const char *LookupTransform_SendGoal_Response_TYPENAME;

            struct LookupTransform_SendGoal_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LookupTransform_SendGoal_Response_TypeSupport;
            class LookupTransform_SendGoal_Response_DataWriter;
            class LookupTransform_SendGoal_Response_DataReader;
            #endif

            class LookupTransform_SendGoal_Response_ 
            {
              public:
                typedef struct LookupTransform_SendGoal_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LookupTransform_SendGoal_Response_TypeSupport TypeSupport;
                typedef LookupTransform_SendGoal_Response_DataWriter DataWriter;
                typedef LookupTransform_SendGoal_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* LookupTransform_SendGoal_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LookupTransform_SendGoal_Response_Seq, LookupTransform_SendGoal_Response_);

            NDDSUSERDllExport
            RTIBool LookupTransform_SendGoal_Response__initialize(
                LookupTransform_SendGoal_Response_* self);

            NDDSUSERDllExport
            RTIBool LookupTransform_SendGoal_Response__initialize_ex(
                LookupTransform_SendGoal_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LookupTransform_SendGoal_Response__initialize_w_params(
                LookupTransform_SendGoal_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LookupTransform_SendGoal_Response__finalize(
                LookupTransform_SendGoal_Response_* self);

            NDDSUSERDllExport
            void LookupTransform_SendGoal_Response__finalize_ex(
                LookupTransform_SendGoal_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LookupTransform_SendGoal_Response__finalize_w_params(
                LookupTransform_SendGoal_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LookupTransform_SendGoal_Response__finalize_optional_members(
                LookupTransform_SendGoal_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LookupTransform_SendGoal_Response__copy(
                LookupTransform_SendGoal_Response_* dst,
                const LookupTransform_SendGoal_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            extern const char *LookupTransform_Result_TYPENAME;

            struct LookupTransform_Result_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LookupTransform_Result_TypeSupport;
            class LookupTransform_Result_DataWriter;
            class LookupTransform_Result_DataReader;
            #endif

            class LookupTransform_Result_ 
            {
              public:
                typedef struct LookupTransform_Result_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LookupTransform_Result_TypeSupport TypeSupport;
                typedef LookupTransform_Result_DataWriter DataWriter;
                typedef LookupTransform_Result_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::TransformStamped_   transform_ ;
                tf2_msgs::msg::dds_::TF2Error_   error_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LookupTransform_Result__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LookupTransform_Result_Seq, LookupTransform_Result_);

            NDDSUSERDllExport
            RTIBool LookupTransform_Result__initialize(
                LookupTransform_Result_* self);

            NDDSUSERDllExport
            RTIBool LookupTransform_Result__initialize_ex(
                LookupTransform_Result_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LookupTransform_Result__initialize_w_params(
                LookupTransform_Result_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LookupTransform_Result__finalize(
                LookupTransform_Result_* self);

            NDDSUSERDllExport
            void LookupTransform_Result__finalize_ex(
                LookupTransform_Result_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LookupTransform_Result__finalize_w_params(
                LookupTransform_Result_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LookupTransform_Result__finalize_optional_members(
                LookupTransform_Result_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LookupTransform_Result__copy(
                LookupTransform_Result_* dst,
                const LookupTransform_Result_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            extern const char *LookupTransform_GetResult_Request_TYPENAME;

            struct LookupTransform_GetResult_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LookupTransform_GetResult_Request_TypeSupport;
            class LookupTransform_GetResult_Request_DataWriter;
            class LookupTransform_GetResult_Request_DataReader;
            #endif

            class LookupTransform_GetResult_Request_ 
            {
              public:
                typedef struct LookupTransform_GetResult_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LookupTransform_GetResult_Request_TypeSupport TypeSupport;
                typedef LookupTransform_GetResult_Request_DataWriter DataWriter;
                typedef LookupTransform_GetResult_Request_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LookupTransform_GetResult_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LookupTransform_GetResult_Request_Seq, LookupTransform_GetResult_Request_);

            NDDSUSERDllExport
            RTIBool LookupTransform_GetResult_Request__initialize(
                LookupTransform_GetResult_Request_* self);

            NDDSUSERDllExport
            RTIBool LookupTransform_GetResult_Request__initialize_ex(
                LookupTransform_GetResult_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LookupTransform_GetResult_Request__initialize_w_params(
                LookupTransform_GetResult_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LookupTransform_GetResult_Request__finalize(
                LookupTransform_GetResult_Request_* self);

            NDDSUSERDllExport
            void LookupTransform_GetResult_Request__finalize_ex(
                LookupTransform_GetResult_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LookupTransform_GetResult_Request__finalize_w_params(
                LookupTransform_GetResult_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LookupTransform_GetResult_Request__finalize_optional_members(
                LookupTransform_GetResult_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LookupTransform_GetResult_Request__copy(
                LookupTransform_GetResult_Request_* dst,
                const LookupTransform_GetResult_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            extern const char *LookupTransform_GetResult_Response_TYPENAME;

            struct LookupTransform_GetResult_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LookupTransform_GetResult_Response_TypeSupport;
            class LookupTransform_GetResult_Response_DataWriter;
            class LookupTransform_GetResult_Response_DataReader;
            #endif

            class LookupTransform_GetResult_Response_ 
            {
              public:
                typedef struct LookupTransform_GetResult_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LookupTransform_GetResult_Response_TypeSupport TypeSupport;
                typedef LookupTransform_GetResult_Response_DataWriter DataWriter;
                typedef LookupTransform_GetResult_Response_DataReader DataReader;
                #endif

                DDS_Octet   status_ ;
                tf2_msgs::action::dds_::LookupTransform_Result_   result_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LookupTransform_GetResult_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LookupTransform_GetResult_Response_Seq, LookupTransform_GetResult_Response_);

            NDDSUSERDllExport
            RTIBool LookupTransform_GetResult_Response__initialize(
                LookupTransform_GetResult_Response_* self);

            NDDSUSERDllExport
            RTIBool LookupTransform_GetResult_Response__initialize_ex(
                LookupTransform_GetResult_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LookupTransform_GetResult_Response__initialize_w_params(
                LookupTransform_GetResult_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LookupTransform_GetResult_Response__finalize(
                LookupTransform_GetResult_Response_* self);

            NDDSUSERDllExport
            void LookupTransform_GetResult_Response__finalize_ex(
                LookupTransform_GetResult_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LookupTransform_GetResult_Response__finalize_w_params(
                LookupTransform_GetResult_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LookupTransform_GetResult_Response__finalize_optional_members(
                LookupTransform_GetResult_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LookupTransform_GetResult_Response__copy(
                LookupTransform_GetResult_Response_* dst,
                const LookupTransform_GetResult_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            extern const char *LookupTransform_Feedback_TYPENAME;

            struct LookupTransform_Feedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LookupTransform_Feedback_TypeSupport;
            class LookupTransform_Feedback_DataWriter;
            class LookupTransform_Feedback_DataReader;
            #endif

            class LookupTransform_Feedback_ 
            {
              public:
                typedef struct LookupTransform_Feedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LookupTransform_Feedback_TypeSupport TypeSupport;
                typedef LookupTransform_Feedback_DataWriter DataWriter;
                typedef LookupTransform_Feedback_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LookupTransform_Feedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LookupTransform_Feedback_Seq, LookupTransform_Feedback_);

            NDDSUSERDllExport
            RTIBool LookupTransform_Feedback__initialize(
                LookupTransform_Feedback_* self);

            NDDSUSERDllExport
            RTIBool LookupTransform_Feedback__initialize_ex(
                LookupTransform_Feedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LookupTransform_Feedback__initialize_w_params(
                LookupTransform_Feedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LookupTransform_Feedback__finalize(
                LookupTransform_Feedback_* self);

            NDDSUSERDllExport
            void LookupTransform_Feedback__finalize_ex(
                LookupTransform_Feedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LookupTransform_Feedback__finalize_w_params(
                LookupTransform_Feedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LookupTransform_Feedback__finalize_optional_members(
                LookupTransform_Feedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LookupTransform_Feedback__copy(
                LookupTransform_Feedback_* dst,
                const LookupTransform_Feedback_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            extern const char *LookupTransform_FeedbackMessage_TYPENAME;

            struct LookupTransform_FeedbackMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LookupTransform_FeedbackMessage_TypeSupport;
            class LookupTransform_FeedbackMessage_DataWriter;
            class LookupTransform_FeedbackMessage_DataReader;
            #endif

            class LookupTransform_FeedbackMessage_ 
            {
              public:
                typedef struct LookupTransform_FeedbackMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LookupTransform_FeedbackMessage_TypeSupport TypeSupport;
                typedef LookupTransform_FeedbackMessage_DataWriter DataWriter;
                typedef LookupTransform_FeedbackMessage_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                tf2_msgs::action::dds_::LookupTransform_Feedback_   feedback_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LookupTransform_FeedbackMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LookupTransform_FeedbackMessage_Seq, LookupTransform_FeedbackMessage_);

            NDDSUSERDllExport
            RTIBool LookupTransform_FeedbackMessage__initialize(
                LookupTransform_FeedbackMessage_* self);

            NDDSUSERDllExport
            RTIBool LookupTransform_FeedbackMessage__initialize_ex(
                LookupTransform_FeedbackMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LookupTransform_FeedbackMessage__initialize_w_params(
                LookupTransform_FeedbackMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LookupTransform_FeedbackMessage__finalize(
                LookupTransform_FeedbackMessage_* self);

            NDDSUSERDllExport
            void LookupTransform_FeedbackMessage__finalize_ex(
                LookupTransform_FeedbackMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LookupTransform_FeedbackMessage__finalize_w_params(
                LookupTransform_FeedbackMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LookupTransform_FeedbackMessage__finalize_optional_members(
                LookupTransform_FeedbackMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LookupTransform_FeedbackMessage__copy(
                LookupTransform_FeedbackMessage_* dst,
                const LookupTransform_FeedbackMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */

#endif /* LookupTransform_ */

