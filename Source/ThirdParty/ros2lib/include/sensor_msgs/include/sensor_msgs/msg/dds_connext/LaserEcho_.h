

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from LaserEcho_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef LaserEcho__872219311_h
#define LaserEcho__872219311_h

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

            extern const char *LaserEcho_TYPENAME;

            struct LaserEcho_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class LaserEcho_TypeSupport;
            class LaserEcho_DataWriter;
            class LaserEcho_DataReader;
            #endif

            class LaserEcho_ 
            {
              public:
                typedef struct LaserEcho_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef LaserEcho_TypeSupport TypeSupport;
                typedef LaserEcho_DataWriter DataWriter;
                typedef LaserEcho_DataReader DataReader;
                #endif

                DDS_FloatSeq  echoes_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* LaserEcho__get_typecode(void); /* Type code */

            DDS_SEQUENCE(LaserEcho_Seq, LaserEcho_);

            NDDSUSERDllExport
            RTIBool LaserEcho__initialize(
                LaserEcho_* self);

            NDDSUSERDllExport
            RTIBool LaserEcho__initialize_ex(
                LaserEcho_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool LaserEcho__initialize_w_params(
                LaserEcho_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void LaserEcho__finalize(
                LaserEcho_* self);

            NDDSUSERDllExport
            void LaserEcho__finalize_ex(
                LaserEcho_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void LaserEcho__finalize_w_params(
                LaserEcho_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void LaserEcho__finalize_optional_members(
                LaserEcho_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool LaserEcho__copy(
                LaserEcho_* dst,
                const LaserEcho_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* LaserEcho_ */

