

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InertiaStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef InertiaStamped__976793771_h
#define InertiaStamped__976793771_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Inertia_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *InertiaStamped_TYPENAME;

            struct InertiaStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class InertiaStamped_TypeSupport;
            class InertiaStamped_DataWriter;
            class InertiaStamped_DataReader;
            #endif

            class InertiaStamped_ 
            {
              public:
                typedef struct InertiaStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef InertiaStamped_TypeSupport TypeSupport;
                typedef InertiaStamped_DataWriter DataWriter;
                typedef InertiaStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Inertia_   inertia_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* InertiaStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(InertiaStamped_Seq, InertiaStamped_);

            NDDSUSERDllExport
            RTIBool InertiaStamped__initialize(
                InertiaStamped_* self);

            NDDSUSERDllExport
            RTIBool InertiaStamped__initialize_ex(
                InertiaStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool InertiaStamped__initialize_w_params(
                InertiaStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void InertiaStamped__finalize(
                InertiaStamped_* self);

            NDDSUSERDllExport
            void InertiaStamped__finalize_ex(
                InertiaStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void InertiaStamped__finalize_w_params(
                InertiaStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void InertiaStamped__finalize_optional_members(
                InertiaStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool InertiaStamped__copy(
                InertiaStamped_* dst,
                const InertiaStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* InertiaStamped_ */

