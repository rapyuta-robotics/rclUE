

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiDOFJointTrajectoryPoint_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MultiDOFJointTrajectoryPoint__1217082941_h
#define MultiDOFJointTrajectoryPoint__1217082941_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_.h"
#include "geometry_msgs/msg/dds_connext/Transform_.h"
#include "geometry_msgs/msg/dds_connext/Twist_.h"
namespace trajectory_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *MultiDOFJointTrajectoryPoint_TYPENAME;

            struct MultiDOFJointTrajectoryPoint_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MultiDOFJointTrajectoryPoint_TypeSupport;
            class MultiDOFJointTrajectoryPoint_DataWriter;
            class MultiDOFJointTrajectoryPoint_DataReader;
            #endif

            class MultiDOFJointTrajectoryPoint_ 
            {
              public:
                typedef struct MultiDOFJointTrajectoryPoint_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MultiDOFJointTrajectoryPoint_TypeSupport TypeSupport;
                typedef MultiDOFJointTrajectoryPoint_DataWriter DataWriter;
                typedef MultiDOFJointTrajectoryPoint_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::Transform_Seq  transforms_ ;
                geometry_msgs::msg::dds_::Twist_Seq  velocities_ ;
                geometry_msgs::msg::dds_::Twist_Seq  accelerations_ ;
                builtin_interfaces::msg::dds_::Duration_   time_from_start_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MultiDOFJointTrajectoryPoint__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MultiDOFJointTrajectoryPoint_Seq, MultiDOFJointTrajectoryPoint_);

            NDDSUSERDllExport
            RTIBool MultiDOFJointTrajectoryPoint__initialize(
                MultiDOFJointTrajectoryPoint_* self);

            NDDSUSERDllExport
            RTIBool MultiDOFJointTrajectoryPoint__initialize_ex(
                MultiDOFJointTrajectoryPoint_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MultiDOFJointTrajectoryPoint__initialize_w_params(
                MultiDOFJointTrajectoryPoint_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MultiDOFJointTrajectoryPoint__finalize(
                MultiDOFJointTrajectoryPoint_* self);

            NDDSUSERDllExport
            void MultiDOFJointTrajectoryPoint__finalize_ex(
                MultiDOFJointTrajectoryPoint_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MultiDOFJointTrajectoryPoint__finalize_w_params(
                MultiDOFJointTrajectoryPoint_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MultiDOFJointTrajectoryPoint__finalize_optional_members(
                MultiDOFJointTrajectoryPoint_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MultiDOFJointTrajectoryPoint__copy(
                MultiDOFJointTrajectoryPoint_* dst,
                const MultiDOFJointTrajectoryPoint_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace trajectory_msgs  */

#endif /* MultiDOFJointTrajectoryPoint_ */

