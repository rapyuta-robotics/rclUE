#ifndef _H_B674CF1A64C7479C869057979E916B10_UInt64MultiArray__H_
#define _H_B674CF1A64C7479C869057979E916B10_UInt64MultiArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/MultiArrayLayout_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  UInt64MultiArray_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::ULongLong, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::MultiArrayLayout_ layout_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<UInt64MultiArray_> UInt64MultiArray__var;
            typedef DDS_DCPSStruct_out < UInt64MultiArray_> UInt64MultiArray__out;

        }

    }

}

#endif /* _H_B674CF1A64C7479C869057979E916B10_UInt64MultiArray__H_ */
