

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int8MultiArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Int8MultiArray__1635617754_h
#define Int8MultiArray__1635617754_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/MultiArrayLayout_.h"
namespace std_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Int8MultiArray_TYPENAME;

            struct Int8MultiArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Int8MultiArray_TypeSupport;
            class Int8MultiArray_DataWriter;
            class Int8MultiArray_DataReader;
            #endif

            class Int8MultiArray_ 
            {
              public:
                typedef struct Int8MultiArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Int8MultiArray_TypeSupport TypeSupport;
                typedef Int8MultiArray_DataWriter DataWriter;
                typedef Int8MultiArray_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::MultiArrayLayout_   layout_ ;
                DDS_OctetSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Int8MultiArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Int8MultiArray_Seq, Int8MultiArray_);

            NDDSUSERDllExport
            RTIBool Int8MultiArray__initialize(
                Int8MultiArray_* self);

            NDDSUSERDllExport
            RTIBool Int8MultiArray__initialize_ex(
                Int8MultiArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Int8MultiArray__initialize_w_params(
                Int8MultiArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Int8MultiArray__finalize(
                Int8MultiArray_* self);

            NDDSUSERDllExport
            void Int8MultiArray__finalize_ex(
                Int8MultiArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Int8MultiArray__finalize_w_params(
                Int8MultiArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Int8MultiArray__finalize_optional_members(
                Int8MultiArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Int8MultiArray__copy(
                Int8MultiArray_* dst,
                const Int8MultiArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* Int8MultiArray_ */

