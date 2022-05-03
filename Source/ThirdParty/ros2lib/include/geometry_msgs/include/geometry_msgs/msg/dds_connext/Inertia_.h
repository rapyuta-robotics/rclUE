

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Inertia_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Inertia__44955846_h
#define Inertia__44955846_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Vector3_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *Inertia_TYPENAME;

            struct Inertia_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Inertia_TypeSupport;
            class Inertia_DataWriter;
            class Inertia_DataReader;
            #endif

            class Inertia_ 
            {
              public:
                typedef struct Inertia_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Inertia_TypeSupport TypeSupport;
                typedef Inertia_DataWriter DataWriter;
                typedef Inertia_DataReader DataReader;
                #endif

                DDS_Double   m_ ;
                geometry_msgs::msg::dds_::Vector3_   com_ ;
                DDS_Double   ixx_ ;
                DDS_Double   ixy_ ;
                DDS_Double   ixz_ ;
                DDS_Double   iyy_ ;
                DDS_Double   iyz_ ;
                DDS_Double   izz_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Inertia__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Inertia_Seq, Inertia_);

            NDDSUSERDllExport
            RTIBool Inertia__initialize(
                Inertia_* self);

            NDDSUSERDllExport
            RTIBool Inertia__initialize_ex(
                Inertia_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Inertia__initialize_w_params(
                Inertia_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Inertia__finalize(
                Inertia_* self);

            NDDSUSERDllExport
            void Inertia__finalize_ex(
                Inertia_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Inertia__finalize_w_params(
                Inertia_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Inertia__finalize_optional_members(
                Inertia_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Inertia__copy(
                Inertia_* dst,
                const Inertia_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* Inertia_ */

