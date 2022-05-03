

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GoalInfo_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GoalInfo__1229151189_h
#define GoalInfo__1229151189_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_.h"
namespace action_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *GoalInfo_TYPENAME;

            struct GoalInfo_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GoalInfo_TypeSupport;
            class GoalInfo_DataWriter;
            class GoalInfo_DataReader;
            #endif

            class GoalInfo_ 
            {
              public:
                typedef struct GoalInfo_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GoalInfo_TypeSupport TypeSupport;
                typedef GoalInfo_DataWriter DataWriter;
                typedef GoalInfo_DataReader DataReader;
                #endif

                unique_identifier_msgs::msg::dds_::UUID_   goal_id_ ;
                builtin_interfaces::msg::dds_::Time_   stamp_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GoalInfo__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GoalInfo_Seq, GoalInfo_);

            NDDSUSERDllExport
            RTIBool GoalInfo__initialize(
                GoalInfo_* self);

            NDDSUSERDllExport
            RTIBool GoalInfo__initialize_ex(
                GoalInfo_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GoalInfo__initialize_w_params(
                GoalInfo_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GoalInfo__finalize(
                GoalInfo_* self);

            NDDSUSERDllExport
            void GoalInfo__finalize_ex(
                GoalInfo_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GoalInfo__finalize_w_params(
                GoalInfo_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GoalInfo__finalize_optional_members(
                GoalInfo_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GoalInfo__copy(
                GoalInfo_* dst,
                const GoalInfo_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace action_msgs  */

#endif /* GoalInfo_ */

