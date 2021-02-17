

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TransformStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TransformStamped__1977774881_h
#define TransformStamped__1977774881_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Transform_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *TransformStamped_TYPENAME;

            struct TransformStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TransformStamped_TypeSupport;
            class TransformStamped_DataWriter;
            class TransformStamped_DataReader;
            #endif

            class TransformStamped_ 
            {
              public:
                typedef struct TransformStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TransformStamped_TypeSupport TypeSupport;
                typedef TransformStamped_DataWriter DataWriter;
                typedef TransformStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Char *   child_frame_id_ ;
                geometry_msgs::msg::dds_::Transform_   transform_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TransformStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TransformStamped_Seq, TransformStamped_);

            NDDSUSERDllExport
            RTIBool TransformStamped__initialize(
                TransformStamped_* self);

            NDDSUSERDllExport
            RTIBool TransformStamped__initialize_ex(
                TransformStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TransformStamped__initialize_w_params(
                TransformStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TransformStamped__finalize(
                TransformStamped_* self);

            NDDSUSERDllExport
            void TransformStamped__finalize_ex(
                TransformStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TransformStamped__finalize_w_params(
                TransformStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TransformStamped__finalize_optional_members(
                TransformStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TransformStamped__copy(
                TransformStamped_* dst,
                const TransformStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* TransformStamped_ */

