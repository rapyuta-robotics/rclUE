

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from GripperCommand_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef GripperCommand__2043830862_h
#define GripperCommand__2043830862_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace control_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *GripperCommand_TYPENAME;

            struct GripperCommand_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class GripperCommand_TypeSupport;
            class GripperCommand_DataWriter;
            class GripperCommand_DataReader;
            #endif

            class GripperCommand_ 
            {
              public:
                typedef struct GripperCommand_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef GripperCommand_TypeSupport TypeSupport;
                typedef GripperCommand_DataWriter DataWriter;
                typedef GripperCommand_DataReader DataReader;
                #endif

                DDS_Double   position_ ;
                DDS_Double   max_effort_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* GripperCommand__get_typecode(void); /* Type code */

            DDS_SEQUENCE(GripperCommand_Seq, GripperCommand_);

            NDDSUSERDllExport
            RTIBool GripperCommand__initialize(
                GripperCommand_* self);

            NDDSUSERDllExport
            RTIBool GripperCommand__initialize_ex(
                GripperCommand_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool GripperCommand__initialize_w_params(
                GripperCommand_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void GripperCommand__finalize(
                GripperCommand_* self);

            NDDSUSERDllExport
            void GripperCommand__finalize_ex(
                GripperCommand_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void GripperCommand__finalize_w_params(
                GripperCommand_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void GripperCommand__finalize_optional_members(
                GripperCommand_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool GripperCommand__copy(
                GripperCommand_* dst,
                const GripperCommand_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace control_msgs  */

#endif /* GripperCommand_ */

