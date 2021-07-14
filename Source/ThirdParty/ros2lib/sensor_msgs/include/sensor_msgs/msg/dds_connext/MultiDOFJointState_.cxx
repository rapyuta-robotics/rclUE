

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiDOFJointState_.idl using "rtiddsgen".
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

#include "MultiDOFJointState_.h"

#include <new>

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *MultiDOFJointState_TYPENAME = "sensor_msgs::msg::dds_::MultiDOFJointState_";

            DDS_TypeCode* MultiDOFJointState__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MultiDOFJointState__g_tc_joint_names__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode MultiDOFJointState__g_tc_joint_names__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode MultiDOFJointState__g_tc_transforms__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode MultiDOFJointState__g_tc_twist__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode MultiDOFJointState__g_tc_wrench__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member MultiDOFJointState__g_tc_members[5]=
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
                        (char *)"joint_names_",/* Member name */
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
                        (char *)"transforms_",/* Member name */
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
                        (char *)"twist_",/* Member name */
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
                        (char *)"wrench_",/* Member name */
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
                    }
                };

                static DDS_TypeCode MultiDOFJointState__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"sensor_msgs::msg::dds_::MultiDOFJointState_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        MultiDOFJointState__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MultiDOFJointState_*/

                if (is_initialized) {
                    return &MultiDOFJointState__g_tc;
                }

                MultiDOFJointState__g_tc_joint_names__sequence._data._typeCode = (RTICdrTypeCode *)&MultiDOFJointState__g_tc_joint_names__string;

                MultiDOFJointState__g_tc_transforms__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Transform__get_typecode();

                MultiDOFJointState__g_tc_twist__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Twist__get_typecode();

                MultiDOFJointState__g_tc_wrench__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Wrench__get_typecode();

                MultiDOFJointState__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                MultiDOFJointState__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& MultiDOFJointState__g_tc_joint_names__sequence;
                MultiDOFJointState__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& MultiDOFJointState__g_tc_transforms__sequence;
                MultiDOFJointState__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& MultiDOFJointState__g_tc_twist__sequence;
                MultiDOFJointState__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)& MultiDOFJointState__g_tc_wrench__sequence;

                is_initialized = RTI_TRUE;

                return &MultiDOFJointState__g_tc;
            }

            RTIBool MultiDOFJointState__initialize(
                MultiDOFJointState_* sample) {
                return sensor_msgs::msg::dds_::MultiDOFJointState__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MultiDOFJointState__initialize_ex(
                MultiDOFJointState_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return sensor_msgs::msg::dds_::MultiDOFJointState__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MultiDOFJointState__initialize_w_params(
                MultiDOFJointState_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    DDS_StringSeq_initialize(&sample->joint_names_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->joint_names_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->joint_names_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->joint_names_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->joint_names_, 0);
                }
                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::Transform_Seq_initialize(&sample->transforms_ );
                    geometry_msgs::msg::dds_::Transform_Seq_set_element_allocation_params(&sample->transforms_ ,allocParams);
                    geometry_msgs::msg::dds_::Transform_Seq_set_absolute_maximum(&sample->transforms_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Transform_Seq_set_maximum(&sample->transforms_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Transform_Seq_set_length(&sample->transforms_, 0);
                }
                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::Twist_Seq_initialize(&sample->twist_ );
                    geometry_msgs::msg::dds_::Twist_Seq_set_element_allocation_params(&sample->twist_ ,allocParams);
                    geometry_msgs::msg::dds_::Twist_Seq_set_absolute_maximum(&sample->twist_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Twist_Seq_set_maximum(&sample->twist_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Twist_Seq_set_length(&sample->twist_, 0);
                }
                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::Wrench_Seq_initialize(&sample->wrench_ );
                    geometry_msgs::msg::dds_::Wrench_Seq_set_element_allocation_params(&sample->wrench_ ,allocParams);
                    geometry_msgs::msg::dds_::Wrench_Seq_set_absolute_maximum(&sample->wrench_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::Wrench_Seq_set_maximum(&sample->wrench_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::Wrench_Seq_set_length(&sample->wrench_, 0);
                }
                return RTI_TRUE;
            }

            void MultiDOFJointState__finalize(
                MultiDOFJointState_* sample)
            {

                sensor_msgs::msg::dds_::MultiDOFJointState__finalize_ex(sample,RTI_TRUE);
            }

            void MultiDOFJointState__finalize_ex(
                MultiDOFJointState_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                sensor_msgs::msg::dds_::MultiDOFJointState__finalize_w_params(
                    sample,&deallocParams);
            }

            void MultiDOFJointState__finalize_w_params(
                MultiDOFJointState_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                DDS_StringSeq_finalize(&sample->joint_names_);

                geometry_msgs::msg::dds_::Transform_Seq_set_element_deallocation_params(
                    &sample->transforms_,deallocParams);
                geometry_msgs::msg::dds_::Transform_Seq_finalize(&sample->transforms_);

                geometry_msgs::msg::dds_::Twist_Seq_set_element_deallocation_params(
                    &sample->twist_,deallocParams);
                geometry_msgs::msg::dds_::Twist_Seq_finalize(&sample->twist_);

                geometry_msgs::msg::dds_::Wrench_Seq_set_element_deallocation_params(
                    &sample->wrench_,deallocParams);
                geometry_msgs::msg::dds_::Wrench_Seq_finalize(&sample->wrench_);

            }

            void MultiDOFJointState__finalize_optional_members(
                MultiDOFJointState_* sample, RTIBool deletePointers)
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
                    length = geometry_msgs::msg::dds_::Transform_Seq_get_length(
                        &sample->transforms_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Transform__finalize_optional_members(
                            geometry_msgs::msg::dds_::Transform_Seq_get_reference(
                                &sample->transforms_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = geometry_msgs::msg::dds_::Twist_Seq_get_length(
                        &sample->twist_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Twist__finalize_optional_members(
                            geometry_msgs::msg::dds_::Twist_Seq_get_reference(
                                &sample->twist_, i), deallocParams->delete_pointers);
                    }
                }  

                {
                    DDS_UnsignedLong i, length;
                    length = geometry_msgs::msg::dds_::Wrench_Seq_get_length(
                        &sample->wrench_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::Wrench__finalize_optional_members(
                            geometry_msgs::msg::dds_::Wrench_Seq_get_reference(
                                &sample->wrench_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool MultiDOFJointState__copy(
                MultiDOFJointState_* dst,
                const MultiDOFJointState_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!DDS_StringSeq_copy(&dst->joint_names_ ,
                    &src->joint_names_ )) {
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Transform_Seq_copy(&dst->transforms_ ,
                    &src->transforms_ )) {
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Twist_Seq_copy(&dst->twist_ ,
                    &src->twist_ )) {
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Wrench_Seq_copy(&dst->wrench_ ,
                    &src->wrench_ )) {
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
            * Configure and implement 'MultiDOFJointState_' sequence class.
            */
            #define T MultiDOFJointState_
            #define TSeq MultiDOFJointState_Seq

            #define T_initialize_w_params sensor_msgs::msg::dds_::MultiDOFJointState__initialize_w_params

            #define T_finalize_w_params   sensor_msgs::msg::dds_::MultiDOFJointState__finalize_w_params
            #define T_copy       sensor_msgs::msg::dds_::MultiDOFJointState__copy

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

