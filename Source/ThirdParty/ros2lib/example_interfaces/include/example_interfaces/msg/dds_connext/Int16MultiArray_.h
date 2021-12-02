

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int16MultiArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Int16MultiArray__555430358_h
#define Int16MultiArray__555430358_h

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

            extern const char *Int16MultiArray_TYPENAME;

            struct Int16MultiArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Int16MultiArray_TypeSupport;
            class Int16MultiArray_DataWriter;
            class Int16MultiArray_DataReader;
            #endif

            class Int16MultiArray_ 
            {
              public:
                typedef struct Int16MultiArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Int16MultiArray_TypeSupport TypeSupport;
                typedef Int16MultiArray_DataWriter DataWriter;
                typedef Int16MultiArray_DataReader DataReader;
                #endif

                example_interfaces::msg::dds_::MultiArrayLayout_   layout_ ;
                DDS_ShortSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Int16MultiArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Int16MultiArray_Seq, Int16MultiArray_);

            NDDSUSERDllExport
            RTIBool Int16MultiArray__initialize(
                Int16MultiArray_* self);

            NDDSUSERDllExport
            RTIBool Int16MultiArray__initialize_ex(
                Int16MultiArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Int16MultiArray__initialize_w_params(
                Int16MultiArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Int16MultiArray__finalize(
                Int16MultiArray_* self);

            NDDSUSERDllExport
            void Int16MultiArray__finalize_ex(
                Int16MultiArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Int16MultiArray__finalize_w_params(
                Int16MultiArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Int16MultiArray__finalize_optional_members(
                Int16MultiArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Int16MultiArray__copy(
                Int16MultiArray_* dst,
                const Int16MultiArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* Int16MultiArray_ */

