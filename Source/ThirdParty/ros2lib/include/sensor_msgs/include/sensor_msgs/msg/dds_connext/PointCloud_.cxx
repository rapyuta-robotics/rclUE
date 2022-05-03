

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointCloud_.idl using "rtiddsgen".
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

#include "PointCloud_.h"

#include <new>

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *PointCloud_TYPENAME = "sensor_msgs::msg::dds_::PointCloud_";

            DDS_TypeCode* PointCloud__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode PointCloud__g_tc_points__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode PointCloud__g_tc_channels__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member PointCloud__g_tc_members[3]=
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
                        (char *)"points_",/* Member name */
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
                        (char *)"channels_",/* Member name */
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

                static DDS_TypeCode PointCloud__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"sensor_msgs::msg::dds_::PointCloud_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        PointCloud__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for PointCloud_*/

                if (is_initialized) {
                    return &PointCloud__g_tc;
                }

                PointCloud__g_tc_points__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Point32__get_typecode();

                PointCloud__g_tc_channels__sequence._data._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::ChannelFloat32__get_typecode();

                PointCloud__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                PointCloud__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& PointCloud__g_tc_points__sequence;
                PointCloud__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& PointCloud__g_tc_channels__sequence;

                is_initialized = RTI_TRUE;

                return &PointCloud__g_tc;
            }

            RTIBool PointCloud__initialize(
                PointCloud_* sample) {
                return sensor_msgs::msg::dds_::PointCloud__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool PointCloud__initialize_ex(
                PointCloud_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return sensor_msgs::msg::dds_::PointCloud__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool PointCloud__initialize_w_params(
                PointCloud_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    geometry_msgs::msg::dds_::Point32_Seq_initialize(&sample->points_ );
                    geometry_msgs::msg::dds_::Point32_Seq_set_element_allocation_params(&sample->points_ ,allocParams);
                    geometry_msgs::msg::dds_::Point32_Seq_set_absolute_maximum(&sample->points_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Point32_Seq_set_maximum(&sample->points_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Point32_Seq_set_length(&sample->points_, 0);
                }
                if (allocParams->allocate_memory) {
                    sensor_msgs::msg::dds_::ChannelFloat32_Seq_initialize(&sample->channels_ );
                    sensor_msgs::msg::dds_::ChannelFloat32_Seq_set_element_allocation_params(&sample->channels_ ,allocParams);
                    sensor_msgs::msg::dds_::ChannelFloat32_Seq_set_absolute_maximum(&sample->channels_ , RTI_INT32_MAX);
                    if (!sensor_msgs::msg::dds_::ChannelFloat32_Seq_set_maximum(&sample->channels_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    sensor_msgs::msg::dds_::ChannelFloat32_Seq_set_length(&sample->channels_, 0);
                }
                return RTI_TRUE;
            }

            void PointCloud__finalize(
                PointCloud_* sample)
            {

                sensor_msgs::msg::dds_::PointCloud__finalize_ex(sample,RTI_TRUE);
            }

            void PointCloud__finalize_ex(
                PointCloud_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                sensor_msgs::msg::dds_::PointCloud__finalize_w_params(
                    sample,&deallocParams);
            }

            void PointCloud__finalize_w_params(
                PointCloud_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                geometry_msgs::msg::dds_::Point32_Seq_set_element_deallocation_params(
                    &sample->points_,deallocParams);
                geometry_msgs::msg::dds_::Point32_Seq_finalize(&sample->points_);

                sensor_msgs::msg::dds_::ChannelFloat32_Seq_set_element_deallocation_params(
                    &sample->channels_,deallocParams);
                sensor_msgs::msg::dds_::ChannelFloat32_Seq_finalize(&sample->channels_);

            }

            void PointCloud__finalize_optional_members(
                PointCloud_* sample, RTIBool deletePointers)
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
                {
                    DDS_UnsignedLong i, length;
                    length = geometry_msgs::msg::dds_::Point32_Seq_get_length(
                        &sample->points_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Point32__finalize_optional_members(
                            geometry_msgs::msg::dds_::Point32_Seq_get_reference(
                                &sample->points_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = sensor_msgs::msg::dds_::ChannelFloat32_Seq_get_length(
                        &sample->channels_);

                    for (i = 0; i < length; i++) {
                        sensor_msgs::msg::dds_::ChannelFloat32__finalize_optional_members(
                            sensor_msgs::msg::dds_::ChannelFloat32_Seq_get_reference(
                                &sample->channels_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool PointCloud__copy(
                PointCloud_* dst,
                const PointCloud_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Point32_Seq_copy(&dst->points_ ,
                    &src->points_ )) {
                        return RTI_FALSE;
                    }
                    if (!sensor_msgs::msg::dds_::ChannelFloat32_Seq_copy(&dst->channels_ ,
                    &src->channels_ )) {
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
            * Configure and implement 'PointCloud_' sequence class.
            */
            #define T PointCloud_
            #define TSeq PointCloud_Seq

            #define T_initialize_w_params sensor_msgs::msg::dds_::PointCloud__initialize_w_params

            #define T_finalize_w_params   sensor_msgs::msg::dds_::PointCloud__finalize_w_params
            #define T_copy       sensor_msgs::msg::dds_::PointCloud__copy

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

