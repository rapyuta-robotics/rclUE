

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointCloud2_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointCloud2__545610916_h
#define PointCloud2__545610916_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/PointField_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *PointCloud2_TYPENAME;

            struct PointCloud2_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointCloud2_TypeSupport;
            class PointCloud2_DataWriter;
            class PointCloud2_DataReader;
            #endif

            class PointCloud2_ 
            {
              public:
                typedef struct PointCloud2_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointCloud2_TypeSupport TypeSupport;
                typedef PointCloud2_DataWriter DataWriter;
                typedef PointCloud2_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedLong   height_ ;
                DDS_UnsignedLong   width_ ;
                sensor_msgs::msg::dds_::PointField_Seq  fields_ ;
                DDS_Boolean   is_bigendian_ ;
                DDS_UnsignedLong   point_step_ ;
                DDS_UnsignedLong   row_step_ ;
                DDS_OctetSeq  data_ ;
                DDS_Boolean   is_dense_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointCloud2__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointCloud2_Seq, PointCloud2_);

            NDDSUSERDllExport
            RTIBool PointCloud2__initialize(
                PointCloud2_* self);

            NDDSUSERDllExport
            RTIBool PointCloud2__initialize_ex(
                PointCloud2_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointCloud2__initialize_w_params(
                PointCloud2_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointCloud2__finalize(
                PointCloud2_* self);

            NDDSUSERDllExport
            void PointCloud2__finalize_ex(
                PointCloud2_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointCloud2__finalize_w_params(
                PointCloud2_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointCloud2__finalize_optional_members(
                PointCloud2_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointCloud2__copy(
                PointCloud2_* dst,
                const PointCloud2_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* PointCloud2_ */

