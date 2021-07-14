

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Path_.idl using "rtiddsgen".
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

#include "Path_.h"

#include <new>

namespace nav_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Path_TYPENAME = "nav_msgs::msg::dds_::Path_";

            DDS_TypeCode* Path__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Path__g_tc_poses__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member Path__g_tc_members[2]=
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
                        (char *)"poses_",/* Member name */
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

                static DDS_TypeCode Path__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"nav_msgs::msg::dds_::Path_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Path__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Path_*/

                if (is_initialized) {
                    return &Path__g_tc;
                }

                Path__g_tc_poses__sequence._data._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::PoseStamped__get_typecode();

                Path__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                Path__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& Path__g_tc_poses__sequence;

                is_initialized = RTI_TRUE;

                return &Path__g_tc;
            }

            RTIBool Path__initialize(
                Path_* sample) {
                return nav_msgs::msg::dds_::Path__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Path__initialize_ex(
                Path_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return nav_msgs::msg::dds_::Path__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Path__initialize_w_params(
                Path_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

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
                if (allocParams->allocate_memory) {
                    geometry_msgs::msg::dds_::PoseStamped_Seq_initialize(&sample->poses_ );
                    geometry_msgs::msg::dds_::PoseStamped_Seq_set_element_allocation_params(&sample->poses_ ,allocParams);
                    geometry_msgs::msg::dds_::PoseStamped_Seq_set_absolute_maximum(&sample->poses_ , RTI_INT32_MAX);
                    if (!geometry_msgs::msg::dds_::PoseStamped_Seq_set_maximum(&sample->poses_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    geometry_msgs::msg::dds_::PoseStamped_Seq_set_length(&sample->poses_, 0);
                }
                return RTI_TRUE;
            }

            void Path__finalize(
                Path_* sample)
            {

                nav_msgs::msg::dds_::Path__finalize_ex(sample,RTI_TRUE);
            }

            void Path__finalize_ex(
                Path_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                nav_msgs::msg::dds_::Path__finalize_w_params(
                    sample,&deallocParams);
            }

            void Path__finalize_w_params(
                Path_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                geometry_msgs::msg::dds_::PoseStamped_Seq_set_element_deallocation_params(
                    &sample->poses_,deallocParams);
                geometry_msgs::msg::dds_::PoseStamped_Seq_finalize(&sample->poses_);

            }

            void Path__finalize_optional_members(
                Path_* sample, RTIBool deletePointers)
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
                {
                    DDS_UnsignedLong i, length;
                    length = geometry_msgs::msg::dds_::PoseStamped_Seq_get_length(
                        &sample->poses_);

                    for (i = 0; i < length; i++) {
                        geometry_msgs::msg::dds_::PoseStamped__finalize_optional_members(
                            geometry_msgs::msg::dds_::PoseStamped_Seq_get_reference(
                                &sample->poses_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool Path__copy(
                Path_* dst,
                const Path_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::PoseStamped_Seq_copy(&dst->poses_ ,
                    &src->poses_ )) {
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
            * Configure and implement 'Path_' sequence class.
            */
            #define T Path_
            #define TSeq Path_Seq

            #define T_initialize_w_params nav_msgs::msg::dds_::Path__initialize_w_params

            #define T_finalize_w_params   nav_msgs::msg::dds_::Path__finalize_w_params
            #define T_copy       nav_msgs::msg::dds_::Path__copy

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
} /* namespace nav_msgs  */

