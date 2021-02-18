

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from FluidPressure_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef FluidPressure__1158173288_h
#define FluidPressure__1158173288_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *FluidPressure_TYPENAME;

            struct FluidPressure_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class FluidPressure_TypeSupport;
            class FluidPressure_DataWriter;
            class FluidPressure_DataReader;
            #endif

            class FluidPressure_ 
            {
              public:
                typedef struct FluidPressure_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef FluidPressure_TypeSupport TypeSupport;
                typedef FluidPressure_DataWriter DataWriter;
                typedef FluidPressure_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Double   fluid_pressure_ ;
                DDS_Double   variance_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* FluidPressure__get_typecode(void); /* Type code */

            DDS_SEQUENCE(FluidPressure_Seq, FluidPressure_);

            NDDSUSERDllExport
            RTIBool FluidPressure__initialize(
                FluidPressure_* self);

            NDDSUSERDllExport
            RTIBool FluidPressure__initialize_ex(
                FluidPressure_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool FluidPressure__initialize_w_params(
                FluidPressure_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void FluidPressure__finalize(
                FluidPressure_* self);

            NDDSUSERDllExport
            void FluidPressure__finalize_ex(
                FluidPressure_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void FluidPressure__finalize_w_params(
                FluidPressure_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void FluidPressure__finalize_optional_members(
                FluidPressure_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool FluidPressure__copy(
                FluidPressure_* dst,
                const FluidPressure_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* FluidPressure_ */

