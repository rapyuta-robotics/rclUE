

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt8_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UInt8__1675293998_h
#define UInt8__1675293998_h

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

            extern const char *UInt8_TYPENAME;

            struct UInt8_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UInt8_TypeSupport;
            class UInt8_DataWriter;
            class UInt8_DataReader;
            #endif

            class UInt8_ 
            {
              public:
                typedef struct UInt8_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UInt8_TypeSupport TypeSupport;
                typedef UInt8_DataWriter DataWriter;
                typedef UInt8_DataReader DataReader;
                #endif

                DDS_Octet   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UInt8__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UInt8_Seq, UInt8_);

            NDDSUSERDllExport
            RTIBool UInt8__initialize(
                UInt8_* self);

            NDDSUSERDllExport
            RTIBool UInt8__initialize_ex(
                UInt8_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UInt8__initialize_w_params(
                UInt8_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UInt8__finalize(
                UInt8_* self);

            NDDSUSERDllExport
            void UInt8__finalize_ex(
                UInt8_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UInt8__finalize_w_params(
                UInt8_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UInt8__finalize_optional_members(
                UInt8_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UInt8__copy(
                UInt8_* dst,
                const UInt8_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* UInt8_ */

