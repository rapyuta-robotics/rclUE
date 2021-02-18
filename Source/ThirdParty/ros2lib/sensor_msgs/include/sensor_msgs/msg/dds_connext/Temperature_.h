

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Temperature_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Temperature__871498365_h
#define Temperature__871498365_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Temperature_TYPENAME;

            struct Temperature_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Temperature_TypeSupport;
            class Temperature_DataWriter;
            class Temperature_DataReader;
            #endif

            class Temperature_ 
            {
              public:
                typedef struct Temperature_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Temperature_TypeSupport TypeSupport;
                typedef Temperature_DataWriter DataWriter;
                typedef Temperature_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Double   temperature_ ;
                DDS_Double   variance_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Temperature__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Temperature_Seq, Temperature_);

            NDDSUSERDllExport
            RTIBool Temperature__initialize(
                Temperature_* self);

            NDDSUSERDllExport
            RTIBool Temperature__initialize_ex(
                Temperature_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Temperature__initialize_w_params(
                Temperature_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Temperature__finalize(
                Temperature_* self);

            NDDSUSERDllExport
            void Temperature__finalize_ex(
                Temperature_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Temperature__finalize_w_params(
                Temperature_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Temperature__finalize_optional_members(
                Temperature_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Temperature__copy(
                Temperature_* dst,
                const Temperature_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* Temperature_ */

