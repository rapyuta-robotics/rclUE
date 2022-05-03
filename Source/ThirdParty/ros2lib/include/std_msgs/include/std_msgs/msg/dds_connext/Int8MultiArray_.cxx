

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int8MultiArray_.idl using "rtiddsgen".
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

#include "Int8MultiArray_.h"

#include <new>

namespace std_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Int8MultiArray_TYPENAME = "std_msgs::msg::dds_::Int8MultiArray_";

            DDS_TypeCode* Int8MultiArray__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Int8MultiArray__g_tc_data__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member Int8MultiArray__g_tc_members[2]=
                {

                    {
                        (char *)"layout_",/* Member name */
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
                        (char *)"data_",/* Member name */
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

                static DDS_TypeCode Int8MultiArray__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"std_msgs::msg::dds_::Int8MultiArray_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Int8MultiArray__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Int8MultiArray_*/

                if (is_initialized) {
                    return &Int8MultiArray__g_tc;
                }

                Int8MultiArray__g_tc_data__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                Int8MultiArray__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::MultiArrayLayout__get_typecode();

                Int8MultiArray__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& Int8MultiArray__g_tc_data__sequence;

                is_initialized = RTI_TRUE;

                return &Int8MultiArray__g_tc;
            }

            RTIBool Int8MultiArray__initialize(
                Int8MultiArray_* sample) {
                return std_msgs::msg::dds_::Int8MultiArray__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Int8MultiArray__initialize_ex(
                Int8MultiArray_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return std_msgs::msg::dds_::Int8MultiArray__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Int8MultiArray__initialize_w_params(
                Int8MultiArray_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::MultiArrayLayout__initialize_w_params(&sample->layout_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    DDS_OctetSeq_initialize(&sample->data_  );
                    DDS_OctetSeq_set_absolute_maximum(&sample->data_ , RTI_INT32_MAX);
                    if (!DDS_OctetSeq_set_maximum(&sample->data_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_OctetSeq_set_length(&sample->data_, 0);
                }
                return RTI_TRUE;
            }

            void Int8MultiArray__finalize(
                Int8MultiArray_* sample)
            {

                std_msgs::msg::dds_::Int8MultiArray__finalize_ex(sample,RTI_TRUE);
            }

            void Int8MultiArray__finalize_ex(
                Int8MultiArray_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                std_msgs::msg::dds_::Int8MultiArray__finalize_w_params(
                    sample,&deallocParams);
            }

            void Int8MultiArray__finalize_w_params(
                Int8MultiArray_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::MultiArrayLayout__finalize_w_params(&sample->layout_,deallocParams);

                DDS_OctetSeq_finalize(&sample->data_);

            }

            void Int8MultiArray__finalize_optional_members(
                Int8MultiArray_* sample, RTIBool deletePointers)
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

                std_msgs::msg::dds_::MultiArrayLayout__finalize_optional_members(&sample->layout_, deallocParams->delete_pointers);
            }

            RTIBool Int8MultiArray__copy(
                Int8MultiArray_* dst,
                const Int8MultiArray_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::MultiArrayLayout__copy(
                        &dst->layout_,(const std_msgs::msg::dds_::MultiArrayLayout_*)&src->layout_)) {
                        return RTI_FALSE;
                    } 
                    if (!DDS_OctetSeq_copy(&dst->data_ ,
                    &src->data_ )) {
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
            * Configure and implement 'Int8MultiArray_' sequence class.
            */
            #define T Int8MultiArray_
            #define TSeq Int8MultiArray_Seq

            #define T_initialize_w_params std_msgs::msg::dds_::Int8MultiArray__initialize_w_params

            #define T_finalize_w_params   std_msgs::msg::dds_::Int8MultiArray__finalize_w_params
            #define T_copy       std_msgs::msg::dds_::Int8MultiArray__copy

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
} /* namespace std_msgs  */

