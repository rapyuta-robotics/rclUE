

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpawnEntity_.idl using "rtiddsgen".
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

#include "SpawnEntity_.h"

#include <new>

namespace ue_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SpawnEntity_Request_TYPENAME = "ue_msgs::srv::dds_::SpawnEntity_Request_";

            DDS_TypeCode* SpawnEntity_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SpawnEntity_Request__g_tc_xml__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode SpawnEntity_Request__g_tc_robot_namespace__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode SpawnEntity_Request__g_tc_tags__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode SpawnEntity_Request__g_tc_tags__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member SpawnEntity_Request__g_tc_members[4]=
                {

                    {
                        (char *)"xml_",/* Member name */
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
                        (char *)"robot_namespace_",/* Member name */
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
                        (char *)"state_",/* Member name */
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
                        (char *)"tags_",/* Member name */
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
                    }
                };

                static DDS_TypeCode SpawnEntity_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ue_msgs::srv::dds_::SpawnEntity_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        4, /* Number of members */
                        SpawnEntity_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SpawnEntity_Request_*/

                if (is_initialized) {
                    return &SpawnEntity_Request__g_tc;
                }

                SpawnEntity_Request__g_tc_tags__sequence._data._typeCode = (RTICdrTypeCode *)&SpawnEntity_Request__g_tc_tags__string;

                SpawnEntity_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&SpawnEntity_Request__g_tc_xml__string;

                SpawnEntity_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&SpawnEntity_Request__g_tc_robot_namespace__string;

                SpawnEntity_Request__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)ue_msgs::msg::dds_::EntityState__get_typecode();

                SpawnEntity_Request__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)& SpawnEntity_Request__g_tc_tags__sequence;

                is_initialized = RTI_TRUE;

                return &SpawnEntity_Request__g_tc;
            }

            RTIBool SpawnEntity_Request__initialize(
                SpawnEntity_Request_* sample) {
                return ue_msgs::srv::dds_::SpawnEntity_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SpawnEntity_Request__initialize_ex(
                SpawnEntity_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ue_msgs::srv::dds_::SpawnEntity_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SpawnEntity_Request__initialize_w_params(
                SpawnEntity_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory){
                    sample->xml_= DDS_String_alloc ((0));
                    if (sample->xml_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->xml_!= NULL) { 
                        sample->xml_[0] = '\0';
                    }
                }

                if (allocParams->allocate_memory){
                    sample->robot_namespace_= DDS_String_alloc ((0));
                    if (sample->robot_namespace_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->robot_namespace_!= NULL) { 
                        sample->robot_namespace_[0] = '\0';
                    }
                }

                if (!ue_msgs::msg::dds_::EntityState__initialize_w_params(&sample->state_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    DDS_StringSeq_initialize(&sample->tags_  );
                    DDS_StringSeq_set_absolute_maximum(&sample->tags_ , RTI_INT32_MAX);
                    if (!DDS_StringSeq_set_maximum(&sample->tags_ , (0))) {
                        return RTI_FALSE;
                    }
                    buffer = DDS_StringSeq_get_contiguous_bufferI(
                        &sample->tags_ );

                    if (buffer != NULL) {
                        if (!RTICdrType_initStringArray(buffer, 
                        (0),
                        (0)+1,
                        RTI_CDR_CHAR_TYPE)) {
                            return RTI_FALSE;
                        } 
                    }
                } else { 
                    DDS_StringSeq_set_length(&sample->tags_, 0);
                }
                return RTI_TRUE;
            }

            void SpawnEntity_Request__finalize(
                SpawnEntity_Request_* sample)
            {

                ue_msgs::srv::dds_::SpawnEntity_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SpawnEntity_Request__finalize_ex(
                SpawnEntity_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ue_msgs::srv::dds_::SpawnEntity_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SpawnEntity_Request__finalize_w_params(
                SpawnEntity_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->xml_ != NULL) {
                    DDS_String_free(sample->xml_);
                    sample->xml_=NULL;

                }
                if (sample->robot_namespace_ != NULL) {
                    DDS_String_free(sample->robot_namespace_);
                    sample->robot_namespace_=NULL;

                }
                ue_msgs::msg::dds_::EntityState__finalize_w_params(&sample->state_,deallocParams);

                DDS_StringSeq_finalize(&sample->tags_);

            }

            void SpawnEntity_Request__finalize_optional_members(
                SpawnEntity_Request_* sample, RTIBool deletePointers)
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

            RTIBool SpawnEntity_Request__copy(
                SpawnEntity_Request_* dst,
                const SpawnEntity_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyStringEx (
                        &dst->xml_, src->xml_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyStringEx (
                        &dst->robot_namespace_, src->robot_namespace_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!ue_msgs::msg::dds_::EntityState__copy(
                        &dst->state_,(const ue_msgs::msg::dds_::EntityState_*)&src->state_)) {
                        return RTI_FALSE;
                    } 
                    if (!DDS_StringSeq_copy(&dst->tags_ ,
                    &src->tags_ )) {
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
            * Configure and implement 'SpawnEntity_Request_' sequence class.
            */
            #define T SpawnEntity_Request_
            #define TSeq SpawnEntity_Request_Seq

            #define T_initialize_w_params ue_msgs::srv::dds_::SpawnEntity_Request__initialize_w_params

            #define T_finalize_w_params   ue_msgs::srv::dds_::SpawnEntity_Request__finalize_w_params
            #define T_copy       ue_msgs::srv::dds_::SpawnEntity_Request__copy

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
            const char *SpawnEntity_Response_TYPENAME = "ue_msgs::srv::dds_::SpawnEntity_Response_";

            DDS_TypeCode* SpawnEntity_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SpawnEntity_Response__g_tc_status_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member SpawnEntity_Response__g_tc_members[2]=
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
                        (char *)"status_message_",/* Member name */
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

                static DDS_TypeCode SpawnEntity_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"ue_msgs::srv::dds_::SpawnEntity_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SpawnEntity_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SpawnEntity_Response_*/

                if (is_initialized) {
                    return &SpawnEntity_Response__g_tc;
                }

                SpawnEntity_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                SpawnEntity_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&SpawnEntity_Response__g_tc_status_message__string;

                is_initialized = RTI_TRUE;

                return &SpawnEntity_Response__g_tc;
            }

            RTIBool SpawnEntity_Response__initialize(
                SpawnEntity_Response_* sample) {
                return ue_msgs::srv::dds_::SpawnEntity_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SpawnEntity_Response__initialize_ex(
                SpawnEntity_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return ue_msgs::srv::dds_::SpawnEntity_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SpawnEntity_Response__initialize_w_params(
                SpawnEntity_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                    sample->status_message_= DDS_String_alloc ((0));
                    if (sample->status_message_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->status_message_!= NULL) { 
                        sample->status_message_[0] = '\0';
                    }
                }

                return RTI_TRUE;
            }

            void SpawnEntity_Response__finalize(
                SpawnEntity_Response_* sample)
            {

                ue_msgs::srv::dds_::SpawnEntity_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SpawnEntity_Response__finalize_ex(
                SpawnEntity_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                ue_msgs::srv::dds_::SpawnEntity_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SpawnEntity_Response__finalize_w_params(
                SpawnEntity_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                if (sample->status_message_ != NULL) {
                    DDS_String_free(sample->status_message_);
                    sample->status_message_=NULL;

                }
            }

            void SpawnEntity_Response__finalize_optional_members(
                SpawnEntity_Response_* sample, RTIBool deletePointers)
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

            RTIBool SpawnEntity_Response__copy(
                SpawnEntity_Response_* dst,
                const SpawnEntity_Response_* src)
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
                        &dst->status_message_, src->status_message_, 
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
            * Configure and implement 'SpawnEntity_Response_' sequence class.
            */
            #define T SpawnEntity_Response_
            #define TSeq SpawnEntity_Response_Seq

            #define T_initialize_w_params ue_msgs::srv::dds_::SpawnEntity_Response__initialize_w_params

            #define T_finalize_w_params   ue_msgs::srv::dds_::SpawnEntity_Response__finalize_w_params
            #define T_copy       ue_msgs::srv::dds_::SpawnEntity_Response__copy

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

