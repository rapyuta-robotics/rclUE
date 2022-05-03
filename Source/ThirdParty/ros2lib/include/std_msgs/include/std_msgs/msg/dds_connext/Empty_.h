

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Empty_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Empty__932239711_h
#define Empty__932239711_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace std_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Empty_TYPENAME;

            struct Empty_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Empty_TypeSupport;
            class Empty_DataWriter;
            class Empty_DataReader;
            #endif

            class Empty_ 
            {
              public:
                typedef struct Empty_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Empty_TypeSupport TypeSupport;
                typedef Empty_DataWriter DataWriter;
                typedef Empty_DataReader DataReader;
                #endif

                DDS_Octet   structure_needs_at_least_one_member_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Empty__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Empty_Seq, Empty_);

            NDDSUSERDllExport
            RTIBool Empty__initialize(
                Empty_* self);

            NDDSUSERDllExport
            RTIBool Empty__initialize_ex(
                Empty_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Empty__initialize_w_params(
                Empty_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Empty__finalize(
                Empty_* self);

            NDDSUSERDllExport
            void Empty__finalize_ex(
                Empty_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Empty__finalize_w_params(
                Empty_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Empty__finalize_optional_members(
                Empty_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Empty__copy(
                Empty_* dst,
                const Empty_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* Empty_ */

