#ifndef _H_B5B9EE885826EFD411BDE1BE7D3B9714_MultiArrayDimension__H_
#define _H_B5B9EE885826EFD411BDE1BE7D3B9714_MultiArrayDimension__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  MultiArrayDimension_
            {
                ::DDS::String_mgr label_;
                ::DDS::ULong size_;
                ::DDS::ULong stride_;
            };

            typedef DDS_DCPSStruct_var<MultiArrayDimension_> MultiArrayDimension__var;
            typedef DDS_DCPSStruct_out < MultiArrayDimension_> MultiArrayDimension__out;

        }

    }

}

#endif /* _H_B5B9EE885826EFD411BDE1BE7D3B9714_MultiArrayDimension__H_ */
