

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CameraInfo_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CameraInfo__1321034301_h
#define CameraInfo__1321034301_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/RegionOfInterest_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *CameraInfo_TYPENAME;

            struct CameraInfo_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CameraInfo_TypeSupport;
            class CameraInfo_DataWriter;
            class CameraInfo_DataReader;
            #endif

            class CameraInfo_ 
            {
              public:
                typedef struct CameraInfo_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CameraInfo_TypeSupport TypeSupport;
                typedef CameraInfo_DataWriter DataWriter;
                typedef CameraInfo_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedLong   height_ ;
                DDS_UnsignedLong   width_ ;
                DDS_Char *   distortion_model_ ;
                DDS_DoubleSeq  d_ ;
                DDS_Double   k_ [9];
                DDS_Double   r_ [9];
                DDS_Double   p_ [12];
                DDS_UnsignedLong   binning_x_ ;
                DDS_UnsignedLong   binning_y_ ;
                sensor_msgs::msg::dds_::RegionOfInterest_   roi_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CameraInfo__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CameraInfo_Seq, CameraInfo_);

            NDDSUSERDllExport
            RTIBool CameraInfo__initialize(
                CameraInfo_* self);

            NDDSUSERDllExport
            RTIBool CameraInfo__initialize_ex(
                CameraInfo_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CameraInfo__initialize_w_params(
                CameraInfo_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CameraInfo__finalize(
                CameraInfo_* self);

            NDDSUSERDllExport
            void CameraInfo__finalize_ex(
                CameraInfo_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CameraInfo__finalize_w_params(
                CameraInfo_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CameraInfo__finalize_optional_members(
                CameraInfo_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CameraInfo__copy(
                CameraInfo_* dst,
                const CameraInfo_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* CameraInfo_ */

