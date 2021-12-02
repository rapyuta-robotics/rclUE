

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Char_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Char__730240758_h
#define Char__730240758_h

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

            extern const char *Char_TYPENAME;

            struct Char_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Char_TypeSupport;
            class Char_DataWriter;
            class Char_DataReader;
            #endif

            class Char_ 
            {
              public:
                typedef struct Char_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Char_TypeSupport TypeSupport;
                typedef Char_DataWriter DataWriter;
                typedef Char_DataReader DataReader;
                #endif

                DDS_Octet   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Char__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Char_Seq, Char_);

            NDDSUSERDllExport
            RTIBool Char__initialize(
                Char_* self);

            NDDSUSERDllExport
            RTIBool Char__initialize_ex(
                Char_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Char__initialize_w_params(
                Char_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Char__finalize(
                Char_* self);

            NDDSUSERDllExport
            void Char__finalize_ex(
                Char_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Char__finalize_w_params(
                Char_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Char__finalize_optional_members(
                Char_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Char__copy(
                Char_* dst,
                const Char_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace example_interfaces  */

#endif /* Char_ */

