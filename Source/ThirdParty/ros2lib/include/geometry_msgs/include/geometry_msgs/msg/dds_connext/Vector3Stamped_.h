

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Vector3Stamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Vector3Stamped__1005245716_h
#define Vector3Stamped__1005245716_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Vector3Stamped_TYPENAME;

            struct Vector3Stamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Vector3Stamped_TypeSupport;
            class Vector3Stamped_DataWriter;
            class Vector3Stamped_DataReader;
            #endif

            class Vector3Stamped_ 
            {
              public:
                typedef struct Vector3Stamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Vector3Stamped_TypeSupport TypeSupport;
                typedef Vector3Stamped_DataWriter DataWriter;
                typedef Vector3Stamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Vector3_   vector_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Vector3Stamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Vector3Stamped_Seq, Vector3Stamped_);

            NDDSUSERDllExport
            RTIBool Vector3Stamped__initialize(
                Vector3Stamped_* self);

            NDDSUSERDllExport
            RTIBool Vector3Stamped__initialize_ex(
                Vector3Stamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Vector3Stamped__initialize_w_params(
                Vector3Stamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Vector3Stamped__finalize(
                Vector3Stamped_* self);

            NDDSUSERDllExport
            void Vector3Stamped__finalize_ex(
                Vector3Stamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Vector3Stamped__finalize_w_params(
                Vector3Stamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Vector3Stamped__finalize_optional_members(
                Vector3Stamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Vector3Stamped__copy(
                Vector3Stamped_* dst,
                const Vector3Stamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* Vector3Stamped_ */

