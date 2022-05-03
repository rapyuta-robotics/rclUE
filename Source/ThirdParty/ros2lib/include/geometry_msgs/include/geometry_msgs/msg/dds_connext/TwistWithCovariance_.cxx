

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistWithCovariance_.idl using "rtiddsgen".
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

#include "TwistWithCovariance_.h"

#include <new>

namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *TwistWithCovariance_TYPENAME = "geometry_msgs::msg::dds_::TwistWithCovariance_";

            DDS_TypeCode* TwistWithCovariance__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode TwistWithCovariance__g_tc_covariance__array =DDS_INITIALIZE_ARRAY_TYPECODE(1,36, NULL,NULL);
                static DDS_TypeCode_Member TwistWithCovariance__g_tc_members[2]=
                {

                    {
                        (char *)"twist_",/* Member name */
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
                        (char *)"covariance_",/* Member name */
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

                static DDS_TypeCode TwistWithCovariance__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"geometry_msgs::msg::dds_::TwistWithCovariance_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        TwistWithCovariance__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for TwistWithCovariance_*/

                if (is_initialized) {
                    return &TwistWithCovariance__g_tc;
                }

                TwistWithCovariance__g_tc_covariance__array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_double;

                TwistWithCovariance__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)geometry_msgs::msg::dds_::Twist__get_typecode();

                TwistWithCovariance__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)& TwistWithCovariance__g_tc_covariance__array;

                is_initialized = RTI_TRUE;

                return &TwistWithCovariance__g_tc;
            }

            RTIBool TwistWithCovariance__initialize(
                TwistWithCovariance_* sample) {
                return geometry_msgs::msg::dds_::TwistWithCovariance__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool TwistWithCovariance__initialize_ex(
                TwistWithCovariance_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return geometry_msgs::msg::dds_::TwistWithCovariance__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool TwistWithCovariance__initialize_w_params(
                TwistWithCovariance_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!geometry_msgs::msg::dds_::Twist__initialize_w_params(&sample->twist_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!RTICdrType_initArray(
                    sample->covariance_, (36), RTI_CDR_DOUBLE_SIZE)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void TwistWithCovariance__finalize(
                TwistWithCovariance_* sample)
            {

                geometry_msgs::msg::dds_::TwistWithCovariance__finalize_ex(sample,RTI_TRUE);
            }

            void TwistWithCovariance__finalize_ex(
                TwistWithCovariance_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                geometry_msgs::msg::dds_::TwistWithCovariance__finalize_w_params(
                    sample,&deallocParams);
            }

            void TwistWithCovariance__finalize_w_params(
                TwistWithCovariance_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                geometry_msgs::msg::dds_::Twist__finalize_w_params(&sample->twist_,deallocParams);

            }

            void TwistWithCovariance__finalize_optional_members(
                TwistWithCovariance_* sample, RTIBool deletePointers)
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

                geometry_msgs::msg::dds_::Twist__finalize_optional_members(&sample->twist_, deallocParams->delete_pointers);
            }

            RTIBool TwistWithCovariance__copy(
                TwistWithCovariance_* dst,
                const TwistWithCovariance_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!geometry_msgs::msg::dds_::Twist__copy(
                        &dst->twist_,(const geometry_msgs::msg::dds_::Twist_*)&src->twist_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyArray(
                        dst->covariance_ ,src->covariance_,(36), RTI_CDR_DOUBLE_SIZE)) {
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
            * Configure and implement 'TwistWithCovariance_' sequence class.
            */
            #define T TwistWithCovariance_
            #define TSeq TwistWithCovariance_Seq

            #define T_initialize_w_params geometry_msgs::msg::dds_::TwistWithCovariance__initialize_w_params

            #define T_finalize_w_params   geometry_msgs::msg::dds_::TwistWithCovariance__finalize_w_params
            #define T_copy       geometry_msgs::msg::dds_::TwistWithCovariance__copy

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

