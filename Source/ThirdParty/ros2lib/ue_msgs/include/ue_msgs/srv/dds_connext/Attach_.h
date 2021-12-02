

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Attach_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Attach__914298817_h
#define Attach__914298817_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace ue_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *Attach_Request_TYPENAME;

            struct Attach_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Attach_Request_TypeSupport;
            class Attach_Request_DataWriter;
            class Attach_Request_DataReader;
            #endif

            class Attach_Request_ 
            {
              public:
                typedef struct Attach_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Attach_Request_TypeSupport TypeSupport;
                typedef Attach_Request_DataWriter DataWriter;
                typedef Attach_Request_DataReader DataReader;
                #endif

                DDS_Char *   name1_ ;
                DDS_Char *   name2_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Attach_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Attach_Request_Seq, Attach_Request_);

            NDDSUSERDllExport
            RTIBool Attach_Request__initialize(
                Attach_Request_* self);

            NDDSUSERDllExport
            RTIBool Attach_Request__initialize_ex(
                Attach_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Attach_Request__initialize_w_params(
                Attach_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Attach_Request__finalize(
                Attach_Request_* self);

            NDDSUSERDllExport
            void Attach_Request__finalize_ex(
                Attach_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Attach_Request__finalize_w_params(
                Attach_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Attach_Request__finalize_optional_members(
                Attach_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Attach_Request__copy(
                Attach_Request_* dst,
                const Attach_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ue_msgs  */
namespace ue_msgs {
    namespace srv {
        namespace dds_ {

            extern const char *Attach_Response_TYPENAME;

            struct Attach_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Attach_Response_TypeSupport;
            class Attach_Response_DataWriter;
            class Attach_Response_DataReader;
            #endif

            class Attach_Response_ 
            {
              public:
                typedef struct Attach_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Attach_Response_TypeSupport TypeSupport;
                typedef Attach_Response_DataWriter DataWriter;
                typedef Attach_Response_DataReader DataReader;
                #endif

                DDS_Boolean   success_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Attach_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Attach_Response_Seq, Attach_Response_);

            NDDSUSERDllExport
            RTIBool Attach_Response__initialize(
                Attach_Response_* self);

            NDDSUSERDllExport
            RTIBool Attach_Response__initialize_ex(
                Attach_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Attach_Response__initialize_w_params(
                Attach_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Attach_Response__finalize(
                Attach_Response_* self);

            NDDSUSERDllExport
            void Attach_Response__finalize_ex(
                Attach_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Attach_Response__finalize_w_params(
                Attach_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Attach_Response__finalize_optional_members(
                Attach_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Attach_Response__copy(
                Attach_Response_* dst,
                const Attach_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace ue_msgs  */

#endif /* Attach_ */

