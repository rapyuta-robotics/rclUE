

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int64_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Int64__151060470_h
#define Int64__151060470_h

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

            extern const char *Int64_TYPENAME;

            struct Int64_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Int64_TypeSupport;
            class Int64_DataWriter;
            class Int64_DataReader;
            #endif

            class Int64_ 
            {
              public:
                typedef struct Int64_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Int64_TypeSupport TypeSupport;
                typedef Int64_DataWriter DataWriter;
                typedef Int64_DataReader DataReader;
                #endif

                DDS_LongLong   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Int64__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Int64_Seq, Int64_);

            NDDSUSERDllExport
            RTIBool Int64__initialize(
                Int64_* self);

            NDDSUSERDllExport
            RTIBool Int64__initialize_ex(
                Int64_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Int64__initialize_w_params(
                Int64_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Int64__finalize(
                Int64_* self);

            NDDSUSERDllExport
            void Int64__finalize_ex(
                Int64_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Int64__finalize_w_params(
                Int64_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Int64__finalize_optional_members(
                Int64_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Int64__copy(
                Int64_* dst,
                const Int64_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* Int64_ */

