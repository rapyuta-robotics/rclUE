

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from SpawnEntity_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef SpawnEntity__465644222_h
#define SpawnEntity__465644222_h

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

            extern const char *SpawnEntity_Request_TYPENAME;

            struct SpawnEntity_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SpawnEntity_Request_TypeSupport;
            class SpawnEntity_Request_DataWriter;
            class SpawnEntity_Request_DataReader;
            #endif

            class SpawnEntity_Request_ 
            {
              public:
                typedef struct SpawnEntity_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SpawnEntity_Request_TypeSupport TypeSupport;
                typedef SpawnEntity_Request_DataWriter DataWriter;
                typedef SpawnEntity_Request_DataReader DataReader;
                #endif

                DDS_Char *   xml_ ;
                DDS_Char *   robot_namespace_ ;
                ue_msgs::msg::dds_::EntityState_   state_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* SpawnEntity_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SpawnEntity_Request_Seq, SpawnEntity_Request_);

            NDDSUSERDllExport
            RTIBool SpawnEntity_Request__initialize(
                SpawnEntity_Request_* self);

            NDDSUSERDllExport
            RTIBool SpawnEntity_Request__initialize_ex(
                SpawnEntity_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SpawnEntity_Request__initialize_w_params(
                SpawnEntity_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SpawnEntity_Request__finalize(
                SpawnEntity_Request_* self);

            NDDSUSERDllExport
            void SpawnEntity_Request__finalize_ex(
                SpawnEntity_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SpawnEntity_Request__finalize_w_params(
                SpawnEntity_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SpawnEntity_Request__finalize_optional_members(
                SpawnEntity_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SpawnEntity_Request__copy(
                SpawnEntity_Request_* dst,
                const SpawnEntity_Request_* src);

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

            extern const char *SpawnEntity_Response_TYPENAME;

            struct SpawnEntity_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class SpawnEntity_Response_TypeSupport;
            class SpawnEntity_Response_DataWriter;
            class SpawnEntity_Response_DataReader;
            #endif

            class SpawnEntity_Response_ 
            {
              public:
                typedef struct SpawnEntity_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef SpawnEntity_Response_TypeSupport TypeSupport;
                typedef SpawnEntity_Response_DataWriter DataWriter;
                typedef SpawnEntity_Response_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* SpawnEntity_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(SpawnEntity_Response_Seq, SpawnEntity_Response_);

            NDDSUSERDllExport
            RTIBool SpawnEntity_Response__initialize(
                SpawnEntity_Response_* self);

            NDDSUSERDllExport
            RTIBool SpawnEntity_Response__initialize_ex(
                SpawnEntity_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool SpawnEntity_Response__initialize_w_params(
                SpawnEntity_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void SpawnEntity_Response__finalize(
                SpawnEntity_Response_* self);

            NDDSUSERDllExport
            void SpawnEntity_Response__finalize_ex(
                SpawnEntity_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void SpawnEntity_Response__finalize_w_params(
                SpawnEntity_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void SpawnEntity_Response__finalize_optional_members(
                SpawnEntity_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool SpawnEntity_Response__copy(
                SpawnEntity_Response_* dst,
                const SpawnEntity_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ue_msgs  */

#endif /* SpawnEntity_ */

