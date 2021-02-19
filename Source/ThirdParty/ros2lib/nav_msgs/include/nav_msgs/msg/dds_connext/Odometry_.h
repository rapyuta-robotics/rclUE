

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Odometry_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Odometry__563898627_h
#define Odometry__563898627_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/PoseWithCovariance_.h"
#include "geometry_msgs/msg/dds_connext/TwistWithCovariance_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace nav_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Odometry_TYPENAME;

            struct Odometry_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Odometry_TypeSupport;
            class Odometry_DataWriter;
            class Odometry_DataReader;
            #endif

            class Odometry_ 
            {
              public:
                typedef struct Odometry_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Odometry_TypeSupport TypeSupport;
                typedef Odometry_DataWriter DataWriter;
                typedef Odometry_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Char *   child_frame_id_ ;
                geometry_msgs::msg::dds_::PoseWithCovariance_   pose_ ;
                geometry_msgs::msg::dds_::TwistWithCovariance_   twist_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Odometry__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Odometry_Seq, Odometry_);

            NDDSUSERDllExport
            RTIBool Odometry__initialize(
                Odometry_* self);

            NDDSUSERDllExport
            RTIBool Odometry__initialize_ex(
                Odometry_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Odometry__initialize_w_params(
                Odometry_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Odometry__finalize(
                Odometry_* self);

            NDDSUSERDllExport
            void Odometry__finalize_ex(
                Odometry_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Odometry__finalize_w_params(
                Odometry_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Odometry__finalize_optional_members(
                Odometry_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Odometry__copy(
                Odometry_* dst,
                const Odometry_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace nav_msgs  */

#endif /* Odometry_ */

