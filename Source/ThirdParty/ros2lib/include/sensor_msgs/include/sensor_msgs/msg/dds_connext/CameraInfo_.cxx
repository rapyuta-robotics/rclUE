

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraInfo_.idl using "rtiddsgen".
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

#include "CameraInfo_.h"

#include <new>

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *CameraInfo_TYPENAME = "sensor_msgs::msg::dds_::CameraInfo_";

            DDS_TypeCode* CameraInfo__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode CameraInfo__g_tc_distortion_model__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode CameraInfo__g_tc_d__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode CameraInfo__g_tc_k__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,9, NULL,NULL);
                static DDS_TypeCode CameraInfo__g_tc_r__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,9, NULL,NULL);
                static DDS_TypeCode CameraInfo__g_tc_p__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,12, NULL,NULL);
                static DDS_TypeCode_Member CameraInfo__g_tc_members[11]=
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
                        (char *)"distortion_model_",/* Member name */
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
                        (char *)"d_",/* Member name */
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
                        (char *)"k_",/* Member name */
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
                        (char *)"r_",/* Member name */
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
                    }, 
                    {
                        (char *)"p_",/* Member name */
                        {
                            7,/* Representation ID */          
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
                        (char *)"binning_x_",/* Member name */
                        {
                            8,/* Representation ID */          
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
                        (char *)"binning_y_",/* Member name */
                        {
                            9,/* Representation ID */          
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
                        (char *)"roi_",/* Member name */
                        {
                            10,/* Representation ID */          
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

                static DDS_TypeCode CameraInfo__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"sensor_msgs::msg::dds_::CameraInfo_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        11, /* Number of members */
                        CameraInfo__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for CameraInfo_*/

                if (is_initialized) {
                    return &CameraInfo__g_tc;
                }

                CameraInfo__g_tc_d__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                CameraInfo__g_tc_k__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                CameraInfo__g_tc_r__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                CameraInfo__g_tc_p__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                CameraInfo__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                CameraInfo__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                CameraInfo__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                CameraInfo__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&CameraInfo__g_tc_distortion_model__string;

                CameraInfo__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& CameraInfo__g_tc_d__sequence;
                CameraInfo__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)& CameraInfo__g_tc_k__array;
                CameraInfo__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)& CameraInfo__g_tc_r__array;
                CameraInfo__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)& CameraInfo__g_tc_p__array;
                CameraInfo__g_tc_members[8]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                CameraInfo__g_tc_members[9]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                CameraInfo__g_tc_members[10]._representation._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::RegionOfInterest__get_typecode();

                is_initialized = RTI_TRUE;

                return &CameraInfo__g_tc;
            }

            RTIBool CameraInfo__initialize(
                CameraInfo_* sample) {
                return sensor_msgs::msg::dds_::CameraInfo__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool CameraInfo__initialize_ex(
                CameraInfo_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return sensor_msgs::msg::dds_::CameraInfo__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool CameraInfo__initialize_w_params(
                CameraInfo_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    sample->distortion_model_= DDS_String_alloc ((0));
                    if (sample->distortion_model_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->distortion_model_!= NULL) { 
                        sample->distortion_model_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->d_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->d_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->d_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->d_, 0);
                }
                if (!RTICdrType_initArray(
                    sample->k_, (9), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->r_, (9), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->p_, (12), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->binning_x_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->binning_y_)) {
                    return RTI_FALSE;
                }

                if (!sensor_msgs::msg::dds_::RegionOfInterest__initialize_w_params(&sample->roi_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void CameraInfo__finalize(
                CameraInfo_* sample)
            {

                sensor_msgs::msg::dds_::CameraInfo__finalize_ex(sample,RTI_TRUE);
            }

            void CameraInfo__finalize_ex(
                CameraInfo_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                sensor_msgs::msg::dds_::CameraInfo__finalize_w_params(
                    sample,&deallocParams);
            }

            void CameraInfo__finalize_w_params(
                CameraInfo_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                if (sample->distortion_model_ != NULL) {
                    DDS_String_free(sample->distortion_model_);
                    sample->distortion_model_=NULL;

                }
                DDS_DoubleSeq_finalize(&sample->d_);

                sensor_msgs::msg::dds_::RegionOfInterest__finalize_w_params(&sample->roi_,deallocParams);

            }

            void CameraInfo__finalize_optional_members(
                CameraInfo_* sample, RTIBool deletePointers)
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
                sensor_msgs::msg::dds_::RegionOfInterest__finalize_optional_members(&sample->roi_, deallocParams->delete_pointers);
            }

            RTIBool CameraInfo__copy(
                CameraInfo_* dst,
                const CameraInfo_* src)
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
                        &dst->distortion_model_, src->distortion_model_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->d_ ,
                    &src->d_ )) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->k_ ,src->k_,(9), RTI_CDR_DOUBLE_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->r_ ,src->r_,(9), RTI_CDR_DOUBLE_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyArray(
                        dst->p_ ,src->p_,(12), RTI_CDR_DOUBLE_SIZE)) {
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->binning_x_, &src->binning_x_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->binning_y_, &src->binning_y_)) { 
                        return RTI_FALSE;
                    }
                    if (!sensor_msgs::msg::dds_::RegionOfInterest__copy(
                        &dst->roi_,(const sensor_msgs::msg::dds_::RegionOfInterest_*)&src->roi_)) {
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
            * Configure and implement 'CameraInfo_' sequence class.
            */
            #define T CameraInfo_
            #define TSeq CameraInfo_Seq

            #define T_initialize_w_params sensor_msgs::msg::dds_::CameraInfo__initialize_w_params

            #define T_finalize_w_params   sensor_msgs::msg::dds_::CameraInfo__finalize_w_params
            #define T_copy       sensor_msgs::msg::dds_::CameraInfo__copy

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

