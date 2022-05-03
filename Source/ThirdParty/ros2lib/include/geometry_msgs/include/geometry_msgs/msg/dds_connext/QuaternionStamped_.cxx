

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from QuaternionStamped_.idl using "rtiddsgen".
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

#include "QuaternionStamped_.h"

#include <new>

namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *QuaternionStamped_TYPENAME = "geometry_msgs::msg::dds_::QuaternionStamped_";

            DDS_TypeCode* QuaternionStamped__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member QuaternionStamped__g_tc_members[2]=
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
                        (char *)"quaternion_",/* Member name */
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

                static DDS_TypeCode QuaternionStamped__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geometry_msgs::msg::dds_::QuaternionStamped_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        QuaternionStamped__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for QuaternionStamped_*/

                if (is_initialized) {
                    return &QuaternionStamped__g_tc;
                }

                QuaternionStamped__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)std_msgs::msg::dds_::Header__get_typecode();

                QuaternionStamped__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Quaternion__get_typecode();

                is_initialized = RTI_TRUE;

                return &QuaternionStamped__g_tc;
            }

            RTIBool QuaternionStamped__initialize(
                QuaternionStamped_* sample) {
                return geometry_msgs::msg::dds_::QuaternionStamped__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool QuaternionStamped__initialize_ex(
                QuaternionStamped_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geometry_msgs::msg::dds_::QuaternionStamped__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool QuaternionStamped__initialize_w_params(
                QuaternionStamped_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
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
                if (!geometry_msgs::msg::dds_::Quaternion__initialize_w_params(&sample->quaternion_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void QuaternionStamped__finalize(
                QuaternionStamped_* sample)
            {

                geometry_msgs::msg::dds_::QuaternionStamped__finalize_ex(sample,RTI_TRUE);
            }

            void QuaternionStamped__finalize_ex(
                QuaternionStamped_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geometry_msgs::msg::dds_::QuaternionStamped__finalize_w_params(
                    sample,&deallocParams);
            }

            void QuaternionStamped__finalize_w_params(
                QuaternionStamped_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                std_msgs::msg::dds_::Header__finalize_w_params(&sample->header_,deallocParams);

                geometry_msgs::msg::dds_::Quaternion__finalize_w_params(&sample->quaternion_,deallocParams);

            }

            void QuaternionStamped__finalize_optional_members(
                QuaternionStamped_* sample, RTIBool deletePointers)
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
                geometry_msgs::msg::dds_::Quaternion__finalize_optional_members(&sample->quaternion_, deallocParams->delete_pointers);
            }

            RTIBool QuaternionStamped__copy(
                QuaternionStamped_* dst,
                const QuaternionStamped_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!std_msgs::msg::dds_::Header__copy(
                        &dst->header_,(const std_msgs::msg::dds_::Header_*)&src->header_)) {
                        return RTI_FALSE;
                    } 
                    if (!geometry_msgs::msg::dds_::Quaternion__copy(
                        &dst->quaternion_,(const geometry_msgs::msg::dds_::Quaternion_*)&src->quaternion_)) {
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
            * Configure and implement 'QuaternionStamped_' sequence class.
            */
            #define T QuaternionStamped_
            #define TSeq QuaternionStamped_Seq

            #define T_initialize_w_params geometry_msgs::msg::dds_::QuaternionStamped__initialize_w_params

            #define T_finalize_w_params   geometry_msgs::msg::dds_::QuaternionStamped__finalize_w_params
            #define T_copy       geometry_msgs::msg::dds_::QuaternionStamped__copy

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

