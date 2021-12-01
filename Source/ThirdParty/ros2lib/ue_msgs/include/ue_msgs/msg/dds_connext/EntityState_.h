

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from EntityState_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef EntityState__628201347_h
#define EntityState__628201347_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Pose_.h"
#include "geometry_msgs/msg/dds_connext/Twist_.h"
namespace ue_msgs {
    namespace msg {
        namespace dds_ {

            extern const char *EntityState_TYPENAME;

            struct EntityState_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class EntityState_TypeSupport;
            class EntityState_DataWriter;
            class EntityState_DataReader;
            #endif

            class EntityState_ 
            {
              public:
                typedef struct EntityState_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef EntityState_TypeSupport TypeSupport;
                typedef EntityState_DataWriter DataWriter;
                typedef EntityState_DataReader DataReader;
                #endif

                DDS_Char *   name_ ;
                geometry_msgs::msg::dds_::Pose_   pose_ ;
                geometry_msgs::msg::dds_::Twist_   twist_ ;
                DDS_Char *   reference_frame_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* EntityState__get_typecode(void); /* Type code */

            DDS_SEQUENCE(EntityState_Seq, EntityState_);

            NDDSUSERDllExport
            RTIBool EntityState__initialize(
                EntityState_* self);

            NDDSUSERDllExport
            RTIBool EntityState__initialize_ex(
                EntityState_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool EntityState__initialize_w_params(
                EntityState_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void EntityState__finalize(
                EntityState_* self);

            NDDSUSERDllExport
            void EntityState__finalize_ex(
                EntityState_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void EntityState__finalize_w_params(
                EntityState_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void EntityState__finalize_optional_members(
                EntityState_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool EntityState__copy(
                EntityState_* dst,
                const EntityState_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace ue_msgs  */

#endif /* EntityState_ */

