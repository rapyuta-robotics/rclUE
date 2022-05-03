

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetEntityState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetEntityState__1554847619_h
#define SetEntityState__1554847619_h

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

            extern const char *SetEntityState_Request_TYPENAME;

            struct SetEntityState_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetEntityState_Request_TypeSupport;
            class SetEntityState_Request_DataWriter;
            class SetEntityState_Request_DataReader;
            #endif

            class SetEntityState_Request_ 
            {
              public:
                typedef struct SetEntityState_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetEntityState_Request_TypeSupport TypeSupport;
                typedef SetEntityState_Request_DataWriter DataWriter;
                typedef SetEntityState_Request_DataReader DataReader;
                #endif

                ue_msgs::msg::dds_::EntityState_   state_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetEntityState_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetEntityState_Request_Seq, SetEntityState_Request_);

            NDDSUSERDllExport
            RTIBool SetEntityState_Request__initialize(
                SetEntityState_Request_* self);

            NDDSUSERDllExport
            RTIBool SetEntityState_Request__initialize_ex(
                SetEntityState_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetEntityState_Request__initialize_w_params(
                SetEntityState_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetEntityState_Request__finalize(
                SetEntityState_Request_* self);

            NDDSUSERDllExport
            void SetEntityState_Request__finalize_ex(
                SetEntityState_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetEntityState_Request__finalize_w_params(
                SetEntityState_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetEntityState_Request__finalize_optional_members(
                SetEntityState_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetEntityState_Request__copy(
                SetEntityState_Request_* dst,
                const SetEntityState_Request_* src);

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

            extern const char *SetEntityState_Response_TYPENAME;

            struct SetEntityState_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetEntityState_Response_TypeSupport;
            class SetEntityState_Response_DataWriter;
            class SetEntityState_Response_DataReader;
            #endif

            class SetEntityState_Response_ 
            {
              public:
                typedef struct SetEntityState_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetEntityState_Response_TypeSupport TypeSupport;
                typedef SetEntityState_Response_DataWriter DataWriter;
                typedef SetEntityState_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetEntityState_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetEntityState_Response_Seq, SetEntityState_Response_);

            NDDSUSERDllExport
            RTIBool SetEntityState_Response__initialize(
                SetEntityState_Response_* self);

            NDDSUSERDllExport
            RTIBool SetEntityState_Response__initialize_ex(
                SetEntityState_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetEntityState_Response__initialize_w_params(
                SetEntityState_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetEntityState_Response__finalize(
                SetEntityState_Response_* self);

            NDDSUSERDllExport
            void SetEntityState_Response__finalize_ex(
                SetEntityState_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetEntityState_Response__finalize_w_params(
                SetEntityState_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetEntityState_Response__finalize_optional_members(
                SetEntityState_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetEntityState_Response__copy(
                SetEntityState_Response_* dst,
                const SetEntityState_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ue_msgs  */

#endif /* SetEntityState_ */

