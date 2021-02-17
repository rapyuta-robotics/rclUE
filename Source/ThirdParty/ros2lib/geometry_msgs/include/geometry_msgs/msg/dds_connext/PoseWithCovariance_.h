

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PoseWithCovariance_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PoseWithCovariance__162083908_h
#define PoseWithCovariance__162083908_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Pose_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *PoseWithCovariance_TYPENAME;

            struct PoseWithCovariance_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PoseWithCovariance_TypeSupport;
            class PoseWithCovariance_DataWriter;
            class PoseWithCovariance_DataReader;
            #endif

            class PoseWithCovariance_ 
            {
              public:
                typedef struct PoseWithCovariance_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PoseWithCovariance_TypeSupport TypeSupport;
                typedef PoseWithCovariance_DataWriter DataWriter;
                typedef PoseWithCovariance_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::Pose_   pose_ ;
                DDS_Double   covariance_ [36];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PoseWithCovariance__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PoseWithCovariance_Seq, PoseWithCovariance_);

            NDDSUSERDllExport
            RTIBool PoseWithCovariance__initialize(
                PoseWithCovariance_* self);

            NDDSUSERDllExport
            RTIBool PoseWithCovariance__initialize_ex(
                PoseWithCovariance_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PoseWithCovariance__initialize_w_params(
                PoseWithCovariance_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PoseWithCovariance__finalize(
                PoseWithCovariance_* self);

            NDDSUSERDllExport
            void PoseWithCovariance__finalize_ex(
                PoseWithCovariance_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PoseWithCovariance__finalize_w_params(
                PoseWithCovariance_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PoseWithCovariance__finalize_optional_members(
                PoseWithCovariance_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PoseWithCovariance__copy(
                PoseWithCovariance_* dst,
                const PoseWithCovariance_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* PoseWithCovariance_ */

