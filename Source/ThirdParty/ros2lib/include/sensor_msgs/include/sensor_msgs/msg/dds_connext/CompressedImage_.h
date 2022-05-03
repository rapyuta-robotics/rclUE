

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CompressedImage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CompressedImage__1647560635_h
#define CompressedImage__1647560635_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *CompressedImage_TYPENAME;

            struct CompressedImage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CompressedImage_TypeSupport;
            class CompressedImage_DataWriter;
            class CompressedImage_DataReader;
            #endif

            class CompressedImage_ 
            {
              public:
                typedef struct CompressedImage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CompressedImage_TypeSupport TypeSupport;
                typedef CompressedImage_DataWriter DataWriter;
                typedef CompressedImage_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Char *   format_ ;
                DDS_OctetSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CompressedImage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CompressedImage_Seq, CompressedImage_);

            NDDSUSERDllExport
            RTIBool CompressedImage__initialize(
                CompressedImage_* self);

            NDDSUSERDllExport
            RTIBool CompressedImage__initialize_ex(
                CompressedImage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CompressedImage__initialize_w_params(
                CompressedImage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CompressedImage__finalize(
                CompressedImage_* self);

            NDDSUSERDllExport
            void CompressedImage__finalize_ex(
                CompressedImage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CompressedImage__finalize_w_params(
                CompressedImage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CompressedImage__finalize_optional_members(
                CompressedImage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CompressedImage__copy(
                CompressedImage_* dst,
                const CompressedImage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* CompressedImage_ */

