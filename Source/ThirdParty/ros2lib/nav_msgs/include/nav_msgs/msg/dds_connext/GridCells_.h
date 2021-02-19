

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GridCells_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GridCells__2013965987_h
#define GridCells__2013965987_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Point_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace nav_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *GridCells_TYPENAME;

            struct GridCells_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GridCells_TypeSupport;
            class GridCells_DataWriter;
            class GridCells_DataReader;
            #endif

            class GridCells_ 
            {
              public:
                typedef struct GridCells_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GridCells_TypeSupport TypeSupport;
                typedef GridCells_DataWriter DataWriter;
                typedef GridCells_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Float   cell_width_ ;
                DDS_Float   cell_height_ ;
                geometry_msgs::msg::dds_::Point_Seq  cells_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GridCells__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GridCells_Seq, GridCells_);

            NDDSUSERDllExport
            RTIBool GridCells__initialize(
                GridCells_* self);

            NDDSUSERDllExport
            RTIBool GridCells__initialize_ex(
                GridCells_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GridCells__initialize_w_params(
                GridCells_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GridCells__finalize(
                GridCells_* self);

            NDDSUSERDllExport
            void GridCells__finalize_ex(
                GridCells_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GridCells__finalize_w_params(
                GridCells_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GridCells__finalize_optional_members(
                GridCells_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GridCells__copy(
                GridCells_* dst,
                const GridCells_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace nav_msgs  */

#endif /* GridCells_ */

