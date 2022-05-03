

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ColorRGBA_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ColorRGBA__2086553042_h
#define ColorRGBA__2086553042_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace std_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ColorRGBA_TYPENAME;

            struct ColorRGBA_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ColorRGBA_TypeSupport;
            class ColorRGBA_DataWriter;
            class ColorRGBA_DataReader;
            #endif

            class ColorRGBA_ 
            {
              public:
                typedef struct ColorRGBA_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ColorRGBA_TypeSupport TypeSupport;
                typedef ColorRGBA_DataWriter DataWriter;
                typedef ColorRGBA_DataReader DataReader;
                #endif

                DDS_Float   r_ ;
                DDS_Float   g_ ;
                DDS_Float   b_ ;
                DDS_Float   a_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ColorRGBA__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ColorRGBA_Seq, ColorRGBA_);

            NDDSUSERDllExport
            RTIBool ColorRGBA__initialize(
                ColorRGBA_* self);

            NDDSUSERDllExport
            RTIBool ColorRGBA__initialize_ex(
                ColorRGBA_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ColorRGBA__initialize_w_params(
                ColorRGBA_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ColorRGBA__finalize(
                ColorRGBA_* self);

            NDDSUSERDllExport
            void ColorRGBA__finalize_ex(
                ColorRGBA_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ColorRGBA__finalize_w_params(
                ColorRGBA_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ColorRGBA__finalize_optional_members(
                ColorRGBA_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ColorRGBA__copy(
                ColorRGBA_* dst,
                const ColorRGBA_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* ColorRGBA_ */

