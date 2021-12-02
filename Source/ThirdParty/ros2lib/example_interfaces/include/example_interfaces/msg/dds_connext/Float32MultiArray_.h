

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Float32MultiArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Float32MultiArray__1168042905_h
#define Float32MultiArray__1168042905_h

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

            extern const char *Float32MultiArray_TYPENAME;

            struct Float32MultiArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Float32MultiArray_TypeSupport;
            class Float32MultiArray_DataWriter;
            class Float32MultiArray_DataReader;
            #endif

            class Float32MultiArray_ 
            {
              public:
                typedef struct Float32MultiArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Float32MultiArray_TypeSupport TypeSupport;
                typedef Float32MultiArray_DataWriter DataWriter;
                typedef Float32MultiArray_DataReader DataReader;
                #endif

                example_interfaces::msg::dds_::MultiArrayLayout_   layout_ ;
                DDS_FloatSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Float32MultiArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Float32MultiArray_Seq, Float32MultiArray_);

            NDDSUSERDllExport
            RTIBool Float32MultiArray__initialize(
                Float32MultiArray_* self);

            NDDSUSERDllExport
            RTIBool Float32MultiArray__initialize_ex(
                Float32MultiArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Float32MultiArray__initialize_w_params(
                Float32MultiArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Float32MultiArray__finalize(
                Float32MultiArray_* self);

            NDDSUSERDllExport
            void Float32MultiArray__finalize_ex(
                Float32MultiArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Float32MultiArray__finalize_w_params(
                Float32MultiArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Float32MultiArray__finalize_optional_members(
                Float32MultiArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Float32MultiArray__copy(
                Float32MultiArray_* dst,
                const Float32MultiArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* Float32MultiArray_ */

