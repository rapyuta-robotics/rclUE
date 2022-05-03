

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UInt32MultiArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef UInt32MultiArray__1794177521_h
#define UInt32MultiArray__1794177521_h

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

            extern const char *UInt32MultiArray_TYPENAME;

            struct UInt32MultiArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class UInt32MultiArray_TypeSupport;
            class UInt32MultiArray_DataWriter;
            class UInt32MultiArray_DataReader;
            #endif

            class UInt32MultiArray_ 
            {
              public:
                typedef struct UInt32MultiArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef UInt32MultiArray_TypeSupport TypeSupport;
                typedef UInt32MultiArray_DataWriter DataWriter;
                typedef UInt32MultiArray_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::MultiArrayLayout_   layout_ ;
                DDS_UnsignedLongSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* UInt32MultiArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(UInt32MultiArray_Seq, UInt32MultiArray_);

            NDDSUSERDllExport
            RTIBool UInt32MultiArray__initialize(
                UInt32MultiArray_* self);

            NDDSUSERDllExport
            RTIBool UInt32MultiArray__initialize_ex(
                UInt32MultiArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool UInt32MultiArray__initialize_w_params(
                UInt32MultiArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void UInt32MultiArray__finalize(
                UInt32MultiArray_* self);

            NDDSUSERDllExport
            void UInt32MultiArray__finalize_ex(
                UInt32MultiArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void UInt32MultiArray__finalize_w_params(
                UInt32MultiArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void UInt32MultiArray__finalize_optional_members(
                UInt32MultiArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool UInt32MultiArray__copy(
                UInt32MultiArray_* dst,
                const UInt32MultiArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* UInt32MultiArray_ */

