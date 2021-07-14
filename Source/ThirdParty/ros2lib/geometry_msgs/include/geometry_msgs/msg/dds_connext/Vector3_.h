

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Vector3_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Vector3__254650997_h
#define Vector3__254650997_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Vector3_TYPENAME;

            struct Vector3_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Vector3_TypeSupport;
            class Vector3_DataWriter;
            class Vector3_DataReader;
            #endif

            class Vector3_ 
            {
              public:
                typedef struct Vector3_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Vector3_TypeSupport TypeSupport;
                typedef Vector3_DataWriter DataWriter;
                typedef Vector3_DataReader DataReader;
                #endif

                DDS_Double   x_ ;
                DDS_Double   y_ ;
                DDS_Double   z_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Vector3__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Vector3_Seq, Vector3_);

            NDDSUSERDllExport
            RTIBool Vector3__initialize(
                Vector3_* self);

            NDDSUSERDllExport
            RTIBool Vector3__initialize_ex(
                Vector3_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Vector3__initialize_w_params(
                Vector3_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Vector3__finalize(
                Vector3_* self);

            NDDSUSERDllExport
            void Vector3__finalize_ex(
                Vector3_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Vector3__finalize_w_params(
                Vector3_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Vector3__finalize_optional_members(
                Vector3_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Vector3__copy(
                Vector3_* dst,
                const Vector3_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* Vector3_ */

