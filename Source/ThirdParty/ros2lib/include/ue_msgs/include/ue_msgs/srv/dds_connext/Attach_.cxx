

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Attach_.idl using "rtiddsgen".
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

#include "Attach_.h"

#include <new>

namespace ue_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *Attach_Request_TYPENAME = "ue_msgs::srv::dds_::Attach_Request_";

            DDS_TypeCode* Attach_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Attach_Request__g_tc_name1__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode Attach_Request__g_tc_name2__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member Attach_Request__g_tc_members[2]=
                {

                    {
                        (char *)"name1_",/* Member name */
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
                        (char *)"name2_",/* Member name */
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

                static DDS_TypeCode Attach_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ue_msgs::srv::dds_::Attach_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Attach_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Attach_Request_*/

                if (is_initialized) {
                    return &Attach_Request__g_tc;
                }

                Attach_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&Attach_Request__g_tc_name1__string;

                Attach_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&Attach_Request__g_tc_name2__string;

                is_initialized = RTI_TRUE;

                return &Attach_Request__g_tc;
            }

            RTIBool Attach_Request__initialize(
                Attach_Request_* sample) {
                return ue_msgs::srv::dds_::Attach_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Attach_Request__initialize_ex(
                Attach_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ue_msgs::srv::dds_::Attach_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Attach_Request__initialize_w_params(
                Attach_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->name1_= DDS_String_alloc ((0));
                    if (sample->name1_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->name1_!= NULL) { 
                        sample->name1_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->name2_= DDS_String_alloc ((0));
                    if (sample->name2_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->name2_!= NULL) { 
                        sample->name2_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void Attach_Request__finalize(
                Attach_Request_* sample)
            {

                ue_msgs::srv::dds_::Attach_Request__finalize_ex(sample,RTI_TRUE);
            }

            void Attach_Request__finalize_ex(
                Attach_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ue_msgs::srv::dds_::Attach_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void Attach_Request__finalize_w_params(
                Attach_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->name1_ != NULL) {
                    DDS_String_free(sample->name1_);
                    sample->name1_=NULL;

                }
                if (sample->name2_ != NULL) {
                    DDS_String_free(sample->name2_);
                    sample->name2_=NULL;

                }
            }

            void Attach_Request__finalize_optional_members(
                Attach_Request_* sample, RTIBool deletePointers)
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

            RTIBool Attach_Request__copy(
                Attach_Request_* dst,
                const Attach_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->name1_, src->name1_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->name2_, src->name2_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
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
            * Configure and implement 'Attach_Request_' sequence class.
            */
            #define T Attach_Request_
            #define TSeq Attach_Request_Seq

            #define T_initialize_w_params ue_msgs::srv::dds_::Attach_Request__initialize_w_params

            #define T_finalize_w_params   ue_msgs::srv::dds_::Attach_Request__finalize_w_params
            #define T_copy       ue_msgs::srv::dds_::Attach_Request__copy

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
            const char *Attach_Response_TYPENAME = "ue_msgs::srv::dds_::Attach_Response_";

            DDS_TypeCode* Attach_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Attach_Response__g_tc_members[1]=
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

                static DDS_TypeCode Attach_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ue_msgs::srv::dds_::Attach_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        Attach_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Attach_Response_*/

                if (is_initialized) {
                    return &Attach_Response__g_tc;
                }

                Attach_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                is_initialized = RTI_TRUE;

                return &Attach_Response__g_tc;
            }

            RTIBool Attach_Response__initialize(
                Attach_Response_* sample) {
                return ue_msgs::srv::dds_::Attach_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Attach_Response__initialize_ex(
                Attach_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ue_msgs::srv::dds_::Attach_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Attach_Response__initialize_w_params(
                Attach_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void Attach_Response__finalize(
                Attach_Response_* sample)
            {

                ue_msgs::srv::dds_::Attach_Response__finalize_ex(sample,RTI_TRUE);
            }

            void Attach_Response__finalize_ex(
                Attach_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ue_msgs::srv::dds_::Attach_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void Attach_Response__finalize_w_params(
                Attach_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void Attach_Response__finalize_optional_members(
                Attach_Response_* sample, RTIBool deletePointers)
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

            RTIBool Attach_Response__copy(
                Attach_Response_* dst,
                const Attach_Response_* src)
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
            * Configure and implement 'Attach_Response_' sequence class.
            */
            #define T Attach_Response_
            #define TSeq Attach_Response_Seq

            #define T_initialize_w_params ue_msgs::srv::dds_::Attach_Response__initialize_w_params

            #define T_finalize_w_params   ue_msgs::srv::dds_::Attach_Response__finalize_w_params
            #define T_copy       ue_msgs::srv::dds_::Attach_Response__copy

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

