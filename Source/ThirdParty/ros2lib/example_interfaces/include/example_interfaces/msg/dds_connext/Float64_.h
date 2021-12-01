

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Float64_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Float64__1652897546_h
#define Float64__1652897546_h

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

            extern const char *Float64_TYPENAME;

            struct Float64_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Float64_TypeSupport;
            class Float64_DataWriter;
            class Float64_DataReader;
            #endif

            class Float64_ 
            {
              public:
                typedef struct Float64_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Float64_TypeSupport TypeSupport;
                typedef Float64_DataWriter DataWriter;
                typedef Float64_DataReader DataReader;
                #endif

                DDS_Double   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Float64__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Float64_Seq, Float64_);

            NDDSUSERDllExport
            RTIBool Float64__initialize(
                Float64_* self);

            NDDSUSERDllExport
            RTIBool Float64__initialize_ex(
                Float64_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Float64__initialize_w_params(
                Float64_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Float64__finalize(
                Float64_* self);

            NDDSUSERDllExport
            void Float64__finalize_ex(
                Float64_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Float64__finalize_w_params(
                Float64_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Float64__finalize_optional_members(
                Float64_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Float64__copy(
                Float64_* dst,
                const Float64_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* Float64_ */

