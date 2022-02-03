

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointTrajectoryPoint_.idl using "rtiddsgen".
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

#include "JointTrajectoryPoint_.h"

#include <new>

namespace trajectory_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *JointTrajectoryPoint_TYPENAME = "trajectory_msgs::msg::dds_::JointTrajectoryPoint_";

            DDS_TypeCode* JointTrajectoryPoint__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode JointTrajectoryPoint__g_tc_positions__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode JointTrajectoryPoint__g_tc_velocities__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode JointTrajectoryPoint__g_tc_accelerations__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode JointTrajectoryPoint__g_tc_effort__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member JointTrajectoryPoint__g_tc_members[5]=
                {

                    {
                        (char *)"positions_",/* Member name */
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
                        (char *)"velocities_",/* Member name */
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
                        (char *)"accelerations_",/* Member name */
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
                        (char *)"effort_",/* Member name */
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
                        (char *)"time_from_start_",/* Member name */
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

                static DDS_TypeCode JointTrajectoryPoint__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"trajectory_msgs::msg::dds_::JointTrajectoryPoint_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        JointTrajectoryPoint__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for JointTrajectoryPoint_*/

                if (is_initialized) {
                    return &JointTrajectoryPoint__g_tc;
                }

                JointTrajectoryPoint__g_tc_positions__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                JointTrajectoryPoint__g_tc_velocities__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                JointTrajectoryPoint__g_tc_accelerations__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                JointTrajectoryPoint__g_tc_effort__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                JointTrajectoryPoint__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& JointTrajectoryPoint__g_tc_positions__sequence;
                JointTrajectoryPoint__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& JointTrajectoryPoint__g_tc_velocities__sequence;
                JointTrajectoryPoint__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& JointTrajectoryPoint__g_tc_accelerations__sequence;
                JointTrajectoryPoint__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& JointTrajectoryPoint__g_tc_effort__sequence;
                JointTrajectoryPoint__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Duration__get_typecode();

                is_initialized = RTI_TRUE;

                return &JointTrajectoryPoint__g_tc;
            }

            RTIBool JointTrajectoryPoint__initialize(
                JointTrajectoryPoint_* sample) {
                return trajectory_msgs::msg::dds_::JointTrajectoryPoint__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool JointTrajectoryPoint__initialize_ex(
                JointTrajectoryPoint_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return trajectory_msgs::msg::dds_::JointTrajectoryPoint__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool JointTrajectoryPoint__initialize_w_params(
                JointTrajectoryPoint_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->positions_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->positions_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->positions_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->positions_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->velocities_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->velocities_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->velocities_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->velocities_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->accelerations_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->accelerations_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->accelerations_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->accelerations_, 0);
                }
                if (allocParams->allocate_memory) {
                    DDS_DoubleSeq_initialize(&sample->effort_  );
                    DDS_DoubleSeq_set_absolute_maximum(&sample->effort_ , RTI_INT32_MAX);
                    if (!DDS_DoubleSeq_set_maximum(&sample->effort_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_DoubleSeq_set_length(&sample->effort_, 0);
                }
                if (!builtin_interfaces::msg::dds_::Duration__initialize_w_params(&sample->time_from_start_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void JointTrajectoryPoint__finalize(
                JointTrajectoryPoint_* sample)
            {

                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_ex(sample,RTI_TRUE);
            }

            void JointTrajectoryPoint__finalize_ex(
                JointTrajectoryPoint_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_w_params(
                    sample,&deallocParams);
            }

            void JointTrajectoryPoint__finalize_w_params(
                JointTrajectoryPoint_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_DoubleSeq_finalize(&sample->positions_);

                DDS_DoubleSeq_finalize(&sample->velocities_);

                DDS_DoubleSeq_finalize(&sample->accelerations_);

                DDS_DoubleSeq_finalize(&sample->effort_);

                builtin_interfaces::msg::dds_::Duration__finalize_w_params(&sample->time_from_start_,deallocParams);

            }

            void JointTrajectoryPoint__finalize_optional_members(
                JointTrajectoryPoint_* sample, RTIBool deletePointers)
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

                builtin_interfaces::msg::dds_::Duration__finalize_optional_members(&sample->time_from_start_, deallocParams->delete_pointers);
            }

            RTIBool JointTrajectoryPoint__copy(
                JointTrajectoryPoint_* dst,
                const JointTrajectoryPoint_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!DDS_DoubleSeq_copy(&dst->positions_ ,
                    &src->positions_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->velocities_ ,
                    &src->velocities_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->accelerations_ ,
                    &src->accelerations_ )) {
                        return RTI_FALSE;
                    }
                    if (!DDS_DoubleSeq_copy(&dst->effort_ ,
                    &src->effort_ )) {
                        return RTI_FALSE;
                    }
                    if (!builtin_interfaces::msg::dds_::Duration__copy(
                        &dst->time_from_start_,(const builtin_interfaces::msg::dds_::Duration_*)&src->time_from_start_)) {
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
            * Configure and implement 'JointTrajectoryPoint_' sequence class.
            */
            #define T JointTrajectoryPoint_
            #define TSeq JointTrajectoryPoint_Seq

            #define T_initialize_w_params trajectory_msgs::msg::dds_::JointTrajectoryPoint__initialize_w_params

            #define T_finalize_w_params   trajectory_msgs::msg::dds_::JointTrajectoryPoint__finalize_w_params
            #define T_copy       trajectory_msgs::msg::dds_::JointTrajectoryPoint__copy

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

