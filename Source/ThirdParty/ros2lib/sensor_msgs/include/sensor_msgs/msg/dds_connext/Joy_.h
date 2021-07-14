

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Joy_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Joy__894024896_h
#define Joy__894024896_h

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

            extern const char *Joy_TYPENAME;

            struct Joy_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Joy_TypeSupport;
            class Joy_DataWriter;
            class Joy_DataReader;
            #endif

            class Joy_ 
            {
              public:
                typedef struct Joy_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Joy_TypeSupport TypeSupport;
                typedef Joy_DataWriter DataWriter;
                typedef Joy_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_FloatSeq  axes_ ;
                DDS_LongSeq  buttons_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Joy__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Joy_Seq, Joy_);

            NDDSUSERDllExport
            RTIBool Joy__initialize(
                Joy_* self);

            NDDSUSERDllExport
            RTIBool Joy__initialize_ex(
                Joy_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Joy__initialize_w_params(
                Joy_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Joy__finalize(
                Joy_* self);

            NDDSUSERDllExport
            void Joy__finalize_ex(
                Joy_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Joy__finalize_w_params(
                Joy_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Joy__finalize_optional_members(
                Joy_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Joy__copy(
                Joy_* dst,
                const Joy_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* Joy_ */

