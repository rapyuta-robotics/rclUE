

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Int8_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Int8__1199072671_h
#define Int8__1199072671_h

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

            extern const char *Int8_TYPENAME;

            struct Int8_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Int8_TypeSupport;
            class Int8_DataWriter;
            class Int8_DataReader;
            #endif

            class Int8_ 
            {
              public:
                typedef struct Int8_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Int8_TypeSupport TypeSupport;
                typedef Int8_DataWriter DataWriter;
                typedef Int8_DataReader DataReader;
                #endif

                DDS_Octet   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Int8__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Int8_Seq, Int8_);

            NDDSUSERDllExport
            RTIBool Int8__initialize(
                Int8_* self);

            NDDSUSERDllExport
            RTIBool Int8__initialize_ex(
                Int8_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Int8__initialize_w_params(
                Int8_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Int8__finalize(
                Int8_* self);

            NDDSUSERDllExport
            void Int8__finalize_ex(
                Int8_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Int8__finalize_w_params(
                Int8_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Int8__finalize_optional_members(
                Int8_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Int8__copy(
                Int8_* dst,
                const Int8_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* Int8_ */

