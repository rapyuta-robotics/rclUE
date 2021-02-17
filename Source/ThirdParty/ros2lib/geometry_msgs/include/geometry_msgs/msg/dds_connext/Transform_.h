

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Transform_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Transform__1617944439_h
#define Transform__1617944439_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Quaternion_.h"
#include "geometry_msgs/msg/dds_connext/Vector3_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Transform_TYPENAME;

            struct Transform_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Transform_TypeSupport;
            class Transform_DataWriter;
            class Transform_DataReader;
            #endif

            class Transform_ 
            {
              public:
                typedef struct Transform_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Transform_TypeSupport TypeSupport;
                typedef Transform_DataWriter DataWriter;
                typedef Transform_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::Vector3_   translation_ ;
                geometry_msgs::msg::dds_::Quaternion_   rotation_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Transform__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Transform_Seq, Transform_);

            NDDSUSERDllExport
            RTIBool Transform__initialize(
                Transform_* self);

            NDDSUSERDllExport
            RTIBool Transform__initialize_ex(
                Transform_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Transform__initialize_w_params(
                Transform_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Transform__finalize(
                Transform_* self);

            NDDSUSERDllExport
            void Transform__finalize_ex(
                Transform_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Transform__finalize_w_params(
                Transform_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Transform__finalize_optional_members(
                Transform_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Transform__copy(
                Transform_* dst,
                const Transform_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* Transform_ */

