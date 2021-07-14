

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetMap_.idl using "rtiddsgen".
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

#include "GetMap_.h"

#include <new>

namespace nav_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetMap_Request_TYPENAME = "nav_msgs::srv::dds_::GetMap_Request_";

            DDS_TypeCode* GetMap_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetMap_Request__g_tc_members[1]=
                {

                    {
                        (char *)"structure_needs_at_least_one_member_",/* Member name */
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

                static DDS_TypeCode GetMap_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"nav_msgs::srv::dds_::GetMap_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetMap_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetMap_Request_*/

                if (is_initialized) {
                    return &GetMap_Request__g_tc;
                }

                GetMap_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &GetMap_Request__g_tc;
            }

            RTIBool GetMap_Request__initialize(
                GetMap_Request_* sample) {
                return nav_msgs::srv::dds_::GetMap_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetMap_Request__initialize_ex(
                GetMap_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return nav_msgs::srv::dds_::GetMap_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetMap_Request__initialize_w_params(
                GetMap_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->structure_needs_at_least_one_member_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void GetMap_Request__finalize(
                GetMap_Request_* sample)
            {

                nav_msgs::srv::dds_::GetMap_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GetMap_Request__finalize_ex(
                GetMap_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                nav_msgs::srv::dds_::GetMap_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetMap_Request__finalize_w_params(
                GetMap_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void GetMap_Request__finalize_optional_members(
                GetMap_Request_* sample, RTIBool deletePointers)
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

            RTIBool GetMap_Request__copy(
                GetMap_Request_* dst,
                const GetMap_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->structure_needs_at_least_one_member_, &src->structure_needs_at_least_one_member_)) { 
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
            * Configure and implement 'GetMap_Request_' sequence class.
            */
            #define T GetMap_Request_
            #define TSeq GetMap_Request_Seq

            #define T_initialize_w_params nav_msgs::srv::dds_::GetMap_Request__initialize_w_params

            #define T_finalize_w_params   nav_msgs::srv::dds_::GetMap_Request__finalize_w_params
            #define T_copy       nav_msgs::srv::dds_::GetMap_Request__copy

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
            const char *GetMap_Response_TYPENAME = "nav_msgs::srv::dds_::GetMap_Response_";

            DDS_TypeCode* GetMap_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetMap_Response__g_tc_members[1]=
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
                    }
                };

                static DDS_TypeCode GetMap_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"nav_msgs::srv::dds_::GetMap_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetMap_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetMap_Response_*/

                if (is_initialized) {
                    return &GetMap_Response__g_tc;
                }

                GetMap_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)nav_msgs::msg::dds_::OccupancyGrid__get_typecode();

                is_initialized = RTI_TRUE;

                return &GetMap_Response__g_tc;
            }

            RTIBool GetMap_Response__initialize(
                GetMap_Response_* sample) {
                return nav_msgs::srv::dds_::GetMap_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetMap_Response__initialize_ex(
                GetMap_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return nav_msgs::srv::dds_::GetMap_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetMap_Response__initialize_w_params(
                GetMap_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                return RTI_TRUE;
            }

            void GetMap_Response__finalize(
                GetMap_Response_* sample)
            {

                nav_msgs::srv::dds_::GetMap_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetMap_Response__finalize_ex(
                GetMap_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                nav_msgs::srv::dds_::GetMap_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetMap_Response__finalize_w_params(
                GetMap_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                nav_msgs::msg::dds_::OccupancyGrid__finalize_w_params(&sample->map_,deallocParams);

            }

            void GetMap_Response__finalize_optional_members(
                GetMap_Response_* sample, RTIBool deletePointers)
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
            }

            RTIBool GetMap_Response__copy(
                GetMap_Response_* dst,
                const GetMap_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!nav_msgs::msg::dds_::OccupancyGrid__copy(
                        &dst->map_,(const nav_msgs::msg::dds_::OccupancyGrid_*)&src->map_)) {
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
            * Configure and implement 'GetMap_Response_' sequence class.
            */
            #define T GetMap_Response_
            #define TSeq GetMap_Response_Seq

            #define T_initialize_w_params nav_msgs::srv::dds_::GetMap_Response__initialize_w_params

            #define T_finalize_w_params   nav_msgs::srv::dds_::GetMap_Response__finalize_w_params
            #define T_copy       nav_msgs::srv::dds_::GetMap_Response__copy

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

