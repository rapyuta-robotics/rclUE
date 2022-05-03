

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaserScan_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaserScan__1942002873_h
#define LaserScan__1942002873_h

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

            extern const char *LaserScan_TYPENAME;

            struct LaserScan_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LaserScan_TypeSupport;
            class LaserScan_DataWriter;
            class LaserScan_DataReader;
            #endif

            class LaserScan_ 
            {
              public:
                typedef struct LaserScan_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LaserScan_TypeSupport TypeSupport;
                typedef LaserScan_DataWriter DataWriter;
                typedef LaserScan_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Float   angle_min_ ;
                DDS_Float   angle_max_ ;
                DDS_Float   angle_increment_ ;
                DDS_Float   time_increment_ ;
                DDS_Float   scan_time_ ;
                DDS_Float   range_min_ ;
                DDS_Float   range_max_ ;
                DDS_FloatSeq  ranges_ ;
                DDS_FloatSeq  intensities_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LaserScan__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LaserScan_Seq, LaserScan_);

            NDDSUSERDllExport
            RTIBool LaserScan__initialize(
                LaserScan_* self);

            NDDSUSERDllExport
            RTIBool LaserScan__initialize_ex(
                LaserScan_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LaserScan__initialize_w_params(
                LaserScan_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LaserScan__finalize(
                LaserScan_* self);

            NDDSUSERDllExport
            void LaserScan__finalize_ex(
                LaserScan_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LaserScan__finalize_w_params(
                LaserScan_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LaserScan__finalize_optional_members(
                LaserScan_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LaserScan__copy(
                LaserScan_* dst,
                const LaserScan_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* LaserScan_ */

