

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TFMessage_.idl using "rtiddsgen".
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

#include "TFMessage_.h"

#include <new>

namespace tf2_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *TFMessage_TYPENAME = "tf2_msgs::msg::dds_::TFMessage_";

            DDS_TypeCode* TFMessage__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode TFMessage__g_tc_transforms__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member TFMessage__g_tc_members[1]=
                {

                    {
                        (char *)"transforms_",/* Member name */
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

                static DDS_TypeCode TFMessage__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tf2_msgs::msg::dds_::TFMessage_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        TFMessage__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for TFMessage_*/

                if (is_initialized) {
                    return &TFMessage__g_tc;
                }

                TFMessage__g_tc_transforms__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::TransformStamped__get_typecode();

                TFMessage__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& TFMessage__g_tc_transforms__sequence;

                is_initialized = RTI_TRUE;

                return &TFMessage__g_tc;
            }

            RTIBool TFMessage__initialize(
                TFMessage_* sample) {
                return tf2_msgs::msg::dds_::TFMessage__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool TFMessage__initialize_ex(
                TFMessage_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tf2_msgs::msg::dds_::TFMessage__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool TFMessage__initialize_w_params(
                TFMessage_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    geometry_msgs::msg::dds_::TransformStamped_Seq_initialize(&sample->transforms_ );
                    geometry_msgs::msg::dds_::TransformStamped_Seq_set_element_allocation_params(&sample->transforms_ ,allocParams);
                    geometry_msgs::msg::dds_::TransformStamped_Seq_set_absolute_maximum(&sample->transforms_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::TransformStamped_Seq_set_maximum(&sample->transforms_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::TransformStamped_Seq_set_length(&sample->transforms_, 0);
                }
                return RTI_TRUE;
            }

            void TFMessage__finalize(
                TFMessage_* sample)
            {

                tf2_msgs::msg::dds_::TFMessage__finalize_ex(sample,RTI_TRUE);
            }

            void TFMessage__finalize_ex(
                TFMessage_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tf2_msgs::msg::dds_::TFMessage__finalize_w_params(
                    sample,&deallocParams);
            }

            void TFMessage__finalize_w_params(
                TFMessage_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::TransformStamped_Seq_set_element_deallocation_params(
                    &sample->transforms_,deallocParams);
                geometry_msgs::msg::dds_::TransformStamped_Seq_finalize(&sample->transforms_);

            }

            void TFMessage__finalize_optional_members(
                TFMessage_* sample, RTIBool deletePointers)
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
                    length = geometry_msgs::msg::dds_::TransformStamped_Seq_get_length(
                        &sample->transforms_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::TransformStamped__finalize_optional_members(
                            geometry_msgs::msg::dds_::TransformStamped_Seq_get_reference(
                                &sample->transforms_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool TFMessage__copy(
                TFMessage_* dst,
                const TFMessage_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!geometry_msgs::msg::dds_::TransformStamped_Seq_copy(&dst->transforms_ ,
                    &src->transforms_ )) {
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
            * Configure and implement 'TFMessage_' sequence class.
            */
            #define T TFMessage_
            #define TSeq TFMessage_Seq

            #define T_initialize_w_params tf2_msgs::msg::dds_::TFMessage__initialize_w_params

            #define T_finalize_w_params   tf2_msgs::msg::dds_::TFMessage__finalize_w_params
            #define T_copy       tf2_msgs::msg::dds_::TFMessage__copy

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
} /* namespace tf2_msgs  */

