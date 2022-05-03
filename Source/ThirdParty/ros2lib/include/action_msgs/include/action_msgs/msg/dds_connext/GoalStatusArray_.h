

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GoalStatusArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GoalStatusArray__86814506_h
#define GoalStatusArray__86814506_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "action_msgs/msg/dds_connext/GoalStatus_.h"
namespace action_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *GoalStatusArray_TYPENAME;

            struct GoalStatusArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GoalStatusArray_TypeSupport;
            class GoalStatusArray_DataWriter;
            class GoalStatusArray_DataReader;
            #endif

            class GoalStatusArray_ 
            {
              public:
                typedef struct GoalStatusArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GoalStatusArray_TypeSupport TypeSupport;
                typedef GoalStatusArray_DataWriter DataWriter;
                typedef GoalStatusArray_DataReader DataReader;
                #endif

                action_msgs::msg::dds_::GoalStatus_Seq  status_list_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GoalStatusArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GoalStatusArray_Seq, GoalStatusArray_);

            NDDSUSERDllExport
            RTIBool GoalStatusArray__initialize(
                GoalStatusArray_* self);

            NDDSUSERDllExport
            RTIBool GoalStatusArray__initialize_ex(
                GoalStatusArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GoalStatusArray__initialize_w_params(
                GoalStatusArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GoalStatusArray__finalize(
                GoalStatusArray_* self);

            NDDSUSERDllExport
            void GoalStatusArray__finalize_ex(
                GoalStatusArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GoalStatusArray__finalize_w_params(
                GoalStatusArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GoalStatusArray__finalize_optional_members(
                GoalStatusArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GoalStatusArray__copy(
                GoalStatusArray_* dst,
                const GoalStatusArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace action_msgs  */

#endif /* GoalStatusArray_ */

