

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from TwistStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef TwistStamped__1611246972_h
#define TwistStamped__1611246972_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Twist_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *TwistStamped_TYPENAME;

            struct TwistStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class TwistStamped_TypeSupport;
            class TwistStamped_DataWriter;
            class TwistStamped_DataReader;
            #endif

            class TwistStamped_ 
            {
              public:
                typedef struct TwistStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef TwistStamped_TypeSupport TypeSupport;
                typedef TwistStamped_DataWriter DataWriter;
                typedef TwistStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Twist_   twist_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* TwistStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(TwistStamped_Seq, TwistStamped_);

            NDDSUSERDllExport
            RTIBool TwistStamped__initialize(
                TwistStamped_* self);

            NDDSUSERDllExport
            RTIBool TwistStamped__initialize_ex(
                TwistStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool TwistStamped__initialize_w_params(
                TwistStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void TwistStamped__finalize(
                TwistStamped_* self);

            NDDSUSERDllExport
            void TwistStamped__finalize_ex(
                TwistStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void TwistStamped__finalize_w_params(
                TwistStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void TwistStamped__finalize_optional_members(
                TwistStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool TwistStamped__copy(
                TwistStamped_* dst,
                const TwistStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* TwistStamped_ */

