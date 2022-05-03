

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Fibonacci_.idl using "rtiddsgen".
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

#include "Fibonacci_.h"

#include <new>

namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *Fibonacci_Goal_TYPENAME = "example_interfaces::action::dds_::Fibonacci_Goal_";

            DDS_TypeCode* Fibonacci_Goal__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Fibonacci_Goal__g_tc_members[1]=
                {

                    {
                        (char *)"order_",/* Member name */
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

                static DDS_TypeCode Fibonacci_Goal__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"example_interfaces::action::dds_::Fibonacci_Goal_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        Fibonacci_Goal__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Fibonacci_Goal_*/

                if (is_initialized) {
                    return &Fibonacci_Goal__g_tc;
                }

                Fibonacci_Goal__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                is_initialized = RTI_TRUE;

                return &Fibonacci_Goal__g_tc;
            }

            RTIBool Fibonacci_Goal__initialize(
                Fibonacci_Goal_* sample) {
                return example_interfaces::action::dds_::Fibonacci_Goal__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Fibonacci_Goal__initialize_ex(
                Fibonacci_Goal_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return example_interfaces::action::dds_::Fibonacci_Goal__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Fibonacci_Goal__initialize_w_params(
                Fibonacci_Goal_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLong(&sample->order_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void Fibonacci_Goal__finalize(
                Fibonacci_Goal_* sample)
            {

                example_interfaces::action::dds_::Fibonacci_Goal__finalize_ex(sample,RTI_TRUE);
            }

            void Fibonacci_Goal__finalize_ex(
                Fibonacci_Goal_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                example_interfaces::action::dds_::Fibonacci_Goal__finalize_w_params(
                    sample,&deallocParams);
            }

            void Fibonacci_Goal__finalize_w_params(
                Fibonacci_Goal_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

            }

            void Fibonacci_Goal__finalize_optional_members(
                Fibonacci_Goal_* sample, RTIBool deletePointers)
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

            RTIBool Fibonacci_Goal__copy(
                Fibonacci_Goal_* dst,
                const Fibonacci_Goal_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyLong (
                        &dst->order_, &src->order_)) { 
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
            * Configure and implement 'Fibonacci_Goal_' sequence class.
            */
            #define T Fibonacci_Goal_
            #define TSeq Fibonacci_Goal_Seq

            #define T_initialize_w_params example_interfaces::action::dds_::Fibonacci_Goal__initialize_w_params

            #define T_finalize_w_params   example_interfaces::action::dds_::Fibonacci_Goal__finalize_w_params
            #define T_copy       example_interfaces::action::dds_::Fibonacci_Goal__copy

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
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *Fibonacci_SendGoal_Request_TYPENAME = "example_interfaces::action::dds_::Fibonacci_SendGoal_Request_";

            DDS_TypeCode* Fibonacci_SendGoal_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Fibonacci_SendGoal_Request__g_tc_members[2]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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
                        (char *)"goal_",/* Member name */
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

                static DDS_TypeCode Fibonacci_SendGoal_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"example_interfaces::action::dds_::Fibonacci_SendGoal_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Fibonacci_SendGoal_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Fibonacci_SendGoal_Request_*/

                if (is_initialized) {
                    return &Fibonacci_SendGoal_Request__g_tc;
                }

                Fibonacci_SendGoal_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                Fibonacci_SendGoal_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)example_interfaces::action::dds_::Fibonacci_Goal__get_typecode();

                is_initialized = RTI_TRUE;

                return &Fibonacci_SendGoal_Request__g_tc;
            }

            RTIBool Fibonacci_SendGoal_Request__initialize(
                Fibonacci_SendGoal_Request_* sample) {
                return example_interfaces::action::dds_::Fibonacci_SendGoal_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Fibonacci_SendGoal_Request__initialize_ex(
                Fibonacci_SendGoal_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return example_interfaces::action::dds_::Fibonacci_SendGoal_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Fibonacci_SendGoal_Request__initialize_w_params(
                Fibonacci_SendGoal_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!example_interfaces::action::dds_::Fibonacci_Goal__initialize_w_params(&sample->goal_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void Fibonacci_SendGoal_Request__finalize(
                Fibonacci_SendGoal_Request_* sample)
            {

                example_interfaces::action::dds_::Fibonacci_SendGoal_Request__finalize_ex(sample,RTI_TRUE);
            }

            void Fibonacci_SendGoal_Request__finalize_ex(
                Fibonacci_SendGoal_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                example_interfaces::action::dds_::Fibonacci_SendGoal_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void Fibonacci_SendGoal_Request__finalize_w_params(
                Fibonacci_SendGoal_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                example_interfaces::action::dds_::Fibonacci_Goal__finalize_w_params(&sample->goal_,deallocParams);

            }

            void Fibonacci_SendGoal_Request__finalize_optional_members(
                Fibonacci_SendGoal_Request_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
                example_interfaces::action::dds_::Fibonacci_Goal__finalize_optional_members(&sample->goal_, deallocParams->delete_pointers);
            }

            RTIBool Fibonacci_SendGoal_Request__copy(
                Fibonacci_SendGoal_Request_* dst,
                const Fibonacci_SendGoal_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!example_interfaces::action::dds_::Fibonacci_Goal__copy(
                        &dst->goal_,(const example_interfaces::action::dds_::Fibonacci_Goal_*)&src->goal_)) {
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
            * Configure and implement 'Fibonacci_SendGoal_Request_' sequence class.
            */
            #define T Fibonacci_SendGoal_Request_
            #define TSeq Fibonacci_SendGoal_Request_Seq

            #define T_initialize_w_params example_interfaces::action::dds_::Fibonacci_SendGoal_Request__initialize_w_params

            #define T_finalize_w_params   example_interfaces::action::dds_::Fibonacci_SendGoal_Request__finalize_w_params
            #define T_copy       example_interfaces::action::dds_::Fibonacci_SendGoal_Request__copy

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
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *Fibonacci_SendGoal_Response_TYPENAME = "example_interfaces::action::dds_::Fibonacci_SendGoal_Response_";

            DDS_TypeCode* Fibonacci_SendGoal_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Fibonacci_SendGoal_Response__g_tc_members[2]=
                {

                    {
                        (char *)"accepted_",/* Member name */
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
                        (char *)"stamp_",/* Member name */
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

                static DDS_TypeCode Fibonacci_SendGoal_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"example_interfaces::action::dds_::Fibonacci_SendGoal_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Fibonacci_SendGoal_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Fibonacci_SendGoal_Response_*/

                if (is_initialized) {
                    return &Fibonacci_SendGoal_Response__g_tc;
                }

                Fibonacci_SendGoal_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                Fibonacci_SendGoal_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)builtin_interfaces::msg::dds_::Time__get_typecode();

                is_initialized = RTI_TRUE;

                return &Fibonacci_SendGoal_Response__g_tc;
            }

            RTIBool Fibonacci_SendGoal_Response__initialize(
                Fibonacci_SendGoal_Response_* sample) {
                return example_interfaces::action::dds_::Fibonacci_SendGoal_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Fibonacci_SendGoal_Response__initialize_ex(
                Fibonacci_SendGoal_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return example_interfaces::action::dds_::Fibonacci_SendGoal_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Fibonacci_SendGoal_Response__initialize_w_params(
                Fibonacci_SendGoal_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->accepted_)) {
                    return RTI_FALSE;
                }

                if (!builtin_interfaces::msg::dds_::Time__initialize_w_params(&sample->stamp_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void Fibonacci_SendGoal_Response__finalize(
                Fibonacci_SendGoal_Response_* sample)
            {

                example_interfaces::action::dds_::Fibonacci_SendGoal_Response__finalize_ex(sample,RTI_TRUE);
            }

            void Fibonacci_SendGoal_Response__finalize_ex(
                Fibonacci_SendGoal_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                example_interfaces::action::dds_::Fibonacci_SendGoal_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void Fibonacci_SendGoal_Response__finalize_w_params(
                Fibonacci_SendGoal_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                builtin_interfaces::msg::dds_::Time__finalize_w_params(&sample->stamp_,deallocParams);

            }

            void Fibonacci_SendGoal_Response__finalize_optional_members(
                Fibonacci_SendGoal_Response_* sample, RTIBool deletePointers)
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

                builtin_interfaces::msg::dds_::Time__finalize_optional_members(&sample->stamp_, deallocParams->delete_pointers);
            }

            RTIBool Fibonacci_SendGoal_Response__copy(
                Fibonacci_SendGoal_Response_* dst,
                const Fibonacci_SendGoal_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->accepted_, &src->accepted_)) { 
                        return RTI_FALSE;
                    }
                    if (!builtin_interfaces::msg::dds_::Time__copy(
                        &dst->stamp_,(const builtin_interfaces::msg::dds_::Time_*)&src->stamp_)) {
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
            * Configure and implement 'Fibonacci_SendGoal_Response_' sequence class.
            */
            #define T Fibonacci_SendGoal_Response_
            #define TSeq Fibonacci_SendGoal_Response_Seq

            #define T_initialize_w_params example_interfaces::action::dds_::Fibonacci_SendGoal_Response__initialize_w_params

            #define T_finalize_w_params   example_interfaces::action::dds_::Fibonacci_SendGoal_Response__finalize_w_params
            #define T_copy       example_interfaces::action::dds_::Fibonacci_SendGoal_Response__copy

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
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *Fibonacci_Result_TYPENAME = "example_interfaces::action::dds_::Fibonacci_Result_";

            DDS_TypeCode* Fibonacci_Result__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Fibonacci_Result__g_tc_sequence__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member Fibonacci_Result__g_tc_members[1]=
                {

                    {
                        (char *)"sequence_",/* Member name */
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

                static DDS_TypeCode Fibonacci_Result__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"example_interfaces::action::dds_::Fibonacci_Result_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        Fibonacci_Result__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Fibonacci_Result_*/

                if (is_initialized) {
                    return &Fibonacci_Result__g_tc;
                }

                Fibonacci_Result__g_tc_sequence__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Fibonacci_Result__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& Fibonacci_Result__g_tc_sequence__sequence;

                is_initialized = RTI_TRUE;

                return &Fibonacci_Result__g_tc;
            }

            RTIBool Fibonacci_Result__initialize(
                Fibonacci_Result_* sample) {
                return example_interfaces::action::dds_::Fibonacci_Result__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Fibonacci_Result__initialize_ex(
                Fibonacci_Result_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return example_interfaces::action::dds_::Fibonacci_Result__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Fibonacci_Result__initialize_w_params(
                Fibonacci_Result_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_LongSeq_initialize(&sample->sequence_  );
                    DDS_LongSeq_set_absolute_maximum(&sample->sequence_ , RTI_INT32_MAX);
                    if (!DDS_LongSeq_set_maximum(&sample->sequence_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_LongSeq_set_length(&sample->sequence_, 0);
                }
                return RTI_TRUE;
            }

            void Fibonacci_Result__finalize(
                Fibonacci_Result_* sample)
            {

                example_interfaces::action::dds_::Fibonacci_Result__finalize_ex(sample,RTI_TRUE);
            }

            void Fibonacci_Result__finalize_ex(
                Fibonacci_Result_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                example_interfaces::action::dds_::Fibonacci_Result__finalize_w_params(
                    sample,&deallocParams);
            }

            void Fibonacci_Result__finalize_w_params(
                Fibonacci_Result_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_LongSeq_finalize(&sample->sequence_);

            }

            void Fibonacci_Result__finalize_optional_members(
                Fibonacci_Result_* sample, RTIBool deletePointers)
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

            RTIBool Fibonacci_Result__copy(
                Fibonacci_Result_* dst,
                const Fibonacci_Result_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!DDS_LongSeq_copy(&dst->sequence_ ,
                    &src->sequence_ )) {
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
            * Configure and implement 'Fibonacci_Result_' sequence class.
            */
            #define T Fibonacci_Result_
            #define TSeq Fibonacci_Result_Seq

            #define T_initialize_w_params example_interfaces::action::dds_::Fibonacci_Result__initialize_w_params

            #define T_finalize_w_params   example_interfaces::action::dds_::Fibonacci_Result__finalize_w_params
            #define T_copy       example_interfaces::action::dds_::Fibonacci_Result__copy

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
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *Fibonacci_GetResult_Request_TYPENAME = "example_interfaces::action::dds_::Fibonacci_GetResult_Request_";

            DDS_TypeCode* Fibonacci_GetResult_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Fibonacci_GetResult_Request__g_tc_members[1]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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

                static DDS_TypeCode Fibonacci_GetResult_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"example_interfaces::action::dds_::Fibonacci_GetResult_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        Fibonacci_GetResult_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Fibonacci_GetResult_Request_*/

                if (is_initialized) {
                    return &Fibonacci_GetResult_Request__g_tc;
                }

                Fibonacci_GetResult_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                is_initialized = RTI_TRUE;

                return &Fibonacci_GetResult_Request__g_tc;
            }

            RTIBool Fibonacci_GetResult_Request__initialize(
                Fibonacci_GetResult_Request_* sample) {
                return example_interfaces::action::dds_::Fibonacci_GetResult_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Fibonacci_GetResult_Request__initialize_ex(
                Fibonacci_GetResult_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return example_interfaces::action::dds_::Fibonacci_GetResult_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Fibonacci_GetResult_Request__initialize_w_params(
                Fibonacci_GetResult_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void Fibonacci_GetResult_Request__finalize(
                Fibonacci_GetResult_Request_* sample)
            {

                example_interfaces::action::dds_::Fibonacci_GetResult_Request__finalize_ex(sample,RTI_TRUE);
            }

            void Fibonacci_GetResult_Request__finalize_ex(
                Fibonacci_GetResult_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                example_interfaces::action::dds_::Fibonacci_GetResult_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void Fibonacci_GetResult_Request__finalize_w_params(
                Fibonacci_GetResult_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

            }

            void Fibonacci_GetResult_Request__finalize_optional_members(
                Fibonacci_GetResult_Request_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
            }

            RTIBool Fibonacci_GetResult_Request__copy(
                Fibonacci_GetResult_Request_* dst,
                const Fibonacci_GetResult_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
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
            * Configure and implement 'Fibonacci_GetResult_Request_' sequence class.
            */
            #define T Fibonacci_GetResult_Request_
            #define TSeq Fibonacci_GetResult_Request_Seq

            #define T_initialize_w_params example_interfaces::action::dds_::Fibonacci_GetResult_Request__initialize_w_params

            #define T_finalize_w_params   example_interfaces::action::dds_::Fibonacci_GetResult_Request__finalize_w_params
            #define T_copy       example_interfaces::action::dds_::Fibonacci_GetResult_Request__copy

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
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *Fibonacci_GetResult_Response_TYPENAME = "example_interfaces::action::dds_::Fibonacci_GetResult_Response_";

            DDS_TypeCode* Fibonacci_GetResult_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Fibonacci_GetResult_Response__g_tc_members[2]=
                {

                    {
                        (char *)"status_",/* Member name */
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
                        (char *)"result_",/* Member name */
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

                static DDS_TypeCode Fibonacci_GetResult_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"example_interfaces::action::dds_::Fibonacci_GetResult_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Fibonacci_GetResult_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Fibonacci_GetResult_Response_*/

                if (is_initialized) {
                    return &Fibonacci_GetResult_Response__g_tc;
                }

                Fibonacci_GetResult_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_octet;

                Fibonacci_GetResult_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)example_interfaces::action::dds_::Fibonacci_Result__get_typecode();

                is_initialized = RTI_TRUE;

                return &Fibonacci_GetResult_Response__g_tc;
            }

            RTIBool Fibonacci_GetResult_Response__initialize(
                Fibonacci_GetResult_Response_* sample) {
                return example_interfaces::action::dds_::Fibonacci_GetResult_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Fibonacci_GetResult_Response__initialize_ex(
                Fibonacci_GetResult_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return example_interfaces::action::dds_::Fibonacci_GetResult_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Fibonacci_GetResult_Response__initialize_w_params(
                Fibonacci_GetResult_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initOctet(&sample->status_)) {
                    return RTI_FALSE;
                }

                if (!example_interfaces::action::dds_::Fibonacci_Result__initialize_w_params(&sample->result_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void Fibonacci_GetResult_Response__finalize(
                Fibonacci_GetResult_Response_* sample)
            {

                example_interfaces::action::dds_::Fibonacci_GetResult_Response__finalize_ex(sample,RTI_TRUE);
            }

            void Fibonacci_GetResult_Response__finalize_ex(
                Fibonacci_GetResult_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                example_interfaces::action::dds_::Fibonacci_GetResult_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void Fibonacci_GetResult_Response__finalize_w_params(
                Fibonacci_GetResult_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                example_interfaces::action::dds_::Fibonacci_Result__finalize_w_params(&sample->result_,deallocParams);

            }

            void Fibonacci_GetResult_Response__finalize_optional_members(
                Fibonacci_GetResult_Response_* sample, RTIBool deletePointers)
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

                example_interfaces::action::dds_::Fibonacci_Result__finalize_optional_members(&sample->result_, deallocParams->delete_pointers);
            }

            RTIBool Fibonacci_GetResult_Response__copy(
                Fibonacci_GetResult_Response_* dst,
                const Fibonacci_GetResult_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyOctet (
                        &dst->status_, &src->status_)) { 
                        return RTI_FALSE;
                    }
                    if (!example_interfaces::action::dds_::Fibonacci_Result__copy(
                        &dst->result_,(const example_interfaces::action::dds_::Fibonacci_Result_*)&src->result_)) {
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
            * Configure and implement 'Fibonacci_GetResult_Response_' sequence class.
            */
            #define T Fibonacci_GetResult_Response_
            #define TSeq Fibonacci_GetResult_Response_Seq

            #define T_initialize_w_params example_interfaces::action::dds_::Fibonacci_GetResult_Response__initialize_w_params

            #define T_finalize_w_params   example_interfaces::action::dds_::Fibonacci_GetResult_Response__finalize_w_params
            #define T_copy       example_interfaces::action::dds_::Fibonacci_GetResult_Response__copy

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
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *Fibonacci_Feedback_TYPENAME = "example_interfaces::action::dds_::Fibonacci_Feedback_";

            DDS_TypeCode* Fibonacci_Feedback__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode Fibonacci_Feedback__g_tc_sequence__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member Fibonacci_Feedback__g_tc_members[1]=
                {

                    {
                        (char *)"sequence_",/* Member name */
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

                static DDS_TypeCode Fibonacci_Feedback__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"example_interfaces::action::dds_::Fibonacci_Feedback_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        Fibonacci_Feedback__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Fibonacci_Feedback_*/

                if (is_initialized) {
                    return &Fibonacci_Feedback__g_tc;
                }

                Fibonacci_Feedback__g_tc_sequence__sequence._data._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long;

                Fibonacci_Feedback__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& Fibonacci_Feedback__g_tc_sequence__sequence;

                is_initialized = RTI_TRUE;

                return &Fibonacci_Feedback__g_tc;
            }

            RTIBool Fibonacci_Feedback__initialize(
                Fibonacci_Feedback_* sample) {
                return example_interfaces::action::dds_::Fibonacci_Feedback__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Fibonacci_Feedback__initialize_ex(
                Fibonacci_Feedback_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return example_interfaces::action::dds_::Fibonacci_Feedback__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Fibonacci_Feedback__initialize_w_params(
                Fibonacci_Feedback_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    DDS_LongSeq_initialize(&sample->sequence_  );
                    DDS_LongSeq_set_absolute_maximum(&sample->sequence_ , RTI_INT32_MAX);
                    if (!DDS_LongSeq_set_maximum(&sample->sequence_ , (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    DDS_LongSeq_set_length(&sample->sequence_, 0);
                }
                return RTI_TRUE;
            }

            void Fibonacci_Feedback__finalize(
                Fibonacci_Feedback_* sample)
            {

                example_interfaces::action::dds_::Fibonacci_Feedback__finalize_ex(sample,RTI_TRUE);
            }

            void Fibonacci_Feedback__finalize_ex(
                Fibonacci_Feedback_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                example_interfaces::action::dds_::Fibonacci_Feedback__finalize_w_params(
                    sample,&deallocParams);
            }

            void Fibonacci_Feedback__finalize_w_params(
                Fibonacci_Feedback_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                DDS_LongSeq_finalize(&sample->sequence_);

            }

            void Fibonacci_Feedback__finalize_optional_members(
                Fibonacci_Feedback_* sample, RTIBool deletePointers)
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

            RTIBool Fibonacci_Feedback__copy(
                Fibonacci_Feedback_* dst,
                const Fibonacci_Feedback_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!DDS_LongSeq_copy(&dst->sequence_ ,
                    &src->sequence_ )) {
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
            * Configure and implement 'Fibonacci_Feedback_' sequence class.
            */
            #define T Fibonacci_Feedback_
            #define TSeq Fibonacci_Feedback_Seq

            #define T_initialize_w_params example_interfaces::action::dds_::Fibonacci_Feedback__initialize_w_params

            #define T_finalize_w_params   example_interfaces::action::dds_::Fibonacci_Feedback__finalize_w_params
            #define T_copy       example_interfaces::action::dds_::Fibonacci_Feedback__copy

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
    } /* namespace action  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace action {
        namespace dds_ {

            /* ========================================================================= */
            const char *Fibonacci_FeedbackMessage_TYPENAME = "example_interfaces::action::dds_::Fibonacci_FeedbackMessage_";

            DDS_TypeCode* Fibonacci_FeedbackMessage__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Fibonacci_FeedbackMessage__g_tc_members[2]=
                {

                    {
                        (char *)"goal_id_",/* Member name */
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
                        (char *)"feedback_",/* Member name */
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

                static DDS_TypeCode Fibonacci_FeedbackMessage__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"example_interfaces::action::dds_::Fibonacci_FeedbackMessage_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Fibonacci_FeedbackMessage__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Fibonacci_FeedbackMessage_*/

                if (is_initialized) {
                    return &Fibonacci_FeedbackMessage__g_tc;
                }

                Fibonacci_FeedbackMessage__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)unique_identifier_msgs::msg::dds_::UUID__get_typecode();

                Fibonacci_FeedbackMessage__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)example_interfaces::action::dds_::Fibonacci_Feedback__get_typecode();

                is_initialized = RTI_TRUE;

                return &Fibonacci_FeedbackMessage__g_tc;
            }

            RTIBool Fibonacci_FeedbackMessage__initialize(
                Fibonacci_FeedbackMessage_* sample) {
                return example_interfaces::action::dds_::Fibonacci_FeedbackMessage__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Fibonacci_FeedbackMessage__initialize_ex(
                Fibonacci_FeedbackMessage_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return example_interfaces::action::dds_::Fibonacci_FeedbackMessage__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Fibonacci_FeedbackMessage__initialize_w_params(
                Fibonacci_FeedbackMessage_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!unique_identifier_msgs::msg::dds_::UUID__initialize_w_params(&sample->goal_id_,
                allocParams)) {
                    return RTI_FALSE;
                }
                if (!example_interfaces::action::dds_::Fibonacci_Feedback__initialize_w_params(&sample->feedback_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void Fibonacci_FeedbackMessage__finalize(
                Fibonacci_FeedbackMessage_* sample)
            {

                example_interfaces::action::dds_::Fibonacci_FeedbackMessage__finalize_ex(sample,RTI_TRUE);
            }

            void Fibonacci_FeedbackMessage__finalize_ex(
                Fibonacci_FeedbackMessage_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                example_interfaces::action::dds_::Fibonacci_FeedbackMessage__finalize_w_params(
                    sample,&deallocParams);
            }

            void Fibonacci_FeedbackMessage__finalize_w_params(
                Fibonacci_FeedbackMessage_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                unique_identifier_msgs::msg::dds_::UUID__finalize_w_params(&sample->goal_id_,deallocParams);

                example_interfaces::action::dds_::Fibonacci_Feedback__finalize_w_params(&sample->feedback_,deallocParams);

            }

            void Fibonacci_FeedbackMessage__finalize_optional_members(
                Fibonacci_FeedbackMessage_* sample, RTIBool deletePointers)
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

                unique_identifier_msgs::msg::dds_::UUID__finalize_optional_members(&sample->goal_id_, deallocParams->delete_pointers);
                example_interfaces::action::dds_::Fibonacci_Feedback__finalize_optional_members(&sample->feedback_, deallocParams->delete_pointers);
            }

            RTIBool Fibonacci_FeedbackMessage__copy(
                Fibonacci_FeedbackMessage_* dst,
                const Fibonacci_FeedbackMessage_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!unique_identifier_msgs::msg::dds_::UUID__copy(
                        &dst->goal_id_,(const unique_identifier_msgs::msg::dds_::UUID_*)&src->goal_id_)) {
                        return RTI_FALSE;
                    } 
                    if (!example_interfaces::action::dds_::Fibonacci_Feedback__copy(
                        &dst->feedback_,(const example_interfaces::action::dds_::Fibonacci_Feedback_*)&src->feedback_)) {
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
            * Configure and implement 'Fibonacci_FeedbackMessage_' sequence class.
            */
            #define T Fibonacci_FeedbackMessage_
            #define TSeq Fibonacci_FeedbackMessage_Seq

            #define T_initialize_w_params example_interfaces::action::dds_::Fibonacci_FeedbackMessage__initialize_w_params

            #define T_finalize_w_params   example_interfaces::action::dds_::Fibonacci_FeedbackMessage__finalize_w_params
            #define T_copy       example_interfaces::action::dds_::Fibonacci_FeedbackMessage__copy

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
    } /* namespace action  */
} /* namespace example_interfaces  */

