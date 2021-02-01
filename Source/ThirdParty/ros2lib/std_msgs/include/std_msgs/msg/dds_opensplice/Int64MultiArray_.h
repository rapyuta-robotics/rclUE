#ifndef _H_A2671559D30AAD7F957DB7AA6B86C5FC_Int64MultiArray__H_
#define _H_A2671559D30AAD7F957DB7AA6B86C5FC_Int64MultiArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/MultiArrayLayout_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  Int64MultiArray_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::LongLong, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::MultiArrayLayout_ layout_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<Int64MultiArray_> Int64MultiArray__var;
            typedef DDS_DCPSStruct_out < Int64MultiArray_> Int64MultiArray__out;

        }

    }

}

#endif /* _H_A2671559D30AAD7F957DB7AA6B86C5FC_Int64MultiArray__H_ */
