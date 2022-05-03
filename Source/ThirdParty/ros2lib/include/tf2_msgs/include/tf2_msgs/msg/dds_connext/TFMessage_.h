

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TFMessage_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TFMessage__295529157_h
#define TFMessage__295529157_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/TransformStamped_.h"
namespace tf2_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *TFMessage_TYPENAME;

            struct TFMessage_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TFMessage_TypeSupport;
            class TFMessage_DataWriter;
            class TFMessage_DataReader;
            #endif

            class TFMessage_ 
            {
              public:
                typedef struct TFMessage_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TFMessage_TypeSupport TypeSupport;
                typedef TFMessage_DataWriter DataWriter;
                typedef TFMessage_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::TransformStamped_Seq  transforms_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TFMessage__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TFMessage_Seq, TFMessage_);

            NDDSUSERDllExport
            RTIBool TFMessage__initialize(
                TFMessage_* self);

            NDDSUSERDllExport
            RTIBool TFMessage__initialize_ex(
                TFMessage_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TFMessage__initialize_w_params(
                TFMessage_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TFMessage__finalize(
                TFMessage_* self);

            NDDSUSERDllExport
            void TFMessage__finalize_ex(
                TFMessage_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TFMessage__finalize_w_params(
                TFMessage_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TFMessage__finalize_optional_members(
                TFMessage_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TFMessage__copy(
                TFMessage_* dst,
                const TFMessage_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace tf2_msgs  */

#endif /* TFMessage_ */

