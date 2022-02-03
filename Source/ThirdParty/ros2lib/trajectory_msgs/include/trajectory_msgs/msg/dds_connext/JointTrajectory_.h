

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JointTrajectory_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JointTrajectory__321037487_h
#define JointTrajectory__321037487_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
#include "trajectory_msgs/msg/dds_connext/JointTrajectoryPoint_.h"
namespace trajectory_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *JointTrajectory_TYPENAME;

            struct JointTrajectory_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JointTrajectory_TypeSupport;
            class JointTrajectory_DataWriter;
            class JointTrajectory_DataReader;
            #endif

            class JointTrajectory_ 
            {
              public:
                typedef struct JointTrajectory_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JointTrajectory_TypeSupport TypeSupport;
                typedef JointTrajectory_DataWriter DataWriter;
                typedef JointTrajectory_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_StringSeq  joint_names_ ;
                trajectory_msgs::msg::dds_::JointTrajectoryPoint_Seq  points_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JointTrajectory__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JointTrajectory_Seq, JointTrajectory_);

            NDDSUSERDllExport
            RTIBool JointTrajectory__initialize(
                JointTrajectory_* self);

            NDDSUSERDllExport
            RTIBool JointTrajectory__initialize_ex(
                JointTrajectory_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JointTrajectory__initialize_w_params(
                JointTrajectory_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JointTrajectory__finalize(
                JointTrajectory_* self);

            NDDSUSERDllExport
            void JointTrajectory__finalize_ex(
                JointTrajectory_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JointTrajectory__finalize_w_params(
                JointTrajectory_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JointTrajectory__finalize_optional_members(
                JointTrajectory_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JointTrajectory__copy(
                JointTrajectory_* dst,
                const JointTrajectory_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace trajectory_msgs  */

#endif /* JointTrajectory_ */

