

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AccelWithCovarianceStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef AccelWithCovarianceStamped__362226696_h
#define AccelWithCovarianceStamped__362226696_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/AccelWithCovariance_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *AccelWithCovarianceStamped_TYPENAME;

            struct AccelWithCovarianceStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class AccelWithCovarianceStamped_TypeSupport;
            class AccelWithCovarianceStamped_DataWriter;
            class AccelWithCovarianceStamped_DataReader;
            #endif

            class AccelWithCovarianceStamped_ 
            {
              public:
                typedef struct AccelWithCovarianceStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AccelWithCovarianceStamped_TypeSupport TypeSupport;
                typedef AccelWithCovarianceStamped_DataWriter DataWriter;
                typedef AccelWithCovarianceStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::AccelWithCovariance_   accel_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* AccelWithCovarianceStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(AccelWithCovarianceStamped_Seq, AccelWithCovarianceStamped_);

            NDDSUSERDllExport
            RTIBool AccelWithCovarianceStamped__initialize(
                AccelWithCovarianceStamped_* self);

            NDDSUSERDllExport
            RTIBool AccelWithCovarianceStamped__initialize_ex(
                AccelWithCovarianceStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AccelWithCovarianceStamped__initialize_w_params(
                AccelWithCovarianceStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void AccelWithCovarianceStamped__finalize(
                AccelWithCovarianceStamped_* self);

            NDDSUSERDllExport
            void AccelWithCovarianceStamped__finalize_ex(
                AccelWithCovarianceStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AccelWithCovarianceStamped__finalize_w_params(
                AccelWithCovarianceStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AccelWithCovarianceStamped__finalize_optional_members(
                AccelWithCovarianceStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AccelWithCovarianceStamped__copy(
                AccelWithCovarianceStamped_* dst,
                const AccelWithCovarianceStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* AccelWithCovarianceStamped_ */

