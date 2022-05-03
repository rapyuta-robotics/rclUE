

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LookupTransform_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LookupTransform_Plugin_1421503919_h
#define LookupTransform_Plugin_1421503919_h

#include "LookupTransform_.h"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Duration_Plugin.h"
#include "builtin_interfaces/msg/dds_connext/Time_Plugin.h"
#include "geometry_msgs/msg/dds_connext/TransformStamped_Plugin.h"
#include "tf2_msgs/msg/dds_connext/TF2Error_Plugin.h"
#include "unique_identifier_msgs/msg/dds_connext/UUID_Plugin.h"

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            #define LookupTransform_Goal_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define LookupTransform_Goal_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LookupTransform_Goal_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define LookupTransform_Goal_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LookupTransform_Goal_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LookupTransform_Goal_*
            LookupTransform_Goal_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LookupTransform_Goal_*
            LookupTransform_Goal_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LookupTransform_Goal_*
            LookupTransform_Goal_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Goal_PluginSupport_copy_data(
                LookupTransform_Goal_ *out,
                const LookupTransform_Goal_ *in);

            NDDSUSERDllExport extern void 
            LookupTransform_Goal_PluginSupport_destroy_data_w_params(
                LookupTransform_Goal_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LookupTransform_Goal_PluginSupport_destroy_data_ex(
                LookupTransform_Goal_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LookupTransform_Goal_PluginSupport_destroy_data(
                LookupTransform_Goal_ *sample);

            NDDSUSERDllExport extern void 
            LookupTransform_Goal_PluginSupport_print_data(
                const LookupTransform_Goal_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LookupTransform_Goal_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LookupTransform_Goal_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LookupTransform_Goal_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LookupTransform_Goal_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LookupTransform_Goal_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Goal_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Goal_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Goal_ *out,
                const LookupTransform_Goal_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Goal_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_Goal_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Goal_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Goal_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_Goal_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LookupTransform_Goal_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Goal_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Goal_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_Goal_Plugin_deserialize_from_cdr_buffer(
                LookupTransform_Goal_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            LookupTransform_Goal_Plugin_data_to_string(
                const LookupTransform_Goal_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            LookupTransform_Goal_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Goal_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Goal_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Goal_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            LookupTransform_Goal_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const LookupTransform_Goal_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LookupTransform_Goal_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Goal_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Goal_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Goal_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_Goal_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Goal_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Goal_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Goal_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Goal_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_Goal_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Goal_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LookupTransform_Goal_Plugin_new(void);

            NDDSUSERDllExport extern void
            LookupTransform_Goal_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            #define LookupTransform_SendGoal_Request_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define LookupTransform_SendGoal_Request_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LookupTransform_SendGoal_Request_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define LookupTransform_SendGoal_Request_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LookupTransform_SendGoal_Request_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LookupTransform_SendGoal_Request_*
            LookupTransform_SendGoal_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LookupTransform_SendGoal_Request_*
            LookupTransform_SendGoal_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LookupTransform_SendGoal_Request_*
            LookupTransform_SendGoal_Request_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Request_PluginSupport_copy_data(
                LookupTransform_SendGoal_Request_ *out,
                const LookupTransform_SendGoal_Request_ *in);

            NDDSUSERDllExport extern void 
            LookupTransform_SendGoal_Request_PluginSupport_destroy_data_w_params(
                LookupTransform_SendGoal_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LookupTransform_SendGoal_Request_PluginSupport_destroy_data_ex(
                LookupTransform_SendGoal_Request_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LookupTransform_SendGoal_Request_PluginSupport_destroy_data(
                LookupTransform_SendGoal_Request_ *sample);

            NDDSUSERDllExport extern void 
            LookupTransform_SendGoal_Request_PluginSupport_print_data(
                const LookupTransform_SendGoal_Request_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LookupTransform_SendGoal_Request_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LookupTransform_SendGoal_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LookupTransform_SendGoal_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LookupTransform_SendGoal_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LookupTransform_SendGoal_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Request_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Request_ *out,
                const LookupTransform_SendGoal_Request_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_SendGoal_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_SendGoal_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LookupTransform_SendGoal_Request_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_SendGoal_Request_Plugin_deserialize_from_cdr_buffer(
                LookupTransform_SendGoal_Request_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            LookupTransform_SendGoal_Request_Plugin_data_to_string(
                const LookupTransform_SendGoal_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            LookupTransform_SendGoal_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_SendGoal_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_SendGoal_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_SendGoal_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            LookupTransform_SendGoal_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const LookupTransform_SendGoal_Request_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LookupTransform_SendGoal_Request_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_SendGoal_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_SendGoal_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_SendGoal_Request_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Request_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Request_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_SendGoal_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LookupTransform_SendGoal_Request_Plugin_new(void);

            NDDSUSERDllExport extern void
            LookupTransform_SendGoal_Request_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            #define LookupTransform_SendGoal_Response_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define LookupTransform_SendGoal_Response_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LookupTransform_SendGoal_Response_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define LookupTransform_SendGoal_Response_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LookupTransform_SendGoal_Response_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LookupTransform_SendGoal_Response_*
            LookupTransform_SendGoal_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LookupTransform_SendGoal_Response_*
            LookupTransform_SendGoal_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LookupTransform_SendGoal_Response_*
            LookupTransform_SendGoal_Response_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Response_PluginSupport_copy_data(
                LookupTransform_SendGoal_Response_ *out,
                const LookupTransform_SendGoal_Response_ *in);

            NDDSUSERDllExport extern void 
            LookupTransform_SendGoal_Response_PluginSupport_destroy_data_w_params(
                LookupTransform_SendGoal_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LookupTransform_SendGoal_Response_PluginSupport_destroy_data_ex(
                LookupTransform_SendGoal_Response_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LookupTransform_SendGoal_Response_PluginSupport_destroy_data(
                LookupTransform_SendGoal_Response_ *sample);

            NDDSUSERDllExport extern void 
            LookupTransform_SendGoal_Response_PluginSupport_print_data(
                const LookupTransform_SendGoal_Response_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LookupTransform_SendGoal_Response_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LookupTransform_SendGoal_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LookupTransform_SendGoal_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LookupTransform_SendGoal_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LookupTransform_SendGoal_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Response_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Response_ *out,
                const LookupTransform_SendGoal_Response_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_SendGoal_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_SendGoal_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LookupTransform_SendGoal_Response_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_SendGoal_Response_Plugin_deserialize_from_cdr_buffer(
                LookupTransform_SendGoal_Response_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            LookupTransform_SendGoal_Response_Plugin_data_to_string(
                const LookupTransform_SendGoal_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            LookupTransform_SendGoal_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_SendGoal_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_SendGoal_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_SendGoal_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            LookupTransform_SendGoal_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const LookupTransform_SendGoal_Response_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LookupTransform_SendGoal_Response_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_SendGoal_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_SendGoal_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_SendGoal_Response_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Response_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_SendGoal_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Response_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_SendGoal_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_SendGoal_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LookupTransform_SendGoal_Response_Plugin_new(void);

            NDDSUSERDllExport extern void
            LookupTransform_SendGoal_Response_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            #define LookupTransform_Result_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define LookupTransform_Result_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LookupTransform_Result_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define LookupTransform_Result_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LookupTransform_Result_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LookupTransform_Result_*
            LookupTransform_Result_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LookupTransform_Result_*
            LookupTransform_Result_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LookupTransform_Result_*
            LookupTransform_Result_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Result_PluginSupport_copy_data(
                LookupTransform_Result_ *out,
                const LookupTransform_Result_ *in);

            NDDSUSERDllExport extern void 
            LookupTransform_Result_PluginSupport_destroy_data_w_params(
                LookupTransform_Result_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LookupTransform_Result_PluginSupport_destroy_data_ex(
                LookupTransform_Result_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LookupTransform_Result_PluginSupport_destroy_data(
                LookupTransform_Result_ *sample);

            NDDSUSERDllExport extern void 
            LookupTransform_Result_PluginSupport_print_data(
                const LookupTransform_Result_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LookupTransform_Result_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LookupTransform_Result_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LookupTransform_Result_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LookupTransform_Result_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LookupTransform_Result_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Result_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Result_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Result_ *out,
                const LookupTransform_Result_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Result_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_Result_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Result_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Result_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_Result_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LookupTransform_Result_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Result_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Result_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_Result_Plugin_deserialize_from_cdr_buffer(
                LookupTransform_Result_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            LookupTransform_Result_Plugin_data_to_string(
                const LookupTransform_Result_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            LookupTransform_Result_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Result_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Result_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Result_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            LookupTransform_Result_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const LookupTransform_Result_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LookupTransform_Result_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Result_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Result_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Result_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_Result_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Result_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Result_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Result_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Result_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_Result_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Result_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LookupTransform_Result_Plugin_new(void);

            NDDSUSERDllExport extern void
            LookupTransform_Result_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            #define LookupTransform_GetResult_Request_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define LookupTransform_GetResult_Request_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LookupTransform_GetResult_Request_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define LookupTransform_GetResult_Request_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LookupTransform_GetResult_Request_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LookupTransform_GetResult_Request_*
            LookupTransform_GetResult_Request_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LookupTransform_GetResult_Request_*
            LookupTransform_GetResult_Request_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LookupTransform_GetResult_Request_*
            LookupTransform_GetResult_Request_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Request_PluginSupport_copy_data(
                LookupTransform_GetResult_Request_ *out,
                const LookupTransform_GetResult_Request_ *in);

            NDDSUSERDllExport extern void 
            LookupTransform_GetResult_Request_PluginSupport_destroy_data_w_params(
                LookupTransform_GetResult_Request_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LookupTransform_GetResult_Request_PluginSupport_destroy_data_ex(
                LookupTransform_GetResult_Request_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LookupTransform_GetResult_Request_PluginSupport_destroy_data(
                LookupTransform_GetResult_Request_ *sample);

            NDDSUSERDllExport extern void 
            LookupTransform_GetResult_Request_PluginSupport_print_data(
                const LookupTransform_GetResult_Request_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LookupTransform_GetResult_Request_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LookupTransform_GetResult_Request_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LookupTransform_GetResult_Request_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LookupTransform_GetResult_Request_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LookupTransform_GetResult_Request_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Request_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Request_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Request_ *out,
                const LookupTransform_GetResult_Request_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Request_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_GetResult_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Request_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Request_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_GetResult_Request_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LookupTransform_GetResult_Request_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Request_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Request_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_GetResult_Request_Plugin_deserialize_from_cdr_buffer(
                LookupTransform_GetResult_Request_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            LookupTransform_GetResult_Request_Plugin_data_to_string(
                const LookupTransform_GetResult_Request_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            LookupTransform_GetResult_Request_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_GetResult_Request_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_GetResult_Request_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_GetResult_Request_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            LookupTransform_GetResult_Request_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const LookupTransform_GetResult_Request_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LookupTransform_GetResult_Request_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_GetResult_Request_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_GetResult_Request_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Request_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_GetResult_Request_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Request_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Request_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Request_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Request_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_GetResult_Request_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Request_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LookupTransform_GetResult_Request_Plugin_new(void);

            NDDSUSERDllExport extern void
            LookupTransform_GetResult_Request_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            #define LookupTransform_GetResult_Response_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define LookupTransform_GetResult_Response_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LookupTransform_GetResult_Response_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define LookupTransform_GetResult_Response_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LookupTransform_GetResult_Response_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LookupTransform_GetResult_Response_*
            LookupTransform_GetResult_Response_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LookupTransform_GetResult_Response_*
            LookupTransform_GetResult_Response_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LookupTransform_GetResult_Response_*
            LookupTransform_GetResult_Response_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Response_PluginSupport_copy_data(
                LookupTransform_GetResult_Response_ *out,
                const LookupTransform_GetResult_Response_ *in);

            NDDSUSERDllExport extern void 
            LookupTransform_GetResult_Response_PluginSupport_destroy_data_w_params(
                LookupTransform_GetResult_Response_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LookupTransform_GetResult_Response_PluginSupport_destroy_data_ex(
                LookupTransform_GetResult_Response_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LookupTransform_GetResult_Response_PluginSupport_destroy_data(
                LookupTransform_GetResult_Response_ *sample);

            NDDSUSERDllExport extern void 
            LookupTransform_GetResult_Response_PluginSupport_print_data(
                const LookupTransform_GetResult_Response_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LookupTransform_GetResult_Response_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LookupTransform_GetResult_Response_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LookupTransform_GetResult_Response_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LookupTransform_GetResult_Response_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LookupTransform_GetResult_Response_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Response_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Response_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Response_ *out,
                const LookupTransform_GetResult_Response_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Response_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_GetResult_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Response_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Response_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_GetResult_Response_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LookupTransform_GetResult_Response_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Response_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Response_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_GetResult_Response_Plugin_deserialize_from_cdr_buffer(
                LookupTransform_GetResult_Response_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            LookupTransform_GetResult_Response_Plugin_data_to_string(
                const LookupTransform_GetResult_Response_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            LookupTransform_GetResult_Response_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_GetResult_Response_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_GetResult_Response_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_GetResult_Response_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            LookupTransform_GetResult_Response_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const LookupTransform_GetResult_Response_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LookupTransform_GetResult_Response_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_GetResult_Response_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_GetResult_Response_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Response_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_GetResult_Response_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Response_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Response_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_GetResult_Response_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Response_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_GetResult_Response_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_GetResult_Response_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LookupTransform_GetResult_Response_Plugin_new(void);

            NDDSUSERDllExport extern void
            LookupTransform_GetResult_Response_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            #define LookupTransform_Feedback_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define LookupTransform_Feedback_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LookupTransform_Feedback_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define LookupTransform_Feedback_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LookupTransform_Feedback_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LookupTransform_Feedback_*
            LookupTransform_Feedback_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LookupTransform_Feedback_*
            LookupTransform_Feedback_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LookupTransform_Feedback_*
            LookupTransform_Feedback_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Feedback_PluginSupport_copy_data(
                LookupTransform_Feedback_ *out,
                const LookupTransform_Feedback_ *in);

            NDDSUSERDllExport extern void 
            LookupTransform_Feedback_PluginSupport_destroy_data_w_params(
                LookupTransform_Feedback_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LookupTransform_Feedback_PluginSupport_destroy_data_ex(
                LookupTransform_Feedback_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LookupTransform_Feedback_PluginSupport_destroy_data(
                LookupTransform_Feedback_ *sample);

            NDDSUSERDllExport extern void 
            LookupTransform_Feedback_PluginSupport_print_data(
                const LookupTransform_Feedback_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LookupTransform_Feedback_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LookupTransform_Feedback_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LookupTransform_Feedback_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LookupTransform_Feedback_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LookupTransform_Feedback_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Feedback_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Feedback_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Feedback_ *out,
                const LookupTransform_Feedback_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Feedback_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_Feedback_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Feedback_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Feedback_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_Feedback_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LookupTransform_Feedback_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Feedback_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Feedback_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_Feedback_Plugin_deserialize_from_cdr_buffer(
                LookupTransform_Feedback_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            LookupTransform_Feedback_Plugin_data_to_string(
                const LookupTransform_Feedback_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            LookupTransform_Feedback_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Feedback_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Feedback_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Feedback_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            LookupTransform_Feedback_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const LookupTransform_Feedback_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LookupTransform_Feedback_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Feedback_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_Feedback_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Feedback_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_Feedback_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Feedback_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Feedback_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_Feedback_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Feedback_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_Feedback_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_Feedback_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LookupTransform_Feedback_Plugin_new(void);

            NDDSUSERDllExport extern void
            LookupTransform_Feedback_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */
namespace tf2_msgs {
    namespace action {
        namespace dds_ {

            #define LookupTransform_FeedbackMessage_Plugin_get_sample PRESTypePluginDefaultEndpointData_getSample 
            #define LookupTransform_FeedbackMessage_Plugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
            #define LookupTransform_FeedbackMessage_Plugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer 

            #define LookupTransform_FeedbackMessage_Plugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
            #define LookupTransform_FeedbackMessage_Plugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

            /* --------------------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------------------- */

            NDDSUSERDllExport extern LookupTransform_FeedbackMessage_*
            LookupTransform_FeedbackMessage_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params);

            NDDSUSERDllExport extern LookupTransform_FeedbackMessage_*
            LookupTransform_FeedbackMessage_PluginSupport_create_data_ex(RTIBool allocate_pointers);

            NDDSUSERDllExport extern LookupTransform_FeedbackMessage_*
            LookupTransform_FeedbackMessage_PluginSupport_create_data(void);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_FeedbackMessage_PluginSupport_copy_data(
                LookupTransform_FeedbackMessage_ *out,
                const LookupTransform_FeedbackMessage_ *in);

            NDDSUSERDllExport extern void 
            LookupTransform_FeedbackMessage_PluginSupport_destroy_data_w_params(
                LookupTransform_FeedbackMessage_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params);

            NDDSUSERDllExport extern void 
            LookupTransform_FeedbackMessage_PluginSupport_destroy_data_ex(
                LookupTransform_FeedbackMessage_ *sample,RTIBool deallocate_pointers);

            NDDSUSERDllExport extern void 
            LookupTransform_FeedbackMessage_PluginSupport_destroy_data(
                LookupTransform_FeedbackMessage_ *sample);

            NDDSUSERDllExport extern void 
            LookupTransform_FeedbackMessage_PluginSupport_print_data(
                const LookupTransform_FeedbackMessage_ *sample,
                const char *desc,
                unsigned int indent);

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            NDDSUSERDllExport extern PRESTypePluginParticipantData 
            LookupTransform_FeedbackMessage_Plugin_on_participant_attached(
                void *registration_data, 
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration, 
                void *container_plugin_context,
                RTICdrTypeCode *typeCode);

            NDDSUSERDllExport extern void 
            LookupTransform_FeedbackMessage_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data);

            NDDSUSERDllExport extern PRESTypePluginEndpointData 
            LookupTransform_FeedbackMessage_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *container_plugin_context);

            NDDSUSERDllExport extern void 
            LookupTransform_FeedbackMessage_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data);

            NDDSUSERDllExport extern void    
            LookupTransform_FeedbackMessage_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_FeedbackMessage_ *sample,
                void *handle);    

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_FeedbackMessage_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_FeedbackMessage_ *out,
                const LookupTransform_FeedbackMessage_ *in);

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_FeedbackMessage_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_FeedbackMessage_ *sample,
                struct RTICdrStream *stream, 
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_FeedbackMessage_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_FeedbackMessage_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_FeedbackMessage_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const LookupTransform_FeedbackMessage_ *sample); 

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_FeedbackMessage_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_FeedbackMessage_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_FeedbackMessage_Plugin_deserialize_from_cdr_buffer(
                LookupTransform_FeedbackMessage_ *sample,
                const char * buffer,
                unsigned int length);    
            NDDSUSERDllExport extern DDS_ReturnCode_t
            LookupTransform_FeedbackMessage_Plugin_data_to_string(
                const LookupTransform_FeedbackMessage_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property);    

            NDDSUSERDllExport extern RTIBool
            LookupTransform_FeedbackMessage_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream, 
                RTIBool skip_encapsulation,  
                RTIBool skip_sample, 
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_FeedbackMessage_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);    

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_FeedbackMessage_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_FeedbackMessage_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int
            LookupTransform_FeedbackMessage_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const LookupTransform_FeedbackMessage_ * sample);

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */
            NDDSUSERDllExport extern PRESTypePluginKeyKind 
            LookupTransform_FeedbackMessage_Plugin_get_key_kind(void);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_FeedbackMessage_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern unsigned int 
            LookupTransform_FeedbackMessage_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_FeedbackMessage_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const LookupTransform_FeedbackMessage_ *sample,
                struct RTICdrStream *stream,
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_FeedbackMessage_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_FeedbackMessage_ * sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool 
            LookupTransform_FeedbackMessage_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_FeedbackMessage_ ** sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos);

            NDDSUSERDllExport extern RTIBool
            LookupTransform_FeedbackMessage_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                LookupTransform_FeedbackMessage_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos);

            /* Plugin Functions */
            NDDSUSERDllExport extern struct PRESTypePlugin*
            LookupTransform_FeedbackMessage_Plugin_new(void);

            NDDSUSERDllExport extern void
            LookupTransform_FeedbackMessage_Plugin_delete(struct PRESTypePlugin *);

        } /* namespace dds_  */
    } /* namespace action  */
} /* namespace tf2_msgs  */

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* LookupTransform_Plugin_1421503919_h */

