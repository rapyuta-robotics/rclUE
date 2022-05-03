

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetCameraInfo_.idl using "rtiddsgen".
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

#include "SetCameraInfo_.h"

#include <new>

namespace sensor_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetCameraInfo_Request_TYPENAME = "sensor_msgs::srv::dds_::SetCameraInfo_Request_";

            DDS_TypeCode* SetCameraInfo_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member SetCameraInfo_Request__g_tc_members[1]=
                {

                    {
                        (char *)"camera_info_",/* Member name */
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

                static DDS_TypeCode SetCameraInfo_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"sensor_msgs::srv::dds_::SetCameraInfo_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        SetCameraInfo_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetCameraInfo_Request_*/

                if (is_initialized) {
                    return &SetCameraInfo_Request__g_tc;
                }

                SetCameraInfo_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::CameraInfo__get_typecode();

                is_initialized = RTI_TRUE;

                return &SetCameraInfo_Request__g_tc;
            }

            RTIBool SetCameraInfo_Request__initialize(
                SetCameraInfo_Request_* sample) {
                return sensor_msgs::srv::dds_::SetCameraInfo_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetCameraInfo_Request__initialize_ex(
                SetCameraInfo_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return sensor_msgs::srv::dds_::SetCameraInfo_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetCameraInfo_Request__initialize_w_params(
                SetCameraInfo_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!sensor_msgs::msg::dds_::CameraInfo__initialize_w_params(&sample->camera_info_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void SetCameraInfo_Request__finalize(
                SetCameraInfo_Request_* sample)
            {

                sensor_msgs::srv::dds_::SetCameraInfo_Request__finalize_ex(sample,RTI_TRUE);
            }

            void SetCameraInfo_Request__finalize_ex(
                SetCameraInfo_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                sensor_msgs::srv::dds_::SetCameraInfo_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetCameraInfo_Request__finalize_w_params(
                SetCameraInfo_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                sensor_msgs::msg::dds_::CameraInfo__finalize_w_params(&sample->camera_info_,deallocParams);

            }

            void SetCameraInfo_Request__finalize_optional_members(
                SetCameraInfo_Request_* sample, RTIBool deletePointers)
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

                sensor_msgs::msg::dds_::CameraInfo__finalize_optional_members(&sample->camera_info_, deallocParams->delete_pointers);
            }

            RTIBool SetCameraInfo_Request__copy(
                SetCameraInfo_Request_* dst,
                const SetCameraInfo_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!sensor_msgs::msg::dds_::CameraInfo__copy(
                        &dst->camera_info_,(const sensor_msgs::msg::dds_::CameraInfo_*)&src->camera_info_)) {
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
            * Configure and implement 'SetCameraInfo_Request_' sequence class.
            */
            #define T SetCameraInfo_Request_
            #define TSeq SetCameraInfo_Request_Seq

            #define T_initialize_w_params sensor_msgs::srv::dds_::SetCameraInfo_Request__initialize_w_params

            #define T_finalize_w_params   sensor_msgs::srv::dds_::SetCameraInfo_Request__finalize_w_params
            #define T_copy       sensor_msgs::srv::dds_::SetCameraInfo_Request__copy

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
} /* namespace sensor_msgs  */
namespace sensor_msgs {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *SetCameraInfo_Response_TYPENAME = "sensor_msgs::srv::dds_::SetCameraInfo_Response_";

            DDS_TypeCode* SetCameraInfo_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode SetCameraInfo_Response__g_tc_status_message__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member SetCameraInfo_Response__g_tc_members[2]=
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

                static DDS_TypeCode SetCameraInfo_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"sensor_msgs::srv::dds_::SetCameraInfo_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        SetCameraInfo_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for SetCameraInfo_Response_*/

                if (is_initialized) {
                    return &SetCameraInfo_Response__g_tc;
                }

                SetCameraInfo_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                SetCameraInfo_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&SetCameraInfo_Response__g_tc_status_message__string;

                is_initialized = RTI_TRUE;

                return &SetCameraInfo_Response__g_tc;
            }

            RTIBool SetCameraInfo_Response__initialize(
                SetCameraInfo_Response_* sample) {
                return sensor_msgs::srv::dds_::SetCameraInfo_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool SetCameraInfo_Response__initialize_ex(
                SetCameraInfo_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return sensor_msgs::srv::dds_::SetCameraInfo_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool SetCameraInfo_Response__initialize_w_params(
                SetCameraInfo_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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

            void SetCameraInfo_Response__finalize(
                SetCameraInfo_Response_* sample)
            {

                sensor_msgs::srv::dds_::SetCameraInfo_Response__finalize_ex(sample,RTI_TRUE);
            }

            void SetCameraInfo_Response__finalize_ex(
                SetCameraInfo_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                sensor_msgs::srv::dds_::SetCameraInfo_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void SetCameraInfo_Response__finalize_w_params(
                SetCameraInfo_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
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

            void SetCameraInfo_Response__finalize_optional_members(
                SetCameraInfo_Response_* sample, RTIBool deletePointers)
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

            RTIBool SetCameraInfo_Response__copy(
                SetCameraInfo_Response_* dst,
                const SetCameraInfo_Response_* src)
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
            * Configure and implement 'SetCameraInfo_Response_' sequence class.
            */
            #define T SetCameraInfo_Response_
            #define TSeq SetCameraInfo_Response_Seq

            #define T_initialize_w_params sensor_msgs::srv::dds_::SetCameraInfo_Response__initialize_w_params

            #define T_finalize_w_params   sensor_msgs::srv::dds_::SetCameraInfo_Response__finalize_w_params
            #define T_copy       sensor_msgs::srv::dds_::SetCameraInfo_Response__copy

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
} /* namespace sensor_msgs  */

