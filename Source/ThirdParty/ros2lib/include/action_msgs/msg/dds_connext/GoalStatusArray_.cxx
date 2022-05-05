

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GoalStatusArray_.idl using "rtiddsgen".
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

#include "GoalStatusArray_.h"

#include <new>

namespace action_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *GoalStatusArray_TYPENAME = "action_msgs::msg::dds_::GoalStatusArray_";

            DDS_TypeCode* GoalStatusArray__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GoalStatusArray__g_tc_status_list__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member GoalStatusArray__g_tc_members[1]=
                {

                    {
                        (char *)"status_list_",/* Member name */
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

                static DDS_TypeCode GoalStatusArray__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"action_msgs::msg::dds_::GoalStatusArray_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GoalStatusArray__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GoalStatusArray_*/

                if (is_initialized) {
                    return &GoalStatusArray__g_tc;
                }

                GoalStatusArray__g_tc_status_list__sequence._data._typeCode = (RTICdrTypeCode *)action_msgs::msg::dds_::GoalStatus__get_typecode();

                GoalStatusArray__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& GoalStatusArray__g_tc_status_list__sequence;

                is_initialized = RTI_TRUE;

                return &GoalStatusArray__g_tc;
            }

            RTIBool GoalStatusArray__initialize(
                GoalStatusArray_* sample) {
                return action_msgs::msg::dds_::GoalStatusArray__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GoalStatusArray__initialize_ex(
                GoalStatusArray_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return action_msgs::msg::dds_::GoalStatusArray__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GoalStatusArray__initialize_w_params(
                GoalStatusArray_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    action_msgs::msg::dds_::GoalStatus_Seq_initialize(&sample->status_list_ );
                    action_msgs::msg::dds_::GoalStatus_Seq_set_element_allocation_params(&sample->status_list_ ,allocParams);
                    action_msgs::msg::dds_::GoalStatus_Seq_set_absolute_maximum(&sample->status_list_ , RTI_INT32_MAX);
                    if (!action_msgs::msg::dds_::GoalStatus_Seq_set_maximum(&sample->status_list_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    action_msgs::msg::dds_::GoalStatus_Seq_set_length(&sample->status_list_, 0);
                }
                return RTI_TRUE;
            }

            void GoalStatusArray__finalize(
                GoalStatusArray_* sample)
            {

                action_msgs::msg::dds_::GoalStatusArray__finalize_ex(sample,RTI_TRUE);
            }

            void GoalStatusArray__finalize_ex(
                GoalStatusArray_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                action_msgs::msg::dds_::GoalStatusArray__finalize_w_params(
                    sample,&deallocParams);
            }

            void GoalStatusArray__finalize_w_params(
                GoalStatusArray_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                action_msgs::msg::dds_::GoalStatus_Seq_set_element_deallocation_params(
                    &sample->status_list_,deallocParams);
                action_msgs::msg::dds_::GoalStatus_Seq_finalize(&sample->status_list_);

            }

            void GoalStatusArray__finalize_optional_members(
                GoalStatusArray_* sample, RTIBool deletePointers)
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
                    length = action_msgs::msg::dds_::GoalStatus_Seq_get_length(
                        &sample->status_list_);

                    for (i = 0; i < length; i++) {
                        action_msgs::msg::dds_::GoalStatus__finalize_optional_members(
                            action_msgs::msg::dds_::GoalStatus_Seq_get_reference(
                                &sample->status_list_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool GoalStatusArray__copy(
                GoalStatusArray_* dst,
                const GoalStatusArray_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!action_msgs::msg::dds_::GoalStatus_Seq_copy(&dst->status_list_ ,
                    &src->status_list_ )) {
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
            * Configure and implement 'GoalStatusArray_' sequence class.
            */
            #define T GoalStatusArray_
            #define TSeq GoalStatusArray_Seq

            #define T_initialize_w_params action_msgs::msg::dds_::GoalStatusArray__initialize_w_params

            #define T_finalize_w_params   action_msgs::msg::dds_::GoalStatusArray__finalize_w_params
            #define T_copy       action_msgs::msg::dds_::GoalStatusArray__copy

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
    } /* namespace msg  */
} /* namespace action_msgs  */

