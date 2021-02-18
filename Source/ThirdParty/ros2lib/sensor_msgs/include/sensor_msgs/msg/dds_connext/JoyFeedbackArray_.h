

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from JoyFeedbackArray_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef JoyFeedbackArray__777590911_h
#define JoyFeedbackArray__777590911_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/JoyFeedback_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *JoyFeedbackArray_TYPENAME;

            struct JoyFeedbackArray_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class JoyFeedbackArray_TypeSupport;
            class JoyFeedbackArray_DataWriter;
            class JoyFeedbackArray_DataReader;
            #endif

            class JoyFeedbackArray_ 
            {
              public:
                typedef struct JoyFeedbackArray_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef JoyFeedbackArray_TypeSupport TypeSupport;
                typedef JoyFeedbackArray_DataWriter DataWriter;
                typedef JoyFeedbackArray_DataReader DataReader;
                #endif

                sensor_msgs::msg::dds_::JoyFeedback_Seq  array_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* JoyFeedbackArray__get_typecode(void); /* Type code */

            DDS_SEQUENCE(JoyFeedbackArray_Seq, JoyFeedbackArray_);

            NDDSUSERDllExport
            RTIBool JoyFeedbackArray__initialize(
                JoyFeedbackArray_* self);

            NDDSUSERDllExport
            RTIBool JoyFeedbackArray__initialize_ex(
                JoyFeedbackArray_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool JoyFeedbackArray__initialize_w_params(
                JoyFeedbackArray_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void JoyFeedbackArray__finalize(
                JoyFeedbackArray_* self);

            NDDSUSERDllExport
            void JoyFeedbackArray__finalize_ex(
                JoyFeedbackArray_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void JoyFeedbackArray__finalize_w_params(
                JoyFeedbackArray_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void JoyFeedbackArray__finalize_optional_members(
                JoyFeedbackArray_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool JoyFeedbackArray__copy(
                JoyFeedbackArray_* dst,
                const JoyFeedbackArray_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* JoyFeedbackArray_ */

