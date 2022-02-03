

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InterfaceValue_.idl using "rtiddsgen".
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

#include "InterfaceValue_.h"

#include <new>

namespace control_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *InterfaceValue_TYPENAME = "control_msgs::msg::dds_::InterfaceValue_";

            DDS_TypeCode* InterfaceValue__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode InterfaceValue__g_tc_interface_names__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode InterfaceValue__g_tc_interface_names__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode InterfaceValue__g_tc_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member InterfaceValue__g_tc_members[2]=
                {

                    {
                        (char *)"interface_names_",/* Member name */
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
                        (char *)"values_",/* Member name */
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

                static DDS_TypeCode InterfaceValue__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::msg::dds_::InterfaceValue_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        InterfaceValue__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for InterfaceValue_*/

                if (is_initialized) {
                    return &InterfaceValue__g_tc;
                }

                InterfaceValue__g_tc_interface_names__sequence._data._typeCode = (RTICdrTypeCode *)&InterfaceValue__g_tc_interface_names__string;

                InterfaceValue__g_tc_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                InterfaceValue__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& InterfaceValue__g_tc_interface_names__sequence;
                InterfaceValue__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& InterfaceValue__g_tc_values__sequence;

                is_initialized = RTI_TRUE;

                return &InterfaceValue__g_tc;
            }

            RTIBool InterfaceValue__initialize(
                InterfaceValue_* sample) {
                return control_msgs::msg::dds_::InterfaceValue__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool InterfaceValue__initialize_ex(
                InterfaceValue_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::msg::dds_::InterfaceValue__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool InterfaceValue__initialize_w_params(
                InterfaceValue_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    DDS_StringSeq_initialize(&sample->interface_names_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->interface_names_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->interface_names_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->interface_names_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->interface_names_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->values_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->values_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->values_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->values_, 0);
                }
                return RTI_TRUE;
            }

            void InterfaceValue__finalize(
                InterfaceValue_* sample)
            {

                control_msgs::msg::dds_::InterfaceValue__finalize_ex(sample,RTI_TRUE);
            }

            void InterfaceValue__finalize_ex(
                InterfaceValue_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::msg::dds_::InterfaceValue__finalize_w_params(
                    sample,&deallocParams);
            }

            void InterfaceValue__finalize_w_params(
                InterfaceValue_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_StringSeq_finalize(&sample->interface_names_);

                DDS_DoubleSeq_finalize(&sample->values_);

            }

            void InterfaceValue__finalize_optional_members(
                InterfaceValue_* sample, RTIBool deletePointers)
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

            RTIBool InterfaceValue__copy(
                InterfaceValue_* dst,
                const InterfaceValue_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!DDS_StringSeq_copy(&dst->interface_names_ ,
                    &src->interface_names_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->values_ ,
                    &src->values_ )) {
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
            * Configure and implement 'InterfaceValue_' sequence class.
            */
            #define T InterfaceValue_
            #define TSeq InterfaceValue_Seq

            #define T_initialize_w_params control_msgs::msg::dds_::InterfaceValue__initialize_w_params

            #define T_finalize_w_params   control_msgs::msg::dds_::InterfaceValue__finalize_w_params
            #define T_copy       control_msgs::msg::dds_::InterfaceValue__copy

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
} /* namespace control_msgs  */

