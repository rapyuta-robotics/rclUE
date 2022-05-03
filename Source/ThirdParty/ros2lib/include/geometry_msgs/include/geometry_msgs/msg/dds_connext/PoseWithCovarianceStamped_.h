

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PoseWithCovarianceStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PoseWithCovarianceStamped__1134638761_h
#define PoseWithCovarianceStamped__1134638761_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/PoseWithCovariance_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *PoseWithCovarianceStamped_TYPENAME;

            struct PoseWithCovarianceStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PoseWithCovarianceStamped_TypeSupport;
            class PoseWithCovarianceStamped_DataWriter;
            class PoseWithCovarianceStamped_DataReader;
            #endif

            class PoseWithCovarianceStamped_ 
            {
              public:
                typedef struct PoseWithCovarianceStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PoseWithCovarianceStamped_TypeSupport TypeSupport;
                typedef PoseWithCovarianceStamped_DataWriter DataWriter;
                typedef PoseWithCovarianceStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::PoseWithCovariance_   pose_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PoseWithCovarianceStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PoseWithCovarianceStamped_Seq, PoseWithCovarianceStamped_);

            NDDSUSERDllExport
            RTIBool PoseWithCovarianceStamped__initialize(
                PoseWithCovarianceStamped_* self);

            NDDSUSERDllExport
            RTIBool PoseWithCovarianceStamped__initialize_ex(
                PoseWithCovarianceStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PoseWithCovarianceStamped__initialize_w_params(
                PoseWithCovarianceStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PoseWithCovarianceStamped__finalize(
                PoseWithCovarianceStamped_* self);

            NDDSUSERDllExport
            void PoseWithCovarianceStamped__finalize_ex(
                PoseWithCovarianceStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PoseWithCovarianceStamped__finalize_w_params(
                PoseWithCovarianceStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PoseWithCovarianceStamped__finalize_optional_members(
                PoseWithCovarianceStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PoseWithCovarianceStamped__copy(
                PoseWithCovarianceStamped_* dst,
                const PoseWithCovarianceStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* PoseWithCovarianceStamped_ */

