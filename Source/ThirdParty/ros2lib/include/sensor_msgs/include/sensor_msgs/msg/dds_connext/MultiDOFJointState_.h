

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiDOFJointState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MultiDOFJointState__558026961_h
#define MultiDOFJointState__558026961_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Transform_.h"
#include "geometry_msgs/msg/dds_connext/Twist_.h"
#include "geometry_msgs/msg/dds_connext/Wrench_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *MultiDOFJointState_TYPENAME;

            struct MultiDOFJointState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MultiDOFJointState_TypeSupport;
            class MultiDOFJointState_DataWriter;
            class MultiDOFJointState_DataReader;
            #endif

            class MultiDOFJointState_ 
            {
              public:
                typedef struct MultiDOFJointState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MultiDOFJointState_TypeSupport TypeSupport;
                typedef MultiDOFJointState_DataWriter DataWriter;
                typedef MultiDOFJointState_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_StringSeq  joint_names_ ;
                geometry_msgs::msg::dds_::Transform_Seq  transforms_ ;
                geometry_msgs::msg::dds_::Twist_Seq  twist_ ;
                geometry_msgs::msg::dds_::Wrench_Seq  wrench_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MultiDOFJointState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MultiDOFJointState_Seq, MultiDOFJointState_);

            NDDSUSERDllExport
            RTIBool MultiDOFJointState__initialize(
                MultiDOFJointState_* self);

            NDDSUSERDllExport
            RTIBool MultiDOFJointState__initialize_ex(
                MultiDOFJointState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MultiDOFJointState__initialize_w_params(
                MultiDOFJointState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MultiDOFJointState__finalize(
                MultiDOFJointState_* self);

            NDDSUSERDllExport
            void MultiDOFJointState__finalize_ex(
                MultiDOFJointState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MultiDOFJointState__finalize_w_params(
                MultiDOFJointState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MultiDOFJointState__finalize_optional_members(
                MultiDOFJointState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MultiDOFJointState__copy(
                MultiDOFJointState_* dst,
                const MultiDOFJointState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* MultiDOFJointState_ */

