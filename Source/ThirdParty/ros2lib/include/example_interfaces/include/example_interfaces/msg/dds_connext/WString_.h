

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WString_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WString__1499261852_h
#define WString__1499261852_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace example_interfaces {
    namespace msg {
        namespace dds_ {

            extern const char *WString_TYPENAME;

            struct WString_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WString_TypeSupport;
            class WString_DataWriter;
            class WString_DataReader;
            #endif

            class WString_ 
            {
              public:
                typedef struct WString_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WString_TypeSupport TypeSupport;
                typedef WString_DataWriter DataWriter;
                typedef WString_DataReader DataReader;
                #endif

                DDS_Wchar *   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WString__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WString_Seq, WString_);

            NDDSUSERDllExport
            RTIBool WString__initialize(
                WString_* self);

            NDDSUSERDllExport
            RTIBool WString__initialize_ex(
                WString_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WString__initialize_w_params(
                WString_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WString__finalize(
                WString_* self);

            NDDSUSERDllExport
            void WString__finalize_ex(
                WString_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WString__finalize_w_params(
                WString_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WString__finalize_optional_members(
                WString_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WString__copy(
                WString_* dst,
                const WString_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* WString_ */

