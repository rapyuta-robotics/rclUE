

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Bool_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Bool__239641040_h
#define Bool__239641040_h

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

            extern const char *Bool_TYPENAME;

            struct Bool_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Bool_TypeSupport;
            class Bool_DataWriter;
            class Bool_DataReader;
            #endif

            class Bool_ 
            {
              public:
                typedef struct Bool_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Bool_TypeSupport TypeSupport;
                typedef Bool_DataWriter DataWriter;
                typedef Bool_DataReader DataReader;
                #endif

                DDS_Boolean   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Bool__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Bool_Seq, Bool_);

            NDDSUSERDllExport
            RTIBool Bool__initialize(
                Bool_* self);

            NDDSUSERDllExport
            RTIBool Bool__initialize_ex(
                Bool_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Bool__initialize_w_params(
                Bool_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Bool__finalize(
                Bool_* self);

            NDDSUSERDllExport
            void Bool__finalize_ex(
                Bool_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Bool__finalize_w_params(
                Bool_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Bool__finalize_optional_members(
                Bool_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Bool__copy(
                Bool_* dst,
                const Bool_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* Bool_ */

