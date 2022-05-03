

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Wrench_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Wrench__1342155861_h
#define Wrench__1342155861_h

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

            extern const char *Wrench_TYPENAME;

            struct Wrench_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Wrench_TypeSupport;
            class Wrench_DataWriter;
            class Wrench_DataReader;
            #endif

            class Wrench_ 
            {
              public:
                typedef struct Wrench_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Wrench_TypeSupport TypeSupport;
                typedef Wrench_DataWriter DataWriter;
                typedef Wrench_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::Vector3_   force_ ;
                geometry_msgs::msg::dds_::Vector3_   torque_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Wrench__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Wrench_Seq, Wrench_);

            NDDSUSERDllExport
            RTIBool Wrench__initialize(
                Wrench_* self);

            NDDSUSERDllExport
            RTIBool Wrench__initialize_ex(
                Wrench_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Wrench__initialize_w_params(
                Wrench_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Wrench__finalize(
                Wrench_* self);

            NDDSUSERDllExport
            void Wrench__finalize_ex(
                Wrench_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Wrench__finalize_w_params(
                Wrench_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Wrench__finalize_optional_members(
                Wrench_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Wrench__copy(
                Wrench_* dst,
                const Wrench_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* Wrench_ */

