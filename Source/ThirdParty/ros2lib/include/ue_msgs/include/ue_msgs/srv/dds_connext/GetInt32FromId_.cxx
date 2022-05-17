

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetInt32FromId_.idl using "rtiddsgen".
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

#include "GetInt32FromId_.h"

#include <new>

namespace ue_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *GetInt32FromId_Request_TYPENAME = "ue_msgs::srv::dds_::GetInt32FromId_Request_";

            DDS_TypeCode* GetInt32FromId_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member GetInt32FromId_Request__g_tc_members[1]=
                {

                    {
                        (char *)"id_",/* Member name */
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

                static DDS_TypeCode GetInt32FromId_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ue_msgs::srv::dds_::GetInt32FromId_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        GetInt32FromId_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetInt32FromId_Request_*/

                if (is_initialized) {
                    return &GetInt32FromId_Request__g_tc;
                }

                GetInt32FromId_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                is_initialized = RTI_TRUE;

                return &GetInt32FromId_Request__g_tc;
            }

            RTIBool GetInt32FromId_Request__initialize(
                GetInt32FromId_Request_* sample) {
                return ue_msgs::srv::dds_::GetInt32FromId_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetInt32FromId_Request__initialize_ex(
                GetInt32FromId_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ue_msgs::srv::dds_::GetInt32FromId_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetInt32FromId_Request__initialize_w_params(
                GetInt32FromId_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->id_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void GetInt32FromId_Request__finalize(
                GetInt32FromId_Request_* sample)
            {

                ue_msgs::srv::dds_::GetInt32FromId_Request__finalize_ex(sample,RTI_TRUE);
            }

            void GetInt32FromId_Request__finalize_ex(
                GetInt32FromId_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ue_msgs::srv::dds_::GetInt32FromId_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetInt32FromId_Request__finalize_w_params(
                GetInt32FromId_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void GetInt32FromId_Request__finalize_optional_members(
                GetInt32FromId_Request_* sample, RTIBool deletePointers)
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

            RTIBool GetInt32FromId_Request__copy(
                GetInt32FromId_Request_* dst,
                const GetInt32FromId_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyLong (
                        &dst->id_, &src->id_)) { 
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
            * Configure and implement 'GetInt32FromId_Request_' sequence class.
            */
            #define T GetInt32FromId_Request_
            #define TSeq GetInt32FromId_Request_Seq

            #define T_initialize_w_params ue_msgs::srv::dds_::GetInt32FromId_Request__initialize_w_params

            #define T_finalize_w_params   ue_msgs::srv::dds_::GetInt32FromId_Request__finalize_w_params
            #define T_copy       ue_msgs::srv::dds_::GetInt32FromId_Request__copy

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
            const char *GetInt32FromId_Response_TYPENAME = "ue_msgs::srv::dds_::GetInt32FromId_Response_";

            DDS_TypeCode* GetInt32FromId_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode GetInt32FromId_Response__g_tc_remarks__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member GetInt32FromId_Response__g_tc_members[3]=
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
                    }, 
                    {
                        (char *)"remarks_",/* Member name */
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
                        (char *)"data_",/* Member name */
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

                static DDS_TypeCode GetInt32FromId_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ue_msgs::srv::dds_::GetInt32FromId_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        GetInt32FromId_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for GetInt32FromId_Response_*/

                if (is_initialized) {
                    return &GetInt32FromId_Response__g_tc;
                }

                GetInt32FromId_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                GetInt32FromId_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&GetInt32FromId_Response__g_tc_remarks__string;

                GetInt32FromId_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                is_initialized = RTI_TRUE;

                return &GetInt32FromId_Response__g_tc;
            }

            RTIBool GetInt32FromId_Response__initialize(
                GetInt32FromId_Response_* sample) {
                return ue_msgs::srv::dds_::GetInt32FromId_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool GetInt32FromId_Response__initialize_ex(
                GetInt32FromId_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ue_msgs::srv::dds_::GetInt32FromId_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool GetInt32FromId_Response__initialize_w_params(
                GetInt32FromId_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

                if (allocParams->allocate_memory){
                    sample->remarks_= DDS_String_alloc ((0));
                    if (sample->remarks_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->remarks_!= NULL) { 
                        sample->remarks_[0] = '\0';
                    }
                }

                if (!RTICdrType_initLong(&sample->data_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void GetInt32FromId_Response__finalize(
                GetInt32FromId_Response_* sample)
            {

                ue_msgs::srv::dds_::GetInt32FromId_Response__finalize_ex(sample,RTI_TRUE);
            }

            void GetInt32FromId_Response__finalize_ex(
                GetInt32FromId_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ue_msgs::srv::dds_::GetInt32FromId_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void GetInt32FromId_Response__finalize_w_params(
                GetInt32FromId_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->remarks_ != NULL) {
                    DDS_String_free(sample->remarks_);
                    sample->remarks_=NULL;

                }

            }

            void GetInt32FromId_Response__finalize_optional_members(
                GetInt32FromId_Response_* sample, RTIBool deletePointers)
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

            RTIBool GetInt32FromId_Response__copy(
                GetInt32FromId_Response_* dst,
                const GetInt32FromId_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->success_, &src->success_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->remarks_, src->remarks_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLong (
                        &dst->data_, &src->data_)) { 
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
            * Configure and implement 'GetInt32FromId_Response_' sequence class.
            */
            #define T GetInt32FromId_Response_
            #define TSeq GetInt32FromId_Response_Seq

            #define T_initialize_w_params ue_msgs::srv::dds_::GetInt32FromId_Response__initialize_w_params

            #define T_finalize_w_params   ue_msgs::srv::dds_::GetInt32FromId_Response__finalize_w_params
            #define T_copy       ue_msgs::srv::dds_::GetInt32FromId_Response__copy

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

