

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiEchoLaserScan_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MultiEchoLaserScan__1494169418_h
#define MultiEchoLaserScan__1494169418_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/LaserEcho_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *MultiEchoLaserScan_TYPENAME;

            struct MultiEchoLaserScan_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MultiEchoLaserScan_TypeSupport;
            class MultiEchoLaserScan_DataWriter;
            class MultiEchoLaserScan_DataReader;
            #endif

            class MultiEchoLaserScan_ 
            {
              public:
                typedef struct MultiEchoLaserScan_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MultiEchoLaserScan_TypeSupport TypeSupport;
                typedef MultiEchoLaserScan_DataWriter DataWriter;
                typedef MultiEchoLaserScan_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Float   angle_min_ ;
                DDS_Float   angle_max_ ;
                DDS_Float   angle_increment_ ;
                DDS_Float   time_increment_ ;
                DDS_Float   scan_time_ ;
                DDS_Float   range_min_ ;
                DDS_Float   range_max_ ;
                sensor_msgs::msg::dds_::LaserEcho_Seq  ranges_ ;
                sensor_msgs::msg::dds_::LaserEcho_Seq  intensities_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MultiEchoLaserScan__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MultiEchoLaserScan_Seq, MultiEchoLaserScan_);

            NDDSUSERDllExport
            RTIBool MultiEchoLaserScan__initialize(
                MultiEchoLaserScan_* self);

            NDDSUSERDllExport
            RTIBool MultiEchoLaserScan__initialize_ex(
                MultiEchoLaserScan_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MultiEchoLaserScan__initialize_w_params(
                MultiEchoLaserScan_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MultiEchoLaserScan__finalize(
                MultiEchoLaserScan_* self);

            NDDSUSERDllExport
            void MultiEchoLaserScan__finalize_ex(
                MultiEchoLaserScan_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MultiEchoLaserScan__finalize_w_params(
                MultiEchoLaserScan_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MultiEchoLaserScan__finalize_optional_members(
                MultiEchoLaserScan_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MultiEchoLaserScan__copy(
                MultiEchoLaserScan_* dst,
                const MultiEchoLaserScan_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* MultiEchoLaserScan_ */

