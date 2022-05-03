

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Pose2D_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Pose2D__667497002_h
#define Pose2D__667497002_h

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

            extern const char *Pose2D_TYPENAME;

            struct Pose2D_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Pose2D_TypeSupport;
            class Pose2D_DataWriter;
            class Pose2D_DataReader;
            #endif

            class Pose2D_ 
            {
              public:
                typedef struct Pose2D_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Pose2D_TypeSupport TypeSupport;
                typedef Pose2D_DataWriter DataWriter;
                typedef Pose2D_DataReader DataReader;
                #endif

                DDS_Double   x_ ;
                DDS_Double   y_ ;
                DDS_Double   theta_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Pose2D__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Pose2D_Seq, Pose2D_);

            NDDSUSERDllExport
            RTIBool Pose2D__initialize(
                Pose2D_* self);

            NDDSUSERDllExport
            RTIBool Pose2D__initialize_ex(
                Pose2D_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Pose2D__initialize_w_params(
                Pose2D_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Pose2D__finalize(
                Pose2D_* self);

            NDDSUSERDllExport
            void Pose2D__finalize_ex(
                Pose2D_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Pose2D__finalize_w_params(
                Pose2D_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Pose2D__finalize_optional_members(
                Pose2D_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Pose2D__copy(
                Pose2D_* dst,
                const Pose2D_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace geometry_msgs  */

#endif /* Pose2D_ */

