

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointTrajectoryControllerState_.idl using "rtiddsgen".
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

#include "JointTrajectoryControllerState_.h"

#include <new>

namespace control_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *JointTrajectoryControllerState_TYPENAME = "control_msgs::msg::dds_::JointTrajectoryControllerState_";

            DDS_TypeCode* JointTrajectoryControllerState__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode JointTrajectoryControllerState__g_tc_joint_names__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode JointTrajectoryControllerState__g_tc_joint_names__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member JointTrajectoryControllerState__g_tc_members[5]=
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
                        (char *)"desired_",/* Member name */
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
                        (char *)"actual_",/* Member name */
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
                        (char *)"error_",/* Member name */
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

                static DDS_TypeCode JointTrajectoryControllerState__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"control_msgs::msg::dds_::JointTrajectoryControllerState_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        JointTrajectoryControllerState__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for JointTrajectoryControllerState_*/

                if (is_initialized) {
                    return &JointTrajectoryControllerState__g_tc;
                }

                JointTrajectoryControllerState__g_tc_joint_names__sequence._data._typeCode = (RTICdrTypeCode *)&JointTrajectoryControllerState__g_tc_joint_names__string;

                JointTrajectoryControllerState__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                JointTrajectoryControllerState__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& JointTrajectoryControllerState__g_tc_joint_names__sequence;
                JointTrajectoryControllerState__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)trajectory_msgs::msg::dds_::JointTrajectoryPoint__get_typecode();

                JointTrajectoryControllerState__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)trajectory_msgs::msg::dds_::JointTrajectoryPoint__get_typecode();

                JointTrajectoryControllerState__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)trajectory_msgs::msg::dds_::JointTrajectoryPoint__get_typecode();

                is_initialized = RTI_TRUE;

                return &JointTrajectoryControllerState__g_tc;
            }

            RTIBool JointTrajectoryControllerState__initialize(
                JointTrajectoryControllerState_* sample) {
                return control_msgs::msg::dds_::JointTrajectoryControllerState__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool JointTrajectoryControllerState__initialize_ex(
                JointTrajectoryControllerState_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return control_msgs::msg::dds_::JointTrajectoryControllerState__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool JointTrajectoryControllerState__initialize_w_params(
                JointTrajectoryControllerState_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!trajectory_msgs::msg::dds_::JointTrajectoryPoint__initialize_w_params(&sample->desired_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!trajectory_msgs::msg::dds_::JointTrajectoryPoint__initialize_w_params(&sample->actual_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!trajectory_msgs::msg::dds_::JointTrajectoryPoint__initialize_w_params(&sample->error_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void JointTrajectoryControllerState__finalize(
                JointTrajectoryControllerState_* sample)
            {

                control_msgs::msg::dds_::JointTrajectoryControllerState__finalize_ex(sample,RTI_TRUE);
            }

            void JointTrajectoryControllerState__finalize_ex(
                JointTrajectoryControllerState_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                control_msgs::msg::dds_::JointTrajectoryControllerState__finalize_w_params(
                    sample,&deallocParams);
            }

            void JointTrajectoryControllerState__finalize_w_params(
                JointTrajectoryControllerState_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                DDS_StringSeq_finalize(&sample->joint_names_);

                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_w_params(&sample->desired_,deallocParams);

                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_w_params(&sample->actual_,deallocParams);

                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_w_params(&sample->error_,deallocParams);

            }

            void JointTrajectoryControllerState__finalize_optional_members(
                JointTrajectoryControllerState_* sample, RTIBool deletePointers)
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
                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_optional_members(&sample->desired_, deallocParams->delete_pointers);
                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_optional_members(&sample->actual_, deallocParams->delete_pointers);
                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_optional_members(&sample->error_, deallocParams->delete_pointers);
            }

            RTIBool JointTrajectoryControllerState__copy(
                JointTrajectoryControllerState_* dst,
                const JointTrajectoryControllerState_* src)
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
                    if (!trajectory_msgs::msg::dds_::JointTrajectoryPoint__copy(
                        &dst->desired_,(const trajectory_msgs::msg::dds_::JointTrajectoryPoint_*)&src->desired_)) {
                        return RTI_FALSE;
                    } 
                    if (!trajectory_msgs::msg::dds_::JointTrajectoryPoint__copy(
                        &dst->actual_,(const trajectory_msgs::msg::dds_::JointTrajectoryPoint_*)&src->actual_)) {
                        return RTI_FALSE;
                    } 
                    if (!trajectory_msgs::msg::dds_::JointTrajectoryPoint__copy(
                        &dst->error_,(const trajectory_msgs::msg::dds_::JointTrajectoryPoint_*)&src->error_)) {
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
            * Configure and implement 'JointTrajectoryControllerState_' sequence class.
            */
            #define T JointTrajectoryControllerState_
            #define TSeq JointTrajectoryControllerState_Seq

            #define T_initialize_w_params control_msgs::msg::dds_::JointTrajectoryControllerState__initialize_w_params

            #define T_finalize_w_params   control_msgs::msg::dds_::JointTrajectoryControllerState__finalize_w_params
            #define T_copy       control_msgs::msg::dds_::JointTrajectoryControllerState__copy

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

