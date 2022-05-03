

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Point32_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Point32__725749681_h
#define Point32__725749681_h

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

            extern const char *Point32_TYPENAME;

            struct Point32_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Point32_TypeSupport;
            class Point32_DataWriter;
            class Point32_DataReader;
            #endif

            class Point32_ 
            {
              public:
                typedef struct Point32_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Point32_TypeSupport TypeSupport;
                typedef Point32_DataWriter DataWriter;
                typedef Point32_DataReader DataReader;
                #endif

                DDS_Float   x_ ;
                DDS_Float   y_ ;
                DDS_Float   z_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Point32__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Point32_Seq, Point32_);

            NDDSUSERDllExport
            RTIBool Point32__initialize(
                Point32_* self);

            NDDSUSERDllExport
            RTIBool Point32__initialize_ex(
                Point32_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Point32__initialize_w_params(
                Point32_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Point32__finalize(
                Point32_* self);

            NDDSUSERDllExport
            void Point32__finalize_ex(
                Point32_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Point32__finalize_w_params(
                Point32_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Point32__finalize_optional_members(
                Point32_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Point32__copy(
                Point32_* dst,
                const Point32_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* Point32_ */

