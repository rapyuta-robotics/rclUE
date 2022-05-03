

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Polygon_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Polygon__1770755691_h
#define Polygon__1770755691_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Point32_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Polygon_TYPENAME;

            struct Polygon_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Polygon_TypeSupport;
            class Polygon_DataWriter;
            class Polygon_DataReader;
            #endif

            class Polygon_ 
            {
              public:
                typedef struct Polygon_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Polygon_TypeSupport TypeSupport;
                typedef Polygon_DataWriter DataWriter;
                typedef Polygon_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::Point32_Seq  points_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Polygon__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Polygon_Seq, Polygon_);

            NDDSUSERDllExport
            RTIBool Polygon__initialize(
                Polygon_* self);

            NDDSUSERDllExport
            RTIBool Polygon__initialize_ex(
                Polygon_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Polygon__initialize_w_params(
                Polygon_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Polygon__finalize(
                Polygon_* self);

            NDDSUSERDllExport
            void Polygon__finalize_ex(
                Polygon_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Polygon__finalize_w_params(
                Polygon_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Polygon__finalize_optional_members(
                Polygon_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Polygon__copy(
                Polygon_* dst,
                const Polygon_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* Polygon_ */

