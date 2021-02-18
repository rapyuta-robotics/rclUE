

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from RegionOfInterest_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef RegionOfInterest__636530638_h
#define RegionOfInterest__636530638_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *RegionOfInterest_TYPENAME;

            struct RegionOfInterest_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class RegionOfInterest_TypeSupport;
            class RegionOfInterest_DataWriter;
            class RegionOfInterest_DataReader;
            #endif

            class RegionOfInterest_ 
            {
              public:
                typedef struct RegionOfInterest_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef RegionOfInterest_TypeSupport TypeSupport;
                typedef RegionOfInterest_DataWriter DataWriter;
                typedef RegionOfInterest_DataReader DataReader;
                #endif

                DDS_UnsignedLong   x_offset_ ;
                DDS_UnsignedLong   y_offset_ ;
                DDS_UnsignedLong   height_ ;
                DDS_UnsignedLong   width_ ;
                DDS_Boolean   do_rectify_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* RegionOfInterest__get_typecode(void); /* Type code */

            DDS_SEQUENCE(RegionOfInterest_Seq, RegionOfInterest_);

            NDDSUSERDllExport
            RTIBool RegionOfInterest__initialize(
                RegionOfInterest_* self);

            NDDSUSERDllExport
            RTIBool RegionOfInterest__initialize_ex(
                RegionOfInterest_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool RegionOfInterest__initialize_w_params(
                RegionOfInterest_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void RegionOfInterest__finalize(
                RegionOfInterest_* self);

            NDDSUSERDllExport
            void RegionOfInterest__finalize_ex(
                RegionOfInterest_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void RegionOfInterest__finalize_w_params(
                RegionOfInterest_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void RegionOfInterest__finalize_optional_members(
                RegionOfInterest_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool RegionOfInterest__copy(
                RegionOfInterest_* dst,
                const RegionOfInterest_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* RegionOfInterest_ */

