

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AccelWithCovariance_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef AccelWithCovariance__561543719_h
#define AccelWithCovariance__561543719_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Accel_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *AccelWithCovariance_TYPENAME;

            struct AccelWithCovariance_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class AccelWithCovariance_TypeSupport;
            class AccelWithCovariance_DataWriter;
            class AccelWithCovariance_DataReader;
            #endif

            class AccelWithCovariance_ 
            {
              public:
                typedef struct AccelWithCovariance_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AccelWithCovariance_TypeSupport TypeSupport;
                typedef AccelWithCovariance_DataWriter DataWriter;
                typedef AccelWithCovariance_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::Accel_   accel_ ;
                DDS_Double   covariance_ [36];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* AccelWithCovariance__get_typecode(void); /* Type code */

            DDS_SEQUENCE(AccelWithCovariance_Seq, AccelWithCovariance_);

            NDDSUSERDllExport
            RTIBool AccelWithCovariance__initialize(
                AccelWithCovariance_* self);

            NDDSUSERDllExport
            RTIBool AccelWithCovariance__initialize_ex(
                AccelWithCovariance_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AccelWithCovariance__initialize_w_params(
                AccelWithCovariance_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void AccelWithCovariance__finalize(
                AccelWithCovariance_* self);

            NDDSUSERDllExport
            void AccelWithCovariance__finalize_ex(
                AccelWithCovariance_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AccelWithCovariance__finalize_w_params(
                AccelWithCovariance_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AccelWithCovariance__finalize_optional_members(
                AccelWithCovariance_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AccelWithCovariance__copy(
                AccelWithCovariance_* dst,
                const AccelWithCovariance_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* AccelWithCovariance_ */

