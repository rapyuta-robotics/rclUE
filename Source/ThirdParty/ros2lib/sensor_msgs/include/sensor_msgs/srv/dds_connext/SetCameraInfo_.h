

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetCameraInfo_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetCameraInfo__321311108_h
#define SetCameraInfo__321311108_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/CameraInfo_.h"
namespace sensor_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetCameraInfo_Request_TYPENAME;

            struct SetCameraInfo_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetCameraInfo_Request_TypeSupport;
            class SetCameraInfo_Request_DataWriter;
            class SetCameraInfo_Request_DataReader;
            #endif

            class SetCameraInfo_Request_ 
            {
              public:
                typedef struct SetCameraInfo_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetCameraInfo_Request_TypeSupport TypeSupport;
                typedef SetCameraInfo_Request_DataWriter DataWriter;
                typedef SetCameraInfo_Request_DataReader DataReader;
                #endif

                sensor_msgs::msg::dds_::CameraInfo_   camera_info_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetCameraInfo_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetCameraInfo_Request_Seq, SetCameraInfo_Request_);

            NDDSUSERDllExport
            RTIBool SetCameraInfo_Request__initialize(
                SetCameraInfo_Request_* self);

            NDDSUSERDllExport
            RTIBool SetCameraInfo_Request__initialize_ex(
                SetCameraInfo_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetCameraInfo_Request__initialize_w_params(
                SetCameraInfo_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetCameraInfo_Request__finalize(
                SetCameraInfo_Request_* self);

            NDDSUSERDllExport
            void SetCameraInfo_Request__finalize_ex(
                SetCameraInfo_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetCameraInfo_Request__finalize_w_params(
                SetCameraInfo_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetCameraInfo_Request__finalize_optional_members(
                SetCameraInfo_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetCameraInfo_Request__copy(
                SetCameraInfo_Request_* dst,
                const SetCameraInfo_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace sensor_msgs  */
namespace sensor_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetCameraInfo_Response_TYPENAME;

            struct SetCameraInfo_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetCameraInfo_Response_TypeSupport;
            class SetCameraInfo_Response_DataWriter;
            class SetCameraInfo_Response_DataReader;
            #endif

            class SetCameraInfo_Response_ 
            {
              public:
                typedef struct SetCameraInfo_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetCameraInfo_Response_TypeSupport TypeSupport;
                typedef SetCameraInfo_Response_DataWriter DataWriter;
                typedef SetCameraInfo_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* SetCameraInfo_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetCameraInfo_Response_Seq, SetCameraInfo_Response_);

            NDDSUSERDllExport
            RTIBool SetCameraInfo_Response__initialize(
                SetCameraInfo_Response_* self);

            NDDSUSERDllExport
            RTIBool SetCameraInfo_Response__initialize_ex(
                SetCameraInfo_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetCameraInfo_Response__initialize_w_params(
                SetCameraInfo_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetCameraInfo_Response__finalize(
                SetCameraInfo_Response_* self);

            NDDSUSERDllExport
            void SetCameraInfo_Response__finalize_ex(
                SetCameraInfo_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetCameraInfo_Response__finalize_w_params(
                SetCameraInfo_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetCameraInfo_Response__finalize_optional_members(
                SetCameraInfo_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetCameraInfo_Response__copy(
                SetCameraInfo_Response_* dst,
                const SetCameraInfo_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace sensor_msgs  */

#endif /* SetCameraInfo_ */

