

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from OccupancyGrid_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef OccupancyGrid__1966423556_h
#define OccupancyGrid__1966423556_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "nav_msgs/msg/dds_connext/MapMetaData_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace nav_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *OccupancyGrid_TYPENAME;

            struct OccupancyGrid_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class OccupancyGrid_TypeSupport;
            class OccupancyGrid_DataWriter;
            class OccupancyGrid_DataReader;
            #endif

            class OccupancyGrid_ 
            {
              public:
                typedef struct OccupancyGrid_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef OccupancyGrid_TypeSupport TypeSupport;
                typedef OccupancyGrid_DataWriter DataWriter;
                typedef OccupancyGrid_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                nav_msgs::msg::dds_::MapMetaData_   info_ ;
                DDS_OctetSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* OccupancyGrid__get_typecode(void); /* Type code */

            DDS_SEQUENCE(OccupancyGrid_Seq, OccupancyGrid_);

            NDDSUSERDllExport
            RTIBool OccupancyGrid__initialize(
                OccupancyGrid_* self);

            NDDSUSERDllExport
            RTIBool OccupancyGrid__initialize_ex(
                OccupancyGrid_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool OccupancyGrid__initialize_w_params(
                OccupancyGrid_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void OccupancyGrid__finalize(
                OccupancyGrid_* self);

            NDDSUSERDllExport
            void OccupancyGrid__finalize_ex(
                OccupancyGrid_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void OccupancyGrid__finalize_w_params(
                OccupancyGrid_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void OccupancyGrid__finalize_optional_members(
                OccupancyGrid_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool OccupancyGrid__copy(
                OccupancyGrid_* dst,
                const OccupancyGrid_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace nav_msgs  */

#endif /* OccupancyGrid_ */

