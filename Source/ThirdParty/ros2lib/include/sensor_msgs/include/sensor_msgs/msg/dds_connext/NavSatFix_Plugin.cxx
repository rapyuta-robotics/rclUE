
/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from NavSatFix_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#include <string.h>

#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif

#ifndef osapi_type_h
#include "osapi/osapi_type.h"
#endif
#ifndef osapi_heap_h
#include "osapi/osapi_heap.h"
#endif

#ifndef osapi_utility_h
#include "osapi/osapi_utility.h"
#endif

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif

#ifndef cdr_type_object_h
#include "cdr/cdr_typeObject.h"
#endif

#ifndef cdr_encapsulation_h
#include "cdr/cdr_encapsulation.h"
#endif

#ifndef cdr_stream_h
#include "cdr/cdr_stream.h"
#endif

#ifndef cdr_log_h
#include "cdr/cdr_log.h"
#endif

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#define RTI_CDR_CURRENT_SUBMODULE RTI_CDR_SUBMODULE_MASK_STREAM

#include <new>

#include "NavSatFix_Plugin.h"

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {
            namespace NavSatFix_Constants {
            } /* namespace NavSatFix_Constants  */

            /* ----------------------------------------------------------------------------
            *  Type NavSatFix_
            * -------------------------------------------------------------------------- */

            /* -----------------------------------------------------------------------------
            Support functions:
            * -------------------------------------------------------------------------- */

            NavSatFix_*
            NavSatFix_PluginSupport_create_data_w_params(
                const struct DDS_TypeAllocationParams_t * alloc_params) 
            {
                NavSatFix_ *sample = NULL;

                sample = new (std::nothrow) NavSatFix_ ;
                if (sample == NULL) {
                    return NULL;
                }

                if (!sensor_msgs::msg::dds_::NavSatFix__initialize_w_params(sample,alloc_params)) {
                    delete  sample;
                    sample=NULL;
                }
                return sample; 
            } 

            NavSatFix_ *
            NavSatFix_PluginSupport_create_data_ex(RTIBool allocate_pointers) 
            {
                NavSatFix_ *sample = NULL;

                sample = new (std::nothrow) NavSatFix_ ;

                if(sample == NULL) {
                    return NULL;
                }

                if (!sensor_msgs::msg::dds_::NavSatFix__initialize_ex(sample,allocate_pointers, RTI_TRUE)) {
                    delete  sample;
                    sample=NULL;
                }

                return sample; 
            }

            NavSatFix_ *
            NavSatFix_PluginSupport_create_data(void)
            {
                return sensor_msgs::msg::dds_::NavSatFix_PluginSupport_create_data_ex(RTI_TRUE);
            }

            void 
            NavSatFix_PluginSupport_destroy_data_w_params(
                NavSatFix_ *sample,
                const struct DDS_TypeDeallocationParams_t * dealloc_params) {

                sensor_msgs::msg::dds_::NavSatFix__finalize_w_params(sample,dealloc_params);

                delete  sample;
                sample=NULL;
            }

            void 
            NavSatFix_PluginSupport_destroy_data_ex(
                NavSatFix_ *sample,RTIBool deallocate_pointers) {

                sensor_msgs::msg::dds_::NavSatFix__finalize_ex(sample,deallocate_pointers);

                delete  sample;
                sample=NULL;
            }

            void 
            NavSatFix_PluginSupport_destroy_data(
                NavSatFix_ *sample) {

                sensor_msgs::msg::dds_::NavSatFix_PluginSupport_destroy_data_ex(sample,RTI_TRUE);

            }

            RTIBool 
            NavSatFix_PluginSupport_copy_data(
                NavSatFix_ *dst,
                const NavSatFix_ *src)
            {
                return sensor_msgs::msg::dds_::NavSatFix__copy(dst,(const NavSatFix_*) src);
            }

            void 
            NavSatFix_PluginSupport_print_data(
                const NavSatFix_ *sample,
                const char *desc,
                unsigned int indent_level)
            {

                RTICdrType_printIndent(indent_level);

                if (desc != NULL) {
                    RTILog_debug("%s:\n", desc);
                } else {
                    RTILog_debug("\n");
                }

                if (sample == NULL) {
                    RTILog_debug("NULL\n");
                    return;
                }

                std_msgs::msg::dds_::Header_PluginSupport_print_data(
                    (const std_msgs::msg::dds_::Header_*) &sample->header_, "header_", indent_level + 1);

                sensor_msgs::msg::dds_::NavSatStatus_PluginSupport_print_data(
                    (const sensor_msgs::msg::dds_::NavSatStatus_*) &sample->status_, "status_", indent_level + 1);

                RTICdrType_printDouble(
                    &sample->latitude_, "latitude_", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->longitude_, "longitude_", indent_level + 1);    

                RTICdrType_printDouble(
                    &sample->altitude_, "altitude_", indent_level + 1);    

                RTICdrType_printArray(
                    sample->position_covariance_, (9), RTI_CDR_DOUBLE_SIZE,
                    (RTICdrTypePrintFunction)RTICdrType_printDouble, 
                    "position_covariance_", indent_level + 1);        

                RTICdrType_printOctet(
                    &sample->position_covariance_type_, "position_covariance_type_", indent_level + 1);    

            }

            /* ----------------------------------------------------------------------------
            Callback functions:
            * ---------------------------------------------------------------------------- */

            PRESTypePluginParticipantData 
            NavSatFix_Plugin_on_participant_attached(
                void *registration_data,
                const struct PRESTypePluginParticipantInfo *participant_info,
                RTIBool top_level_registration,
                void *container_plugin_context,
                RTICdrTypeCode *type_code)
            {
                if (registration_data) {} /* To avoid warnings */
                if (participant_info) {} /* To avoid warnings */
                if (top_level_registration) {} /* To avoid warnings */
                if (container_plugin_context) {} /* To avoid warnings */
                if (type_code) {} /* To avoid warnings */

                return PRESTypePluginDefaultParticipantData_new(participant_info);

            }

            void 
            NavSatFix_Plugin_on_participant_detached(
                PRESTypePluginParticipantData participant_data)
            {

                PRESTypePluginDefaultParticipantData_delete(participant_data);
            }

            PRESTypePluginEndpointData
            NavSatFix_Plugin_on_endpoint_attached(
                PRESTypePluginParticipantData participant_data,
                const struct PRESTypePluginEndpointInfo *endpoint_info,
                RTIBool top_level_registration, 
                void *containerPluginContext)
            {
                PRESTypePluginEndpointData epd = NULL;

                unsigned int serializedSampleMaxSize;

                if (top_level_registration) {} /* To avoid warnings */
                if (containerPluginContext) {} /* To avoid warnings */

                epd = PRESTypePluginDefaultEndpointData_new(
                    participant_data,
                    endpoint_info,
                    (PRESTypePluginDefaultEndpointDataCreateSampleFunction)
                    sensor_msgs::msg::dds_::NavSatFix_PluginSupport_create_data,
                    (PRESTypePluginDefaultEndpointDataDestroySampleFunction)
                    sensor_msgs::msg::dds_::NavSatFix_PluginSupport_destroy_data,
                    NULL , NULL );

                if (epd == NULL) {
                    return NULL;
                } 

                if (endpoint_info->endpointKind == PRES_TYPEPLUGIN_ENDPOINT_WRITER) {
                    serializedSampleMaxSize = sensor_msgs::msg::dds_::NavSatFix_Plugin_get_serialized_sample_max_size(
                        epd,RTI_FALSE,RTI_CDR_ENCAPSULATION_ID_CDR_BE,0);

                    PRESTypePluginDefaultEndpointData_setMaxSizeSerializedSample(epd, serializedSampleMaxSize);

                    if (PRESTypePluginDefaultEndpointData_createWriterPool(
                        epd,
                        endpoint_info,
                        (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                        sensor_msgs::msg::dds_::NavSatFix_Plugin_get_serialized_sample_max_size, epd,
                        (PRESTypePluginGetSerializedSampleSizeFunction)
                        sensor_msgs::msg::dds_::NavSatFix_Plugin_get_serialized_sample_size,
                        epd) == RTI_FALSE) {
                        PRESTypePluginDefaultEndpointData_delete(epd);
                        return NULL;
                    }
                }

                return epd;    
            }

            void 
            NavSatFix_Plugin_on_endpoint_detached(
                PRESTypePluginEndpointData endpoint_data)
            {  

                PRESTypePluginDefaultEndpointData_delete(endpoint_data);
            }

            void    
            NavSatFix_Plugin_return_sample(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ *sample,
                void *handle)
            {

                NavSatFix__finalize_optional_members(sample, RTI_TRUE);

                PRESTypePluginDefaultEndpointData_returnSample(
                    endpoint_data, sample, handle);
            }

            RTIBool 
            NavSatFix_Plugin_copy_sample(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ *dst,
                const NavSatFix_ *src)
            {
                if (endpoint_data) {} /* To avoid warnings */
                return sensor_msgs::msg::dds_::NavSatFix_PluginSupport_copy_data(dst,src);
            }

            /* ----------------------------------------------------------------------------
            (De)Serialize functions:
            * ------------------------------------------------------------------------- */
            unsigned int 
            NavSatFix_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment);

            RTIBool 
            NavSatFix_Plugin_serialize(
                PRESTypePluginEndpointData endpoint_data,
                const NavSatFix_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;
                RTIBool retval = RTI_TRUE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_sample) {

                    if(!std_msgs::msg::dds_::Header_Plugin_serialize(
                        endpoint_data,
                        (const std_msgs::msg::dds_::Header_*) &sample->header_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if(!sensor_msgs::msg::dds_::NavSatStatus_Plugin_serialize(
                        endpoint_data,
                        (const sensor_msgs::msg::dds_::NavSatStatus_*) &sample->status_,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeDouble(
                        stream, &sample->latitude_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeDouble(
                        stream, &sample->longitude_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeDouble(
                        stream, &sample->altitude_)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializePrimitiveArray(
                        stream, (void*) sample->position_covariance_, (9), RTI_CDR_DOUBLE_TYPE)) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrStream_serializeOctet(
                        stream, &sample->position_covariance_type_)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return retval;
            }

            RTIBool 
            NavSatFix_Plugin_deserialize_sample(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ *sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                char * position = NULL;

                RTIBool done = RTI_FALSE;

                try {

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */
                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if(deserialize_sample) {

                        sensor_msgs::msg::dds_::NavSatFix__initialize_ex(sample, RTI_FALSE, RTI_FALSE);

                        if(!std_msgs::msg::dds_::Header_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->header_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                        if(!sensor_msgs::msg::dds_::NavSatStatus_Plugin_deserialize_sample(
                            endpoint_data,
                            &sample->status_,
                            stream,
                            RTI_FALSE, RTI_TRUE,
                            endpoint_plugin_qos)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeDouble(
                            stream, &sample->latitude_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeDouble(
                            stream, &sample->longitude_)) {
                            goto fin; 
                        }
                        if (!RTICdrStream_deserializeDouble(
                            stream, &sample->altitude_)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializePrimitiveArray(
                            stream, (void*) sample->position_covariance_, (9), RTI_CDR_DOUBLE_TYPE)) {
                            goto fin; 
                        }

                        if (!RTICdrStream_deserializeOctet(
                            stream, &sample->position_covariance_type_)) {
                            goto fin; 
                        }
                    }

                    done = RTI_TRUE;
                  fin:
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool
            NavSatFix_Plugin_serialize_to_cdr_buffer(
                char * buffer,
                unsigned int * length,
                const NavSatFix_ *sample)
            {
                struct RTICdrStream stream;
                struct PRESTypePluginDefaultEndpointData epd;
                RTIBool result;

                if (length == NULL) {
                    return RTI_FALSE;
                }

                epd._maxSizeSerializedSample =
                NavSatFix_Plugin_get_serialized_sample_max_size(
                    NULL, RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 0);

                if (buffer == NULL) {
                    *length = 
                    NavSatFix_Plugin_get_serialized_sample_size(
                        (PRESTypePluginEndpointData)&epd,
                        RTI_TRUE,
                        RTICdrEncapsulation_getNativeCdrEncapsulationId(),
                        0,
                        sample);

                    if (*length == 0) {
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;
                }    

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, *length);

                result = sensor_msgs::msg::dds_::NavSatFix_Plugin_serialize(
                    (PRESTypePluginEndpointData)&epd, sample, &stream, 
                    RTI_TRUE, RTICdrEncapsulation_getNativeCdrEncapsulationId(), 
                    RTI_TRUE, NULL);  

                *length = RTICdrStream_getCurrentPositionOffset(&stream);
                return result;     
            }

            RTIBool
            NavSatFix_Plugin_deserialize_from_cdr_buffer(
                NavSatFix_ *sample,
                const char * buffer,
                unsigned int length)
            {
                struct RTICdrStream stream;

                RTICdrStream_init(&stream);
                RTICdrStream_set(&stream, (char *)buffer, length);

                NavSatFix__finalize_optional_members(sample, RTI_TRUE);
                return NavSatFix_Plugin_deserialize_sample( 
                    NULL, sample,
                    &stream, RTI_TRUE, RTI_TRUE, 
                    NULL);
            }

            DDS_ReturnCode_t
            NavSatFix_Plugin_data_to_string(
                const NavSatFix_ *sample,
                char *str,
                DDS_UnsignedLong *str_size, 
                const struct DDS_PrintFormatProperty *property)
            {
                DDS_DynamicData *data = NULL;
                char *buffer = NULL;
                unsigned int length = 0;
                struct DDS_PrintFormat printFormat;
                DDS_ReturnCode_t retCode = DDS_RETCODE_ERROR;

                if (sample == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (str_size == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (property == NULL) {
                    return DDS_RETCODE_BAD_PARAMETER;
                }

                if (!NavSatFix_Plugin_serialize_to_cdr_buffer(
                    NULL, 
                    &length, 
                    sample)) {
                    return DDS_RETCODE_ERROR;
                }

                RTIOsapiHeap_allocateBuffer(&buffer, length, RTI_OSAPI_ALIGNMENT_DEFAULT);
                if (buffer == NULL) {
                    return DDS_RETCODE_ERROR;
                }

                if (!NavSatFix_Plugin_serialize_to_cdr_buffer(
                    buffer, 
                    &length, 
                    sample)) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                data = DDS_DynamicData_new(
                    NavSatFix__get_typecode(), 
                    &DDS_DYNAMIC_DATA_PROPERTY_DEFAULT);
                if (data == NULL) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    return DDS_RETCODE_ERROR;
                }

                retCode = DDS_DynamicData_from_cdr_buffer(data, buffer, length);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_PrintFormatProperty_to_print_format(
                    property, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                retCode = DDS_DynamicDataFormatter_to_string_w_format(
                    data, 
                    str,
                    str_size, 
                    &printFormat);
                if (retCode != DDS_RETCODE_OK) {
                    RTIOsapiHeap_freeBuffer(buffer);
                    DDS_DynamicData_delete(data);
                    return retCode;
                }

                RTIOsapiHeap_freeBuffer(buffer);
                DDS_DynamicData_delete(data);
                return DDS_RETCODE_OK;
            }

            RTIBool 
            NavSatFix_Plugin_deserialize(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ **sample,
                RTIBool * drop_sample,
                struct RTICdrStream *stream,   
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_sample, 
                void *endpoint_plugin_qos)
            {

                RTIBool result;
                const char *METHOD_NAME = "NavSatFix_Plugin_deserialize";
                if (drop_sample) {} /* To avoid warnings */

                stream->_xTypesState.unassignable = RTI_FALSE;
                result= sensor_msgs::msg::dds_::NavSatFix_Plugin_deserialize_sample( 
                    endpoint_data, (sample != NULL)?*sample:NULL,
                    stream, deserialize_encapsulation, deserialize_sample, 
                    endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }
                if (!result && stream->_xTypesState.unassignable ) {

                    RTICdrLog_exception(
                        METHOD_NAME, 
                        &RTI_CDR_LOG_UNASSIGNABLE_SAMPLE_OF_TYPE_s, 
                        "NavSatFix_");

                }

                return result;

            }

            RTIBool NavSatFix_Plugin_skip(
                PRESTypePluginEndpointData endpoint_data,
                struct RTICdrStream *stream,   
                RTIBool skip_encapsulation,
                RTIBool skip_sample, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;

                if (endpoint_data) {} /* To avoid warnings */
                if (endpoint_plugin_qos) {} /* To avoid warnings */

                if(skip_encapsulation) {
                    if (!RTICdrStream_skipEncapsulation(stream)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if (skip_sample) {

                    if (!std_msgs::msg::dds_::Header_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if (!sensor_msgs::msg::dds_::NavSatStatus_Plugin_skip(
                        endpoint_data,
                        stream, 
                        RTI_FALSE, RTI_TRUE, 
                        endpoint_plugin_qos)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipDouble (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipDouble (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipDouble (stream)) {
                        goto fin; 
                    }
                    if (!RTICdrStream_skipPrimitiveArray(
                        stream, (9), RTI_CDR_DOUBLE_TYPE)) {
                        goto fin; 
                    }      
                    if (!RTICdrStream_skipOctet (stream)) {
                        goto fin; 
                    }
                }

                done = RTI_TRUE;
              fin:
                if (done != RTI_TRUE && 
                RTICdrStream_getRemainder(stream) >=
                RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                    return RTI_FALSE;   
                }
                if(skip_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            unsigned int 
            NavSatFix_Plugin_get_serialized_sample_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=std_msgs::msg::dds_::Header_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                current_alignment +=sensor_msgs::msg::dds_::NavSatStatus_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow, RTI_FALSE,encapsulation_id,current_alignment);

                current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                    current_alignment);

                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (9),  RTI_CDR_DOUBLE_TYPE);

                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            unsigned int 
            NavSatFix_Plugin_get_serialized_sample_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = NavSatFix_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            unsigned int 
            NavSatFix_Plugin_get_serialized_sample_min_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */ 

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment +=std_msgs::msg::dds_::Header_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
                current_alignment +=sensor_msgs::msg::dds_::NavSatStatus_Plugin_get_serialized_sample_min_size(
                    endpoint_data,RTI_FALSE,encapsulation_id,current_alignment);
                current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getDoubleMaxSizeSerialized(
                    current_alignment);
                current_alignment +=RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    current_alignment, (9), RTI_CDR_DOUBLE_TYPE);
                current_alignment +=RTICdrType_getOctetMaxSizeSerialized(
                    current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return  current_alignment - initial_alignment;
            }

            /* Returns the size of the sample in its serialized form (in bytes).
            * It can also be an estimation in excess of the real buffer needed 
            * during a call to the serialize() function.
            * The value reported does not have to include the space for the
            * encapsulation flags.
            */
            unsigned int
            NavSatFix_Plugin_get_serialized_sample_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment,
                const NavSatFix_ * sample) 
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;
                struct PRESTypePluginDefaultEndpointData epd;   

                if (sample==NULL) {
                    return 0;
                }
                if (endpoint_data == NULL) {
                    endpoint_data = (PRESTypePluginEndpointData) &epd;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);        
                }

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                    PRESTypePluginDefaultEndpointData_setBaseAlignment(
                        endpoint_data,
                        current_alignment);
                }

                current_alignment += std_msgs::msg::dds_::Header_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const std_msgs::msg::dds_::Header_*) &sample->header_);

                current_alignment += sensor_msgs::msg::dds_::NavSatStatus_Plugin_get_serialized_sample_size(
                    endpoint_data,RTI_FALSE, encapsulation_id,
                    current_alignment, (const sensor_msgs::msg::dds_::NavSatStatus_*) &sample->status_);

                current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getDoubleMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                current_alignment += RTICdrType_getPrimitiveArrayMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment), 
                        (9), RTI_CDR_DOUBLE_TYPE);  

                current_alignment += RTICdrType_getOctetMaxSizeSerialized(
                    PRESTypePluginDefaultEndpointData_getAlignment(
                        endpoint_data, current_alignment));

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            /* --------------------------------------------------------------------------------------
            Key Management functions:
            * -------------------------------------------------------------------------------------- */

            PRESTypePluginKeyKind 
            NavSatFix_Plugin_get_key_kind(void)
            {
                return PRES_TYPEPLUGIN_NO_KEY;
            }

            RTIBool 
            NavSatFix_Plugin_serialize_key(
                PRESTypePluginEndpointData endpoint_data,
                const NavSatFix_ *sample, 
                struct RTICdrStream *stream,    
                RTIBool serialize_encapsulation,
                RTIEncapsulationId encapsulation_id,
                RTIBool serialize_key,
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                if(serialize_encapsulation) {
                    if (!RTICdrStream_serializeAndSetCdrEncapsulation(stream , encapsulation_id)) {
                        return RTI_FALSE;
                    }

                    position = RTICdrStream_resetAlignment(stream);
                }

                if(serialize_key) {

                    if (!sensor_msgs::msg::dds_::NavSatFix_Plugin_serialize(
                        endpoint_data,
                        sample,
                        stream,
                        RTI_FALSE, encapsulation_id,
                        RTI_TRUE,
                        endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                if(serialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            RTIBool NavSatFix_Plugin_deserialize_key_sample(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ *sample, 
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                try {

                    char * position = NULL;

                    if (endpoint_data) {} /* To avoid warnings */
                    if (endpoint_plugin_qos) {} /* To avoid warnings */

                    if(deserialize_encapsulation) {

                        if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                            return RTI_FALSE;
                        }

                        position = RTICdrStream_resetAlignment(stream);
                    }
                    if (deserialize_key) {

                        if (!sensor_msgs::msg::dds_::NavSatFix_Plugin_deserialize_sample(
                            endpoint_data, sample, stream, 
                            RTI_FALSE, RTI_TRUE, 
                            endpoint_plugin_qos)) {
                            return RTI_FALSE;
                        }
                    }

                    if(deserialize_encapsulation) {
                        RTICdrStream_restoreAlignment(stream,position);
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            RTIBool NavSatFix_Plugin_deserialize_key(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ **sample, 
                RTIBool * drop_sample,
                struct RTICdrStream *stream,
                RTIBool deserialize_encapsulation,
                RTIBool deserialize_key,
                void *endpoint_plugin_qos)
            {
                RTIBool result;
                if (drop_sample) {} /* To avoid warnings */
                stream->_xTypesState.unassignable = RTI_FALSE;
                result= sensor_msgs::msg::dds_::NavSatFix_Plugin_deserialize_key_sample(
                    endpoint_data, (sample != NULL)?*sample:NULL, stream,
                    deserialize_encapsulation, deserialize_key, endpoint_plugin_qos);
                if (result) {
                    if (stream->_xTypesState.unassignable) {
                        result = RTI_FALSE;
                    }
                }

                return result;    

            }

            unsigned int
            NavSatFix_Plugin_get_serialized_key_max_size_ex(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool * overflow,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {

                unsigned int initial_alignment = current_alignment;

                unsigned int encapsulation_size = current_alignment;

                if (endpoint_data) {} /* To avoid warnings */
                if (overflow) {} /* To avoid warnings */

                if (include_encapsulation) {

                    if (!RTICdrEncapsulation_validEncapsulationId(encapsulation_id)) {
                        return 1;
                    }
                    RTICdrStream_getEncapsulationSize(encapsulation_size);
                    encapsulation_size -= current_alignment;
                    current_alignment = 0;
                    initial_alignment = 0;
                }

                current_alignment += sensor_msgs::msg::dds_::NavSatFix_Plugin_get_serialized_sample_max_size_ex(
                    endpoint_data, overflow,RTI_FALSE, encapsulation_id, current_alignment);

                if (include_encapsulation) {
                    current_alignment += encapsulation_size;
                }
                return current_alignment - initial_alignment;
            }

            unsigned int
            NavSatFix_Plugin_get_serialized_key_max_size(
                PRESTypePluginEndpointData endpoint_data,
                RTIBool include_encapsulation,
                RTIEncapsulationId encapsulation_id,
                unsigned int current_alignment)
            {
                unsigned int size;
                RTIBool overflow = RTI_FALSE;

                size = NavSatFix_Plugin_get_serialized_key_max_size_ex(
                    endpoint_data,&overflow,include_encapsulation,encapsulation_id,current_alignment);

                if (overflow) {
                    size = RTI_CDR_MAX_SERIALIZED_SIZE;
                }

                return size;
            }

            RTIBool 
            NavSatFix_Plugin_serialized_sample_to_key(
                PRESTypePluginEndpointData endpoint_data,
                NavSatFix_ *sample,
                struct RTICdrStream *stream, 
                RTIBool deserialize_encapsulation,  
                RTIBool deserialize_key, 
                void *endpoint_plugin_qos)
            {
                char * position = NULL;

                RTIBool done = RTI_FALSE;
                RTIBool error = RTI_FALSE;

                if (stream == NULL) {
                    error = RTI_TRUE;
                    goto fin;
                }
                if(deserialize_encapsulation) {
                    if (!RTICdrStream_deserializeAndSetCdrEncapsulation(stream)) {
                        return RTI_FALSE;
                    }
                    position = RTICdrStream_resetAlignment(stream);
                }

                if (deserialize_key) {

                    if (!sensor_msgs::msg::dds_::NavSatFix_Plugin_deserialize_sample(
                        endpoint_data, sample, stream, RTI_FALSE, 
                        RTI_TRUE, endpoint_plugin_qos)) {
                        return RTI_FALSE;
                    }

                }

                done = RTI_TRUE;
              fin:
                if(!error) {
                    if (done != RTI_TRUE && 
                    RTICdrStream_getRemainder(stream) >=
                    RTI_CDR_PARAMETER_HEADER_ALIGNMENT) {
                        return RTI_FALSE;   
                    }
                } else {
                    return RTI_FALSE;
                }       

                if(deserialize_encapsulation) {
                    RTICdrStream_restoreAlignment(stream,position);
                }

                return RTI_TRUE;
            }

            /* ------------------------------------------------------------------------
            * Plug-in Installation Methods
            * ------------------------------------------------------------------------ */
            struct PRESTypePlugin *NavSatFix_Plugin_new(void) 
            { 
                struct PRESTypePlugin *plugin = NULL;
                const struct PRESTypePluginVersion PLUGIN_VERSION = 
                PRES_TYPE_PLUGIN_VERSION_2_0;

                RTIOsapiHeap_allocateStructure(
                    &plugin, struct PRESTypePlugin);

                if (plugin == NULL) {
                    return NULL;
                }

                plugin->version = PLUGIN_VERSION;

                /* set up parent's function pointers */
                plugin->onParticipantAttached =
                (PRESTypePluginOnParticipantAttachedCallback)
                sensor_msgs::msg::dds_::NavSatFix_Plugin_on_participant_attached;
                plugin->onParticipantDetached =
                (PRESTypePluginOnParticipantDetachedCallback)
                sensor_msgs::msg::dds_::NavSatFix_Plugin_on_participant_detached;
                plugin->onEndpointAttached =
                (PRESTypePluginOnEndpointAttachedCallback)
                sensor_msgs::msg::dds_::NavSatFix_Plugin_on_endpoint_attached;
                plugin->onEndpointDetached =
                (PRESTypePluginOnEndpointDetachedCallback)
                sensor_msgs::msg::dds_::NavSatFix_Plugin_on_endpoint_detached;

                plugin->copySampleFnc =
                (PRESTypePluginCopySampleFunction)
                sensor_msgs::msg::dds_::NavSatFix_Plugin_copy_sample;
                plugin->createSampleFnc =
                (PRESTypePluginCreateSampleFunction)
                NavSatFix_Plugin_create_sample;
                plugin->destroySampleFnc =
                (PRESTypePluginDestroySampleFunction)
                NavSatFix_Plugin_destroy_sample;
                plugin->finalizeOptionalMembersFnc =
                (PRESTypePluginFinalizeOptionalMembersFunction)
                NavSatFix__finalize_optional_members;

                plugin->serializeFnc =
                (PRESTypePluginSerializeFunction)
                sensor_msgs::msg::dds_::NavSatFix_Plugin_serialize;
                plugin->deserializeFnc =
                (PRESTypePluginDeserializeFunction)
                sensor_msgs::msg::dds_::NavSatFix_Plugin_deserialize;
                plugin->getSerializedSampleMaxSizeFnc =
                (PRESTypePluginGetSerializedSampleMaxSizeFunction)
                sensor_msgs::msg::dds_::NavSatFix_Plugin_get_serialized_sample_max_size;
                plugin->getSerializedSampleMinSizeFnc =
                (PRESTypePluginGetSerializedSampleMinSizeFunction)
                sensor_msgs::msg::dds_::NavSatFix_Plugin_get_serialized_sample_min_size;

                plugin->getSampleFnc =
                (PRESTypePluginGetSampleFunction)
                NavSatFix_Plugin_get_sample;
                plugin->returnSampleFnc =
                (PRESTypePluginReturnSampleFunction)
                NavSatFix_Plugin_return_sample;

                plugin->getKeyKindFnc =
                (PRESTypePluginGetKeyKindFunction)
                sensor_msgs::msg::dds_::NavSatFix_Plugin_get_key_kind;

                /* These functions are only used for keyed types. As this is not a keyed
                type they are all set to NULL
                */
                plugin->serializeKeyFnc = NULL ;    
                plugin->deserializeKeyFnc = NULL;  
                plugin->getKeyFnc = NULL;
                plugin->returnKeyFnc = NULL;
                plugin->instanceToKeyFnc = NULL;
                plugin->keyToInstanceFnc = NULL;
                plugin->getSerializedKeyMaxSizeFnc = NULL;
                plugin->instanceToKeyHashFnc = NULL;
                plugin->serializedSampleToKeyHashFnc = NULL;
                plugin->serializedKeyToKeyHashFnc = NULL;    
                plugin->typeCode =  (struct RTICdrTypeCode *)sensor_msgs::msg::dds_::NavSatFix__get_typecode();

                plugin->languageKind = PRES_TYPEPLUGIN_CPP_LANG;

                /* Serialized buffer */
                plugin->getBuffer = 
                (PRESTypePluginGetBufferFunction)
                NavSatFix_Plugin_get_buffer;
                plugin->returnBuffer = 
                (PRESTypePluginReturnBufferFunction)
                NavSatFix_Plugin_return_buffer;
                plugin->getSerializedSampleSizeFnc =
                (PRESTypePluginGetSerializedSampleSizeFunction)
                sensor_msgs::msg::dds_::NavSatFix_Plugin_get_serialized_sample_size;

                plugin->endpointTypeName = NavSatFix_TYPENAME;

                return plugin;
            }

            void
            NavSatFix_Plugin_delete(struct PRESTypePlugin *plugin)
            {
                RTIOsapiHeap_freeStructure(plugin);
            } 
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */
#undef RTI_CDR_CURRENT_SUBMODULE 
