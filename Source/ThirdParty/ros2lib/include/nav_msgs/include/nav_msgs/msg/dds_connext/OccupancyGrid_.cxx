

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OccupancyGrid_.idl using "rtiddsgen".
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

#include "OccupancyGrid_.h"

#include <new>

namespace nav_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *OccupancyGrid_TYPENAME = "nav_msgs::msg::dds_::OccupancyGrid_";

            DDS_TypeCode* OccupancyGrid__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode OccupancyGrid__g_tc_data__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member OccupancyGrid__g_tc_members[3]=
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
                        (char *)"info_",/* Member name */
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

                static DDS_TypeCode OccupancyGrid__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"nav_msgs::msg::dds_::OccupancyGrid_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        OccupancyGrid__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for OccupancyGrid_*/

                if (is_initialized) {
                    return &OccupancyGrid__g_tc;
                }

                OccupancyGrid__g_tc_data__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                OccupancyGrid__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                OccupancyGrid__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)nav_msgs::msg::dds_::MapMetaData__get_typecode();

                OccupancyGrid__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)& OccupancyGrid__g_tc_data__sequence;

                is_initialized = RTI_TRUE;

                return &OccupancyGrid__g_tc;
            }

            RTIBool OccupancyGrid__initialize(
                OccupancyGrid_* sample) {
                return nav_msgs::msg::dds_::OccupancyGrid__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool OccupancyGrid__initialize_ex(
                OccupancyGrid_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return nav_msgs::msg::dds_::OccupancyGrid__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool OccupancyGrid__initialize_w_params(
                OccupancyGrid_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!nav_msgs::msg::dds_::MapMetaData__initialize_w_params(&sample->info_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (allocParams->allocate_memory) {
                    DDS_OctetSeq_initialize(&sample->data_  );
                    DDS_OctetSeq_set_absolute_maximum(&sample->data_ , RTI_INT32_MAX);
                    if (!DDS_OctetSeq_set_maximum(&sample->data_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_OctetSeq_set_length(&sample->data_, 0);
                }
                return RTI_TRUE;
            }

            void OccupancyGrid__finalize(
                OccupancyGrid_* sample)
            {

                nav_msgs::msg::dds_::OccupancyGrid__finalize_ex(sample,RTI_TRUE);
            }

            void OccupancyGrid__finalize_ex(
                OccupancyGrid_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                nav_msgs::msg::dds_::OccupancyGrid__finalize_w_params(
                    sample,&deallocParams);
            }

            void OccupancyGrid__finalize_w_params(
                OccupancyGrid_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                nav_msgs::msg::dds_::MapMetaData__finalize_w_params(&sample->info_,deallocParams);

                DDS_OctetSeq_finalize(&sample->data_);

            }

            void OccupancyGrid__finalize_optional_members(
                OccupancyGrid_* sample, RTIBool deletePointers)
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
                nav_msgs::msg::dds_::MapMetaData__finalize_optional_members(&sample->info_, deallocParams->delete_pointers);
            }

            RTIBool OccupancyGrid__copy(
                OccupancyGrid_* dst,
                const OccupancyGrid_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!nav_msgs::msg::dds_::MapMetaData__copy(
                        &dst->info_,(const nav_msgs::msg::dds_::MapMetaData_*)&src->info_)) {
                        return RTI_FALSE;
                    } 
                    if (!DDS_OctetSeq_copy(&dst->data_ ,
                    &src->data_ )) {
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
            * Configure and implement 'OccupancyGrid_' sequence class.
            */
            #define T OccupancyGrid_
            #define TSeq OccupancyGrid_Seq

            #define T_initialize_w_params nav_msgs::msg::dds_::OccupancyGrid__initialize_w_params

            #define T_finalize_w_params   nav_msgs::msg::dds_::OccupancyGrid__finalize_w_params
            #define T_copy       nav_msgs::msg::dds_::OccupancyGrid__copy

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

