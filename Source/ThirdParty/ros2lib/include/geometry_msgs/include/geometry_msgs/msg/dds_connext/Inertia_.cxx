

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Inertia_.idl using "rtiddsgen".
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

#include "Inertia_.h"

#include <new>

namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *Inertia_TYPENAME = "geometry_msgs::msg::dds_::Inertia_";

            DDS_TypeCode* Inertia__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Inertia__g_tc_members[8]=
                {

                    {
                        (char *)"m_",/* Member name */
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
                        (char *)"com_",/* Member name */
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
                        (char *)"ixx_",/* Member name */
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
                        (char *)"ixy_",/* Member name */
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
                        (char *)"ixz_",/* Member name */
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
                    }, 
                    {
                        (char *)"iyy_",/* Member name */
                        {
                            5,/* Representation ID */          
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
                        (char *)"iyz_",/* Member name */
                        {
                            6,/* Representation ID */          
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
                        (char *)"izz_",/* Member name */
                        {
                            7,/* Representation ID */          
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

                static DDS_TypeCode Inertia__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geometry_msgs::msg::dds_::Inertia_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        8, /* Number of members */
                        Inertia__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Inertia_*/

                if (is_initialized) {
                    return &Inertia__g_tc;
                }

                Inertia__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                Inertia__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Vector3__get_typecode();

                Inertia__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                Inertia__g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                Inertia__g_tc_members[4]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                Inertia__g_tc_members[5]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                Inertia__g_tc_members[6]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                Inertia__g_tc_members[7]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_double;

                is_initialized = RTI_TRUE;

                return &Inertia__g_tc;
            }

            RTIBool Inertia__initialize(
                Inertia_* sample) {
                return geometry_msgs::msg::dds_::Inertia__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Inertia__initialize_ex(
                Inertia_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geometry_msgs::msg::dds_::Inertia__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Inertia__initialize_w_params(
                Inertia_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->m_)) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::Vector3__initialize_w_params(&sample->com_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->ixx_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->ixy_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->ixz_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->iyy_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->iyz_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initDouble(&sample->izz_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void Inertia__finalize(
                Inertia_* sample)
            {

                geometry_msgs::msg::dds_::Inertia__finalize_ex(sample,RTI_TRUE);
            }

            void Inertia__finalize_ex(
                Inertia_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geometry_msgs::msg::dds_::Inertia__finalize_w_params(
                    sample,&deallocParams);
            }

            void Inertia__finalize_w_params(
                Inertia_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::Vector3__finalize_w_params(&sample->com_,deallocParams);

            }

            void Inertia__finalize_optional_members(
                Inertia_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::Vector3__finalize_optional_members(&sample->com_, deallocParams->delete_pointers);
            }

            RTIBool Inertia__copy(
                Inertia_* dst,
                const Inertia_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyDouble (
                        &dst->m_, &src->m_)) { 
                        return RTI_FALSE;
                    }
                    if (!geometry_msgs::msg::dds_::Vector3__copy(
                        &dst->com_,(const geometry_msgs::msg::dds_::Vector3_*)&src->com_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyDouble (
                        &dst->ixx_, &src->ixx_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->ixy_, &src->ixy_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->ixz_, &src->ixz_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->iyy_, &src->iyy_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->iyz_, &src->iyz_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyDouble (
                        &dst->izz_, &src->izz_)) { 
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
            * Configure and implement 'Inertia_' sequence class.
            */
            #define T Inertia_
            #define TSeq Inertia_Seq

            #define T_initialize_w_params geometry_msgs::msg::dds_::Inertia__initialize_w_params

            #define T_finalize_w_params   geometry_msgs::msg::dds_::Inertia__finalize_w_params
            #define T_copy       geometry_msgs::msg::dds_::Inertia__copy

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

