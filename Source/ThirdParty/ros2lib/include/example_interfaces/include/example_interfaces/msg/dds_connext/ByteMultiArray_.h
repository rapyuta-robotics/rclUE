

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ByteMultiArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ByteMultiArray__398623837_h
#define ByteMultiArray__398623837_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "example_interfaces/msg/dds_connext/MultiArrayLayout_.h"
namespace example_interfaces {
    namespace msg {
        namespace dds_ {

            extern const char *ByteMultiArray_TYPENAME;

            struct ByteMultiArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ByteMultiArray_TypeSupport;
            class ByteMultiArray_DataWriter;
            class ByteMultiArray_DataReader;
            #endif

            class ByteMultiArray_ 
            {
              public:
                typedef struct ByteMultiArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ByteMultiArray_TypeSupport TypeSupport;
                typedef ByteMultiArray_DataWriter DataWriter;
                typedef ByteMultiArray_DataReader DataReader;
                #endif

                example_interfaces::msg::dds_::MultiArrayLayout_   layout_ ;
                DDS_OctetSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ByteMultiArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ByteMultiArray_Seq, ByteMultiArray_);

            NDDSUSERDllExport
            RTIBool ByteMultiArray__initialize(
                ByteMultiArray_* self);

            NDDSUSERDllExport
            RTIBool ByteMultiArray__initialize_ex(
                ByteMultiArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ByteMultiArray__initialize_w_params(
                ByteMultiArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ByteMultiArray__finalize(
                ByteMultiArray_* self);

            NDDSUSERDllExport
            void ByteMultiArray__finalize_ex(
                ByteMultiArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ByteMultiArray__finalize_w_params(
                ByteMultiArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ByteMultiArray__finalize_optional_members(
                ByteMultiArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ByteMultiArray__copy(
                ByteMultiArray_* dst,
                const ByteMultiArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* ByteMultiArray_ */

