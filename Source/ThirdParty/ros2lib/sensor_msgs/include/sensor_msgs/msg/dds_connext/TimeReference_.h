

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TimeReference_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TimeReference__1730036525_h
#define TimeReference__1730036525_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *TimeReference_TYPENAME;

            struct TimeReference_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TimeReference_TypeSupport;
            class TimeReference_DataWriter;
            class TimeReference_DataReader;
            #endif

            class TimeReference_ 
            {
              public:
                typedef struct TimeReference_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TimeReference_TypeSupport TypeSupport;
                typedef TimeReference_DataWriter DataWriter;
                typedef TimeReference_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                builtin_interfaces::msg::dds_::Time_   time_ref_ ;
                DDS_Char *   source_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TimeReference__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TimeReference_Seq, TimeReference_);

            NDDSUSERDllExport
            RTIBool TimeReference__initialize(
                TimeReference_* self);

            NDDSUSERDllExport
            RTIBool TimeReference__initialize_ex(
                TimeReference_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TimeReference__initialize_w_params(
                TimeReference_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TimeReference__finalize(
                TimeReference_* self);

            NDDSUSERDllExport
            void TimeReference__finalize_ex(
                TimeReference_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TimeReference__finalize_w_params(
                TimeReference_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TimeReference__finalize_optional_members(
                TimeReference_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TimeReference__copy(
                TimeReference_* dst,
                const TimeReference_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* TimeReference_ */

