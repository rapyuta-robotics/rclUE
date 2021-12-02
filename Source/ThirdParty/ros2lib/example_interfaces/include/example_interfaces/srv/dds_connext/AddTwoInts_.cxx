

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AddTwoInts_.idl using "rtiddsgen".
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

#include "AddTwoInts_.h"

#include <new>

namespace example_interfaces {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *AddTwoInts_Request_TYPENAME = "example_interfaces::srv::dds_::AddTwoInts_Request_";

            DDS_TypeCode* AddTwoInts_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AddTwoInts_Request__g_tc_members[2]=
                {

                    {
                        (char *)"a_",/* Member name */
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
                        (char *)"b_",/* Member name */
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

                static DDS_TypeCode AddTwoInts_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"example_interfaces::srv::dds_::AddTwoInts_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        AddTwoInts_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for AddTwoInts_Request_*/

                if (is_initialized) {
                    return &AddTwoInts_Request__g_tc;
                }

                AddTwoInts_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

                AddTwoInts_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

                is_initialized = RTI_TRUE;

                return &AddTwoInts_Request__g_tc;
            }

            RTIBool AddTwoInts_Request__initialize(
                AddTwoInts_Request_* sample) {
                return example_interfaces::srv::dds_::AddTwoInts_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool AddTwoInts_Request__initialize_ex(
                AddTwoInts_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return example_interfaces::srv::dds_::AddTwoInts_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool AddTwoInts_Request__initialize_w_params(
                AddTwoInts_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLongLong(&sample->a_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLongLong(&sample->b_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void AddTwoInts_Request__finalize(
                AddTwoInts_Request_* sample)
            {

                example_interfaces::srv::dds_::AddTwoInts_Request__finalize_ex(sample,RTI_TRUE);
            }

            void AddTwoInts_Request__finalize_ex(
                AddTwoInts_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                example_interfaces::srv::dds_::AddTwoInts_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void AddTwoInts_Request__finalize_w_params(
                AddTwoInts_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void AddTwoInts_Request__finalize_optional_members(
                AddTwoInts_Request_* sample, RTIBool deletePointers)
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

            RTIBool AddTwoInts_Request__copy(
                AddTwoInts_Request_* dst,
                const AddTwoInts_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyLongLong (
                        &dst->a_, &src->a_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLongLong (
                        &dst->b_, &src->b_)) { 
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
            * Configure and implement 'AddTwoInts_Request_' sequence class.
            */
            #define T AddTwoInts_Request_
            #define TSeq AddTwoInts_Request_Seq

            #define T_initialize_w_params example_interfaces::srv::dds_::AddTwoInts_Request__initialize_w_params

            #define T_finalize_w_params   example_interfaces::srv::dds_::AddTwoInts_Request__finalize_w_params
            #define T_copy       example_interfaces::srv::dds_::AddTwoInts_Request__copy

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
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *AddTwoInts_Response_TYPENAME = "example_interfaces::srv::dds_::AddTwoInts_Response_";

            DDS_TypeCode* AddTwoInts_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member AddTwoInts_Response__g_tc_members[1]=
                {

                    {
                        (char *)"sum_",/* Member name */
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

                static DDS_TypeCode AddTwoInts_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"example_interfaces::srv::dds_::AddTwoInts_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        AddTwoInts_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for AddTwoInts_Response_*/

                if (is_initialized) {
                    return &AddTwoInts_Response__g_tc;
                }

                AddTwoInts_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

                is_initialized = RTI_TRUE;

                return &AddTwoInts_Response__g_tc;
            }

            RTIBool AddTwoInts_Response__initialize(
                AddTwoInts_Response_* sample) {
                return example_interfaces::srv::dds_::AddTwoInts_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool AddTwoInts_Response__initialize_ex(
                AddTwoInts_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return example_interfaces::srv::dds_::AddTwoInts_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool AddTwoInts_Response__initialize_w_params(
                AddTwoInts_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLongLong(&sample->sum_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void AddTwoInts_Response__finalize(
                AddTwoInts_Response_* sample)
            {

                example_interfaces::srv::dds_::AddTwoInts_Response__finalize_ex(sample,RTI_TRUE);
            }

            void AddTwoInts_Response__finalize_ex(
                AddTwoInts_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                example_interfaces::srv::dds_::AddTwoInts_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void AddTwoInts_Response__finalize_w_params(
                AddTwoInts_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void AddTwoInts_Response__finalize_optional_members(
                AddTwoInts_Response_* sample, RTIBool deletePointers)
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

            RTIBool AddTwoInts_Response__copy(
                AddTwoInts_Response_* dst,
                const AddTwoInts_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyLongLong (
                        &dst->sum_, &src->sum_)) { 
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
            * Configure and implement 'AddTwoInts_Response_' sequence class.
            */
            #define T AddTwoInts_Response_
            #define TSeq AddTwoInts_Response_Seq

            #define T_initialize_w_params example_interfaces::srv::dds_::AddTwoInts_Response__initialize_w_params

            #define T_finalize_w_params   example_interfaces::srv::dds_::AddTwoInts_Response__finalize_w_params
            #define T_copy       example_interfaces::srv::dds_::AddTwoInts_Response__copy

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
} /* namespace example_interfaces  */

