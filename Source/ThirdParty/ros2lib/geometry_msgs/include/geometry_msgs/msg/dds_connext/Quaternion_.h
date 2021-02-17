

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Quaternion_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Quaternion__226109989_h
#define Quaternion__226109989_h

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

            extern const char *Quaternion_TYPENAME;

            struct Quaternion_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Quaternion_TypeSupport;
            class Quaternion_DataWriter;
            class Quaternion_DataReader;
            #endif

            class Quaternion_ 
            {
              public:
                typedef struct Quaternion_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Quaternion_TypeSupport TypeSupport;
                typedef Quaternion_DataWriter DataWriter;
                typedef Quaternion_DataReader DataReader;
                #endif

                DDS_Double   x_ ;
                DDS_Double   y_ ;
                DDS_Double   z_ ;
                DDS_Double   w_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Quaternion__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Quaternion_Seq, Quaternion_);

            NDDSUSERDllExport
            RTIBool Quaternion__initialize(
                Quaternion_* self);

            NDDSUSERDllExport
            RTIBool Quaternion__initialize_ex(
                Quaternion_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Quaternion__initialize_w_params(
                Quaternion_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Quaternion__finalize(
                Quaternion_* self);

            NDDSUSERDllExport
            void Quaternion__finalize_ex(
                Quaternion_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Quaternion__finalize_w_params(
                Quaternion_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Quaternion__finalize_optional_members(
                Quaternion_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Quaternion__copy(
                Quaternion_* dst,
                const Quaternion_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* Quaternion_ */

