

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int16_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Int16__236353213_h
#define Int16__236353213_h

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

            extern const char *Int16_TYPENAME;

            struct Int16_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Int16_TypeSupport;
            class Int16_DataWriter;
            class Int16_DataReader;
            #endif

            class Int16_ 
            {
              public:
                typedef struct Int16_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Int16_TypeSupport TypeSupport;
                typedef Int16_DataWriter DataWriter;
                typedef Int16_DataReader DataReader;
                #endif

                DDS_Short   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Int16__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Int16_Seq, Int16_);

            NDDSUSERDllExport
            RTIBool Int16__initialize(
                Int16_* self);

            NDDSUSERDllExport
            RTIBool Int16__initialize_ex(
                Int16_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Int16__initialize_w_params(
                Int16_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Int16__finalize(
                Int16_* self);

            NDDSUSERDllExport
            void Int16__finalize_ex(
                Int16_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Int16__finalize_w_params(
                Int16_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Int16__finalize_optional_members(
                Int16_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Int16__copy(
                Int16_* dst,
                const Int16_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* Int16_ */

