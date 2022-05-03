

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt32_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UInt32__992872686_h
#define UInt32__992872686_h

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

            extern const char *UInt32_TYPENAME;

            struct UInt32_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UInt32_TypeSupport;
            class UInt32_DataWriter;
            class UInt32_DataReader;
            #endif

            class UInt32_ 
            {
              public:
                typedef struct UInt32_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UInt32_TypeSupport TypeSupport;
                typedef UInt32_DataWriter DataWriter;
                typedef UInt32_DataReader DataReader;
                #endif

                DDS_UnsignedLong   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UInt32__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UInt32_Seq, UInt32_);

            NDDSUSERDllExport
            RTIBool UInt32__initialize(
                UInt32_* self);

            NDDSUSERDllExport
            RTIBool UInt32__initialize_ex(
                UInt32_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UInt32__initialize_w_params(
                UInt32_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UInt32__finalize(
                UInt32_* self);

            NDDSUSERDllExport
            void UInt32__finalize_ex(
                UInt32_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UInt32__finalize_w_params(
                UInt32_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UInt32__finalize_optional_members(
                UInt32_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UInt32__copy(
                UInt32_* dst,
                const UInt32_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* UInt32_ */

