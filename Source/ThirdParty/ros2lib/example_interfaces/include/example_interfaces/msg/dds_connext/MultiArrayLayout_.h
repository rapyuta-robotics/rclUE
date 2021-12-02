

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiArrayLayout_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MultiArrayLayout__1324348823_h
#define MultiArrayLayout__1324348823_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "example_interfaces/msg/dds_connext/MultiArrayDimension_.h"
namespace example_interfaces {
    namespace msg {
        namespace dds_ {

            extern const char *MultiArrayLayout_TYPENAME;

            struct MultiArrayLayout_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MultiArrayLayout_TypeSupport;
            class MultiArrayLayout_DataWriter;
            class MultiArrayLayout_DataReader;
            #endif

            class MultiArrayLayout_ 
            {
              public:
                typedef struct MultiArrayLayout_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MultiArrayLayout_TypeSupport TypeSupport;
                typedef MultiArrayLayout_DataWriter DataWriter;
                typedef MultiArrayLayout_DataReader DataReader;
                #endif

                example_interfaces::msg::dds_::MultiArrayDimension_Seq  dim_ ;
                DDS_UnsignedLong   data_offset_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MultiArrayLayout__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MultiArrayLayout_Seq, MultiArrayLayout_);

            NDDSUSERDllExport
            RTIBool MultiArrayLayout__initialize(
                MultiArrayLayout_* self);

            NDDSUSERDllExport
            RTIBool MultiArrayLayout__initialize_ex(
                MultiArrayLayout_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MultiArrayLayout__initialize_w_params(
                MultiArrayLayout_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MultiArrayLayout__finalize(
                MultiArrayLayout_* self);

            NDDSUSERDllExport
            void MultiArrayLayout__finalize_ex(
                MultiArrayLayout_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MultiArrayLayout__finalize_w_params(
                MultiArrayLayout_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MultiArrayLayout__finalize_optional_members(
                MultiArrayLayout_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MultiArrayLayout__copy(
                MultiArrayLayout_* dst,
                const MultiArrayLayout_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* MultiArrayLayout_ */

