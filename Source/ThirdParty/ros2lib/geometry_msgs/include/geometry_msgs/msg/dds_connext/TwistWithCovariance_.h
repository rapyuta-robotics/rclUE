

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistWithCovariance_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TwistWithCovariance__1930665526_h
#define TwistWithCovariance__1930665526_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Twist_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *TwistWithCovariance_TYPENAME;

            struct TwistWithCovariance_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TwistWithCovariance_TypeSupport;
            class TwistWithCovariance_DataWriter;
            class TwistWithCovariance_DataReader;
            #endif

            class TwistWithCovariance_ 
            {
              public:
                typedef struct TwistWithCovariance_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TwistWithCovariance_TypeSupport TypeSupport;
                typedef TwistWithCovariance_DataWriter DataWriter;
                typedef TwistWithCovariance_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::Twist_   twist_ ;
                DDS_Double   covariance_ [36];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TwistWithCovariance__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TwistWithCovariance_Seq, TwistWithCovariance_);

            NDDSUSERDllExport
            RTIBool TwistWithCovariance__initialize(
                TwistWithCovariance_* self);

            NDDSUSERDllExport
            RTIBool TwistWithCovariance__initialize_ex(
                TwistWithCovariance_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TwistWithCovariance__initialize_w_params(
                TwistWithCovariance_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TwistWithCovariance__finalize(
                TwistWithCovariance_* self);

            NDDSUSERDllExport
            void TwistWithCovariance__finalize_ex(
                TwistWithCovariance_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TwistWithCovariance__finalize_w_params(
                TwistWithCovariance_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TwistWithCovariance__finalize_optional_members(
                TwistWithCovariance_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TwistWithCovariance__copy(
                TwistWithCovariance_* dst,
                const TwistWithCovariance_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* TwistWithCovariance_ */

