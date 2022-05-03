

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Accel_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Accel__631439141_h
#define Accel__631439141_h

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

            extern const char *Accel_TYPENAME;

            struct Accel_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Accel_TypeSupport;
            class Accel_DataWriter;
            class Accel_DataReader;
            #endif

            class Accel_ 
            {
              public:
                typedef struct Accel_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Accel_TypeSupport TypeSupport;
                typedef Accel_DataWriter DataWriter;
                typedef Accel_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::Vector3_   linear_ ;
                geometry_msgs::msg::dds_::Vector3_   angular_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Accel__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Accel_Seq, Accel_);

            NDDSUSERDllExport
            RTIBool Accel__initialize(
                Accel_* self);

            NDDSUSERDllExport
            RTIBool Accel__initialize_ex(
                Accel_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Accel__initialize_w_params(
                Accel_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Accel__finalize(
                Accel_* self);

            NDDSUSERDllExport
            void Accel__finalize_ex(
                Accel_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Accel__finalize_w_params(
                Accel_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Accel__finalize_optional_members(
                Accel_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Accel__copy(
                Accel_* dst,
                const Accel_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* Accel_ */

