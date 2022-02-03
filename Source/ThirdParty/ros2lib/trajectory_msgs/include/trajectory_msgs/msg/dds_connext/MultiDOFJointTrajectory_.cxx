

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiDOFJointTrajectory_.idl using "rtiddsgen".
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

#include "MultiDOFJointTrajectory_.h"

#include <new>

namespace trajectory_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *MultiDOFJointTrajectory_TYPENAME = "trajectory_msgs::msg::dds_::MultiDOFJointTrajectory_";

            DDS_TypeCode* MultiDOFJointTrajectory__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MultiDOFJointTrajectory__g_tc_joint_names__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode MultiDOFJointTrajectory__g_tc_joint_names__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode MultiDOFJointTrajectory__g_tc_points__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member MultiDOFJointTrajectory__g_tc_members[3]=
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
                        (char *)"points_",/* Member name */
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

                static DDS_TypeCode MultiDOFJointTrajectory__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"trajectory_msgs::msg::dds_::MultiDOFJointTrajectory_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        MultiDOFJointTrajectory__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MultiDOFJointTrajectory_*/

                if (is_initialized) {
                    return &MultiDOFJointTrajectory__g_tc;
                }

                MultiDOFJointTrajectory__g_tc_joint_names__sequence._data._typeCode = (RTICdrTypeCode *)&MultiDOFJointTrajectory__g_tc_joint_names__string;

                MultiDOFJointTrajectory__g_tc_points__sequence._data._typeCode = (RTICdrTypeCode *)trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint__get_typecode();

                MultiDOFJointTrajectory__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                MultiDOFJointTrajectory__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& MultiDOFJointTrajectory__g_tc_joint_names__sequence;
                MultiDOFJointTrajectory__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& MultiDOFJointTrajectory__g_tc_points__sequence;

                is_initialized = RTI_TRUE;

                return &MultiDOFJointTrajectory__g_tc;
            }

            RTIBool MultiDOFJointTrajectory__initialize(
                MultiDOFJointTrajectory_* sample) {
                return trajectory_msgs::msg::dds_::MultiDOFJointTrajectory__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MultiDOFJointTrajectory__initialize_ex(
                MultiDOFJointTrajectory_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return trajectory_msgs::msg::dds_::MultiDOFJointTrajectory__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MultiDOFJointTrajectory__initialize_w_params(
                MultiDOFJointTrajectory_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_Seq_initialize(&sample->points_ );
                    trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_Seq_set_element_allocation_params(&sample->points_ ,allocParams);
                    trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_Seq_set_absolute_maximum(&sample->points_ , RTI_INT32_MAX);
                    if (!trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_Seq_set_maximum(&sample->points_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_Seq_set_length(&sample->points_, 0);
                }
                return RTI_TRUE;
            }

            void MultiDOFJointTrajectory__finalize(
                MultiDOFJointTrajectory_* sample)
            {

                trajectory_msgs::msg::dds_::MultiDOFJointTrajectory__finalize_ex(sample,RTI_TRUE);
            }

            void MultiDOFJointTrajectory__finalize_ex(
                MultiDOFJointTrajectory_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                trajectory_msgs::msg::dds_::MultiDOFJointTrajectory__finalize_w_params(
                    sample,&deallocParams);
            }

            void MultiDOFJointTrajectory__finalize_w_params(
                MultiDOFJointTrajectory_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                DDS_StringSeq_finalize(&sample->joint_names_);

                trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_Seq_set_element_deallocation_params(
                    &sample->points_,deallocParams);
                trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_Seq_finalize(&sample->points_);

            }

            void MultiDOFJointTrajectory__finalize_optional_members(
                MultiDOFJointTrajectory_* sample, RTIBool deletePointers)
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
                    length = trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_Seq_get_length(
                        &sample->points_);

                    for (i = 0; i < length; i++) {
                        trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint__finalize_optional_members(
                            trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_Seq_get_reference(
                                &sample->points_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool MultiDOFJointTrajectory__copy(
                MultiDOFJointTrajectory_* dst,
                const MultiDOFJointTrajectory_* src)
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
                    if (!trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_Seq_copy(&dst->points_ ,
                    &src->points_ )) {
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
            * Configure and implement 'MultiDOFJointTrajectory_' sequence class.
            */
            #define T MultiDOFJointTrajectory_
            #define TSeq MultiDOFJointTrajectory_Seq

            #define T_initialize_w_params trajectory_msgs::msg::dds_::MultiDOFJointTrajectory__initialize_w_params

            #define T_finalize_w_params   trajectory_msgs::msg::dds_::MultiDOFJointTrajectory__finalize_w_params
            #define T_copy       trajectory_msgs::msg::dds_::MultiDOFJointTrajectory__copy

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
} /* namespace trajectory_msgs  */

