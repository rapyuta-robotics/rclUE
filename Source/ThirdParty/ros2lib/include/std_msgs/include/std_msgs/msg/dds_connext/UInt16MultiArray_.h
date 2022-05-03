

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt16MultiArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UInt16MultiArray__1340388716_h
#define UInt16MultiArray__1340388716_h

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

            extern const char *UInt16MultiArray_TYPENAME;

            struct UInt16MultiArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UInt16MultiArray_TypeSupport;
            class UInt16MultiArray_DataWriter;
            class UInt16MultiArray_DataReader;
            #endif

            class UInt16MultiArray_ 
            {
              public:
                typedef struct UInt16MultiArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UInt16MultiArray_TypeSupport TypeSupport;
                typedef UInt16MultiArray_DataWriter DataWriter;
                typedef UInt16MultiArray_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::MultiArrayLayout_   layout_ ;
                DDS_UnsignedShortSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UInt16MultiArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UInt16MultiArray_Seq, UInt16MultiArray_);

            NDDSUSERDllExport
            RTIBool UInt16MultiArray__initialize(
                UInt16MultiArray_* self);

            NDDSUSERDllExport
            RTIBool UInt16MultiArray__initialize_ex(
                UInt16MultiArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UInt16MultiArray__initialize_w_params(
                UInt16MultiArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UInt16MultiArray__finalize(
                UInt16MultiArray_* self);

            NDDSUSERDllExport
            void UInt16MultiArray__finalize_ex(
                UInt16MultiArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UInt16MultiArray__finalize_w_params(
                UInt16MultiArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UInt16MultiArray__finalize_optional_members(
                UInt16MultiArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UInt16MultiArray__copy(
                UInt16MultiArray_* dst,
                const UInt16MultiArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* UInt16MultiArray_ */

