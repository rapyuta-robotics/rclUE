

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetInt32_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetInt32__706018088_h
#define SetInt32__706018088_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace ue_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetInt32_Request_TYPENAME;

            struct SetInt32_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetInt32_Request_TypeSupport;
            class SetInt32_Request_DataWriter;
            class SetInt32_Request_DataReader;
            #endif

            class SetInt32_Request_ 
            {
              public:
                typedef struct SetInt32_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetInt32_Request_TypeSupport TypeSupport;
                typedef SetInt32_Request_DataWriter DataWriter;
                typedef SetInt32_Request_DataReader DataReader;
                #endif

                DDS_Long   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetInt32_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetInt32_Request_Seq, SetInt32_Request_);

            NDDSUSERDllExport
            RTIBool SetInt32_Request__initialize(
                SetInt32_Request_* self);

            NDDSUSERDllExport
            RTIBool SetInt32_Request__initialize_ex(
                SetInt32_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetInt32_Request__initialize_w_params(
                SetInt32_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetInt32_Request__finalize(
                SetInt32_Request_* self);

            NDDSUSERDllExport
            void SetInt32_Request__finalize_ex(
                SetInt32_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetInt32_Request__finalize_w_params(
                SetInt32_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetInt32_Request__finalize_optional_members(
                SetInt32_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetInt32_Request__copy(
                SetInt32_Request_* dst,
                const SetInt32_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ue_msgs  */
namespace ue_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetInt32_Response_TYPENAME;

            struct SetInt32_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetInt32_Response_TypeSupport;
            class SetInt32_Response_DataWriter;
            class SetInt32_Response_DataReader;
            #endif

            class SetInt32_Response_ 
            {
              public:
                typedef struct SetInt32_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetInt32_Response_TypeSupport TypeSupport;
                typedef SetInt32_Response_DataWriter DataWriter;
                typedef SetInt32_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   remarks_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetInt32_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetInt32_Response_Seq, SetInt32_Response_);

            NDDSUSERDllExport
            RTIBool SetInt32_Response__initialize(
                SetInt32_Response_* self);

            NDDSUSERDllExport
            RTIBool SetInt32_Response__initialize_ex(
                SetInt32_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetInt32_Response__initialize_w_params(
                SetInt32_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetInt32_Response__finalize(
                SetInt32_Response_* self);

            NDDSUSERDllExport
            void SetInt32_Response__finalize_ex(
                SetInt32_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetInt32_Response__finalize_w_params(
                SetInt32_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetInt32_Response__finalize_optional_members(
                SetInt32_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetInt32_Response__copy(
                SetInt32_Response_* dst,
                const SetInt32_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ue_msgs  */

#endif /* SetInt32_ */

