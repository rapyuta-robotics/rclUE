#ifndef _H_39C85EC7C55BCE2E8027E04F3ABB4668_Header__H_
#define _H_39C85EC7C55BCE2E8027E04F3ABB4668_Header__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  Header_
            {
                ::builtin_interfaces::msg::dds_::Time_ stamp_;
                ::DDS::String_mgr frame_id_;
            };

            typedef DDS_DCPSStruct_var<Header_> Header__var;
            typedef DDS_DCPSStruct_out < Header_> Header__out;

        }

    }

}

#endif /* _H_39C85EC7C55BCE2E8027E04F3ABB4668_Header__H_ */
