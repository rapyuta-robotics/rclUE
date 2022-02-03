

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from InterfaceValue_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef InterfaceValue__1309834843_h
#define InterfaceValue__1309834843_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace control_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *InterfaceValue_TYPENAME;

            struct InterfaceValue_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class InterfaceValue_TypeSupport;
            class InterfaceValue_DataWriter;
            class InterfaceValue_DataReader;
            #endif

            class InterfaceValue_ 
            {
              public:
                typedef struct InterfaceValue_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef InterfaceValue_TypeSupport TypeSupport;
                typedef InterfaceValue_DataWriter DataWriter;
                typedef InterfaceValue_DataReader DataReader;
                #endif

                DDS_StringSeq  interface_names_ ;
                DDS_DoubleSeq  values_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* InterfaceValue__get_typecode(void); /* Type code */

            DDS_SEQUENCE(InterfaceValue_Seq, InterfaceValue_);

            NDDSUSERDllExport
            RTIBool InterfaceValue__initialize(
                InterfaceValue_* self);

            NDDSUSERDllExport
            RTIBool InterfaceValue__initialize_ex(
                InterfaceValue_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool InterfaceValue__initialize_w_params(
                InterfaceValue_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void InterfaceValue__finalize(
                InterfaceValue_* self);

            NDDSUSERDllExport
            void InterfaceValue__finalize_ex(
                InterfaceValue_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void InterfaceValue__finalize_w_params(
                InterfaceValue_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void InterfaceValue__finalize_optional_members(
                InterfaceValue_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool InterfaceValue__copy(
                InterfaceValue_* dst,
                const InterfaceValue_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace control_msgs  */

#endif /* InterfaceValue_ */

