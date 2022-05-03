

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AddTwoInts_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef AddTwoInts__1960903651_h
#define AddTwoInts__1960903651_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace example_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *AddTwoInts_Request_TYPENAME;

            struct AddTwoInts_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class AddTwoInts_Request_TypeSupport;
            class AddTwoInts_Request_DataWriter;
            class AddTwoInts_Request_DataReader;
            #endif

            class AddTwoInts_Request_ 
            {
              public:
                typedef struct AddTwoInts_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AddTwoInts_Request_TypeSupport TypeSupport;
                typedef AddTwoInts_Request_DataWriter DataWriter;
                typedef AddTwoInts_Request_DataReader DataReader;
                #endif

                DDS_LongLong   a_ ;
                DDS_LongLong   b_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* AddTwoInts_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(AddTwoInts_Request_Seq, AddTwoInts_Request_);

            NDDSUSERDllExport
            RTIBool AddTwoInts_Request__initialize(
                AddTwoInts_Request_* self);

            NDDSUSERDllExport
            RTIBool AddTwoInts_Request__initialize_ex(
                AddTwoInts_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AddTwoInts_Request__initialize_w_params(
                AddTwoInts_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void AddTwoInts_Request__finalize(
                AddTwoInts_Request_* self);

            NDDSUSERDllExport
            void AddTwoInts_Request__finalize_ex(
                AddTwoInts_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AddTwoInts_Request__finalize_w_params(
                AddTwoInts_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AddTwoInts_Request__finalize_optional_members(
                AddTwoInts_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AddTwoInts_Request__copy(
                AddTwoInts_Request_* dst,
                const AddTwoInts_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace example_interfaces  */
namespace example_interfaces {
    namespace srv {
        namespace dds_ {

            extern const char *AddTwoInts_Response_TYPENAME;

            struct AddTwoInts_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class AddTwoInts_Response_TypeSupport;
            class AddTwoInts_Response_DataWriter;
            class AddTwoInts_Response_DataReader;
            #endif

            class AddTwoInts_Response_ 
            {
              public:
                typedef struct AddTwoInts_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AddTwoInts_Response_TypeSupport TypeSupport;
                typedef AddTwoInts_Response_DataWriter DataWriter;
                typedef AddTwoInts_Response_DataReader DataReader;
                #endif

                DDS_LongLong   sum_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* AddTwoInts_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(AddTwoInts_Response_Seq, AddTwoInts_Response_);

            NDDSUSERDllExport
            RTIBool AddTwoInts_Response__initialize(
                AddTwoInts_Response_* self);

            NDDSUSERDllExport
            RTIBool AddTwoInts_Response__initialize_ex(
                AddTwoInts_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AddTwoInts_Response__initialize_w_params(
                AddTwoInts_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void AddTwoInts_Response__finalize(
                AddTwoInts_Response_* self);

            NDDSUSERDllExport
            void AddTwoInts_Response__finalize_ex(
                AddTwoInts_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AddTwoInts_Response__finalize_w_params(
                AddTwoInts_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AddTwoInts_Response__finalize_optional_members(
                AddTwoInts_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AddTwoInts_Response__copy(
                AddTwoInts_Response_* dst,
                const AddTwoInts_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace example_interfaces  */

#endif /* AddTwoInts_ */

