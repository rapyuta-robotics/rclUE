

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointStamped__1484893893_h
#define PointStamped__1484893893_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Point_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *PointStamped_TYPENAME;

            struct PointStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointStamped_TypeSupport;
            class PointStamped_DataWriter;
            class PointStamped_DataReader;
            #endif

            class PointStamped_ 
            {
              public:
                typedef struct PointStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointStamped_TypeSupport TypeSupport;
                typedef PointStamped_DataWriter DataWriter;
                typedef PointStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Point_   point_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointStamped_Seq, PointStamped_);

            NDDSUSERDllExport
            RTIBool PointStamped__initialize(
                PointStamped_* self);

            NDDSUSERDllExport
            RTIBool PointStamped__initialize_ex(
                PointStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointStamped__initialize_w_params(
                PointStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointStamped__finalize(
                PointStamped_* self);

            NDDSUSERDllExport
            void PointStamped__finalize_ex(
                PointStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointStamped__finalize_w_params(
                PointStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointStamped__finalize_optional_members(
                PointStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointStamped__copy(
                PointStamped_* dst,
                const PointStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* PointStamped_ */

