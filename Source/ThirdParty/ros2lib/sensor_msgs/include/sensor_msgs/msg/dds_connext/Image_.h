

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Image_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Image__548605646_h
#define Image__548605646_h

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

            extern const char *Image_TYPENAME;

            struct Image_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Image_TypeSupport;
            class Image_DataWriter;
            class Image_DataReader;
            #endif

            class Image_ 
            {
              public:
                typedef struct Image_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Image_TypeSupport TypeSupport;
                typedef Image_DataWriter DataWriter;
                typedef Image_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_UnsignedLong   height_ ;
                DDS_UnsignedLong   width_ ;
                DDS_Char *   encoding_ ;
                DDS_Octet   is_bigendian_ ;
                DDS_UnsignedLong   step_ ;
                DDS_OctetSeq  data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Image__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Image_Seq, Image_);

            NDDSUSERDllExport
            RTIBool Image__initialize(
                Image_* self);

            NDDSUSERDllExport
            RTIBool Image__initialize_ex(
                Image_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Image__initialize_w_params(
                Image_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Image__finalize(
                Image_* self);

            NDDSUSERDllExport
            void Image__finalize_ex(
                Image_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Image__finalize_w_params(
                Image_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Image__finalize_optional_members(
                Image_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Image__copy(
                Image_* dst,
                const Image_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* Image_ */

