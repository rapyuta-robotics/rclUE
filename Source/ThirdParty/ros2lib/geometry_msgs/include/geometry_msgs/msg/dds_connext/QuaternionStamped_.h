

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from QuaternionStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef QuaternionStamped__1667985951_h
#define QuaternionStamped__1667985951_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Quaternion_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *QuaternionStamped_TYPENAME;

            struct QuaternionStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class QuaternionStamped_TypeSupport;
            class QuaternionStamped_DataWriter;
            class QuaternionStamped_DataReader;
            #endif

            class QuaternionStamped_ 
            {
              public:
                typedef struct QuaternionStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef QuaternionStamped_TypeSupport TypeSupport;
                typedef QuaternionStamped_DataWriter DataWriter;
                typedef QuaternionStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Quaternion_   quaternion_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* QuaternionStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(QuaternionStamped_Seq, QuaternionStamped_);

            NDDSUSERDllExport
            RTIBool QuaternionStamped__initialize(
                QuaternionStamped_* self);

            NDDSUSERDllExport
            RTIBool QuaternionStamped__initialize_ex(
                QuaternionStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool QuaternionStamped__initialize_w_params(
                QuaternionStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void QuaternionStamped__finalize(
                QuaternionStamped_* self);

            NDDSUSERDllExport
            void QuaternionStamped__finalize_ex(
                QuaternionStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void QuaternionStamped__finalize_w_params(
                QuaternionStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void QuaternionStamped__finalize_optional_members(
                QuaternionStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool QuaternionStamped__copy(
                QuaternionStamped_* dst,
                const QuaternionStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* QuaternionStamped_ */

