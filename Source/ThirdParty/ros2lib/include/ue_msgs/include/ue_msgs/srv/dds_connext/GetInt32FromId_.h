

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetInt32FromId_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetInt32FromId__978978795_h
#define GetInt32FromId__978978795_h

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

            extern const char *GetInt32FromId_Request_TYPENAME;

            struct GetInt32FromId_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetInt32FromId_Request_TypeSupport;
            class GetInt32FromId_Request_DataWriter;
            class GetInt32FromId_Request_DataReader;
            #endif

            class GetInt32FromId_Request_ 
            {
              public:
                typedef struct GetInt32FromId_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetInt32FromId_Request_TypeSupport TypeSupport;
                typedef GetInt32FromId_Request_DataWriter DataWriter;
                typedef GetInt32FromId_Request_DataReader DataReader;
                #endif

                DDS_Long   id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetInt32FromId_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetInt32FromId_Request_Seq, GetInt32FromId_Request_);

            NDDSUSERDllExport
            RTIBool GetInt32FromId_Request__initialize(
                GetInt32FromId_Request_* self);

            NDDSUSERDllExport
            RTIBool GetInt32FromId_Request__initialize_ex(
                GetInt32FromId_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetInt32FromId_Request__initialize_w_params(
                GetInt32FromId_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetInt32FromId_Request__finalize(
                GetInt32FromId_Request_* self);

            NDDSUSERDllExport
            void GetInt32FromId_Request__finalize_ex(
                GetInt32FromId_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetInt32FromId_Request__finalize_w_params(
                GetInt32FromId_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetInt32FromId_Request__finalize_optional_members(
                GetInt32FromId_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetInt32FromId_Request__copy(
                GetInt32FromId_Request_* dst,
                const GetInt32FromId_Request_* src);

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

            extern const char *GetInt32FromId_Response_TYPENAME;

            struct GetInt32FromId_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetInt32FromId_Response_TypeSupport;
            class GetInt32FromId_Response_DataWriter;
            class GetInt32FromId_Response_DataReader;
            #endif

            class GetInt32FromId_Response_ 
            {
              public:
                typedef struct GetInt32FromId_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetInt32FromId_Response_TypeSupport TypeSupport;
                typedef GetInt32FromId_Response_DataWriter DataWriter;
                typedef GetInt32FromId_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   remarks_ ;
                DDS_Long   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetInt32FromId_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetInt32FromId_Response_Seq, GetInt32FromId_Response_);

            NDDSUSERDllExport
            RTIBool GetInt32FromId_Response__initialize(
                GetInt32FromId_Response_* self);

            NDDSUSERDllExport
            RTIBool GetInt32FromId_Response__initialize_ex(
                GetInt32FromId_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetInt32FromId_Response__initialize_w_params(
                GetInt32FromId_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetInt32FromId_Response__finalize(
                GetInt32FromId_Response_* self);

            NDDSUSERDllExport
            void GetInt32FromId_Response__finalize_ex(
                GetInt32FromId_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetInt32FromId_Response__finalize_w_params(
                GetInt32FromId_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetInt32FromId_Response__finalize_optional_members(
                GetInt32FromId_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetInt32FromId_Response__copy(
                GetInt32FromId_Response_* dst,
                const GetInt32FromId_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ue_msgs  */

#endif /* GetInt32FromId_ */

