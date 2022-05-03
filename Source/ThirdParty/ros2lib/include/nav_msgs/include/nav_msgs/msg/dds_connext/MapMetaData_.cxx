

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MapMetaData_.idl using "rtiddsgen".
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

#include "MapMetaData_.h"

#include <new>

namespace nav_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *MapMetaData_TYPENAME = "nav_msgs::msg::dds_::MapMetaData_";

            DDS_TypeCode* MapMetaData__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member MapMetaData__g_tc_members[5]=
                {

                    {
                        (char *)"map_load_time_",/* Member name */
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
                        (char *)"resolution_",/* Member name */
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
                        (char *)"width_",/* Member name */
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
                        (char *)"height_",/* Member name */
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
                    }, 
                    {
                        (char *)"origin_",/* Member name */
                        {
                            4,/* Representation ID */          
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

                static DDS_TypeCode MapMetaData__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"nav_msgs::msg::dds_::MapMetaData_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        5, /* Number of members */
                        MapMetaData__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MapMetaData_*/

                if (is_initialized) {
                    return &MapMetaData__g_tc;
                }

                MapMetaData__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                MapMetaData__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_float;

                MapMetaData__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                MapMetaData__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;

                MapMetaData__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Pose__get_typecode();

                is_initialized = RTI_TRUE;

                return &MapMetaData__g_tc;
            }

            RTIBool MapMetaData__initialize(
                MapMetaData_* sample) {
                return nav_msgs::msg::dds_::MapMetaData__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MapMetaData__initialize_ex(
                MapMetaData_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return nav_msgs::msg::dds_::MapMetaData__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MapMetaData__initialize_w_params(
                MapMetaData_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->map_load_time_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initFloat(&sample->resolution_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->width_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initUnsignedLong(&sample->height_)) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::Pose__initialize_w_params(&sample->origin_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void MapMetaData__finalize(
                MapMetaData_* sample)
            {

                nav_msgs::msg::dds_::MapMetaData__finalize_ex(sample,RTI_TRUE);
            }

            void MapMetaData__finalize_ex(
                MapMetaData_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                nav_msgs::msg::dds_::MapMetaData__finalize_w_params(
                    sample,&deallocParams);
            }

            void MapMetaData__finalize_w_params(
                MapMetaData_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->map_load_time_,deallocParams);

                geometry_msgs::msg::dds_::Pose__finalize_w_params(&sample->origin_,deallocParams);

            }

            void MapMetaData__finalize_optional_members(
                MapMetaData_* sample, RTIBool deletePointers)
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

                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->map_load_time_, deallocParams->delete_pointers);
                geometry_msgs::msg::dds_::Pose__finalize_optional_members(&sample->origin_, deallocParams->delete_pointers);
            }

            RTIBool MapMetaData__copy(
                MapMetaData_* dst,
                const MapMetaData_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->map_load_time_,(const builtin_interfaces::msg::dds_::Time_*)&src->map_load_time_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyFloat (
                        &dst->resolution_, &src->resolution_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->width_, &src->width_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyUnsignedLong (
                        &dst->height_, &src->height_)) { 
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Pose__copy(
                        &dst->origin_,(const geometry_msgs::msg::dds_::Pose_*)&src->origin_)) {
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
            * Configure and implement 'MapMetaData_' sequence class.
            */
            #define T MapMetaData_
            #define TSeq MapMetaData_Seq

            #define T_initialize_w_params nav_msgs::msg::dds_::MapMetaData__initialize_w_params

            #define T_finalize_w_params   nav_msgs::msg::dds_::MapMetaData__finalize_w_params
            #define T_copy       nav_msgs::msg::dds_::MapMetaData__copy

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

