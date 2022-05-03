

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt16_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UInt16__1641604799_h
#define UInt16__1641604799_h

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

            extern const char *UInt16_TYPENAME;

            struct UInt16_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UInt16_TypeSupport;
            class UInt16_DataWriter;
            class UInt16_DataReader;
            #endif

            class UInt16_ 
            {
              public:
                typedef struct UInt16_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UInt16_TypeSupport TypeSupport;
                typedef UInt16_DataWriter DataWriter;
                typedef UInt16_DataReader DataReader;
                #endif

                DDS_UnsignedShort   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UInt16__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UInt16_Seq, UInt16_);

            NDDSUSERDllExport
            RTIBool UInt16__initialize(
                UInt16_* self);

            NDDSUSERDllExport
            RTIBool UInt16__initialize_ex(
                UInt16_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UInt16__initialize_w_params(
                UInt16_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UInt16__finalize(
                UInt16_* self);

            NDDSUSERDllExport
            void UInt16__finalize_ex(
                UInt16_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UInt16__finalize_w_params(
                UInt16_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UInt16__finalize_optional_members(
                UInt16_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UInt16__copy(
                UInt16_* dst,
                const UInt16_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* UInt16_ */

