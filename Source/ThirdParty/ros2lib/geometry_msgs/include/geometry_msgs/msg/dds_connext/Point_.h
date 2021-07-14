

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Point_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Point__1037322411_h
#define Point__1037322411_h

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

            extern const char *Point_TYPENAME;

            struct Point_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Point_TypeSupport;
            class Point_DataWriter;
            class Point_DataReader;
            #endif

            class Point_ 
            {
              public:
                typedef struct Point_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Point_TypeSupport TypeSupport;
                typedef Point_DataWriter DataWriter;
                typedef Point_DataReader DataReader;
                #endif

                DDS_Double   x_ ;
                DDS_Double   y_ ;
                DDS_Double   z_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Point__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Point_Seq, Point_);

            NDDSUSERDllExport
            RTIBool Point__initialize(
                Point_* self);

            NDDSUSERDllExport
            RTIBool Point__initialize_ex(
                Point_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Point__initialize_w_params(
                Point_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Point__finalize(
                Point_* self);

            NDDSUSERDllExport
            void Point__finalize_ex(
                Point_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Point__finalize_w_params(
                Point_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Point__finalize_optional_members(
                Point_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Point__copy(
                Point_* dst,
                const Point_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* Point_ */

