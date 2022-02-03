

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointTrajectoryPoint_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JointTrajectoryPoint__177430919_h
#define JointTrajectoryPoint__177430919_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
namespace trajectory_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *JointTrajectoryPoint_TYPENAME;

            struct JointTrajectoryPoint_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointTrajectoryPoint_TypeSupport;
            class JointTrajectoryPoint_DataWriter;
            class JointTrajectoryPoint_DataReader;
            #endif

            class JointTrajectoryPoint_ 
            {
              public:
                typedef struct JointTrajectoryPoint_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointTrajectoryPoint_TypeSupport TypeSupport;
                typedef JointTrajectoryPoint_DataWriter DataWriter;
                typedef JointTrajectoryPoint_DataReader DataReader;
                #endif

                DDS_DoubleSeq  positions_ ;
                DDS_DoubleSeq  velocities_ ;
                DDS_DoubleSeq  accelerations_ ;
                DDS_DoubleSeq  effort_ ;
                builtin_interfaces::msg::dds_::Duration_   time_from_start_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointTrajectoryPoint__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointTrajectoryPoint_Seq, JointTrajectoryPoint_);

            NDDSUSERDllExport
            RTIBool JointTrajectoryPoint__initialize(
                JointTrajectoryPoint_* self);

            NDDSUSERDllExport
            RTIBool JointTrajectoryPoint__initialize_ex(
                JointTrajectoryPoint_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointTrajectoryPoint__initialize_w_params(
                JointTrajectoryPoint_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointTrajectoryPoint__finalize(
                JointTrajectoryPoint_* self);

            NDDSUSERDllExport
            void JointTrajectoryPoint__finalize_ex(
                JointTrajectoryPoint_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointTrajectoryPoint__finalize_w_params(
                JointTrajectoryPoint_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointTrajectoryPoint__finalize_optional_members(
                JointTrajectoryPoint_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointTrajectoryPoint__copy(
                JointTrajectoryPoint_* dst,
                const JointTrajectoryPoint_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace trajectory_msgs  */

#endif /* JointTrajectoryPoint_ */

