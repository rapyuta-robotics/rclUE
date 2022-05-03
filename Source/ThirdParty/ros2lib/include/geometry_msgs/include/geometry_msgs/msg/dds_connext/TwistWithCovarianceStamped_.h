

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistWithCovarianceStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TwistWithCovarianceStamped__1640911987_h
#define TwistWithCovarianceStamped__1640911987_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/TwistWithCovariance_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *TwistWithCovarianceStamped_TYPENAME;

            struct TwistWithCovarianceStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TwistWithCovarianceStamped_TypeSupport;
            class TwistWithCovarianceStamped_DataWriter;
            class TwistWithCovarianceStamped_DataReader;
            #endif

            class TwistWithCovarianceStamped_ 
            {
              public:
                typedef struct TwistWithCovarianceStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TwistWithCovarianceStamped_TypeSupport TypeSupport;
                typedef TwistWithCovarianceStamped_DataWriter DataWriter;
                typedef TwistWithCovarianceStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::TwistWithCovariance_   twist_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TwistWithCovarianceStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TwistWithCovarianceStamped_Seq, TwistWithCovarianceStamped_);

            NDDSUSERDllExport
            RTIBool TwistWithCovarianceStamped__initialize(
                TwistWithCovarianceStamped_* self);

            NDDSUSERDllExport
            RTIBool TwistWithCovarianceStamped__initialize_ex(
                TwistWithCovarianceStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TwistWithCovarianceStamped__initialize_w_params(
                TwistWithCovarianceStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TwistWithCovarianceStamped__finalize(
                TwistWithCovarianceStamped_* self);

            NDDSUSERDllExport
            void TwistWithCovarianceStamped__finalize_ex(
                TwistWithCovarianceStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TwistWithCovarianceStamped__finalize_w_params(
                TwistWithCovarianceStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TwistWithCovarianceStamped__finalize_optional_members(
                TwistWithCovarianceStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TwistWithCovarianceStamped__copy(
                TwistWithCovarianceStamped_* dst,
                const TwistWithCovarianceStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* TwistWithCovarianceStamped_ */

