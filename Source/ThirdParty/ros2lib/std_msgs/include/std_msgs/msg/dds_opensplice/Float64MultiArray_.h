#ifndef _H_6E2D6B72145F4072A78909D32DCD18D5_Float64MultiArray__H_
#define _H_6E2D6B72145F4072A78909D32DCD18D5_Float64MultiArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/MultiArrayLayout_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  Float64MultiArray_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Double, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::MultiArrayLayout_ layout_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<Float64MultiArray_> Float64MultiArray__var;
            typedef DDS_DCPSStruct_out < Float64MultiArray_> Float64MultiArray__out;

        }

    }

}

#endif /* _H_6E2D6B72145F4072A78909D32DCD18D5_Float64MultiArray__H_ */
