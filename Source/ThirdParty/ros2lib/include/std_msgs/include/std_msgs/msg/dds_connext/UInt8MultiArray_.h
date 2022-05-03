

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt8MultiArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UInt8MultiArray__2025938519_h
#define UInt8MultiArray__2025938519_h

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

            extern const char *UInt8MultiArray_TYPENAME;

            struct UInt8MultiArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UInt8MultiArray_TypeSupport;
            class UInt8MultiArray_DataWriter;
            class UInt8MultiArray_DataReader;
            #endif

            class UInt8MultiArray_ 
            {
              public:
                typedef struct UInt8MultiArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UInt8MultiArray_TypeSupport TypeSupport;
                typedef UInt8MultiArray_DataWriter DataWriter;
                typedef UInt8MultiArray_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* UInt8MultiArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UInt8MultiArray_Seq, UInt8MultiArray_);

            NDDSUSERDllExport
            RTIBool UInt8MultiArray__initialize(
                UInt8MultiArray_* self);

            NDDSUSERDllExport
            RTIBool UInt8MultiArray__initialize_ex(
                UInt8MultiArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UInt8MultiArray__initialize_w_params(
                UInt8MultiArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UInt8MultiArray__finalize(
                UInt8MultiArray_* self);

            NDDSUSERDllExport
            void UInt8MultiArray__finalize_ex(
                UInt8MultiArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UInt8MultiArray__finalize_w_params(
                UInt8MultiArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UInt8MultiArray__finalize_optional_members(
                UInt8MultiArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UInt8MultiArray__copy(
                UInt8MultiArray_* dst,
                const UInt8MultiArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* UInt8MultiArray_ */

