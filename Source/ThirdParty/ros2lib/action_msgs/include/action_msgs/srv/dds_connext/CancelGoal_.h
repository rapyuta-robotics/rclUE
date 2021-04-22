

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from CancelGoal_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef CancelGoal__1327662035_h
#define CancelGoal__1327662035_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "action_msgs/msg/dds_connext/GoalInfo_.h"
namespace action_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *CancelGoal_Request_TYPENAME;

            struct CancelGoal_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CancelGoal_Request_TypeSupport;
            class CancelGoal_Request_DataWriter;
            class CancelGoal_Request_DataReader;
            #endif

            class CancelGoal_Request_ 
            {
              public:
                typedef struct CancelGoal_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CancelGoal_Request_TypeSupport TypeSupport;
                typedef CancelGoal_Request_DataWriter DataWriter;
                typedef CancelGoal_Request_DataReader DataReader;
                #endif

                action_msgs::msg::dds_::GoalInfo_   goal_info_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CancelGoal_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CancelGoal_Request_Seq, CancelGoal_Request_);

            NDDSUSERDllExport
            RTIBool CancelGoal_Request__initialize(
                CancelGoal_Request_* self);

            NDDSUSERDllExport
            RTIBool CancelGoal_Request__initialize_ex(
                CancelGoal_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CancelGoal_Request__initialize_w_params(
                CancelGoal_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CancelGoal_Request__finalize(
                CancelGoal_Request_* self);

            NDDSUSERDllExport
            void CancelGoal_Request__finalize_ex(
                CancelGoal_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CancelGoal_Request__finalize_w_params(
                CancelGoal_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CancelGoal_Request__finalize_optional_members(
                CancelGoal_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CancelGoal_Request__copy(
                CancelGoal_Request_* dst,
                const CancelGoal_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace action_msgs  */
namespace action_msgs {
    namespace srv {
        namespace dds_ {
            namespace CancelGoal_Response_Constants {
                static const DDS_Octet ERROR_NONE_= 0;
                static const DDS_Octet ERROR_REJECTED_= 1;
                static const DDS_Octet ERROR_UNKNOWN_GOAL_ID_= 2;
                static const DDS_Octet ERROR_GOAL_TERMINATED_= 3;
            } /* namespace CancelGoal_Response_Constants  */

            extern const char *CancelGoal_Response_TYPENAME;

            struct CancelGoal_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class CancelGoal_Response_TypeSupport;
            class CancelGoal_Response_DataWriter;
            class CancelGoal_Response_DataReader;
            #endif

            class CancelGoal_Response_ 
            {
              public:
                typedef struct CancelGoal_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef CancelGoal_Response_TypeSupport TypeSupport;
                typedef CancelGoal_Response_DataWriter DataWriter;
                typedef CancelGoal_Response_DataReader DataReader;
                #endif

                DDS_Octet   return_code_ ;
                action_msgs::msg::dds_::GoalInfo_Seq  goals_canceling_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* CancelGoal_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(CancelGoal_Response_Seq, CancelGoal_Response_);

            NDDSUSERDllExport
            RTIBool CancelGoal_Response__initialize(
                CancelGoal_Response_* self);

            NDDSUSERDllExport
            RTIBool CancelGoal_Response__initialize_ex(
                CancelGoal_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool CancelGoal_Response__initialize_w_params(
                CancelGoal_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void CancelGoal_Response__finalize(
                CancelGoal_Response_* self);

            NDDSUSERDllExport
            void CancelGoal_Response__finalize_ex(
                CancelGoal_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void CancelGoal_Response__finalize_w_params(
                CancelGoal_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void CancelGoal_Response__finalize_optional_members(
                CancelGoal_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool CancelGoal_Response__copy(
                CancelGoal_Response_* dst,
                const CancelGoal_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace action_msgs  */

#endif /* CancelGoal_ */

