

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetEntityState_.idl using "rtiddsgen".
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

#include "SetEntityState_.h"

#include <new>

namespace ue_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetEntityState_Request_TYPENAME = "ue_msgs::srv::dds_::SetEntityState_Request_";

            DDS_TypeCode* SetEntityState_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetEntityState_Request__g_tc_members[1]=
                {

                    {
                        (char *)"state_",/* Member name */
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

                static DDS_TypeCode SetEntityState_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ue_msgs::srv::dds_::SetEntityState_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetEntityState_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetEntityState_Request_*/

                if (is_initialized) {
                    return &SetEntityState_Request__g_tc;
                }

                SetEntityState_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)ue_msgs::msg::dds_::EntityState__get_typecode();

                is_initialized = RTI_TRUE;

                return &SetEntityState_Request__g_tc;
            }

            RTIBool SetEntityState_Request__initialize(
                SetEntityState_Request_* sample) {
                return ue_msgs::srv::dds_::SetEntityState_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetEntityState_Request__initialize_ex(
                SetEntityState_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ue_msgs::srv::dds_::SetEntityState_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetEntityState_Request__initialize_w_params(
                SetEntityState_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!ue_msgs::msg::dds_::EntityState__initialize_w_params(&sample->state_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void SetEntityState_Request__finalize(
                SetEntityState_Request_* sample)
            {

                ue_msgs::srv::dds_::SetEntityState_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SetEntityState_Request__finalize_ex(
                SetEntityState_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ue_msgs::srv::dds_::SetEntityState_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetEntityState_Request__finalize_w_params(
                SetEntityState_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                ue_msgs::msg::dds_::EntityState__finalize_w_params(&sample->state_,deallocParams);

            }

            void SetEntityState_Request__finalize_optional_members(
                SetEntityState_Request_* sample, RTIBool deletePointers)
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

                ue_msgs::msg::dds_::EntityState__finalize_optional_members(&sample->state_, deallocParams->delete_pointers);
            }

            RTIBool SetEntityState_Request__copy(
                SetEntityState_Request_* dst,
                const SetEntityState_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!ue_msgs::msg::dds_::EntityState__copy(
                        &dst->state_,(const ue_msgs::msg::dds_::EntityState_*)&src->state_)) {
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
            * Configure and implement 'SetEntityState_Request_' sequence class.
            */
            #define T SetEntityState_Request_
            #define TSeq SetEntityState_Request_Seq

            #define T_initialize_w_params ue_msgs::srv::dds_::SetEntityState_Request__initialize_w_params

            #define T_finalize_w_params   ue_msgs::srv::dds_::SetEntityState_Request__finalize_w_params
            #define T_copy       ue_msgs::srv::dds_::SetEntityState_Request__copy

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
} /* namespace ue_msgs  */
namespace ue_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetEntityState_Response_TYPENAME = "ue_msgs::srv::dds_::SetEntityState_Response_";

            DDS_TypeCode* SetEntityState_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetEntityState_Response__g_tc_members[1]=
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

                static DDS_TypeCode SetEntityState_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ue_msgs::srv::dds_::SetEntityState_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetEntityState_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetEntityState_Response_*/

                if (is_initialized) {
                    return &SetEntityState_Response__g_tc;
                }

                SetEntityState_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &SetEntityState_Response__g_tc;
            }

            RTIBool SetEntityState_Response__initialize(
                SetEntityState_Response_* sample) {
                return ue_msgs::srv::dds_::SetEntityState_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetEntityState_Response__initialize_ex(
                SetEntityState_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ue_msgs::srv::dds_::SetEntityState_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetEntityState_Response__initialize_w_params(
                SetEntityState_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void SetEntityState_Response__finalize(
                SetEntityState_Response_* sample)
            {

                ue_msgs::srv::dds_::SetEntityState_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SetEntityState_Response__finalize_ex(
                SetEntityState_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ue_msgs::srv::dds_::SetEntityState_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetEntityState_Response__finalize_w_params(
                SetEntityState_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void SetEntityState_Response__finalize_optional_members(
                SetEntityState_Response_* sample, RTIBool deletePointers)
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

            RTIBool SetEntityState_Response__copy(
                SetEntityState_Response_* dst,
                const SetEntityState_Response_* src)
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
            * Configure and implement 'SetEntityState_Response_' sequence class.
            */
            #define T SetEntityState_Response_
            #define TSeq SetEntityState_Response_Seq

            #define T_initialize_w_params ue_msgs::srv::dds_::SetEntityState_Response__initialize_w_params

            #define T_finalize_w_params   ue_msgs::srv::dds_::SetEntityState_Response__finalize_w_params
            #define T_copy       ue_msgs::srv::dds_::SetEntityState_Response__copy

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
} /* namespace ue_msgs  */

