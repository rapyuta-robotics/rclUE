

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointTrajectoryControllerState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JointTrajectoryControllerState__1669186118_h
#define JointTrajectoryControllerState__1669186118_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
#include "trajectory_msgs/msg/dds_connext/JointTrajectoryPoint_.h"
namespace control_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *JointTrajectoryControllerState_TYPENAME;

            struct JointTrajectoryControllerState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointTrajectoryControllerState_TypeSupport;
            class JointTrajectoryControllerState_DataWriter;
            class JointTrajectoryControllerState_DataReader;
            #endif

            class JointTrajectoryControllerState_ 
            {
              public:
                typedef struct JointTrajectoryControllerState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointTrajectoryControllerState_TypeSupport TypeSupport;
                typedef JointTrajectoryControllerState_DataWriter DataWriter;
                typedef JointTrajectoryControllerState_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_StringSeq  joint_names_ ;
                trajectory_msgs::msg::dds_::JointTrajectoryPoint_   desired_ ;
                trajectory_msgs::msg::dds_::JointTrajectoryPoint_   actual_ ;
                trajectory_msgs::msg::dds_::JointTrajectoryPoint_   error_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointTrajectoryControllerState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointTrajectoryControllerState_Seq, JointTrajectoryControllerState_);

            NDDSUSERDllExport
            RTIBool JointTrajectoryControllerState__initialize(
                JointTrajectoryControllerState_* self);

            NDDSUSERDllExport
            RTIBool JointTrajectoryControllerState__initialize_ex(
                JointTrajectoryControllerState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointTrajectoryControllerState__initialize_w_params(
                JointTrajectoryControllerState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointTrajectoryControllerState__finalize(
                JointTrajectoryControllerState_* self);

            NDDSUSERDllExport
            void JointTrajectoryControllerState__finalize_ex(
                JointTrajectoryControllerState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointTrajectoryControllerState__finalize_w_params(
                JointTrajectoryControllerState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointTrajectoryControllerState__finalize_optional_members(
                JointTrajectoryControllerState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointTrajectoryControllerState__copy(
                JointTrajectoryControllerState_* dst,
                const JointTrajectoryControllerState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace control_msgs  */

#endif /* JointTrajectoryControllerState_ */

