

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TransformStamped_.idl using "rtiddsgen".
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

#include "TransformStamped_.h"

#include <new>

namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *TransformStamped_TYPENAME = "geometry_msgs::msg::dds_::TransformStamped_";

            DDS_TypeCode* TransformStamped__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode TransformStamped__g_tc_child_frame_id__string = DDS_INITIALIZE_STRING_TYPECODE(RTI_INT32_MAX);
                static DDS_TypeCode_Member TransformStamped__g_tc_members[3]=
                {

                    {
                        (char *)"header_",/* Member name */
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
                        (char *)"child_frame_id_",/* Member name */
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
                        (char *)"transform_",/* Member name */
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

                static DDS_TypeCode TransformStamped__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geometry_msgs::msg::dds_::TransformStamped_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        TransformStamped__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for TransformStamped_*/

                if (is_initialized) {
                    return &TransformStamped__g_tc;
                }

                TransformStamped__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                TransformStamped__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&TransformStamped__g_tc_child_frame_id__string;

                TransformStamped__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Transform__get_typecode();

                is_initialized = RTI_TRUE;

                return &TransformStamped__g_tc;
            }

            RTIBool TransformStamped__initialize(
                TransformStamped_* sample) {
                return geometry_msgs::msg::dds_::TransformStamped__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool TransformStamped__initialize_ex(
                TransformStamped_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geometry_msgs::msg::dds_::TransformStamped__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool TransformStamped__initialize_w_params(
                TransformStamped_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!std_msgs::msg::dds_::Header__initialize_w_params(&sample->header_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory){
                    sample->child_frame_id_= DDS_String_alloc ((0));
                    if (sample->child_frame_id_ == NULL) {
                        return RTI_FALSE;
                    }

                } else {
                    if (sample->child_frame_id_!= NULL) { 
                        sample->child_frame_id_[0] = '\0';
                    }
                }

                if (!geometry_msgs::msg::dds_::Transform__initialize_w_params(&sample->transform_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void TransformStamped__finalize(
                TransformStamped_* sample)
            {

                geometry_msgs::msg::dds_::TransformStamped__finalize_ex(sample,RTI_TRUE);
            }

            void TransformStamped__finalize_ex(
                TransformStamped_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geometry_msgs::msg::dds_::TransformStamped__finalize_w_params(
                    sample,&deallocParams);
            }

            void TransformStamped__finalize_w_params(
                TransformStamped_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                if (sample->child_frame_id_ != NULL) {
                    DDS_String_free(sample->child_frame_id_);
                    sample->child_frame_id_=NULL;

                }
                geometry_msgs::msg::dds_::Transform__finalize_w_params(&sample->transform_,deallocParams);

            }

            void TransformStamped__finalize_optional_members(
                TransformStamped_* sample, RTIBool deletePointers)
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

                std_msgs::msg::dds_::Header__finalize_optional_members(&sample->header_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Transform__finalize_optional_members(&sample->transform_, deallocParams->delete_pointers);
            }

            RTIBool TransformStamped__copy(
                TransformStamped_* dst,
                const TransformStamped_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyStringEx (
                        &dst->child_frame_id_, src->child_frame_id_, 
                        (RTI_INT32_MAX-1) + 1,RTI_TRUE)){
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Transform__copy(
                        &dst->transform_,(const geometry_msgs::msg::dds_::Transform_*)&src->transform_)) {
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
            * Configure and implement 'TransformStamped_' sequence class.
            */
            #define T TransformStamped_
            #define TSeq TransformStamped_Seq

            #define T_initialize_w_params geometry_msgs::msg::dds_::TransformStamped__initialize_w_params

            #define T_finalize_w_params   geometry_msgs::msg::dds_::TransformStamped__finalize_w_params
            #define T_copy       geometry_msgs::msg::dds_::TransformStamped__copy

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
    } /* namespace msg  */
} /* namespace geometry_msgs  */

