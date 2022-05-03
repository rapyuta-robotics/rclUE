

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt64MultiArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UInt64MultiArray__538070967_h
#define UInt64MultiArray__538070967_h

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

            extern const char *UInt64MultiArray_TYPENAME;

            struct UInt64MultiArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UInt64MultiArray_TypeSupport;
            class UInt64MultiArray_DataWriter;
            class UInt64MultiArray_DataReader;
            #endif

            class UInt64MultiArray_ 
            {
              public:
                typedef struct UInt64MultiArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UInt64MultiArray_TypeSupport TypeSupport;
                typedef UInt64MultiArray_DataWriter DataWriter;
                typedef UInt64MultiArray_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::MultiArrayLayout_   layout_ ;
                DDS_UnsignedLongLongSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UInt64MultiArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UInt64MultiArray_Seq, UInt64MultiArray_);

            NDDSUSERDllExport
            RTIBool UInt64MultiArray__initialize(
                UInt64MultiArray_* self);

            NDDSUSERDllExport
            RTIBool UInt64MultiArray__initialize_ex(
                UInt64MultiArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UInt64MultiArray__initialize_w_params(
                UInt64MultiArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UInt64MultiArray__finalize(
                UInt64MultiArray_* self);

            NDDSUSERDllExport
            void UInt64MultiArray__finalize_ex(
                UInt64MultiArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UInt64MultiArray__finalize_w_params(
                UInt64MultiArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UInt64MultiArray__finalize_optional_members(
                UInt64MultiArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UInt64MultiArray__copy(
                UInt64MultiArray_* dst,
                const UInt64MultiArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* UInt64MultiArray_ */

