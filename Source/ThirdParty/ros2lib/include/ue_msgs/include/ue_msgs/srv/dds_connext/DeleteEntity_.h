

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from DeleteEntity_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef DeleteEntity__1021380199_h
#define DeleteEntity__1021380199_h

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

            extern const char *DeleteEntity_Request_TYPENAME;

            struct DeleteEntity_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DeleteEntity_Request_TypeSupport;
            class DeleteEntity_Request_DataWriter;
            class DeleteEntity_Request_DataReader;
            #endif

            class DeleteEntity_Request_ 
            {
              public:
                typedef struct DeleteEntity_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DeleteEntity_Request_TypeSupport TypeSupport;
                typedef DeleteEntity_Request_DataWriter DataWriter;
                typedef DeleteEntity_Request_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* DeleteEntity_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DeleteEntity_Request_Seq, DeleteEntity_Request_);

            NDDSUSERDllExport
            RTIBool DeleteEntity_Request__initialize(
                DeleteEntity_Request_* self);

            NDDSUSERDllExport
            RTIBool DeleteEntity_Request__initialize_ex(
                DeleteEntity_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DeleteEntity_Request__initialize_w_params(
                DeleteEntity_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DeleteEntity_Request__finalize(
                DeleteEntity_Request_* self);

            NDDSUSERDllExport
            void DeleteEntity_Request__finalize_ex(
                DeleteEntity_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DeleteEntity_Request__finalize_w_params(
                DeleteEntity_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DeleteEntity_Request__finalize_optional_members(
                DeleteEntity_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DeleteEntity_Request__copy(
                DeleteEntity_Request_* dst,
                const DeleteEntity_Request_* src);

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

            extern const char *DeleteEntity_Response_TYPENAME;

            struct DeleteEntity_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class DeleteEntity_Response_TypeSupport;
            class DeleteEntity_Response_DataWriter;
            class DeleteEntity_Response_DataReader;
            #endif

            class DeleteEntity_Response_ 
            {
              public:
                typedef struct DeleteEntity_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef DeleteEntity_Response_TypeSupport TypeSupport;
                typedef DeleteEntity_Response_DataWriter DataWriter;
                typedef DeleteEntity_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* DeleteEntity_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(DeleteEntity_Response_Seq, DeleteEntity_Response_);

            NDDSUSERDllExport
            RTIBool DeleteEntity_Response__initialize(
                DeleteEntity_Response_* self);

            NDDSUSERDllExport
            RTIBool DeleteEntity_Response__initialize_ex(
                DeleteEntity_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool DeleteEntity_Response__initialize_w_params(
                DeleteEntity_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void DeleteEntity_Response__finalize(
                DeleteEntity_Response_* self);

            NDDSUSERDllExport
            void DeleteEntity_Response__finalize_ex(
                DeleteEntity_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void DeleteEntity_Response__finalize_w_params(
                DeleteEntity_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void DeleteEntity_Response__finalize_optional_members(
                DeleteEntity_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool DeleteEntity_Response__copy(
                DeleteEntity_Response_* dst,
                const DeleteEntity_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ue_msgs  */

#endif /* DeleteEntity_ */

