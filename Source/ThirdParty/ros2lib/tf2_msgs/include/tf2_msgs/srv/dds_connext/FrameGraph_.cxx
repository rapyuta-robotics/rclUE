

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FrameGraph_.idl using "rtiddsgen".
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

#include "FrameGraph_.h"

#include <new>

namespace tf2_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *FrameGraph_Request_TYPENAME = "tf2_msgs::srv::dds_::FrameGraph_Request_";

            DDS_TypeCode* FrameGraph_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member FrameGraph_Request__g_tc_members[1]=
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

                static DDS_TypeCode FrameGraph_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tf2_msgs::srv::dds_::FrameGraph_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        FrameGraph_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for FrameGraph_Request_*/

                if (is_initialized) {
                    return &FrameGraph_Request__g_tc;
                }

                FrameGraph_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                is_initialized = RTI_TRUE;

                return &FrameGraph_Request__g_tc;
            }

            RTIBool FrameGraph_Request__initialize(
                FrameGraph_Request_* sample) {
                return tf2_msgs::srv::dds_::FrameGraph_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool FrameGraph_Request__initialize_ex(
                FrameGraph_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tf2_msgs::srv::dds_::FrameGraph_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool FrameGraph_Request__initialize_w_params(
                FrameGraph_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void FrameGraph_Request__finalize(
                FrameGraph_Request_* sample)
            {

                tf2_msgs::srv::dds_::FrameGraph_Request__finalize_ex(sample,RTI_TRUE);
            }

            void FrameGraph_Request__finalize_ex(
                FrameGraph_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tf2_msgs::srv::dds_::FrameGraph_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void FrameGraph_Request__finalize_w_params(
                FrameGraph_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void FrameGraph_Request__finalize_optional_members(
                FrameGraph_Request_* sample, RTIBool deletePointers)
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

            RTIBool FrameGraph_Request__copy(
                FrameGraph_Request_* dst,
                const FrameGraph_Request_* src)
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
            * Configure and implement 'FrameGraph_Request_' sequence class.
            */
            #define T FrameGraph_Request_
            #define TSeq FrameGraph_Request_Seq

            #define T_initialize_w_params tf2_msgs::srv::dds_::FrameGraph_Request__initialize_w_params

            #define T_finalize_w_params   tf2_msgs::srv::dds_::FrameGraph_Request__finalize_w_params
            #define T_copy       tf2_msgs::srv::dds_::FrameGraph_Request__copy

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
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *FrameGraph_Response_TYPENAME = "tf2_msgs::srv::dds_::FrameGraph_Response_";

            DDS_TypeCode* FrameGraph_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode FrameGraph_Response__g_tc_frame_yaml__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member FrameGraph_Response__g_tc_members[1]=
                {

                    {
                        (char *)"frame_yaml_",/* Member name */
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

                static DDS_TypeCode FrameGraph_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"tf2_msgs::srv::dds_::FrameGraph_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        FrameGraph_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for FrameGraph_Response_*/

                if (is_initialized) {
                    return &FrameGraph_Response__g_tc;
                }

                FrameGraph_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&FrameGraph_Response__g_tc_frame_yaml__string;

                is_initialized = RTI_TRUE;

                return &FrameGraph_Response__g_tc;
            }

            RTIBool FrameGraph_Response__initialize(
                FrameGraph_Response_* sample) {
                return tf2_msgs::srv::dds_::FrameGraph_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool FrameGraph_Response__initialize_ex(
                FrameGraph_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return tf2_msgs::srv::dds_::FrameGraph_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool FrameGraph_Response__initialize_w_params(
                FrameGraph_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->frame_yaml_= DDS_String_alloc ((0));
                    if (sample->frame_yaml_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->frame_yaml_!= NULL) { 
                        sample->frame_yaml_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void FrameGraph_Response__finalize(
                FrameGraph_Response_* sample)
            {

                tf2_msgs::srv::dds_::FrameGraph_Response__finalize_ex(sample,RTI_TRUE);
            }

            void FrameGraph_Response__finalize_ex(
                FrameGraph_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                tf2_msgs::srv::dds_::FrameGraph_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void FrameGraph_Response__finalize_w_params(
                FrameGraph_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->frame_yaml_ != NULL) {
                    DDS_String_free(sample->frame_yaml_);
                    sample->frame_yaml_=NULL;

                }
            }

            void FrameGraph_Response__finalize_optional_members(
                FrameGraph_Response_* sample, RTIBool deletePointers)
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

            RTIBool FrameGraph_Response__copy(
                FrameGraph_Response_* dst,
                const FrameGraph_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->frame_yaml_, src->frame_yaml_, 
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
            * Configure and implement 'FrameGraph_Response_' sequence class.
            */
            #define T FrameGraph_Response_
            #define TSeq FrameGraph_Response_Seq

            #define T_initialize_w_params tf2_msgs::srv::dds_::FrameGraph_Response__initialize_w_params

            #define T_finalize_w_params   tf2_msgs::srv::dds_::FrameGraph_Response__finalize_w_params
            #define T_copy       tf2_msgs::srv::dds_::FrameGraph_Response__copy

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
} /* namespace tf2_msgs  */

