

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetInt16_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetInt16__954473930_h
#define SetInt16__954473930_h

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

            extern const char *SetInt16_Request_TYPENAME;

            struct SetInt16_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetInt16_Request_TypeSupport;
            class SetInt16_Request_DataWriter;
            class SetInt16_Request_DataReader;
            #endif

            class SetInt16_Request_ 
            {
              public:
                typedef struct SetInt16_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetInt16_Request_TypeSupport TypeSupport;
                typedef SetInt16_Request_DataWriter DataWriter;
                typedef SetInt16_Request_DataReader DataReader;
                #endif

                DDS_Short   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetInt16_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetInt16_Request_Seq, SetInt16_Request_);

            NDDSUSERDllExport
            RTIBool SetInt16_Request__initialize(
                SetInt16_Request_* self);

            NDDSUSERDllExport
            RTIBool SetInt16_Request__initialize_ex(
                SetInt16_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetInt16_Request__initialize_w_params(
                SetInt16_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetInt16_Request__finalize(
                SetInt16_Request_* self);

            NDDSUSERDllExport
            void SetInt16_Request__finalize_ex(
                SetInt16_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetInt16_Request__finalize_w_params(
                SetInt16_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetInt16_Request__finalize_optional_members(
                SetInt16_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetInt16_Request__copy(
                SetInt16_Request_* dst,
                const SetInt16_Request_* src);

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

            extern const char *SetInt16_Response_TYPENAME;

            struct SetInt16_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetInt16_Response_TypeSupport;
            class SetInt16_Response_DataWriter;
            class SetInt16_Response_DataReader;
            #endif

            class SetInt16_Response_ 
            {
              public:
                typedef struct SetInt16_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetInt16_Response_TypeSupport TypeSupport;
                typedef SetInt16_Response_DataWriter DataWriter;
                typedef SetInt16_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   status_message_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetInt16_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetInt16_Response_Seq, SetInt16_Response_);

            NDDSUSERDllExport
            RTIBool SetInt16_Response__initialize(
                SetInt16_Response_* self);

            NDDSUSERDllExport
            RTIBool SetInt16_Response__initialize_ex(
                SetInt16_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetInt16_Response__initialize_w_params(
                SetInt16_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetInt16_Response__finalize(
                SetInt16_Response_* self);

            NDDSUSERDllExport
            void SetInt16_Response__finalize_ex(
                SetInt16_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetInt16_Response__finalize_w_params(
                SetInt16_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetInt16_Response__finalize_optional_members(
                SetInt16_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetInt16_Response__copy(
                SetInt16_Response_* dst,
                const SetInt16_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ue_msgs  */

#endif /* SetInt16_ */

