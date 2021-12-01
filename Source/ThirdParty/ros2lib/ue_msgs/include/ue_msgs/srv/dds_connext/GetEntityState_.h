

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GetEntityState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GetEntityState__11119798_h
#define GetEntityState__11119798_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "ue_msgs/msg/dds_connext/EntityState_.h"
namespace ue_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *GetEntityState_Request_TYPENAME;

            struct GetEntityState_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetEntityState_Request_TypeSupport;
            class GetEntityState_Request_DataWriter;
            class GetEntityState_Request_DataReader;
            #endif

            class GetEntityState_Request_ 
            {
              public:
                typedef struct GetEntityState_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetEntityState_Request_TypeSupport TypeSupport;
                typedef GetEntityState_Request_DataWriter DataWriter;
                typedef GetEntityState_Request_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                DDS_Char *   reference_frame_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetEntityState_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetEntityState_Request_Seq, GetEntityState_Request_);

            NDDSUSERDllExport
            RTIBool GetEntityState_Request__initialize(
                GetEntityState_Request_* self);

            NDDSUSERDllExport
            RTIBool GetEntityState_Request__initialize_ex(
                GetEntityState_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetEntityState_Request__initialize_w_params(
                GetEntityState_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetEntityState_Request__finalize(
                GetEntityState_Request_* self);

            NDDSUSERDllExport
            void GetEntityState_Request__finalize_ex(
                GetEntityState_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetEntityState_Request__finalize_w_params(
                GetEntityState_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetEntityState_Request__finalize_optional_members(
                GetEntityState_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetEntityState_Request__copy(
                GetEntityState_Request_* dst,
                const GetEntityState_Request_* src);

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

            extern const char *GetEntityState_Response_TYPENAME;

            struct GetEntityState_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GetEntityState_Response_TypeSupport;
            class GetEntityState_Response_DataWriter;
            class GetEntityState_Response_DataReader;
            #endif

            class GetEntityState_Response_ 
            {
              public:
                typedef struct GetEntityState_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GetEntityState_Response_TypeSupport TypeSupport;
                typedef GetEntityState_Response_DataWriter DataWriter;
                typedef GetEntityState_Response_DataReader DataReader;
                #endif

                ue_msgs::msg::dds_::EntityState_   state_ ;
                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GetEntityState_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GetEntityState_Response_Seq, GetEntityState_Response_);

            NDDSUSERDllExport
            RTIBool GetEntityState_Response__initialize(
                GetEntityState_Response_* self);

            NDDSUSERDllExport
            RTIBool GetEntityState_Response__initialize_ex(
                GetEntityState_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GetEntityState_Response__initialize_w_params(
                GetEntityState_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GetEntityState_Response__finalize(
                GetEntityState_Response_* self);

            NDDSUSERDllExport
            void GetEntityState_Response__finalize_ex(
                GetEntityState_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GetEntityState_Response__finalize_w_params(
                GetEntityState_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GetEntityState_Response__finalize_optional_members(
                GetEntityState_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GetEntityState_Response__copy(
                GetEntityState_Response_* dst,
                const GetEntityState_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ue_msgs  */

#endif /* GetEntityState_ */

