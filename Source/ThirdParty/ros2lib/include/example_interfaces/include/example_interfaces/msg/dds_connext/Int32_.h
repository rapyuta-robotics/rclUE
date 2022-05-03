

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int32_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Int32__1424138458_h
#define Int32__1424138458_h

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

            extern const char *Int32_TYPENAME;

            struct Int32_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Int32_TypeSupport;
            class Int32_DataWriter;
            class Int32_DataReader;
            #endif

            class Int32_ 
            {
              public:
                typedef struct Int32_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Int32_TypeSupport TypeSupport;
                typedef Int32_DataWriter DataWriter;
                typedef Int32_DataReader DataReader;
                #endif

                DDS_Long   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Int32__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Int32_Seq, Int32_);

            NDDSUSERDllExport
            RTIBool Int32__initialize(
                Int32_* self);

            NDDSUSERDllExport
            RTIBool Int32__initialize_ex(
                Int32_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Int32__initialize_w_params(
                Int32_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Int32__finalize(
                Int32_* self);

            NDDSUSERDllExport
            void Int32__finalize_ex(
                Int32_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Int32__finalize_w_params(
                Int32_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Int32__finalize_optional_members(
                Int32_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Int32__copy(
                Int32_* dst,
                const Int32_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* Int32_ */

