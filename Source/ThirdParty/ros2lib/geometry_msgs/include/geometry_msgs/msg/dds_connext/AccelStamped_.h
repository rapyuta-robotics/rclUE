

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AccelStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef AccelStamped__626319213_h
#define AccelStamped__626319213_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Accel_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *AccelStamped_TYPENAME;

            struct AccelStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class AccelStamped_TypeSupport;
            class AccelStamped_DataWriter;
            class AccelStamped_DataReader;
            #endif

            class AccelStamped_ 
            {
              public:
                typedef struct AccelStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AccelStamped_TypeSupport TypeSupport;
                typedef AccelStamped_DataWriter DataWriter;
                typedef AccelStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Accel_   accel_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* AccelStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(AccelStamped_Seq, AccelStamped_);

            NDDSUSERDllExport
            RTIBool AccelStamped__initialize(
                AccelStamped_* self);

            NDDSUSERDllExport
            RTIBool AccelStamped__initialize_ex(
                AccelStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AccelStamped__initialize_w_params(
                AccelStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void AccelStamped__finalize(
                AccelStamped_* self);

            NDDSUSERDllExport
            void AccelStamped__finalize_ex(
                AccelStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AccelStamped__finalize_w_params(
                AccelStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AccelStamped__finalize_optional_members(
                AccelStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AccelStamped__copy(
                AccelStamped_* dst,
                const AccelStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* AccelStamped_ */

