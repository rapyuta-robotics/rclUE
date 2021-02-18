

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Range_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Range__176299103_h
#define Range__176299103_h

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
            namespace Range_Constants {
                static const DDS_Octet ULTRASOUND_= 0;
                static const DDS_Octet INFRARED_= 1;
            } /* namespace Range_Constants  */

            extern const char *Range_TYPENAME;

            struct Range_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Range_TypeSupport;
            class Range_DataWriter;
            class Range_DataReader;
            #endif

            class Range_ 
            {
              public:
                typedef struct Range_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Range_TypeSupport TypeSupport;
                typedef Range_DataWriter DataWriter;
                typedef Range_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Octet   radiation_type_ ;
                DDS_Float   field_of_view_ ;
                DDS_Float   min_range_ ;
                DDS_Float   max_range_ ;
                DDS_Float   range_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Range__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Range_Seq, Range_);

            NDDSUSERDllExport
            RTIBool Range__initialize(
                Range_* self);

            NDDSUSERDllExport
            RTIBool Range__initialize_ex(
                Range_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Range__initialize_w_params(
                Range_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Range__finalize(
                Range_* self);

            NDDSUSERDllExport
            void Range__finalize_ex(
                Range_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Range__finalize_w_params(
                Range_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Range__finalize_optional_members(
                Range_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Range__copy(
                Range_* dst,
                const Range_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* Range_ */

