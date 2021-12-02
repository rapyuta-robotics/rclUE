

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Float64MultiArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Float64MultiArray__88065035_h
#define Float64MultiArray__88065035_h

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

            extern const char *Float64MultiArray_TYPENAME;

            struct Float64MultiArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Float64MultiArray_TypeSupport;
            class Float64MultiArray_DataWriter;
            class Float64MultiArray_DataReader;
            #endif

            class Float64MultiArray_ 
            {
              public:
                typedef struct Float64MultiArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Float64MultiArray_TypeSupport TypeSupport;
                typedef Float64MultiArray_DataWriter DataWriter;
                typedef Float64MultiArray_DataReader DataReader;
                #endif

                example_interfaces::msg::dds_::MultiArrayLayout_   layout_ ;
                DDS_DoubleSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Float64MultiArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Float64MultiArray_Seq, Float64MultiArray_);

            NDDSUSERDllExport
            RTIBool Float64MultiArray__initialize(
                Float64MultiArray_* self);

            NDDSUSERDllExport
            RTIBool Float64MultiArray__initialize_ex(
                Float64MultiArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Float64MultiArray__initialize_w_params(
                Float64MultiArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Float64MultiArray__finalize(
                Float64MultiArray_* self);

            NDDSUSERDllExport
            void Float64MultiArray__finalize_ex(
                Float64MultiArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Float64MultiArray__finalize_w_params(
                Float64MultiArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Float64MultiArray__finalize_optional_members(
                Float64MultiArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Float64MultiArray__copy(
                Float64MultiArray_* dst,
                const Float64MultiArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* Float64MultiArray_ */

