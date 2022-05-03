

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Illuminance_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Illuminance__838966174_h
#define Illuminance__838966174_h

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

            extern const char *Illuminance_TYPENAME;

            struct Illuminance_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Illuminance_TypeSupport;
            class Illuminance_DataWriter;
            class Illuminance_DataReader;
            #endif

            class Illuminance_ 
            {
              public:
                typedef struct Illuminance_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Illuminance_TypeSupport TypeSupport;
                typedef Illuminance_DataWriter DataWriter;
                typedef Illuminance_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                DDS_Double   illuminance_ ;
                DDS_Double   variance_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Illuminance__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Illuminance_Seq, Illuminance_);

            NDDSUSERDllExport
            RTIBool Illuminance__initialize(
                Illuminance_* self);

            NDDSUSERDllExport
            RTIBool Illuminance__initialize_ex(
                Illuminance_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Illuminance__initialize_w_params(
                Illuminance_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Illuminance__finalize(
                Illuminance_* self);

            NDDSUSERDllExport
            void Illuminance__finalize_ex(
                Illuminance_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Illuminance__finalize_w_params(
                Illuminance_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Illuminance__finalize_optional_members(
                Illuminance_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Illuminance__copy(
                Illuminance_* dst,
                const Illuminance_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* Illuminance_ */

