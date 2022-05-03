

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JoyFeedback_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JoyFeedback__1486133644_h
#define JoyFeedback__1486133644_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {
            namespace JoyFeedback_Constants {
                static const DDS_Octet TYPE_LED_= 0;
                static const DDS_Octet TYPE_RUMBLE_= 1;
                static const DDS_Octet TYPE_BUZZER_= 2;
            } /* namespace JoyFeedback_Constants  */

            extern const char *JoyFeedback_TYPENAME;

            struct JoyFeedback_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JoyFeedback_TypeSupport;
            class JoyFeedback_DataWriter;
            class JoyFeedback_DataReader;
            #endif

            class JoyFeedback_ 
            {
              public:
                typedef struct JoyFeedback_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JoyFeedback_TypeSupport TypeSupport;
                typedef JoyFeedback_DataWriter DataWriter;
                typedef JoyFeedback_DataReader DataReader;
                #endif

                DDS_Octet   type_ ;
                DDS_Octet   id_ ;
                DDS_Float   intensity_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JoyFeedback__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JoyFeedback_Seq, JoyFeedback_);

            NDDSUSERDllExport
            RTIBool JoyFeedback__initialize(
                JoyFeedback_* self);

            NDDSUSERDllExport
            RTIBool JoyFeedback__initialize_ex(
                JoyFeedback_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JoyFeedback__initialize_w_params(
                JoyFeedback_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JoyFeedback__finalize(
                JoyFeedback_* self);

            NDDSUSERDllExport
            void JoyFeedback__finalize_ex(
                JoyFeedback_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JoyFeedback__finalize_w_params(
                JoyFeedback_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JoyFeedback__finalize_optional_members(
                JoyFeedback_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JoyFeedback__copy(
                JoyFeedback_* dst,
                const JoyFeedback_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* JoyFeedback_ */

