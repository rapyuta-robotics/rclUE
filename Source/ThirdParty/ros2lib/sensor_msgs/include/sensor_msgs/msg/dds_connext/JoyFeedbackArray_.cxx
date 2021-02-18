

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JoyFeedbackArray_.idl using "rtiddsgen".
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

#include "JoyFeedbackArray_.h"

#include <new>

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *JoyFeedbackArray_TYPENAME = "sensor_msgs::msg::dds_::JoyFeedbackArray_";

            DDS_TypeCode* JoyFeedbackArray__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode JoyFeedbackArray__g_tc_array__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member JoyFeedbackArray__g_tc_members[1]=
                {

                    {
                        (char *)"array_",/* Member name */
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

                static DDS_TypeCode JoyFeedbackArray__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"sensor_msgs::msg::dds_::JoyFeedbackArray_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        JoyFeedbackArray__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for JoyFeedbackArray_*/

                if (is_initialized) {
                    return &JoyFeedbackArray__g_tc;
                }

                JoyFeedbackArray__g_tc_array__sequence._data._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::JoyFeedback__get_typecode();

                JoyFeedbackArray__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& JoyFeedbackArray__g_tc_array__sequence;

                is_initialized = RTI_TRUE;

                return &JoyFeedbackArray__g_tc;
            }

            RTIBool JoyFeedbackArray__initialize(
                JoyFeedbackArray_* sample) {
                return sensor_msgs::msg::dds_::JoyFeedbackArray__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool JoyFeedbackArray__initialize_ex(
                JoyFeedbackArray_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return sensor_msgs::msg::dds_::JoyFeedbackArray__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool JoyFeedbackArray__initialize_w_params(
                JoyFeedbackArray_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    sensor_msgs::msg::dds_::JoyFeedback_Seq_initialize(&sample->array_ );
                    sensor_msgs::msg::dds_::JoyFeedback_Seq_set_element_allocation_params(&sample->array_ ,allocParams);
                    sensor_msgs::msg::dds_::JoyFeedback_Seq_set_absolute_maximum(&sample->array_ , RTI_INT32_MAX);
                    if (!sensor_msgs::msg::dds_::JoyFeedback_Seq_set_maximum(&sample->array_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    sensor_msgs::msg::dds_::JoyFeedback_Seq_set_length(&sample->array_, 0);
                }
                return RTI_TRUE;
            }

            void JoyFeedbackArray__finalize(
                JoyFeedbackArray_* sample)
            {

                sensor_msgs::msg::dds_::JoyFeedbackArray__finalize_ex(sample,RTI_TRUE);
            }

            void JoyFeedbackArray__finalize_ex(
                JoyFeedbackArray_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                sensor_msgs::msg::dds_::JoyFeedbackArray__finalize_w_params(
                    sample,&deallocParams);
            }

            void JoyFeedbackArray__finalize_w_params(
                JoyFeedbackArray_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                sensor_msgs::msg::dds_::JoyFeedback_Seq_set_element_deallocation_params(
                    &sample->array_,deallocParams);
                sensor_msgs::msg::dds_::JoyFeedback_Seq_finalize(&sample->array_);

            }

            void JoyFeedbackArray__finalize_optional_members(
                JoyFeedbackArray_* sample, RTIBool deletePointers)
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
                    length = sensor_msgs::msg::dds_::JoyFeedback_Seq_get_length(
                        &sample->array_);

                    for (i = 0; i < length; i++) {
                        sensor_msgs::msg::dds_::JoyFeedback__finalize_optional_members(
                            sensor_msgs::msg::dds_::JoyFeedback_Seq_get_reference(
                                &sample->array_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool JoyFeedbackArray__copy(
                JoyFeedbackArray_* dst,
                const JoyFeedbackArray_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!sensor_msgs::msg::dds_::JoyFeedback_Seq_copy(&dst->array_ ,
                    &src->array_ )) {
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
            * Configure and implement 'JoyFeedbackArray_' sequence class.
            */
            #define T JoyFeedbackArray_
            #define TSeq JoyFeedbackArray_Seq

            #define T_initialize_w_params sensor_msgs::msg::dds_::JoyFeedbackArray__initialize_w_params

            #define T_finalize_w_params   sensor_msgs::msg::dds_::JoyFeedbackArray__finalize_w_params
            #define T_copy       sensor_msgs::msg::dds_::JoyFeedbackArray__copy

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
} /* namespace sensor_msgs  */

