

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PointField_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef PointField__914578551_h
#define PointField__914578551_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace sensor_msgs {
    namespace msg {
        namespace dds_ {
            namespace PointField_Constants {
                static const DDS_Octet INT8_= 1;
                static const DDS_Octet UINT8_= 2;
                static const DDS_Octet INT16_= 3;
                static const DDS_Octet UINT16_= 4;
                static const DDS_Octet INT32_= 5;
                static const DDS_Octet UINT32_= 6;
                static const DDS_Octet FLOAT32_= 7;
                static const DDS_Octet FLOAT64_= 8;
            } /* namespace PointField_Constants  */

            extern const char *PointField_TYPENAME;

            struct PointField_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class PointField_TypeSupport;
            class PointField_DataWriter;
            class PointField_DataReader;
            #endif

            class PointField_ 
            {
              public:
                typedef struct PointField_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef PointField_TypeSupport TypeSupport;
                typedef PointField_DataWriter DataWriter;
                typedef PointField_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                DDS_UnsignedLong   offset_ ;
                DDS_Octet   datatype_ ;
                DDS_UnsignedLong   count_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* PointField__get_typecode(void); /* Type code */

            DDS_SEQUENCE(PointField_Seq, PointField_);

            NDDSUSERDllExport
            RTIBool PointField__initialize(
                PointField_* self);

            NDDSUSERDllExport
            RTIBool PointField__initialize_ex(
                PointField_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool PointField__initialize_w_params(
                PointField_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void PointField__finalize(
                PointField_* self);

            NDDSUSERDllExport
            void PointField__finalize_ex(
                PointField_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void PointField__finalize_w_params(
                PointField_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void PointField__finalize_optional_members(
                PointField_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool PointField__copy(
                PointField_* dst,
                const PointField_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace sensor_msgs  */

#endif /* PointField_ */

