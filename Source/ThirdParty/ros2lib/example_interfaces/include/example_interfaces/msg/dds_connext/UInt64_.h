

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt64_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UInt64__1726897670_h
#define UInt64__1726897670_h

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

            extern const char *UInt64_TYPENAME;

            struct UInt64_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UInt64_TypeSupport;
            class UInt64_DataWriter;
            class UInt64_DataReader;
            #endif

            class UInt64_ 
            {
              public:
                typedef struct UInt64_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UInt64_TypeSupport TypeSupport;
                typedef UInt64_DataWriter DataWriter;
                typedef UInt64_DataReader DataReader;
                #endif

                DDS_UnsignedLongLong   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UInt64__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UInt64_Seq, UInt64_);

            NDDSUSERDllExport
            RTIBool UInt64__initialize(
                UInt64_* self);

            NDDSUSERDllExport
            RTIBool UInt64__initialize_ex(
                UInt64_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UInt64__initialize_w_params(
                UInt64_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UInt64__finalize(
                UInt64_* self);

            NDDSUSERDllExport
            void UInt64__finalize_ex(
                UInt64_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UInt64__finalize_w_params(
                UInt64_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UInt64__finalize_optional_members(
                UInt64_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UInt64__copy(
                UInt64_* dst,
                const UInt64_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* UInt64_ */

