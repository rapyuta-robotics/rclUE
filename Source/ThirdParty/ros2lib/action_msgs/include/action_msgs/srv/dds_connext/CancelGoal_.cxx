

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CancelGoal_.idl using "rtiddsgen".
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

#include "CancelGoal_.h"

#include <new>

namespace action_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *CancelGoal_Request_TYPENAME = "action_msgs::srv::dds_::CancelGoal_Request_";

            DDS_TypeCode* CancelGoal_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member CancelGoal_Request__g_tc_members[1]=
                {

                    {
                        (char *)"goal_info_",/* Member name */
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

                static DDS_TypeCode CancelGoal_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"action_msgs::srv::dds_::CancelGoal_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        CancelGoal_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for CancelGoal_Request_*/

                if (is_initialized) {
                    return &CancelGoal_Request__g_tc;
                }

                CancelGoal_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)action_msgs::msg::dds_::GoalInfo__get_typecode();

                is_initialized = RTI_TRUE;

                return &CancelGoal_Request__g_tc;
            }

            RTIBool CancelGoal_Request__initialize(
                CancelGoal_Request_* sample) {
                return action_msgs::srv::dds_::CancelGoal_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool CancelGoal_Request__initialize_ex(
                CancelGoal_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return action_msgs::srv::dds_::CancelGoal_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool CancelGoal_Request__initialize_w_params(
                CancelGoal_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!action_msgs::msg::dds_::GoalInfo__initialize_w_params(&sample->goal_info_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void CancelGoal_Request__finalize(
                CancelGoal_Request_* sample)
            {

                action_msgs::srv::dds_::CancelGoal_Request__finalize_ex(sample,RTI_TRUE);
            }

            void CancelGoal_Request__finalize_ex(
                CancelGoal_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                action_msgs::srv::dds_::CancelGoal_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void CancelGoal_Request__finalize_w_params(
                CancelGoal_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                action_msgs::msg::dds_::GoalInfo__finalize_w_params(&sample->goal_info_,deallocParams);

            }

            void CancelGoal_Request__finalize_optional_members(
                CancelGoal_Request_* sample, RTIBool deletePointers)
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

                action_msgs::msg::dds_::GoalInfo__finalize_optional_members(&sample->goal_info_, deallocParams->delete_pointers);
            }

            RTIBool CancelGoal_Request__copy(
                CancelGoal_Request_* dst,
                const CancelGoal_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!action_msgs::msg::dds_::GoalInfo__copy(
                        &dst->goal_info_,(const action_msgs::msg::dds_::GoalInfo_*)&src->goal_info_)) {
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
            * Configure and implement 'CancelGoal_Request_' sequence class.
            */
            #define T CancelGoal_Request_
            #define TSeq CancelGoal_Request_Seq

            #define T_initialize_w_params action_msgs::srv::dds_::CancelGoal_Request__initialize_w_params

            #define T_finalize_w_params   action_msgs::srv::dds_::CancelGoal_Request__finalize_w_params
            #define T_copy       action_msgs::srv::dds_::CancelGoal_Request__copy

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
    } /* namespace srv  */
} /* namespace action_msgs  */
namespace action_msgs {
    namespace srv {
        namespace dds_ {
            namespace CancelGoal_Response_Constants {
            } /* namespace CancelGoal_Response_Constants  */

            /* ========================================================================= */
            const char *CancelGoal_Response_TYPENAME = "action_msgs::srv::dds_::CancelGoal_Response_";

            DDS_TypeCode* CancelGoal_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CancelGoal_Response__g_tc_goals_canceling__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member CancelGoal_Response__g_tc_members[2]=
                {

                    {
                        (char *)"return_code_",/* Member name */
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
                        (char *)"goals_canceling_",/* Member name */
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

                static DDS_TypeCode CancelGoal_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"action_msgs::srv::dds_::CancelGoal_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        CancelGoal_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for CancelGoal_Response_*/

                if (is_initialized) {
                    return &CancelGoal_Response__g_tc;
                }

                CancelGoal_Response__g_tc_goals_canceling__sequence._data._typeCode = (RTICdrTypeCode *)action_msgs::msg::dds_::GoalInfo__get_typecode();

                CancelGoal_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                CancelGoal_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& CancelGoal_Response__g_tc_goals_canceling__sequence;

                is_initialized = RTI_TRUE;

                return &CancelGoal_Response__g_tc;
            }

            RTIBool CancelGoal_Response__initialize(
                CancelGoal_Response_* sample) {
                return action_msgs::srv::dds_::CancelGoal_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool CancelGoal_Response__initialize_ex(
                CancelGoal_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return action_msgs::srv::dds_::CancelGoal_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool CancelGoal_Response__initialize_w_params(
                CancelGoal_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->return_code_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    action_msgs::msg::dds_::GoalInfo_Seq_initialize(&sample->goals_canceling_ );
                    action_msgs::msg::dds_::GoalInfo_Seq_set_element_allocation_params(&sample->goals_canceling_ ,allocParams);
                    action_msgs::msg::dds_::GoalInfo_Seq_set_absolute_maximum(&sample->goals_canceling_ , RTI_INT32_MAX);
                    if (!action_msgs::msg::dds_::GoalInfo_Seq_set_maximum(&sample->goals_canceling_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    action_msgs::msg::dds_::GoalInfo_Seq_set_length(&sample->goals_canceling_, 0);
                }
                return RTI_TRUE;
            }

            void CancelGoal_Response__finalize(
                CancelGoal_Response_* sample)
            {

                action_msgs::srv::dds_::CancelGoal_Response__finalize_ex(sample,RTI_TRUE);
            }

            void CancelGoal_Response__finalize_ex(
                CancelGoal_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                action_msgs::srv::dds_::CancelGoal_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void CancelGoal_Response__finalize_w_params(
                CancelGoal_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                action_msgs::msg::dds_::GoalInfo_Seq_set_element_deallocation_params(
                    &sample->goals_canceling_,deallocParams);
                action_msgs::msg::dds_::GoalInfo_Seq_finalize(&sample->goals_canceling_);

            }

            void CancelGoal_Response__finalize_optional_members(
                CancelGoal_Response_* sample, RTIBool deletePointers)
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

                {
                    DDS_UnsignedLong i, length;
                    length = action_msgs::msg::dds_::GoalInfo_Seq_get_length(
                        &sample->goals_canceling_);

                    for (i = 0; i < length; i++) {
                        action_msgs::msg::dds_::GoalInfo__finalize_optional_members(
                            action_msgs::msg::dds_::GoalInfo_Seq_get_reference(
                                &sample->goals_canceling_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool CancelGoal_Response__copy(
                CancelGoal_Response_* dst,
                const CancelGoal_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->return_code_, &src->return_code_)) { 
                        return RTI_FALSE;
                    }
                    if (!action_msgs::msg::dds_::GoalInfo_Seq_copy(&dst->goals_canceling_ ,
                    &src->goals_canceling_ )) {
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
            * Configure and implement 'CancelGoal_Response_' sequence class.
            */
            #define T CancelGoal_Response_
            #define TSeq CancelGoal_Response_Seq

            #define T_initialize_w_params action_msgs::srv::dds_::CancelGoal_Response__initialize_w_params

            #define T_finalize_w_params   action_msgs::srv::dds_::CancelGoal_Response__finalize_w_params
            #define T_copy       action_msgs::srv::dds_::CancelGoal_Response__copy

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
    } /* namespace srv  */
} /* namespace action_msgs  */

