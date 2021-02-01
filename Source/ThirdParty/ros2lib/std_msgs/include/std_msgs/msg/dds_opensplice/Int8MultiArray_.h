#ifndef _H_F57369A3787F0DF1B1E9C64CADBDCB20_Int8MultiArray__H_
#define _H_F57369A3787F0DF1B1E9C64CADBDCB20_Int8MultiArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/MultiArrayLayout_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  Int8MultiArray_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::MultiArrayLayout_ layout_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<Int8MultiArray_> Int8MultiArray__var;
            typedef DDS_DCPSStruct_out < Int8MultiArray_> Int8MultiArray__out;

        }

    }

}

#endif /* _H_F57369A3787F0DF1B1E9C64CADBDCB20_Int8MultiArray__H_ */
