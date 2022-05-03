

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from String_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef String__155444478_h
#define String__155444478_h

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

            extern const char *String_TYPENAME;

            struct String_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class String_TypeSupport;
            class String_DataWriter;
            class String_DataReader;
            #endif

            class String_ 
            {
              public:
                typedef struct String_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef String_TypeSupport TypeSupport;
                typedef String_DataWriter DataWriter;
                typedef String_DataReader DataReader;
                #endif

                DDS_Char *   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* String__get_typecode(void); /* Type code */

            DDS_SEQUENCE(String_Seq, String_);

            NDDSUSERDllExport
            RTIBool String__initialize(
                String_* self);

            NDDSUSERDllExport
            RTIBool String__initialize_ex(
                String_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool String__initialize_w_params(
                String_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void String__finalize(
                String_* self);

            NDDSUSERDllExport
            void String__finalize_ex(
                String_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void String__finalize_w_params(
                String_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void String__finalize_optional_members(
                String_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool String__copy(
                String_* dst,
                const String_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* String_ */

