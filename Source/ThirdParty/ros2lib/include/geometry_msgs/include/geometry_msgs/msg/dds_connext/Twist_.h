

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Twist_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Twist__1039409222_h
#define Twist__1039409222_h

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

            extern const char *Twist_TYPENAME;

            struct Twist_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Twist_TypeSupport;
            class Twist_DataWriter;
            class Twist_DataReader;
            #endif

            class Twist_ 
            {
              public:
                typedef struct Twist_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Twist_TypeSupport TypeSupport;
                typedef Twist_DataWriter DataWriter;
                typedef Twist_DataReader DataReader;
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

            NDDSUSERDllExport DDS_TypeCode* Twist__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Twist_Seq, Twist_);

            NDDSUSERDllExport
            RTIBool Twist__initialize(
                Twist_* self);

            NDDSUSERDllExport
            RTIBool Twist__initialize_ex(
                Twist_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Twist__initialize_w_params(
                Twist_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Twist__finalize(
                Twist_* self);

            NDDSUSERDllExport
            void Twist__finalize_ex(
                Twist_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Twist__finalize_w_params(
                Twist_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Twist__finalize_optional_members(
                Twist_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Twist__copy(
                Twist_* dst,
                const Twist_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* Twist_ */

