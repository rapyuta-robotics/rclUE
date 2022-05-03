

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ChannelFloat32_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef ChannelFloat32__2136162898_h
#define ChannelFloat32__2136162898_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *ChannelFloat32_TYPENAME;

            struct ChannelFloat32_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class ChannelFloat32_TypeSupport;
            class ChannelFloat32_DataWriter;
            class ChannelFloat32_DataReader;
            #endif

            class ChannelFloat32_ 
            {
              public:
                typedef struct ChannelFloat32_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef ChannelFloat32_TypeSupport TypeSupport;
                typedef ChannelFloat32_DataWriter DataWriter;
                typedef ChannelFloat32_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                DDS_FloatSeq  values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* ChannelFloat32__get_typecode(void); /* Type code */

            DDS_SEQUENCE(ChannelFloat32_Seq, ChannelFloat32_);

            NDDSUSERDllExport
            RTIBool ChannelFloat32__initialize(
                ChannelFloat32_* self);

            NDDSUSERDllExport
            RTIBool ChannelFloat32__initialize_ex(
                ChannelFloat32_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool ChannelFloat32__initialize_w_params(
                ChannelFloat32_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void ChannelFloat32__finalize(
                ChannelFloat32_* self);

            NDDSUSERDllExport
            void ChannelFloat32__finalize_ex(
                ChannelFloat32_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void ChannelFloat32__finalize_w_params(
                ChannelFloat32_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void ChannelFloat32__finalize_optional_members(
                ChannelFloat32_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool ChannelFloat32__copy(
                ChannelFloat32_* dst,
                const ChannelFloat32_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* ChannelFloat32_ */

