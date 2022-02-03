

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointControllerState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JointControllerState__1302514195_h
#define JointControllerState__1302514195_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace control_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *JointControllerState_TYPENAME;

            struct JointControllerState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointControllerState_TypeSupport;
            class JointControllerState_DataWriter;
            class JointControllerState_DataReader;
            #endif

            class JointControllerState_ 
            {
              public:
                typedef struct JointControllerState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointControllerState_TypeSupport TypeSupport;
                typedef JointControllerState_DataWriter DataWriter;
                typedef JointControllerState_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Double   set_point_ ;
                DDS_Double   process_value_ ;
                DDS_Double   process_value_dot_ ;
                DDS_Double   error_ ;
                DDS_Double   time_step_ ;
                DDS_Double   command_ ;
                DDS_Double   p_ ;
                DDS_Double   i_ ;
                DDS_Double   d_ ;
                DDS_Double   i_clamp_ ;
                DDS_Boolean   antiwindup_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointControllerState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointControllerState_Seq, JointControllerState_);

            NDDSUSERDllExport
            RTIBool JointControllerState__initialize(
                JointControllerState_* self);

            NDDSUSERDllExport
            RTIBool JointControllerState__initialize_ex(
                JointControllerState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointControllerState__initialize_w_params(
                JointControllerState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointControllerState__finalize(
                JointControllerState_* self);

            NDDSUSERDllExport
            void JointControllerState__finalize_ex(
                JointControllerState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointControllerState__finalize_w_params(
                JointControllerState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointControllerState__finalize_optional_members(
                JointControllerState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointControllerState__copy(
                JointControllerState_* dst,
                const JointControllerState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace control_msgs  */

#endif /* JointControllerState_ */

