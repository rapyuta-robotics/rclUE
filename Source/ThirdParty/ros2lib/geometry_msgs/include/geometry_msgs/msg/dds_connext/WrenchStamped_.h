

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from WrenchStamped_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef WrenchStamped__982260678_h
#define WrenchStamped__982260678_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Wrench_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace geometry_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *WrenchStamped_TYPENAME;

            struct WrenchStamped_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class WrenchStamped_TypeSupport;
            class WrenchStamped_DataWriter;
            class WrenchStamped_DataReader;
            #endif

            class WrenchStamped_ 
            {
              public:
                typedef struct WrenchStamped_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef WrenchStamped_TypeSupport TypeSupport;
                typedef WrenchStamped_DataWriter DataWriter;
                typedef WrenchStamped_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Wrench_   wrench_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* WrenchStamped__get_typecode(void); /* Type code */

            DDS_SEQUENCE(WrenchStamped_Seq, WrenchStamped_);

            NDDSUSERDllExport
            RTIBool WrenchStamped__initialize(
                WrenchStamped_* self);

            NDDSUSERDllExport
            RTIBool WrenchStamped__initialize_ex(
                WrenchStamped_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool WrenchStamped__initialize_w_params(
                WrenchStamped_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void WrenchStamped__finalize(
                WrenchStamped_* self);

            NDDSUSERDllExport
            void WrenchStamped__finalize_ex(
                WrenchStamped_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void WrenchStamped__finalize_w_params(
                WrenchStamped_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void WrenchStamped__finalize_optional_members(
                WrenchStamped_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool WrenchStamped__copy(
                WrenchStamped_* dst,
                const WrenchStamped_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* WrenchStamped_ */

