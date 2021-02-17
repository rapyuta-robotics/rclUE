

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PoseArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PoseArray__1637079049_h
#define PoseArray__1637079049_h

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

            extern const char *PoseArray_TYPENAME;

            struct PoseArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PoseArray_TypeSupport;
            class PoseArray_DataWriter;
            class PoseArray_DataReader;
            #endif

            class PoseArray_ 
            {
              public:
                typedef struct PoseArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PoseArray_TypeSupport TypeSupport;
                typedef PoseArray_DataWriter DataWriter;
                typedef PoseArray_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Pose_Seq  poses_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PoseArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PoseArray_Seq, PoseArray_);

            NDDSUSERDllExport
            RTIBool PoseArray__initialize(
                PoseArray_* self);

            NDDSUSERDllExport
            RTIBool PoseArray__initialize_ex(
                PoseArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PoseArray__initialize_w_params(
                PoseArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PoseArray__finalize(
                PoseArray_* self);

            NDDSUSERDllExport
            void PoseArray__finalize_ex(
                PoseArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PoseArray__finalize_w_params(
                PoseArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PoseArray__finalize_optional_members(
                PoseArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PoseArray__copy(
                PoseArray_* dst,
                const PoseArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* PoseArray_ */

