

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DynamicJointState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DynamicJointState__327763885_h
#define DynamicJointState__327763885_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "control_msgs/msg/dds_connext/InterfaceValue_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace control_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *DynamicJointState_TYPENAME;

            struct DynamicJointState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DynamicJointState_TypeSupport;
            class DynamicJointState_DataWriter;
            class DynamicJointState_DataReader;
            #endif

            class DynamicJointState_ 
            {
              public:
                typedef struct DynamicJointState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DynamicJointState_TypeSupport TypeSupport;
                typedef DynamicJointState_DataWriter DataWriter;
                typedef DynamicJointState_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_StringSeq  joint_names_ ;
                control_msgs::msg::dds_::InterfaceValue_Seq  interface_values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DynamicJointState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DynamicJointState_Seq, DynamicJointState_);

            NDDSUSERDllExport
            RTIBool DynamicJointState__initialize(
                DynamicJointState_* self);

            NDDSUSERDllExport
            RTIBool DynamicJointState__initialize_ex(
                DynamicJointState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DynamicJointState__initialize_w_params(
                DynamicJointState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DynamicJointState__finalize(
                DynamicJointState_* self);

            NDDSUSERDllExport
            void DynamicJointState__finalize_ex(
                DynamicJointState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DynamicJointState__finalize_w_params(
                DynamicJointState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DynamicJointState__finalize_optional_members(
                DynamicJointState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DynamicJointState__copy(
                DynamicJointState_* dst,
                const DynamicJointState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace control_msgs  */

#endif /* DynamicJointState_ */

