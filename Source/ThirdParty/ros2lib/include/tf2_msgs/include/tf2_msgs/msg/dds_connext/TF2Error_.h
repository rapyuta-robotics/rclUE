

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TF2Error_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TF2Error__1249152670_h
#define TF2Error__1249152670_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace tf2_msgs {
    namespace msg {
        namespace dds_ {
            namespace TF2Error_Constants {
                static const DDS_Octet NO_ERROR_= 0;
                static const DDS_Octet LOOKUP_ERROR_= 1;
                static const DDS_Octet CONNECTIVITY_ERROR_= 2;
                static const DDS_Octet EXTRAPOLATION_ERROR_= 3;
                static const DDS_Octet INVALID_ARGUMENT_ERROR_= 4;
                static const DDS_Octet TIMEOUT_ERROR_= 5;
                static const DDS_Octet TRANSFORM_ERROR_= 6;
            } /* namespace TF2Error_Constants  */

            extern const char *TF2Error_TYPENAME;

            struct TF2Error_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TF2Error_TypeSupport;
            class TF2Error_DataWriter;
            class TF2Error_DataReader;
            #endif

            class TF2Error_ 
            {
              public:
                typedef struct TF2Error_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TF2Error_TypeSupport TypeSupport;
                typedef TF2Error_DataWriter DataWriter;
                typedef TF2Error_DataReader DataReader;
                #endif

                DDS_Octet   error_ ;
                DDS_Char *   error_string_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TF2Error__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TF2Error_Seq, TF2Error_);

            NDDSUSERDllExport
            RTIBool TF2Error__initialize(
                TF2Error_* self);

            NDDSUSERDllExport
            RTIBool TF2Error__initialize_ex(
                TF2Error_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TF2Error__initialize_w_params(
                TF2Error_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TF2Error__finalize(
                TF2Error_* self);

            NDDSUSERDllExport
            void TF2Error__finalize_ex(
                TF2Error_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TF2Error__finalize_w_params(
                TF2Error_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TF2Error__finalize_optional_members(
                TF2Error_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TF2Error__copy(
                TF2Error_* dst,
                const TF2Error_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace tf2_msgs  */

#endif /* TF2Error_ */

