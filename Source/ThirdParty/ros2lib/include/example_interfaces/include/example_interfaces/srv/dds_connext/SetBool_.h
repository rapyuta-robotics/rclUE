

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetBool_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetBool__539901169_h
#define SetBool__539901169_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace example_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *SetBool_Request_TYPENAME;

            struct SetBool_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetBool_Request_TypeSupport;
            class SetBool_Request_DataWriter;
            class SetBool_Request_DataReader;
            #endif

            class SetBool_Request_ 
            {
              public:
                typedef struct SetBool_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetBool_Request_TypeSupport TypeSupport;
                typedef SetBool_Request_DataWriter DataWriter;
                typedef SetBool_Request_DataReader DataReader;
                #endif

                DDS_Boolean   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetBool_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetBool_Request_Seq, SetBool_Request_);

            NDDSUSERDllExport
            RTIBool SetBool_Request__initialize(
                SetBool_Request_* self);

            NDDSUSERDllExport
            RTIBool SetBool_Request__initialize_ex(
                SetBool_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetBool_Request__initialize_w_params(
                SetBool_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetBool_Request__finalize(
                SetBool_Request_* self);

            NDDSUSERDllExport
            void SetBool_Request__finalize_ex(
                SetBool_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetBool_Request__finalize_w_params(
                SetBool_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetBool_Request__finalize_optional_members(
                SetBool_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetBool_Request__copy(
                SetBool_Request_* dst,
                const SetBool_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *SetBool_Response_TYPENAME;

            struct SetBool_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetBool_Response_TypeSupport;
            class SetBool_Response_DataWriter;
            class SetBool_Response_DataReader;
            #endif

            class SetBool_Response_ 
            {
              public:
                typedef struct SetBool_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetBool_Response_TypeSupport TypeSupport;
                typedef SetBool_Response_DataWriter DataWriter;
                typedef SetBool_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetBool_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetBool_Response_Seq, SetBool_Response_);

            NDDSUSERDllExport
            RTIBool SetBool_Response__initialize(
                SetBool_Response_* self);

            NDDSUSERDllExport
            RTIBool SetBool_Response__initialize_ex(
                SetBool_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetBool_Response__initialize_w_params(
                SetBool_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetBool_Response__finalize(
                SetBool_Response_* self);

            NDDSUSERDllExport
            void SetBool_Response__finalize_ex(
                SetBool_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetBool_Response__finalize_w_params(
                SetBool_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetBool_Response__finalize_optional_members(
                SetBool_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetBool_Response__copy(
                SetBool_Response_* dst,
                const SetBool_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace example_interfaces  */

#endif /* SetBool_ */

