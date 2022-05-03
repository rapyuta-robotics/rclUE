

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int32MultiArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Int32MultiArray__1009219163_h
#define Int32MultiArray__1009219163_h

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

            extern const char *Int32MultiArray_TYPENAME;

            struct Int32MultiArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Int32MultiArray_TypeSupport;
            class Int32MultiArray_DataWriter;
            class Int32MultiArray_DataReader;
            #endif

            class Int32MultiArray_ 
            {
              public:
                typedef struct Int32MultiArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Int32MultiArray_TypeSupport TypeSupport;
                typedef Int32MultiArray_DataWriter DataWriter;
                typedef Int32MultiArray_DataReader DataReader;
                #endif

                example_interfaces::msg::dds_::MultiArrayLayout_   layout_ ;
                DDS_LongSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Int32MultiArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Int32MultiArray_Seq, Int32MultiArray_);

            NDDSUSERDllExport
            RTIBool Int32MultiArray__initialize(
                Int32MultiArray_* self);

            NDDSUSERDllExport
            RTIBool Int32MultiArray__initialize_ex(
                Int32MultiArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Int32MultiArray__initialize_w_params(
                Int32MultiArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Int32MultiArray__finalize(
                Int32MultiArray_* self);

            NDDSUSERDllExport
            void Int32MultiArray__finalize_ex(
                Int32MultiArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Int32MultiArray__finalize_w_params(
                Int32MultiArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Int32MultiArray__finalize_optional_members(
                Int32MultiArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Int32MultiArray__copy(
                Int32MultiArray_* dst,
                const Int32MultiArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* Int32MultiArray_ */

