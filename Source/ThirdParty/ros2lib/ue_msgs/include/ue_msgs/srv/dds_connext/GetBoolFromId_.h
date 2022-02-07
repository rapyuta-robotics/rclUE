

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetBoolFromId_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetBoolFromId__443971744_h
#define GetBoolFromId__443971744_h

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

            extern const char *GetBoolFromId_Request_TYPENAME;

            struct GetBoolFromId_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetBoolFromId_Request_TypeSupport;
            class GetBoolFromId_Request_DataWriter;
            class GetBoolFromId_Request_DataReader;
            #endif

            class GetBoolFromId_Request_ 
            {
              public:
                typedef struct GetBoolFromId_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetBoolFromId_Request_TypeSupport TypeSupport;
                typedef GetBoolFromId_Request_DataWriter DataWriter;
                typedef GetBoolFromId_Request_DataReader DataReader;
                #endif

                DDS_Long   id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetBoolFromId_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetBoolFromId_Request_Seq, GetBoolFromId_Request_);

            NDDSUSERDllExport
            RTIBool GetBoolFromId_Request__initialize(
                GetBoolFromId_Request_* self);

            NDDSUSERDllExport
            RTIBool GetBoolFromId_Request__initialize_ex(
                GetBoolFromId_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetBoolFromId_Request__initialize_w_params(
                GetBoolFromId_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetBoolFromId_Request__finalize(
                GetBoolFromId_Request_* self);

            NDDSUSERDllExport
            void GetBoolFromId_Request__finalize_ex(
                GetBoolFromId_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetBoolFromId_Request__finalize_w_params(
                GetBoolFromId_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetBoolFromId_Request__finalize_optional_members(
                GetBoolFromId_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetBoolFromId_Request__copy(
                GetBoolFromId_Request_* dst,
                const GetBoolFromId_Request_* src);

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

            extern const char *GetBoolFromId_Response_TYPENAME;

            struct GetBoolFromId_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetBoolFromId_Response_TypeSupport;
            class GetBoolFromId_Response_DataWriter;
            class GetBoolFromId_Response_DataReader;
            #endif

            class GetBoolFromId_Response_ 
            {
              public:
                typedef struct GetBoolFromId_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetBoolFromId_Response_TypeSupport TypeSupport;
                typedef GetBoolFromId_Response_DataWriter DataWriter;
                typedef GetBoolFromId_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;
                DDS_Char *   remarks_ ;
                DDS_Boolean   data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetBoolFromId_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetBoolFromId_Response_Seq, GetBoolFromId_Response_);

            NDDSUSERDllExport
            RTIBool GetBoolFromId_Response__initialize(
                GetBoolFromId_Response_* self);

            NDDSUSERDllExport
            RTIBool GetBoolFromId_Response__initialize_ex(
                GetBoolFromId_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetBoolFromId_Response__initialize_w_params(
                GetBoolFromId_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetBoolFromId_Response__finalize(
                GetBoolFromId_Response_* self);

            NDDSUSERDllExport
            void GetBoolFromId_Response__finalize_ex(
                GetBoolFromId_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetBoolFromId_Response__finalize_w_params(
                GetBoolFromId_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetBoolFromId_Response__finalize_optional_members(
                GetBoolFromId_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetBoolFromId_Response__copy(
                GetBoolFromId_Response_* dst,
                const GetBoolFromId_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ue_msgs  */

#endif /* GetBoolFromId_ */

