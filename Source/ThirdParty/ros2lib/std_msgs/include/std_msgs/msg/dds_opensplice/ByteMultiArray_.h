#ifndef _H_9EB833C00F05270AC7F91F800E944354_ByteMultiArray__H_
#define _H_9EB833C00F05270AC7F91F800E944354_ByteMultiArray__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "std_msgs/msg/dds_opensplice/MultiArrayLayout_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  ByteMultiArray_
            {
                struct _data__seq_uniq_{};
                typedef DDS_DCPSUFLSeq< ::DDS::Octet, struct _data__seq_uniq_ > _data__seq;
                typedef DDS_DCPSSequence_var< _data__seq > _data__seq_var;
                typedef DDS_DCPSSequence_out< _data__seq > _data__seq_out;
                ::std_msgs::msg::dds_::MultiArrayLayout_ layout_;
                _data__seq data_;
            };

            typedef DDS_DCPSStruct_var<ByteMultiArray_> ByteMultiArray__var;
            typedef DDS_DCPSStruct_out < ByteMultiArray_> ByteMultiArray__out;

        }

    }

}

#endif /* _H_9EB833C00F05270AC7F91F800E944354_ByteMultiArray__H_ */
