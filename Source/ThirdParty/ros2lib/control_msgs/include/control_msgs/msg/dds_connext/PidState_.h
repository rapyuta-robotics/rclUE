

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PidState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PidState__1128674749_h
#define PidState__1128674749_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace control_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *PidState_TYPENAME;

            struct PidState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PidState_TypeSupport;
            class PidState_DataWriter;
            class PidState_DataReader;
            #endif

            class PidState_ 
            {
              public:
                typedef struct PidState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PidState_TypeSupport TypeSupport;
                typedef PidState_DataWriter DataWriter;
                typedef PidState_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                builtin_interfaces::msg::dds_::Duration_   timestep_ ;
                DDS_Double   error_ ;
                DDS_Double   error_dot_ ;
                DDS_Double   p_error_ ;
                DDS_Double   i_error_ ;
                DDS_Double   d_error_ ;
                DDS_Double   p_term_ ;
                DDS_Double   i_term_ ;
                DDS_Double   d_term_ ;
                DDS_Double   i_max_ ;
                DDS_Double   i_min_ ;
                DDS_Double   output_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PidState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PidState_Seq, PidState_);

            NDDSUSERDllExport
            RTIBool PidState__initialize(
                PidState_* self);

            NDDSUSERDllExport
            RTIBool PidState__initialize_ex(
                PidState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PidState__initialize_w_params(
                PidState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PidState__finalize(
                PidState_* self);

            NDDSUSERDllExport
            void PidState__finalize_ex(
                PidState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PidState__finalize_w_params(
                PidState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PidState__finalize_optional_members(
                PidState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PidState__copy(
                PidState_* dst,
                const PidState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace control_msgs  */

#endif /* PidState_ */

