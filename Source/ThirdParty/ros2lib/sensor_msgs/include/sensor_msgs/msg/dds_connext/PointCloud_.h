

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointCloud_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointCloud__22555685_h
#define PointCloud__22555685_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Point32_.h"
#include "sensor_msgs/msg/dds_connext/ChannelFloat32_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *PointCloud_TYPENAME;

            struct PointCloud_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointCloud_TypeSupport;
            class PointCloud_DataWriter;
            class PointCloud_DataReader;
            #endif

            class PointCloud_ 
            {
              public:
                typedef struct PointCloud_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointCloud_TypeSupport TypeSupport;
                typedef PointCloud_DataWriter DataWriter;
                typedef PointCloud_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Point32_Seq  points_ ;
                sensor_msgs::msg::dds_::ChannelFloat32_Seq  channels_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointCloud__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointCloud_Seq, PointCloud_);

            NDDSUSERDllExport
            RTIBool PointCloud__initialize(
                PointCloud_* self);

            NDDSUSERDllExport
            RTIBool PointCloud__initialize_ex(
                PointCloud_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointCloud__initialize_w_params(
                PointCloud_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointCloud__finalize(
                PointCloud_* self);

            NDDSUSERDllExport
            void PointCloud__finalize_ex(
                PointCloud_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointCloud__finalize_w_params(
                PointCloud_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointCloud__finalize_optional_members(
                PointCloud_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointCloud__copy(
                PointCloud_* dst,
                const PointCloud_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* PointCloud_ */

