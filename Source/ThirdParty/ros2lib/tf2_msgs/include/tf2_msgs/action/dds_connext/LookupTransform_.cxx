

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LookupTransform_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "LookupTransform_.h"

#include <new>

namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *LookupTransform_Goal_TYPENAME = "tf2_msgs::action::dds_::LookupTransform_Goal_";

            DDS_TypeCode* LookupTransform_Goal__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode LookupTransform_Goal__g_tc_target_frame__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode LookupTransform_Goal__g_tc_source_frame__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode LookupTransform_Goal__g_tc_fixed_frame__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member LookupTransform_Goal__g_tc_members[7]=
                {

                    {
                        (char *)"target_frame_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"source_frame_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"source_time_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"timeout_",/* Member name */
                        {
                            3,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"target_time_",/* Member name */
                        {
                            4,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"fixed_frame_",/* Member name */
                        {
                            5,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"advanced_",/* Member name */
                        {
                            6,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode LookupTransform_Goal__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tf2_msgs::action::dds_::LookupTransform_Goal_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        LookupTransform_Goal__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LookupTransform_Goal_*/

                if (is_initialized) {
                    return &LookupTransform_Goal__g_tc;
                }

                LookupTransform_Goal__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&LookupTransform_Goal__g_tc_target_frame__string;

                LookupTransform_Goal__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&LookupTransform_Goal__g_tc_source_frame__string;

                LookupTransform_Goal__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                LookupTransform_Goal__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Duration__get_typecode();

                LookupTransform_Goal__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                LookupTransform_Goal__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&LookupTransform_Goal__g_tc_fixed_frame__string;

                LookupTransform_Goal__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &LookupTransform_Goal__g_tc;
            }

            RTIBool LookupTransform_Goal__initialize(
                LookupTransform_Goal_* sample) {
                return tf2_msgs::action::dds_::LookupTransform_Goal__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LookupTransform_Goal__initialize_ex(
                LookupTransform_Goal_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tf2_msgs::action::dds_::LookupTransform_Goal__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LookupTransform_Goal__initialize_w_params(
                LookupTransform_Goal_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->target_frame_= DDS_String_alloc ((0));
                    if (sample->target_frame_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->target_frame_!= NULL) { 
                        sample->target_frame_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->source_frame_= DDS_String_alloc ((0));
                    if (sample->source_frame_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->source_frame_!= NULL) { 
                        sample->source_frame_[0] = '\0';
                    }
                }

                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->source_time_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!builtin_interfaces::msg::dds_::Duration__initialize_w_params(&sample->timeout_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->target_time_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory){
                    sample->fixed_frame_= DDS_String_alloc ((0));
                    if (sample->fixed_frame_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->fixed_frame_!= NULL) { 
                        sample->fixed_frame_[0] = '\0';
                    }
                }

                if (!RTICdrType_initBoolean(&sample->advanced_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void LookupTransform_Goal__finalize(
                LookupTransform_Goal_* sample)
            {

                tf2_msgs::action::dds_::LookupTransform_Goal__finalize_ex(sample,RTI_TRUE);
            }

            void LookupTransform_Goal__finalize_ex(
                LookupTransform_Goal_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tf2_msgs::action::dds_::LookupTransform_Goal__finalize_w_params(
                    sample,&deallocParams);
            }

            void LookupTransform_Goal__finalize_w_params(
                LookupTransform_Goal_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->target_frame_ != NULL) {
                    DDS_String_free(sample->target_frame_);
                    sample->target_frame_=NULL;

                }
                if (sample->source_frame_ != NULL) {
                    DDS_String_free(sample->source_frame_);
                    sample->source_frame_=NULL;

                }
                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->source_time_,deallocParams);

                builtin_interfaces::msg::dds_::Duration__finalize_w_params(&sample->timeout_,deallocParams);

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->target_time_,deallocParams);

                if (sample->fixed_frame_ != NULL) {
                    DDS_String_free(sample->fixed_frame_);
                    sample->fixed_frame_=NULL;

                }

            }

            void LookupTransform_Goal__finalize_optional_members(
                LookupTransform_Goal_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->source_time_, deallocParams->delete_pointers);
                builtin_interfaces::msg::dds_::Duration__finalize_optional_members(&sample->timeout_, deallocParams->delete_pointers);
                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->target_time_, deallocParams->delete_pointers);
            }

            RTIBool LookupTransform_Goal__copy(
                LookupTransform_Goal_* dst,
                const LookupTransform_Goal_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->target_frame_, src->target_frame_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->source_frame_, src->source_frame_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->source_time_,(const builtin_interfaces::msg::dds_::Time_*)&src->source_time_)) {
                        return RTI_FALSE;
                    } 
                    if (!builtin_interfaces::msg::dds_::Duration__copy(
                        &dst->timeout_,(const builtin_interfaces::msg::dds_::Duration_*)&src->timeout_)) {
                        return RTI_FALSE;
                    } 
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->target_time_,(const builtin_interfaces::msg::dds_::Time_*)&src->target_time_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyStringEx (
                        &dst->fixed_frame_, src->fixed_frame_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyBoolean (
                        &dst->advanced_, &src->advanced_)) { 
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'LookupTransform_Goal_' sequence class.
            */
            #define T LookupTransform_Goal_
            #define TSeq LookupTransform_Goal_Seq

            #define T_initialize_w_params tf2_msgs::action::dds_::LookupTransform_Goal__initialize_w_params

            #define T_finalize_w_params   tf2_msgs::action::dds_::LookupTransform_Goal__finalize_w_params
            #define T_copy       tf2_msgs::action::dds_::LookupTransform_Goal__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *LookupTransform_SendGoal_Request_TYPENAME = "tf2_msgs::action::dds_::LookupTransform_SendGoal_Request_";

            DDS_TypeCode* LookupTransform_SendGoal_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LookupTransform_SendGoal_Request__g_tc_members[2]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"goal_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode LookupTransform_SendGoal_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tf2_msgs::action::dds_::LookupTransform_SendGoal_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LookupTransform_SendGoal_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LookupTransform_SendGoal_Request_*/

                if (is_initialized) {
                    return &LookupTransform_SendGoal_Request__g_tc;
                }

                LookupTransform_SendGoal_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                LookupTransform_SendGoal_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)tf2_msgs::action::dds_::LookupTransform_Goal__get_typecode();

                is_initialized = RTI_TRUE;

                return &LookupTransform_SendGoal_Request__g_tc;
            }

            RTIBool LookupTransform_SendGoal_Request__initialize(
                LookupTransform_SendGoal_Request_* sample) {
                return tf2_msgs::action::dds_::LookupTransform_SendGoal_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LookupTransform_SendGoal_Request__initialize_ex(
                LookupTransform_SendGoal_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tf2_msgs::action::dds_::LookupTransform_SendGoal_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LookupTransform_SendGoal_Request__initialize_w_params(
                LookupTransform_SendGoal_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!tf2_msgs::action::dds_::LookupTransform_Goal__initialize_w_params(&sample->goal_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void LookupTransform_SendGoal_Request__finalize(
                LookupTransform_SendGoal_Request_* sample)
            {

                tf2_msgs::action::dds_::LookupTransform_SendGoal_Request__finalize_ex(sample,RTI_TRUE);
            }

            void LookupTransform_SendGoal_Request__finalize_ex(
                LookupTransform_SendGoal_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tf2_msgs::action::dds_::LookupTransform_SendGoal_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void LookupTransform_SendGoal_Request__finalize_w_params(
                LookupTransform_SendGoal_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                tf2_msgs::action::dds_::LookupTransform_Goal__finalize_w_params(&sample->goal_,deallocParams);

            }

            void LookupTransform_SendGoal_Request__finalize_optional_members(
                LookupTransform_SendGoal_Request_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
                tf2_msgs::action::dds_::LookupTransform_Goal__finalize_optional_members(&sample->goal_, deallocParams->delete_pointers);
            }

            RTIBool LookupTransform_SendGoal_Request__copy(
                LookupTransform_SendGoal_Request_* dst,
                const LookupTransform_SendGoal_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!tf2_msgs::action::dds_::LookupTransform_Goal__copy(
                        &dst->goal_,(const tf2_msgs::action::dds_::LookupTransform_Goal_*)&src->goal_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'LookupTransform_SendGoal_Request_' sequence class.
            */
            #define T LookupTransform_SendGoal_Request_
            #define TSeq LookupTransform_SendGoal_Request_Seq

            #define T_initialize_w_params tf2_msgs::action::dds_::LookupTransform_SendGoal_Request__initialize_w_params

            #define T_finalize_w_params   tf2_msgs::action::dds_::LookupTransform_SendGoal_Request__finalize_w_params
            #define T_copy       tf2_msgs::action::dds_::LookupTransform_SendGoal_Request__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *LookupTransform_SendGoal_Response_TYPENAME = "tf2_msgs::action::dds_::LookupTransform_SendGoal_Response_";

            DDS_TypeCode* LookupTransform_SendGoal_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LookupTransform_SendGoal_Response__g_tc_members[2]=
                {

                    {
                        (char *)"accepted_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"stamp_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode LookupTransform_SendGoal_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tf2_msgs::action::dds_::LookupTransform_SendGoal_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LookupTransform_SendGoal_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LookupTransform_SendGoal_Response_*/

                if (is_initialized) {
                    return &LookupTransform_SendGoal_Response__g_tc;
                }

                LookupTransform_SendGoal_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                LookupTransform_SendGoal_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &LookupTransform_SendGoal_Response__g_tc;
            }

            RTIBool LookupTransform_SendGoal_Response__initialize(
                LookupTransform_SendGoal_Response_* sample) {
                return tf2_msgs::action::dds_::LookupTransform_SendGoal_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LookupTransform_SendGoal_Response__initialize_ex(
                LookupTransform_SendGoal_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tf2_msgs::action::dds_::LookupTransform_SendGoal_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LookupTransform_SendGoal_Response__initialize_w_params(
                LookupTransform_SendGoal_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->accepted_)) {
                    return RTI_FALSE;
                }

                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->stamp_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void LookupTransform_SendGoal_Response__finalize(
                LookupTransform_SendGoal_Response_* sample)
            {

                tf2_msgs::action::dds_::LookupTransform_SendGoal_Response__finalize_ex(sample,RTI_TRUE);
            }

            void LookupTransform_SendGoal_Response__finalize_ex(
                LookupTransform_SendGoal_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tf2_msgs::action::dds_::LookupTransform_SendGoal_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void LookupTransform_SendGoal_Response__finalize_w_params(
                LookupTransform_SendGoal_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->stamp_,deallocParams);

            }

            void LookupTransform_SendGoal_Response__finalize_optional_members(
                LookupTransform_SendGoal_Response_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->stamp_, deallocParams->delete_pointers);
            }

            RTIBool LookupTransform_SendGoal_Response__copy(
                LookupTransform_SendGoal_Response_* dst,
                const LookupTransform_SendGoal_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->accepted_, &src->accepted_)) { 
                        return RTI_FALSE;
                    }
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->stamp_,(const builtin_interfaces::msg::dds_::Time_*)&src->stamp_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'LookupTransform_SendGoal_Response_' sequence class.
            */
            #define T LookupTransform_SendGoal_Response_
            #define TSeq LookupTransform_SendGoal_Response_Seq

            #define T_initialize_w_params tf2_msgs::action::dds_::LookupTransform_SendGoal_Response__initialize_w_params

            #define T_finalize_w_params   tf2_msgs::action::dds_::LookupTransform_SendGoal_Response__finalize_w_params
            #define T_copy       tf2_msgs::action::dds_::LookupTransform_SendGoal_Response__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *LookupTransform_Result_TYPENAME = "tf2_msgs::action::dds_::LookupTransform_Result_";

            DDS_TypeCode* LookupTransform_Result__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LookupTransform_Result__g_tc_members[2]=
                {

                    {
                        (char *)"transform_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"error_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode LookupTransform_Result__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tf2_msgs::action::dds_::LookupTransform_Result_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LookupTransform_Result__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LookupTransform_Result_*/

                if (is_initialized) {
                    return &LookupTransform_Result__g_tc;
                }

                LookupTransform_Result__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::TransformStamped__get_typecode();

                LookupTransform_Result__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)tf2_msgs::msg::dds_::TF2Error__get_typecode();

                is_initialized = RTI_TRUE;

                return &LookupTransform_Result__g_tc;
            }

            RTIBool LookupTransform_Result__initialize(
                LookupTransform_Result_* sample) {
                return tf2_msgs::action::dds_::LookupTransform_Result__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LookupTransform_Result__initialize_ex(
                LookupTransform_Result_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tf2_msgs::action::dds_::LookupTransform_Result__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LookupTransform_Result__initialize_w_params(
                LookupTransform_Result_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::TransformStamped__initialize_w_params(&sample->transform_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!tf2_msgs::msg::dds_::TF2Error__initialize_w_params(&sample->error_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void LookupTransform_Result__finalize(
                LookupTransform_Result_* sample)
            {

                tf2_msgs::action::dds_::LookupTransform_Result__finalize_ex(sample,RTI_TRUE);
            }

            void LookupTransform_Result__finalize_ex(
                LookupTransform_Result_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tf2_msgs::action::dds_::LookupTransform_Result__finalize_w_params(
                    sample,&deallocParams);
            }

            void LookupTransform_Result__finalize_w_params(
                LookupTransform_Result_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::TransformStamped__finalize_w_params(&sample->transform_,deallocParams);

                tf2_msgs::msg::dds_::TF2Error__finalize_w_params(&sample->error_,deallocParams);

            }

            void LookupTransform_Result__finalize_optional_members(
                LookupTransform_Result_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                geometry_msgs::msg::dds_::TransformStamped__finalize_optional_members(&sample->transform_, deallocParams->delete_pointers);
                tf2_msgs::msg::dds_::TF2Error__finalize_optional_members(&sample->error_, deallocParams->delete_pointers);
            }

            RTIBool LookupTransform_Result__copy(
                LookupTransform_Result_* dst,
                const LookupTransform_Result_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!geometry_msgs::msg::dds_::TransformStamped__copy(
                        &dst->transform_,(const geometry_msgs::msg::dds_::TransformStamped_*)&src->transform_)) {
                        return RTI_FALSE;
                    } 
                    if (!tf2_msgs::msg::dds_::TF2Error__copy(
                        &dst->error_,(const tf2_msgs::msg::dds_::TF2Error_*)&src->error_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'LookupTransform_Result_' sequence class.
            */
            #define T LookupTransform_Result_
            #define TSeq LookupTransform_Result_Seq

            #define T_initialize_w_params tf2_msgs::action::dds_::LookupTransform_Result__initialize_w_params

            #define T_finalize_w_params   tf2_msgs::action::dds_::LookupTransform_Result__finalize_w_params
            #define T_copy       tf2_msgs::action::dds_::LookupTransform_Result__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *LookupTransform_GetResult_Request_TYPENAME = "tf2_msgs::action::dds_::LookupTransform_GetResult_Request_";

            DDS_TypeCode* LookupTransform_GetResult_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LookupTransform_GetResult_Request__g_tc_members[1]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode LookupTransform_GetResult_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tf2_msgs::action::dds_::LookupTransform_GetResult_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        LookupTransform_GetResult_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LookupTransform_GetResult_Request_*/

                if (is_initialized) {
                    return &LookupTransform_GetResult_Request__g_tc;
                }

                LookupTransform_GetResult_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                is_initialized = RTI_TRUE;

                return &LookupTransform_GetResult_Request__g_tc;
            }

            RTIBool LookupTransform_GetResult_Request__initialize(
                LookupTransform_GetResult_Request_* sample) {
                return tf2_msgs::action::dds_::LookupTransform_GetResult_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LookupTransform_GetResult_Request__initialize_ex(
                LookupTransform_GetResult_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tf2_msgs::action::dds_::LookupTransform_GetResult_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LookupTransform_GetResult_Request__initialize_w_params(
                LookupTransform_GetResult_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void LookupTransform_GetResult_Request__finalize(
                LookupTransform_GetResult_Request_* sample)
            {

                tf2_msgs::action::dds_::LookupTransform_GetResult_Request__finalize_ex(sample,RTI_TRUE);
            }

            void LookupTransform_GetResult_Request__finalize_ex(
                LookupTransform_GetResult_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tf2_msgs::action::dds_::LookupTransform_GetResult_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void LookupTransform_GetResult_Request__finalize_w_params(
                LookupTransform_GetResult_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

            }

            void LookupTransform_GetResult_Request__finalize_optional_members(
                LookupTransform_GetResult_Request_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
            }

            RTIBool LookupTransform_GetResult_Request__copy(
                LookupTransform_GetResult_Request_* dst,
                const LookupTransform_GetResult_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'LookupTransform_GetResult_Request_' sequence class.
            */
            #define T LookupTransform_GetResult_Request_
            #define TSeq LookupTransform_GetResult_Request_Seq

            #define T_initialize_w_params tf2_msgs::action::dds_::LookupTransform_GetResult_Request__initialize_w_params

            #define T_finalize_w_params   tf2_msgs::action::dds_::LookupTransform_GetResult_Request__finalize_w_params
            #define T_copy       tf2_msgs::action::dds_::LookupTransform_GetResult_Request__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *LookupTransform_GetResult_Response_TYPENAME = "tf2_msgs::action::dds_::LookupTransform_GetResult_Response_";

            DDS_TypeCode* LookupTransform_GetResult_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LookupTransform_GetResult_Response__g_tc_members[2]=
                {

                    {
                        (char *)"status_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"result_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode LookupTransform_GetResult_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tf2_msgs::action::dds_::LookupTransform_GetResult_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LookupTransform_GetResult_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LookupTransform_GetResult_Response_*/

                if (is_initialized) {
                    return &LookupTransform_GetResult_Response__g_tc;
                }

                LookupTransform_GetResult_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                LookupTransform_GetResult_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)tf2_msgs::action::dds_::LookupTransform_Result__get_typecode();

                is_initialized = RTI_TRUE;

                return &LookupTransform_GetResult_Response__g_tc;
            }

            RTIBool LookupTransform_GetResult_Response__initialize(
                LookupTransform_GetResult_Response_* sample) {
                return tf2_msgs::action::dds_::LookupTransform_GetResult_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LookupTransform_GetResult_Response__initialize_ex(
                LookupTransform_GetResult_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tf2_msgs::action::dds_::LookupTransform_GetResult_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LookupTransform_GetResult_Response__initialize_w_params(
                LookupTransform_GetResult_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->status_)) {
                    return RTI_FALSE;
                }

                if (!tf2_msgs::action::dds_::LookupTransform_Result__initialize_w_params(&sample->result_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void LookupTransform_GetResult_Response__finalize(
                LookupTransform_GetResult_Response_* sample)
            {

                tf2_msgs::action::dds_::LookupTransform_GetResult_Response__finalize_ex(sample,RTI_TRUE);
            }

            void LookupTransform_GetResult_Response__finalize_ex(
                LookupTransform_GetResult_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tf2_msgs::action::dds_::LookupTransform_GetResult_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void LookupTransform_GetResult_Response__finalize_w_params(
                LookupTransform_GetResult_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                tf2_msgs::action::dds_::LookupTransform_Result__finalize_w_params(&sample->result_,deallocParams);

            }

            void LookupTransform_GetResult_Response__finalize_optional_members(
                LookupTransform_GetResult_Response_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                tf2_msgs::action::dds_::LookupTransform_Result__finalize_optional_members(&sample->result_, deallocParams->delete_pointers);
            }

            RTIBool LookupTransform_GetResult_Response__copy(
                LookupTransform_GetResult_Response_* dst,
                const LookupTransform_GetResult_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->status_, &src->status_)) { 
                        return RTI_FALSE;
                    }
                    if (!tf2_msgs::action::dds_::LookupTransform_Result__copy(
                        &dst->result_,(const tf2_msgs::action::dds_::LookupTransform_Result_*)&src->result_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'LookupTransform_GetResult_Response_' sequence class.
            */
            #define T LookupTransform_GetResult_Response_
            #define TSeq LookupTransform_GetResult_Response_Seq

            #define T_initialize_w_params tf2_msgs::action::dds_::LookupTransform_GetResult_Response__initialize_w_params

            #define T_finalize_w_params   tf2_msgs::action::dds_::LookupTransform_GetResult_Response__finalize_w_params
            #define T_copy       tf2_msgs::action::dds_::LookupTransform_GetResult_Response__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *LookupTransform_Feedback_TYPENAME = "tf2_msgs::action::dds_::LookupTransform_Feedback_";

            DDS_TypeCode* LookupTransform_Feedback__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LookupTransform_Feedback__g_tc_members[1]=
                {

                    {
                        (char *)"structure_needs_at_least_one_member_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode LookupTransform_Feedback__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tf2_msgs::action::dds_::LookupTransform_Feedback_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        LookupTransform_Feedback__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LookupTransform_Feedback_*/

                if (is_initialized) {
                    return &LookupTransform_Feedback__g_tc;
                }

                LookupTransform_Feedback__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &LookupTransform_Feedback__g_tc;
            }

            RTIBool LookupTransform_Feedback__initialize(
                LookupTransform_Feedback_* sample) {
                return tf2_msgs::action::dds_::LookupTransform_Feedback__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LookupTransform_Feedback__initialize_ex(
                LookupTransform_Feedback_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tf2_msgs::action::dds_::LookupTransform_Feedback__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LookupTransform_Feedback__initialize_w_params(
                LookupTransform_Feedback_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->structure_needs_at_least_one_member_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void LookupTransform_Feedback__finalize(
                LookupTransform_Feedback_* sample)
            {

                tf2_msgs::action::dds_::LookupTransform_Feedback__finalize_ex(sample,RTI_TRUE);
            }

            void LookupTransform_Feedback__finalize_ex(
                LookupTransform_Feedback_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tf2_msgs::action::dds_::LookupTransform_Feedback__finalize_w_params(
                    sample,&deallocParams);
            }

            void LookupTransform_Feedback__finalize_w_params(
                LookupTransform_Feedback_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void LookupTransform_Feedback__finalize_optional_members(
                LookupTransform_Feedback_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

            }

            RTIBool LookupTransform_Feedback__copy(
                LookupTransform_Feedback_* dst,
                const LookupTransform_Feedback_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->structure_needs_at_least_one_member_, &src->structure_needs_at_least_one_member_)) { 
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'LookupTransform_Feedback_' sequence class.
            */
            #define T LookupTransform_Feedback_
            #define TSeq LookupTransform_Feedback_Seq

            #define T_initialize_w_params tf2_msgs::action::dds_::LookupTransform_Feedback__initialize_w_params

            #define T_finalize_w_params   tf2_msgs::action::dds_::LookupTransform_Feedback__finalize_w_params
            #define T_copy       tf2_msgs::action::dds_::LookupTransform_Feedback__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *LookupTransform_FeedbackMessage_TYPENAME = "tf2_msgs::action::dds_::LookupTransform_FeedbackMessage_";

            DDS_TypeCode* LookupTransform_FeedbackMessage__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member LookupTransform_FeedbackMessage__g_tc_members[2]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"feedback_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode LookupTransform_FeedbackMessage__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tf2_msgs::action::dds_::LookupTransform_FeedbackMessage_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        LookupTransform_FeedbackMessage__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for LookupTransform_FeedbackMessage_*/

                if (is_initialized) {
                    return &LookupTransform_FeedbackMessage__g_tc;
                }

                LookupTransform_FeedbackMessage__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                LookupTransform_FeedbackMessage__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)tf2_msgs::action::dds_::LookupTransform_Feedback__get_typecode();

                is_initialized = RTI_TRUE;

                return &LookupTransform_FeedbackMessage__g_tc;
            }

            RTIBool LookupTransform_FeedbackMessage__initialize(
                LookupTransform_FeedbackMessage_* sample) {
                return tf2_msgs::action::dds_::LookupTransform_FeedbackMessage__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool LookupTransform_FeedbackMessage__initialize_ex(
                LookupTransform_FeedbackMessage_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tf2_msgs::action::dds_::LookupTransform_FeedbackMessage__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool LookupTransform_FeedbackMessage__initialize_w_params(
                LookupTransform_FeedbackMessage_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!tf2_msgs::action::dds_::LookupTransform_Feedback__initialize_w_params(&sample->feedback_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void LookupTransform_FeedbackMessage__finalize(
                LookupTransform_FeedbackMessage_* sample)
            {

                tf2_msgs::action::dds_::LookupTransform_FeedbackMessage__finalize_ex(sample,RTI_TRUE);
            }

            void LookupTransform_FeedbackMessage__finalize_ex(
                LookupTransform_FeedbackMessage_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tf2_msgs::action::dds_::LookupTransform_FeedbackMessage__finalize_w_params(
                    sample,&deallocParams);
            }

            void LookupTransform_FeedbackMessage__finalize_w_params(
                LookupTransform_FeedbackMessage_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                tf2_msgs::action::dds_::LookupTransform_Feedback__finalize_w_params(&sample->feedback_,deallocParams);

            }

            void LookupTransform_FeedbackMessage__finalize_optional_members(
                LookupTransform_FeedbackMessage_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
                tf2_msgs::action::dds_::LookupTransform_Feedback__finalize_optional_members(&sample->feedback_, deallocParams->delete_pointers);
            }

            RTIBool LookupTransform_FeedbackMessage__copy(
                LookupTransform_FeedbackMessage_* dst,
                const LookupTransform_FeedbackMessage_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!tf2_msgs::action::dds_::LookupTransform_Feedback__copy(
                        &dst->feedback_,(const tf2_msgs::action::dds_::LookupTransform_Feedback_*)&src->feedback_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'LookupTransform_FeedbackMessage_' sequence class.
            */
            #define T LookupTransform_FeedbackMessage_
            #define TSeq LookupTransform_FeedbackMessage_Seq

            #define T_initialize_w_params tf2_msgs::action::dds_::LookupTransform_FeedbackMessage__initialize_w_params

            #define T_finalize_w_params   tf2_msgs::action::dds_::LookupTransform_FeedbackMessage__finalize_w_params
            #define T_copy       tf2_msgs::action::dds_::LookupTransform_FeedbackMessage__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */

