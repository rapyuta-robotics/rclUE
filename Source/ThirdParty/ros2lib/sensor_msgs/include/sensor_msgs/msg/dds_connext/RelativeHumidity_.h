

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RelativeHumidity_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RelativeHumidity__953196074_h
#define RelativeHumidity__953196074_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *RelativeHumidity_TYPENAME;

            struct RelativeHumidity_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RelativeHumidity_TypeSupport;
            class RelativeHumidity_DataWriter;
            class RelativeHumidity_DataReader;
            #endif

            class RelativeHumidity_ 
            {
              public:
                typedef struct RelativeHumidity_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RelativeHumidity_TypeSupport TypeSupport;
                typedef RelativeHumidity_DataWriter DataWriter;
                typedef RelativeHumidity_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Double   relative_humidity_ ;
                DDS_Double   variance_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RelativeHumidity__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RelativeHumidity_Seq, RelativeHumidity_);

            NDDSUSERDllExport
            RTIBool RelativeHumidity__initialize(
                RelativeHumidity_* self);

            NDDSUSERDllExport
            RTIBool RelativeHumidity__initialize_ex(
                RelativeHumidity_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RelativeHumidity__initialize_w_params(
                RelativeHumidity_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RelativeHumidity__finalize(
                RelativeHumidity_* self);

            NDDSUSERDllExport
            void RelativeHumidity__finalize_ex(
                RelativeHumidity_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RelativeHumidity__finalize_w_params(
                RelativeHumidity_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RelativeHumidity__finalize_optional_members(
                RelativeHumidity_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RelativeHumidity__copy(
                RelativeHumidity_* dst,
                const RelativeHumidity_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* RelativeHumidity_ */

