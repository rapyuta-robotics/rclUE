

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetPlan_.idl using "rtiddsgen".
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

#include "GetPlan_.h"

#include <new>

namespace nav_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetPlan_Request_TYPENAME = "nav_msgs::srv::dds_::GetPlan_Request_";

            DDS_TypeCode* GetPlan_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetPlan_Request__g_tc_members[3]=
                {

                    {
                        (char *)"start_",/* Member name */
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
                        (char *)"goal_",/* Member name */
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
                        (char *)"tolerance_",/* Member name */
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

                static DDS_TypeCode GetPlan_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"nav_msgs::srv::dds_::GetPlan_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        GetPlan_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetPlan_Request_*/

                if (is_initialized) {
                    return &GetPlan_Request__g_tc;
                }

                GetPlan_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::PoseStamped__get_typecode();

                GetPlan_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::PoseStamped__get_typecode();

                GetPlan_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                is_initialized = RTI_TRUE;

                return &GetPlan_Request__g_tc;
            }

            RTIBool GetPlan_Request__initialize(
                GetPlan_Request_* sample) {
                return nav_msgs::srv::dds_::GetPlan_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetPlan_Request__initialize_ex(
                GetPlan_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return nav_msgs::srv::dds_::GetPlan_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetPlan_Request__initialize_w_params(
                GetPlan_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::PoseStamped__initialize_w_params(&sample->start_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!geometry_msgs::msg::dds_::PoseStamped__initialize_w_params(&sample->goal_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->tolerance_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void GetPlan_Request__finalize(
                GetPlan_Request_* sample)
            {

                nav_msgs::srv::dds_::GetPlan_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GetPlan_Request__finalize_ex(
                GetPlan_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                nav_msgs::srv::dds_::GetPlan_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetPlan_Request__finalize_w_params(
                GetPlan_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::PoseStamped__finalize_w_params(&sample->start_,deallocParams);

                geometry_msgs::msg::dds_::PoseStamped__finalize_w_params(&sample->goal_,deallocParams);

            }

            void GetPlan_Request__finalize_optional_members(
                GetPlan_Request_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::PoseStamped__finalize_optional_members(&sample->start_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::PoseStamped__finalize_optional_members(&sample->goal_, deallocParams->delete_pointers);
            }

            RTIBool GetPlan_Request__copy(
                GetPlan_Request_* dst,
                const GetPlan_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!geometry_msgs::msg::dds_::PoseStamped__copy(
                        &dst->start_,(const geometry_msgs::msg::dds_::PoseStamped_*)&src->start_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::PoseStamped__copy(
                        &dst->goal_,(const geometry_msgs::msg::dds_::PoseStamped_*)&src->goal_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyFloat (
                        &dst->tolerance_, &src->tolerance_)) { 
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
            * Configure and implement 'GetPlan_Request_' sequence class.
            */
            #define T GetPlan_Request_
            #define TSeq GetPlan_Request_Seq

            #define T_initialize_w_params nav_msgs::srv::dds_::GetPlan_Request__initialize_w_params

            #define T_finalize_w_params   nav_msgs::srv::dds_::GetPlan_Request__finalize_w_params
            #define T_copy       nav_msgs::srv::dds_::GetPlan_Request__copy

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
            const char *GetPlan_Response_TYPENAME = "nav_msgs::srv::dds_::GetPlan_Response_";

            DDS_TypeCode* GetPlan_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetPlan_Response__g_tc_members[1]=
                {

                    {
                        (char *)"plan_",/* Member name */
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

                static DDS_TypeCode GetPlan_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"nav_msgs::srv::dds_::GetPlan_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetPlan_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetPlan_Response_*/

                if (is_initialized) {
                    return &GetPlan_Response__g_tc;
                }

                GetPlan_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)nav_msgs::msg::dds_::Path__get_typecode();

                is_initialized = RTI_TRUE;

                return &GetPlan_Response__g_tc;
            }

            RTIBool GetPlan_Response__initialize(
                GetPlan_Response_* sample) {
                return nav_msgs::srv::dds_::GetPlan_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetPlan_Response__initialize_ex(
                GetPlan_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return nav_msgs::srv::dds_::GetPlan_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetPlan_Response__initialize_w_params(
                GetPlan_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!nav_msgs::msg::dds_::Path__initialize_w_params(&sample->plan_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void GetPlan_Response__finalize(
                GetPlan_Response_* sample)
            {

                nav_msgs::srv::dds_::GetPlan_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetPlan_Response__finalize_ex(
                GetPlan_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                nav_msgs::srv::dds_::GetPlan_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetPlan_Response__finalize_w_params(
                GetPlan_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                nav_msgs::msg::dds_::Path__finalize_w_params(&sample->plan_,deallocParams);

            }

            void GetPlan_Response__finalize_optional_members(
                GetPlan_Response_* sample, RTIBool deletePointers)
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

                nav_msgs::msg::dds_::Path__finalize_optional_members(&sample->plan_, deallocParams->delete_pointers);
            }

            RTIBool GetPlan_Response__copy(
                GetPlan_Response_* dst,
                const GetPlan_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!nav_msgs::msg::dds_::Path__copy(
                        &dst->plan_,(const nav_msgs::msg::dds_::Path_*)&src->plan_)) {
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
            * Configure and implement 'GetPlan_Response_' sequence class.
            */
            #define T GetPlan_Response_
            #define TSeq GetPlan_Response_Seq

            #define T_initialize_w_params nav_msgs::srv::dds_::GetPlan_Response__initialize_w_params

            #define T_finalize_w_params   nav_msgs::srv::dds_::GetPlan_Response__finalize_w_params
            #define T_copy       nav_msgs::srv::dds_::GetPlan_Response__copy

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

