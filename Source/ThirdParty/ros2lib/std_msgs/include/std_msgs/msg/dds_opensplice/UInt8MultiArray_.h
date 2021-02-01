#ifndef _H_70E48D10D4859CB3DADBC91E83BD2055_UInt8MultiArray__H_
#define _H_70E48D10D4859CB3DADBC91E83BD2055_UInt8MultiArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/MultiArrayLayout_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  UInt8MultiArray_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::MultiArrayLayout_ layout_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<UInt8MultiArray_> UInt8MultiArray__var;
            typedef DDS_DCPSStruct_out < UInt8MultiArray_> UInt8MultiArray__out;

        }

    }

}

#endif /* _H_70E48D10D4859CB3DADBC91E83BD2055_UInt8MultiArray__H_ */
