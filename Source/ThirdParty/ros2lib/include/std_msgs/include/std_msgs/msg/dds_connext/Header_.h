

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Header_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Header__1445032965_h
#define Header__1445032965_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "builtin_interfaces/msg/dds_connext/Time_.h"
namespace std_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Header_TYPENAME;

            struct Header_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Header_TypeSupport;
            class Header_DataWriter;
            class Header_DataReader;
            #endif

            class Header_ 
            {
              public:
                typedef struct Header_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Header_TypeSupport TypeSupport;
                typedef Header_DataWriter DataWriter;
                typedef Header_DataReader DataReader;
                #endif

                builtin_interfaces::msg::dds_::Time_   stamp_ ;
                DDS_Char *   frame_id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Header__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Header_Seq, Header_);

            NDDSUSERDllExport
            RTIBool Header__initialize(
                Header_* self);

            NDDSUSERDllExport
            RTIBool Header__initialize_ex(
                Header_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Header__initialize_w_params(
                Header_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Header__finalize(
                Header_* self);

            NDDSUSERDllExport
            void Header__finalize_ex(
                Header_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Header__finalize_w_params(
                Header_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Header__finalize_optional_members(
                Header_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Header__copy(
                Header_* dst,
                const Header_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* Header_ */

