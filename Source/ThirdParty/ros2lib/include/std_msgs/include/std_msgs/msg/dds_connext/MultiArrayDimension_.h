

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiArrayDimension_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MultiArrayDimension__2145543753_h
#define MultiArrayDimension__2145543753_h

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

            extern const char *MultiArrayDimension_TYPENAME;

            struct MultiArrayDimension_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MultiArrayDimension_TypeSupport;
            class MultiArrayDimension_DataWriter;
            class MultiArrayDimension_DataReader;
            #endif

            class MultiArrayDimension_ 
            {
              public:
                typedef struct MultiArrayDimension_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MultiArrayDimension_TypeSupport TypeSupport;
                typedef MultiArrayDimension_DataWriter DataWriter;
                typedef MultiArrayDimension_DataReader DataReader;
                #endif

                DDS_Char *   label_ ;
                DDS_UnsignedLong   size_ ;
                DDS_UnsignedLong   stride_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MultiArrayDimension__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MultiArrayDimension_Seq, MultiArrayDimension_);

            NDDSUSERDllExport
            RTIBool MultiArrayDimension__initialize(
                MultiArrayDimension_* self);

            NDDSUSERDllExport
            RTIBool MultiArrayDimension__initialize_ex(
                MultiArrayDimension_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MultiArrayDimension__initialize_w_params(
                MultiArrayDimension_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MultiArrayDimension__finalize(
                MultiArrayDimension_* self);

            NDDSUSERDllExport
            void MultiArrayDimension__finalize_ex(
                MultiArrayDimension_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MultiArrayDimension__finalize_w_params(
                MultiArrayDimension_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MultiArrayDimension__finalize_optional_members(
                MultiArrayDimension_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MultiArrayDimension__copy(
                MultiArrayDimension_* dst,
                const MultiArrayDimension_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace std_msgs  */

#endif /* MultiArrayDimension_ */

