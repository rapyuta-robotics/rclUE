

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Image_.idl using "rtiddsgen".
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

#include "Image_.h"

#include <new>

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Image_TYPENAME = "sensor_msgs::msg::dds_::Image_";

            DDS_TypeCode* Image__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Image__g_tc_encoding__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Image__g_tc_data__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member Image__g_tc_members[7]=
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
                        (char *)"height_",/* Member name */
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
                        (char *)"width_",/* Member name */
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
                        (char *)"encoding_",/* Member name */
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
                        (char *)"is_bigendian_",/* Member name */
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
                        (char *)"step_",/* Member name */
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
                        (char *)"data_",/* Member name */
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

                static DDS_TypeCode Image__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"sensor_msgs::msg::dds_::Image_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        7, /* Number of members */
                        Image__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Image_*/

                if (is_initialized) {
                    return &Image__g_tc;
                }

                Image__g_tc_data__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                Image__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                Image__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                Image__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                Image__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&Image__g_tc_encoding__string;

                Image__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                Image__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                Image__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& Image__g_tc_data__sequence;

                is_initialized = RTI_TRUE;

                return &Image__g_tc;
            }

            RTIBool Image__initialize(
                Image_* sample) {
                return sensor_msgs::msg::dds_::Image__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Image__initialize_ex(
                Image_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return sensor_msgs::msg::dds_::Image__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Image__initialize_w_params(
                Image_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (!RTICdrType_initUnsignedLong(&sample->height_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->width_)) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->encoding_= DDS_String_alloc ((0));
                    if (sample->encoding_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->encoding_!= NULL) { 
                        sample->encoding_[0] = '\0';
                    }
                }

                if (!RTICdrType_initOctet(&sample->is_bigendian_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->step_)) {
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

            void Image__finalize(
                Image_* sample)
            {

                sensor_msgs::msg::dds_::Image__finalize_ex(sample,RTI_TRUE);
            }

            void Image__finalize_ex(
                Image_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                sensor_msgs::msg::dds_::Image__finalize_w_params(
                    sample,&deallocParams);
            }

            void Image__finalize_w_params(
                Image_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                if (sample->encoding_ != NULL) {
                    DDS_String_free(sample->encoding_);
                    sample->encoding_=NULL;

                }

                DDS_OctetSeq_finalize(&sample->data_);

            }

            void Image__finalize_optional_members(
                Image_* sample, RTIBool deletePointers)
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

            RTIBool Image__copy(
                Image_* dst,
                const Image_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->height_, &src->height_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->width_, &src->width_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->encoding_, src->encoding_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyOctet (
                        &dst->is_bigendian_, &src->is_bigendian_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->step_, &src->step_)) { 
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
            * Configure and implement 'Image_' sequence class.
            */
            #define T Image_
            #define TSeq Image_Seq

            #define T_initialize_w_params sensor_msgs::msg::dds_::Image__initialize_w_params

            #define T_finalize_w_params   sensor_msgs::msg::dds_::Image__finalize_w_params
            #define T_copy       sensor_msgs::msg::dds_::Image__copy

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

