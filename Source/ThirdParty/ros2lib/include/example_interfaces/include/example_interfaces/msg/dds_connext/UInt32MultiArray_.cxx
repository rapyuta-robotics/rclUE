

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt32MultiArray_.idl using "rtiddsgen".
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

#include "UInt32MultiArray_.h"

#include <new>

namespace example_interfaces {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *UInt32MultiArray_TYPENAME = "example_interfaces::msg::dds_::UInt32MultiArray_";

            DDS_TypeCode* UInt32MultiArray__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode UInt32MultiArray__g_tc_data__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member UInt32MultiArray__g_tc_members[2]=
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

                static DDS_TypeCode UInt32MultiArray__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"example_interfaces::msg::dds_::UInt32MultiArray_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        UInt32MultiArray__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for UInt32MultiArray_*/

                if (is_initialized) {
                    return &UInt32MultiArray__g_tc;
                }

                UInt32MultiArray__g_tc_data__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                UInt32MultiArray__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)example_interfaces::msg::dds_::MultiArrayLayout__get_typecode();

                UInt32MultiArray__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& UInt32MultiArray__g_tc_data__sequence;

                is_initialized = RTI_TRUE;

                return &UInt32MultiArray__g_tc;
            }

            RTIBool UInt32MultiArray__initialize(
                UInt32MultiArray_* sample) {
                return example_interfaces::msg::dds_::UInt32MultiArray__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool UInt32MultiArray__initialize_ex(
                UInt32MultiArray_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return example_interfaces::msg::dds_::UInt32MultiArray__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool UInt32MultiArray__initialize_w_params(
                UInt32MultiArray_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!example_interfaces::msg::dds_::MultiArrayLayout__initialize_w_params(&sample->layout_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    DDS_UnsignedLongSeq_initialize(&sample->data_  );
                    DDS_UnsignedLongSeq_set_absolute_maximum(&sample->data_ , RTI_INT32_MAX);
                    if (!DDS_UnsignedLongSeq_set_maximum(&sample->data_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_UnsignedLongSeq_set_length(&sample->data_, 0);
                }
                return RTI_TRUE;
            }

            void UInt32MultiArray__finalize(
                UInt32MultiArray_* sample)
            {

                example_interfaces::msg::dds_::UInt32MultiArray__finalize_ex(sample,RTI_TRUE);
            }

            void UInt32MultiArray__finalize_ex(
                UInt32MultiArray_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                example_interfaces::msg::dds_::UInt32MultiArray__finalize_w_params(
                    sample,&deallocParams);
            }

            void UInt32MultiArray__finalize_w_params(
                UInt32MultiArray_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                example_interfaces::msg::dds_::MultiArrayLayout__finalize_w_params(&sample->layout_,deallocParams);

                DDS_UnsignedLongSeq_finalize(&sample->data_);

            }

            void UInt32MultiArray__finalize_optional_members(
                UInt32MultiArray_* sample, RTIBool deletePointers)
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

                example_interfaces::msg::dds_::MultiArrayLayout__finalize_optional_members(&sample->layout_, deallocParams->delete_pointers);
            }

            RTIBool UInt32MultiArray__copy(
                UInt32MultiArray_* dst,
                const UInt32MultiArray_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!example_interfaces::msg::dds_::MultiArrayLayout__copy(
                        &dst->layout_,(const example_interfaces::msg::dds_::MultiArrayLayout_*)&src->layout_)) {
                        return RTI_FALSE;
                    } 
                    if (!DDS_UnsignedLongSeq_copy(&dst->data_ ,
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
            * Configure and implement 'UInt32MultiArray_' sequence class.
            */
            #define T UInt32MultiArray_
            #define TSeq UInt32MultiArray_Seq

            #define T_initialize_w_params example_interfaces::msg::dds_::UInt32MultiArray__initialize_w_params

            #define T_finalize_w_params   example_interfaces::msg::dds_::UInt32MultiArray__finalize_w_params
            #define T_copy       example_interfaces::msg::dds_::UInt32MultiArray__copy

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
} /* namespace example_interfaces  */

