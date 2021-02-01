#ifndef _H_81F1B6DECB7068B8BCD40B3B30F86484_Int32MultiArray__H_
#define _H_81F1B6DECB7068B8BCD40B3B30F86484_Int32MultiArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/MultiArrayLayout_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  Int32MultiArray_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Long, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::MultiArrayLayout_ layout_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<Int32MultiArray_> Int32MultiArray__var;
            typedef DDS_DCPSStruct_out < Int32MultiArray_> Int32MultiArray__out;

        }

    }

}

#endif /* _H_81F1B6DECB7068B8BCD40B3B30F86484_Int32MultiArray__H_ */
