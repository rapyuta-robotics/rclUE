

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PolygonStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PolygonStamped__1633267487_h
#define PolygonStamped__1633267487_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Polygon_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *PolygonStamped_TYPENAME;

            struct PolygonStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PolygonStamped_TypeSupport;
            class PolygonStamped_DataWriter;
            class PolygonStamped_DataReader;
            #endif

            class PolygonStamped_ 
            {
              public:
                typedef struct PolygonStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PolygonStamped_TypeSupport TypeSupport;
                typedef PolygonStamped_DataWriter DataWriter;
                typedef PolygonStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Polygon_   polygon_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PolygonStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PolygonStamped_Seq, PolygonStamped_);

            NDDSUSERDllExport
            RTIBool PolygonStamped__initialize(
                PolygonStamped_* self);

            NDDSUSERDllExport
            RTIBool PolygonStamped__initialize_ex(
                PolygonStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PolygonStamped__initialize_w_params(
                PolygonStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PolygonStamped__finalize(
                PolygonStamped_* self);

            NDDSUSERDllExport
            void PolygonStamped__finalize_ex(
                PolygonStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PolygonStamped__finalize_w_params(
                PolygonStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PolygonStamped__finalize_optional_members(
                PolygonStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PolygonStamped__copy(
                PolygonStamped_* dst,
                const PolygonStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* PolygonStamped_ */

