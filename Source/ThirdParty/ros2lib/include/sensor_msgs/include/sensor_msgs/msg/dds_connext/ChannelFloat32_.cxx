

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ChannelFloat32_.idl using "rtiddsgen".
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

#include "ChannelFloat32_.h"

#include <new>

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *ChannelFloat32_TYPENAME = "sensor_msgs::msg::dds_::ChannelFloat32_";

            DDS_TypeCode* ChannelFloat32__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode ChannelFloat32__g_tc_name__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode ChannelFloat32__g_tc_values__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member ChannelFloat32__g_tc_members[2]=
                {

                    {
                        (char *)"name_",/* Member name */
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

                static DDS_TypeCode ChannelFloat32__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"sensor_msgs::msg::dds_::ChannelFloat32_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        ChannelFloat32__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for ChannelFloat32_*/

                if (is_initialized) {
                    return &ChannelFloat32__g_tc;
                }

                ChannelFloat32__g_tc_values__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                ChannelFloat32__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&ChannelFloat32__g_tc_name__string;

                ChannelFloat32__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& ChannelFloat32__g_tc_values__sequence;

                is_initialized = RTI_TRUE;

                return &ChannelFloat32__g_tc;
            }

            RTIBool ChannelFloat32__initialize(
                ChannelFloat32_* sample) {
                return sensor_msgs::msg::dds_::ChannelFloat32__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool ChannelFloat32__initialize_ex(
                ChannelFloat32_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return sensor_msgs::msg::dds_::ChannelFloat32__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool ChannelFloat32__initialize_w_params(
                ChannelFloat32_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->name_= DDS_String_alloc ((0));
                    if (sample->name_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->name_!= NULL) { 
                        sample->name_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory) {
                    DDS_FloatSeq_initialize(&sample->values_  );
                    DDS_FloatSeq_set_absolute_maximum(&sample->values_ , RTI_INT32_MAX);
                    if (!DDS_FloatSeq_set_maximum(&sample->values_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_FloatSeq_set_length(&sample->values_, 0);
                }
                return RTI_TRUE;
            }

            void ChannelFloat32__finalize(
                ChannelFloat32_* sample)
            {

                sensor_msgs::msg::dds_::ChannelFloat32__finalize_ex(sample,RTI_TRUE);
            }

            void ChannelFloat32__finalize_ex(
                ChannelFloat32_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                sensor_msgs::msg::dds_::ChannelFloat32__finalize_w_params(
                    sample,&deallocParams);
            }

            void ChannelFloat32__finalize_w_params(
                ChannelFloat32_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->name_ != NULL) {
                    DDS_String_free(sample->name_);
                    sample->name_=NULL;

                }
                DDS_FloatSeq_finalize(&sample->values_);

            }

            void ChannelFloat32__finalize_optional_members(
                ChannelFloat32_* sample, RTIBool deletePointers)
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

            RTIBool ChannelFloat32__copy(
                ChannelFloat32_* dst,
                const ChannelFloat32_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->name_, src->name_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!DDS_FloatSeq_copy(&dst->values_ ,
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
            * Configure and implement 'ChannelFloat32_' sequence class.
            */
            #define T ChannelFloat32_
            #define TSeq ChannelFloat32_Seq

            #define T_initialize_w_params sensor_msgs::msg::dds_::ChannelFloat32__initialize_w_params

            #define T_finalize_w_params   sensor_msgs::msg::dds_::ChannelFloat32__finalize_w_params
            #define T_copy       sensor_msgs::msg::dds_::ChannelFloat32__copy

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

