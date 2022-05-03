

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Float32_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Float32__77699534_h
#define Float32__77699534_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace std_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Float32_TYPENAME;

            struct Float32_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Float32_TypeSupport;
            class Float32_DataWriter;
            class Float32_DataReader;
            #endif

            class Float32_ 
            {
              public:
                typedef struct Float32_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Float32_TypeSupport TypeSupport;
                typedef Float32_DataWriter DataWriter;
                typedef Float32_DataReader DataReader;
                #endif

                DDS_Float   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Float32__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Float32_Seq, Float32_);

            NDDSUSERDllExport
            RTIBool Float32__initialize(
                Float32_* self);

            NDDSUSERDllExport
            RTIBool Float32__initialize_ex(
                Float32_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Float32__initialize_w_params(
                Float32_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Float32__finalize(
                Float32_* self);

            NDDSUSERDllExport
            void Float32__finalize_ex(
                Float32_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Float32__finalize_w_params(
                Float32_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Float32__finalize_optional_members(
                Float32_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Float32__copy(
                Float32_* dst,
                const Float32_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* Float32_ */

