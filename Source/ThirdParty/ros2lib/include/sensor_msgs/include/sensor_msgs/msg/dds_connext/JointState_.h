

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JointState__345220053_h
#define JointState__345220053_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *JointState_TYPENAME;

            struct JointState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointState_TypeSupport;
            class JointState_DataWriter;
            class JointState_DataReader;
            #endif

            class JointState_ 
            {
              public:
                typedef struct JointState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointState_TypeSupport TypeSupport;
                typedef JointState_DataWriter DataWriter;
                typedef JointState_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_StringSeq  name_ ;
                DDS_DoubleSeq  position_ ;
                DDS_DoubleSeq  velocity_ ;
                DDS_DoubleSeq  effort_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointState_Seq, JointState_);

            NDDSUSERDllExport
            RTIBool JointState__initialize(
                JointState_* self);

            NDDSUSERDllExport
            RTIBool JointState__initialize_ex(
                JointState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointState__initialize_w_params(
                JointState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointState__finalize(
                JointState_* self);

            NDDSUSERDllExport
            void JointState__finalize_ex(
                JointState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointState__finalize_w_params(
                JointState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointState__finalize_optional_members(
                JointState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointState__copy(
                JointState_* dst,
                const JointState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* JointState_ */

