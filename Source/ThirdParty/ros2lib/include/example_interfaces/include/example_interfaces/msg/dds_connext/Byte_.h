

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Byte_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Byte__49259880_h
#define Byte__49259880_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace example_interfaces {
    namespace msg {
        namespace dds_ {

            extern const char *Byte_TYPENAME;

            struct Byte_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Byte_TypeSupport;
            class Byte_DataWriter;
            class Byte_DataReader;
            #endif

            class Byte_ 
            {
              public:
                typedef struct Byte_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Byte_TypeSupport TypeSupport;
                typedef Byte_DataWriter DataWriter;
                typedef Byte_DataReader DataReader;
                #endif

                DDS_Octet   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Byte__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Byte_Seq, Byte_);

            NDDSUSERDllExport
            RTIBool Byte__initialize(
                Byte_* self);

            NDDSUSERDllExport
            RTIBool Byte__initialize_ex(
                Byte_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Byte__initialize_w_params(
                Byte_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Byte__finalize(
                Byte_* self);

            NDDSUSERDllExport
            void Byte__finalize_ex(
                Byte_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Byte__finalize_w_params(
                Byte_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Byte__finalize_optional_members(
                Byte_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Byte__copy(
                Byte_* dst,
                const Byte_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* Byte_ */

