

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointJog_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JointJog__742644539_h
#define JointJog__742644539_h

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

            extern const char *JointJog_TYPENAME;

            struct JointJog_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointJog_TypeSupport;
            class JointJog_DataWriter;
            class JointJog_DataReader;
            #endif

            class JointJog_ 
            {
              public:
                typedef struct JointJog_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointJog_TypeSupport TypeSupport;
                typedef JointJog_DataWriter DataWriter;
                typedef JointJog_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_StringSeq  joint_names_ ;
                DDS_DoubleSeq  displacements_ ;
                DDS_DoubleSeq  velocities_ ;
                DDS_Double   duration_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointJog__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointJog_Seq, JointJog_);

            NDDSUSERDllExport
            RTIBool JointJog__initialize(
                JointJog_* self);

            NDDSUSERDllExport
            RTIBool JointJog__initialize_ex(
                JointJog_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointJog__initialize_w_params(
                JointJog_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointJog__finalize(
                JointJog_* self);

            NDDSUSERDllExport
            void JointJog__finalize_ex(
                JointJog_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointJog__finalize_w_params(
                JointJog_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointJog__finalize_optional_members(
                JointJog_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointJog__copy(
                JointJog_* dst,
                const JointJog_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace control_msgs  */

#endif /* JointJog_ */

