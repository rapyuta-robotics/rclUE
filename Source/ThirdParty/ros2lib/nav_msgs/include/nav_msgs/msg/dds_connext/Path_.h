

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Path_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Path__1624294880_h
#define Path__1624294880_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/PoseStamped_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace nav_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Path_TYPENAME;

            struct Path_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Path_TypeSupport;
            class Path_DataWriter;
            class Path_DataReader;
            #endif

            class Path_ 
            {
              public:
                typedef struct Path_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Path_TypeSupport TypeSupport;
                typedef Path_DataWriter DataWriter;
                typedef Path_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::PoseStamped_Seq  poses_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Path__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Path_Seq, Path_);

            NDDSUSERDllExport
            RTIBool Path__initialize(
                Path_* self);

            NDDSUSERDllExport
            RTIBool Path__initialize_ex(
                Path_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Path__initialize_w_params(
                Path_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Path__finalize(
                Path_* self);

            NDDSUSERDllExport
            void Path__finalize_ex(
                Path_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Path__finalize_w_params(
                Path_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Path__finalize_optional_members(
                Path_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Path__copy(
                Path_* dst,
                const Path_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace nav_msgs  */

#endif /* Path_ */

