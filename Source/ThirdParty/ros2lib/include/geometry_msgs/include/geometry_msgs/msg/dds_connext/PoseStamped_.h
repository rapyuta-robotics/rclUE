

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PoseStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PoseStamped__1400168700_h
#define PoseStamped__1400168700_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Pose_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *PoseStamped_TYPENAME;

            struct PoseStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PoseStamped_TypeSupport;
            class PoseStamped_DataWriter;
            class PoseStamped_DataReader;
            #endif

            class PoseStamped_ 
            {
              public:
                typedef struct PoseStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PoseStamped_TypeSupport TypeSupport;
                typedef PoseStamped_DataWriter DataWriter;
                typedef PoseStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Pose_   pose_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PoseStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PoseStamped_Seq, PoseStamped_);

            NDDSUSERDllExport
            RTIBool PoseStamped__initialize(
                PoseStamped_* self);

            NDDSUSERDllExport
            RTIBool PoseStamped__initialize_ex(
                PoseStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PoseStamped__initialize_w_params(
                PoseStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PoseStamped__finalize(
                PoseStamped_* self);

            NDDSUSERDllExport
            void PoseStamped__finalize_ex(
                PoseStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PoseStamped__finalize_w_params(
                PoseStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PoseStamped__finalize_optional_members(
                PoseStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PoseStamped__copy(
                PoseStamped_* dst,
                const PoseStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* PoseStamped_ */

