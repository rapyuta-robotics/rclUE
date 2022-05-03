

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MagneticField_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MagneticField__1820885398_h
#define MagneticField__1820885398_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Vector3_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace sensor_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *MagneticField_TYPENAME;

            struct MagneticField_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MagneticField_TypeSupport;
            class MagneticField_DataWriter;
            class MagneticField_DataReader;
            #endif

            class MagneticField_ 
            {
              public:
                typedef struct MagneticField_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MagneticField_TypeSupport TypeSupport;
                typedef MagneticField_DataWriter DataWriter;
                typedef MagneticField_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                geometry_msgs::msg::dds_::Vector3_   magnetic_field_ ;
                DDS_Double   magnetic_field_covariance_ [9];

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MagneticField__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MagneticField_Seq, MagneticField_);

            NDDSUSERDllExport
            RTIBool MagneticField__initialize(
                MagneticField_* self);

            NDDSUSERDllExport
            RTIBool MagneticField__initialize_ex(
                MagneticField_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MagneticField__initialize_w_params(
                MagneticField_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MagneticField__finalize(
                MagneticField_* self);

            NDDSUSERDllExport
            void MagneticField__finalize_ex(
                MagneticField_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MagneticField__finalize_w_params(
                MagneticField_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MagneticField__finalize_optional_members(
                MagneticField_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MagneticField__copy(
                MagneticField_* dst,
                const MagneticField_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* MagneticField_ */

