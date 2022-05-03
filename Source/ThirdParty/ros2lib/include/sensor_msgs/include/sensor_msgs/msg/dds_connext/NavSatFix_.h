

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NavSatFix_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NavSatFix__1372680484_h
#define NavSatFix__1372680484_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/NavSatStatus_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {
            namespace NavSatFix_Constants {
                static const DDS_Octet COVARIANCE_TYPE_UNKNOWN_= 0;
                static const DDS_Octet COVARIANCE_TYPE_APPROXIMATED_= 1;
                static const DDS_Octet COVARIANCE_TYPE_DIAGONAL_KNOWN_= 2;
                static const DDS_Octet COVARIANCE_TYPE_KNOWN_= 3;
            } /* namespace NavSatFix_Constants  */

            extern const char *NavSatFix_TYPENAME;

            struct NavSatFix_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class NavSatFix_TypeSupport;
            class NavSatFix_DataWriter;
            class NavSatFix_DataReader;
            #endif

            class NavSatFix_ 
            {
              public:
                typedef struct NavSatFix_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef NavSatFix_TypeSupport TypeSupport;
                typedef NavSatFix_DataWriter DataWriter;
                typedef NavSatFix_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                sensor_msgs::msg::dds_::NavSatStatus_   status_ ;
                DDS_Double   latitude_ ;
                DDS_Double   longitude_ ;
                DDS_Double   altitude_ ;
                DDS_Double   position_covariance_ [9];
                DDS_Octet   position_covariance_type_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* NavSatFix__get_typecode(void); /* Type code */

            DDS_SEQUENCE(NavSatFix_Seq, NavSatFix_);

            NDDSUSERDllExport
            RTIBool NavSatFix__initialize(
                NavSatFix_* self);

            NDDSUSERDllExport
            RTIBool NavSatFix__initialize_ex(
                NavSatFix_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool NavSatFix__initialize_w_params(
                NavSatFix_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void NavSatFix__finalize(
                NavSatFix_* self);

            NDDSUSERDllExport
            void NavSatFix__finalize_ex(
                NavSatFix_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void NavSatFix__finalize_w_params(
                NavSatFix_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void NavSatFix__finalize_optional_members(
                NavSatFix_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool NavSatFix__copy(
                NavSatFix_* dst,
                const NavSatFix_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* NavSatFix_ */

