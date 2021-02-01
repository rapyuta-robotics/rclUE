#ifndef _H_DE0B7A2FC6DF31167F737E5C3850E0CA_MultiArrayLayout__H_
#define _H_DE0B7A2FC6DF31167F737E5C3850E0CA_MultiArrayLayout__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/MultiArrayDimension_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  MultiArrayLayout_
            {
                struct _dim__seq_uniq_{};
                typedef DDS_DCPSUVLSeq< ::std_msgs::msg::dds_::MultiArrayDimension_, struct _dim__seq_uniq_ > _dim__seq;
                typedef DDS_DCPSSequence_var< _dim__seq > _dim__seq_var;
                typedef DDS_DCPSSequence_out< _dim__seq > _dim__seq_out;
                _dim__seq dim_;
                ::DDS::ULong data_offset_;
            };

            typedef DDS_DCPSStruct_var<MultiArrayLayout_> MultiArrayLayout__var;
            typedef DDS_DCPSStruct_out < MultiArrayLayout_> MultiArrayLayout__out;

        }

    }

}

#endif /* _H_DE0B7A2FC6DF31167F737E5C3850E0CA_MultiArrayLayout__H_ */
