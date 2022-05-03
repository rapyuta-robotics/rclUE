

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SetMap_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SetMap__460795926_h
#define SetMap__460795926_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/PoseWithCovarianceStamped_.h"
#include "nav_msgs/msg/dds_connext/OccupancyGrid_.h"
namespace nav_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetMap_Request_TYPENAME;

            struct SetMap_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetMap_Request_TypeSupport;
            class SetMap_Request_DataWriter;
            class SetMap_Request_DataReader;
            #endif

            class SetMap_Request_ 
            {
              public:
                typedef struct SetMap_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetMap_Request_TypeSupport TypeSupport;
                typedef SetMap_Request_DataWriter DataWriter;
                typedef SetMap_Request_DataReader DataReader;
                #endif

                nav_msgs::msg::dds_::OccupancyGrid_   map_ ;
                geometry_msgs::msg::dds_::PoseWithCovarianceStamped_   initial_pose_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetMap_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetMap_Request_Seq, SetMap_Request_);

            NDDSUSERDllExport
            RTIBool SetMap_Request__initialize(
                SetMap_Request_* self);

            NDDSUSERDllExport
            RTIBool SetMap_Request__initialize_ex(
                SetMap_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetMap_Request__initialize_w_params(
                SetMap_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetMap_Request__finalize(
                SetMap_Request_* self);

            NDDSUSERDllExport
            void SetMap_Request__finalize_ex(
                SetMap_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetMap_Request__finalize_w_params(
                SetMap_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetMap_Request__finalize_optional_members(
                SetMap_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetMap_Request__copy(
                SetMap_Request_* dst,
                const SetMap_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace nav_msgs  */
namespace nav_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *SetMap_Response_TYPENAME;

            struct SetMap_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SetMap_Response_TypeSupport;
            class SetMap_Response_DataWriter;
            class SetMap_Response_DataReader;
            #endif

            class SetMap_Response_ 
            {
              public:
                typedef struct SetMap_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SetMap_Response_TypeSupport TypeSupport;
                typedef SetMap_Response_DataWriter DataWriter;
                typedef SetMap_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SetMap_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SetMap_Response_Seq, SetMap_Response_);

            NDDSUSERDllExport
            RTIBool SetMap_Response__initialize(
                SetMap_Response_* self);

            NDDSUSERDllExport
            RTIBool SetMap_Response__initialize_ex(
                SetMap_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SetMap_Response__initialize_w_params(
                SetMap_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SetMap_Response__finalize(
                SetMap_Response_* self);

            NDDSUSERDllExport
            void SetMap_Response__finalize_ex(
                SetMap_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SetMap_Response__finalize_w_params(
                SetMap_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SetMap_Response__finalize_optional_members(
                SetMap_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SetMap_Response__copy(
                SetMap_Response_* dst,
                const SetMap_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace nav_msgs  */

#endif /* SetMap_ */

