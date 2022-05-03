

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetMap_.idl using "rtiddsgen".
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

#include "SetMap_.h"

#include <new>

namespace nav_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetMap_Request_TYPENAME = "nav_msgs::srv::dds_::SetMap_Request_";

            DDS_TypeCode* SetMap_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetMap_Request__g_tc_members[2]=
                {

                    {
                        (char *)"map_",/* Member name */
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
                        (char *)"initial_pose_",/* Member name */
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

                static DDS_TypeCode SetMap_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"nav_msgs::srv::dds_::SetMap_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SetMap_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetMap_Request_*/

                if (is_initialized) {
                    return &SetMap_Request__g_tc;
                }

                SetMap_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)nav_msgs::msg::dds_::OccupancyGrid__get_typecode();

                SetMap_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::PoseWithCovarianceStamped__get_typecode();

                is_initialized = RTI_TRUE;

                return &SetMap_Request__g_tc;
            }

            RTIBool SetMap_Request__initialize(
                SetMap_Request_* sample) {
                return nav_msgs::srv::dds_::SetMap_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetMap_Request__initialize_ex(
                SetMap_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return nav_msgs::srv::dds_::SetMap_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetMap_Request__initialize_w_params(
                SetMap_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!nav_msgs::msg::dds_::OccupancyGrid__initialize_w_params(&sample->map_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::PoseWithCovarianceStamped__initialize_w_params(&sample->initial_pose_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void SetMap_Request__finalize(
                SetMap_Request_* sample)
            {

                nav_msgs::srv::dds_::SetMap_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SetMap_Request__finalize_ex(
                SetMap_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                nav_msgs::srv::dds_::SetMap_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetMap_Request__finalize_w_params(
                SetMap_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                nav_msgs::msg::dds_::OccupancyGrid__finalize_w_params(&sample->map_,deallocParams);

                geometry_msgs::msg::dds_::PoseWithCovarianceStamped__finalize_w_params(&sample->initial_pose_,deallocParams);

            }

            void SetMap_Request__finalize_optional_members(
                SetMap_Request_* sample, RTIBool deletePointers)
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

                nav_msgs::msg::dds_::OccupancyGrid__finalize_optional_members(&sample->map_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::PoseWithCovarianceStamped__finalize_optional_members(&sample->initial_pose_, deallocParams->delete_pointers);
            }

            RTIBool SetMap_Request__copy(
                SetMap_Request_* dst,
                const SetMap_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!nav_msgs::msg::dds_::OccupancyGrid__copy(
                        &dst->map_,(const nav_msgs::msg::dds_::OccupancyGrid_*)&src->map_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::PoseWithCovarianceStamped__copy(
                        &dst->initial_pose_,(const geometry_msgs::msg::dds_::PoseWithCovarianceStamped_*)&src->initial_pose_)) {
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
            * Configure and implement 'SetMap_Request_' sequence class.
            */
            #define T SetMap_Request_
            #define TSeq SetMap_Request_Seq

            #define T_initialize_w_params nav_msgs::srv::dds_::SetMap_Request__initialize_w_params

            #define T_finalize_w_params   nav_msgs::srv::dds_::SetMap_Request__finalize_w_params
            #define T_copy       nav_msgs::srv::dds_::SetMap_Request__copy

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
    } /* namespace srv  */
} /* namespace nav_msgs  */
namespace nav_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetMap_Response_TYPENAME = "nav_msgs::srv::dds_::SetMap_Response_";

            DDS_TypeCode* SetMap_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetMap_Response__g_tc_members[1]=
                {

                    {
                        (char *)"success_",/* Member name */
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
                    }
                };

                static DDS_TypeCode SetMap_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"nav_msgs::srv::dds_::SetMap_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetMap_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetMap_Response_*/

                if (is_initialized) {
                    return &SetMap_Response__g_tc;
                }

                SetMap_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &SetMap_Response__g_tc;
            }

            RTIBool SetMap_Response__initialize(
                SetMap_Response_* sample) {
                return nav_msgs::srv::dds_::SetMap_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetMap_Response__initialize_ex(
                SetMap_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return nav_msgs::srv::dds_::SetMap_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetMap_Response__initialize_w_params(
                SetMap_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->success_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void SetMap_Response__finalize(
                SetMap_Response_* sample)
            {

                nav_msgs::srv::dds_::SetMap_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SetMap_Response__finalize_ex(
                SetMap_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                nav_msgs::srv::dds_::SetMap_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetMap_Response__finalize_w_params(
                SetMap_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void SetMap_Response__finalize_optional_members(
                SetMap_Response_* sample, RTIBool deletePointers)
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

            RTIBool SetMap_Response__copy(
                SetMap_Response_* dst,
                const SetMap_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->success_, &src->success_)) { 
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
            * Configure and implement 'SetMap_Response_' sequence class.
            */
            #define T SetMap_Response_
            #define TSeq SetMap_Response_Seq

            #define T_initialize_w_params nav_msgs::srv::dds_::SetMap_Response__initialize_w_params

            #define T_finalize_w_params   nav_msgs::srv::dds_::SetMap_Response__finalize_w_params
            #define T_copy       nav_msgs::srv::dds_::SetMap_Response__copy

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
    } /* namespace srv  */
} /* namespace nav_msgs  */

