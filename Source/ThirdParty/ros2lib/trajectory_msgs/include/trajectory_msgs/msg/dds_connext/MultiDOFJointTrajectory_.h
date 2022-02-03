

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiDOFJointTrajectory_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MultiDOFJointTrajectory__1753776463_h
#define MultiDOFJointTrajectory__1753776463_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
#include "trajectory_msgs/msg/dds_connext/MultiDOFJointTrajectoryPoint_.h"
namespace trajectory_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *MultiDOFJointTrajectory_TYPENAME;

            struct MultiDOFJointTrajectory_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MultiDOFJointTrajectory_TypeSupport;
            class MultiDOFJointTrajectory_DataWriter;
            class MultiDOFJointTrajectory_DataReader;
            #endif

            class MultiDOFJointTrajectory_ 
            {
              public:
                typedef struct MultiDOFJointTrajectory_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MultiDOFJointTrajectory_TypeSupport TypeSupport;
                typedef MultiDOFJointTrajectory_DataWriter DataWriter;
                typedef MultiDOFJointTrajectory_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_StringSeq  joint_names_ ;
                trajectory_msgs::msg::dds_::MultiDOFJointTrajectoryPoint_Seq  points_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MultiDOFJointTrajectory__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MultiDOFJointTrajectory_Seq, MultiDOFJointTrajectory_);

            NDDSUSERDllExport
            RTIBool MultiDOFJointTrajectory__initialize(
                MultiDOFJointTrajectory_* self);

            NDDSUSERDllExport
            RTIBool MultiDOFJointTrajectory__initialize_ex(
                MultiDOFJointTrajectory_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MultiDOFJointTrajectory__initialize_w_params(
                MultiDOFJointTrajectory_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MultiDOFJointTrajectory__finalize(
                MultiDOFJointTrajectory_* self);

            NDDSUSERDllExport
            void MultiDOFJointTrajectory__finalize_ex(
                MultiDOFJointTrajectory_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MultiDOFJointTrajectory__finalize_w_params(
                MultiDOFJointTrajectory_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MultiDOFJointTrajectory__finalize_optional_members(
                MultiDOFJointTrajectory_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MultiDOFJointTrajectory__copy(
                MultiDOFJointTrajectory_* dst,
                const MultiDOFJointTrajectory_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace trajectory_msgs  */

#endif /* MultiDOFJointTrajectory_ */

