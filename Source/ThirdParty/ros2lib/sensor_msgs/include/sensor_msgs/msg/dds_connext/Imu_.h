

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Imu_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Imu__231392246_h
#define Imu__231392246_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Quaternion_.h"
#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Imu_TYPENAME;

            struct Imu_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Imu_TypeSupport;
            class Imu_DataWriter;
            class Imu_DataReader;
            #endif

            class Imu_ 
            {
              public:
                typedef struct Imu_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Imu_TypeSupport TypeSupport;
                typedef Imu_DataWriter DataWriter;
                typedef Imu_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Quaternion_   orientation_ ;
                DDS_Double   orientation_covariance_ [9];
                geometry_msgs::msg::dds_::Vector3_   angular_velocity_ ;
                DDS_Double   angular_velocity_covariance_ [9];
                geometry_msgs::msg::dds_::Vector3_   linear_acceleration_ ;
                DDS_Double   linear_acceleration_covariance_ [9];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Imu__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Imu_Seq, Imu_);

            NDDSUSERDllExport
            RTIBool Imu__initialize(
                Imu_* self);

            NDDSUSERDllExport
            RTIBool Imu__initialize_ex(
                Imu_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Imu__initialize_w_params(
                Imu_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Imu__finalize(
                Imu_* self);

            NDDSUSERDllExport
            void Imu__finalize_ex(
                Imu_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Imu__finalize_w_params(
                Imu_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Imu__finalize_optional_members(
                Imu_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Imu__copy(
                Imu_* dst,
                const Imu_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* Imu_ */

