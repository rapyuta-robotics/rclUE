

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MapMetaData_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MapMetaData__441916404_h
#define MapMetaData__441916404_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
#include "geometry_msgs/msg/dds_connext/Pose_.h"
namespace nav_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *MapMetaData_TYPENAME;

            struct MapMetaData_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MapMetaData_TypeSupport;
            class MapMetaData_DataWriter;
            class MapMetaData_DataReader;
            #endif

            class MapMetaData_ 
            {
              public:
                typedef struct MapMetaData_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MapMetaData_TypeSupport TypeSupport;
                typedef MapMetaData_DataWriter DataWriter;
                typedef MapMetaData_DataReader DataReader;
                #endif

                builtin_interfaces::msg::dds_::Time_   map_load_time_ ;
                DDS_Float   resolution_ ;
                DDS_UnsignedLong   width_ ;
                DDS_UnsignedLong   height_ ;
                geometry_msgs::msg::dds_::Pose_   origin_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MapMetaData__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MapMetaData_Seq, MapMetaData_);

            NDDSUSERDllExport
            RTIBool MapMetaData__initialize(
                MapMetaData_* self);

            NDDSUSERDllExport
            RTIBool MapMetaData__initialize_ex(
                MapMetaData_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MapMetaData__initialize_w_params(
                MapMetaData_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MapMetaData__finalize(
                MapMetaData_* self);

            NDDSUSERDllExport
            void MapMetaData__finalize_ex(
                MapMetaData_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MapMetaData__finalize_w_params(
                MapMetaData_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MapMetaData__finalize_optional_members(
                MapMetaData_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MapMetaData__copy(
                MapMetaData_* dst,
                const MapMetaData_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace nav_msgs  */

#endif /* MapMetaData_ */

