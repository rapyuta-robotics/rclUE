

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Joy_.idl using "rtiddsgen".
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

#include "Joy_.h"

#include <new>

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Joy_TYPENAME = "sensor_msgs::msg::dds_::Joy_";

            DDS_TypeCode* Joy__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Joy__g_tc_axes__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode Joy__g_tc_buttons__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member Joy__g_tc_members[3]=
                {

                    {
                        (char *)"header_",/* Member name */
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
                        (char *)"axes_",/* Member name */
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
                        (char *)"buttons_",/* Member name */
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
                    }
                };

                static DDS_TypeCode Joy__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"sensor_msgs::msg::dds_::Joy_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Joy__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Joy_*/

                if (is_initialized) {
                    return &Joy__g_tc;
                }

                Joy__g_tc_axes__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                Joy__g_tc_buttons__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Joy__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                Joy__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& Joy__g_tc_axes__sequence;
                Joy__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& Joy__g_tc_buttons__sequence;

                is_initialized = RTI_TRUE;

                return &Joy__g_tc;
            }

            RTIBool Joy__initialize(
                Joy_* sample) {
                return sensor_msgs::msg::dds_::Joy__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Joy__initialize_ex(
                Joy_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return sensor_msgs::msg::dds_::Joy__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Joy__initialize_w_params(
                Joy_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::Header__initialize_w_params(&sample->header_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    DDS_FloatSeq_initialize(&sample->axes_  );
                    DDS_FloatSeq_set_absolute_maximum(&sample->axes_ , RTI_INT32_MAX);
                    if (!DDS_FloatSeq_set_maximum(&sample->axes_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_FloatSeq_set_length(&sample->axes_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_LongSeq_initialize(&sample->buttons_  );
                    DDS_LongSeq_set_absolute_maximum(&sample->buttons_ , RTI_INT32_MAX);
                    if (!DDS_LongSeq_set_maximum(&sample->buttons_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_LongSeq_set_length(&sample->buttons_, 0);
                }
                return RTI_TRUE;
            }

            void Joy__finalize(
                Joy_* sample)
            {

                sensor_msgs::msg::dds_::Joy__finalize_ex(sample,RTI_TRUE);
            }

            void Joy__finalize_ex(
                Joy_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                sensor_msgs::msg::dds_::Joy__finalize_w_params(
                    sample,&deallocParams);
            }

            void Joy__finalize_w_params(
                Joy_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                DDS_FloatSeq_finalize(&sample->axes_);

                DDS_LongSeq_finalize(&sample->buttons_);

            }

            void Joy__finalize_optional_members(
                Joy_* sample, RTIBool deletePointers)
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

                std_msgs::msg::dds_::Header__finalize_optional_members(&sample->header_, deallocParams->delete_pointers);
            }

            RTIBool Joy__copy(
                Joy_* dst,
                const Joy_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!DDS_FloatSeq_copy(&dst->axes_ ,
                    &src->axes_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_LongSeq_copy(&dst->buttons_ ,
                    &src->buttons_ )) {
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
            * Configure and implement 'Joy_' sequence class.
            */
            #define T Joy_
            #define TSeq Joy_Seq

            #define T_initialize_w_params sensor_msgs::msg::dds_::Joy__initialize_w_params

            #define T_finalize_w_params   sensor_msgs::msg::dds_::Joy__finalize_w_params
            #define T_copy       sensor_msgs::msg::dds_::Joy__copy

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

