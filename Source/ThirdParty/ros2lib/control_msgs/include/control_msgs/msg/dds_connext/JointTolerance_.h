

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointTolerance_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JointTolerance__1390384751_h
#define JointTolerance__1390384751_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace control_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *JointTolerance_TYPENAME;

            struct JointTolerance_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointTolerance_TypeSupport;
            class JointTolerance_DataWriter;
            class JointTolerance_DataReader;
            #endif

            class JointTolerance_ 
            {
              public:
                typedef struct JointTolerance_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointTolerance_TypeSupport TypeSupport;
                typedef JointTolerance_DataWriter DataWriter;
                typedef JointTolerance_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                DDS_Double   position_ ;
                DDS_Double   velocity_ ;
                DDS_Double   acceleration_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointTolerance__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointTolerance_Seq, JointTolerance_);

            NDDSUSERDllExport
            RTIBool JointTolerance__initialize(
                JointTolerance_* self);

            NDDSUSERDllExport
            RTIBool JointTolerance__initialize_ex(
                JointTolerance_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointTolerance__initialize_w_params(
                JointTolerance_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointTolerance__finalize(
                JointTolerance_* self);

            NDDSUSERDllExport
            void JointTolerance__finalize_ex(
                JointTolerance_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointTolerance__finalize_w_params(
                JointTolerance_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointTolerance__finalize_optional_members(
                JointTolerance_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointTolerance__copy(
                JointTolerance_* dst,
                const JointTolerance_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace control_msgs  */

#endif /* JointTolerance_ */

