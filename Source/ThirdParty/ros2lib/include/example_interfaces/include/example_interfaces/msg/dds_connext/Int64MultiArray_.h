

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int64MultiArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Int64MultiArray__246888759_h
#define Int64MultiArray__246888759_h

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

            extern const char *Int64MultiArray_TYPENAME;

            struct Int64MultiArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Int64MultiArray_TypeSupport;
            class Int64MultiArray_DataWriter;
            class Int64MultiArray_DataReader;
            #endif

            class Int64MultiArray_ 
            {
              public:
                typedef struct Int64MultiArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Int64MultiArray_TypeSupport TypeSupport;
                typedef Int64MultiArray_DataWriter DataWriter;
                typedef Int64MultiArray_DataReader DataReader;
                #endif

                example_interfaces::msg::dds_::MultiArrayLayout_   layout_ ;
                DDS_LongLongSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Int64MultiArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Int64MultiArray_Seq, Int64MultiArray_);

            NDDSUSERDllExport
            RTIBool Int64MultiArray__initialize(
                Int64MultiArray_* self);

            NDDSUSERDllExport
            RTIBool Int64MultiArray__initialize_ex(
                Int64MultiArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Int64MultiArray__initialize_w_params(
                Int64MultiArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Int64MultiArray__finalize(
                Int64MultiArray_* self);

            NDDSUSERDllExport
            void Int64MultiArray__finalize_ex(
                Int64MultiArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Int64MultiArray__finalize_w_params(
                Int64MultiArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Int64MultiArray__finalize_optional_members(
                Int64MultiArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Int64MultiArray__copy(
                Int64MultiArray_* dst,
                const Int64MultiArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* Int64MultiArray_ */

