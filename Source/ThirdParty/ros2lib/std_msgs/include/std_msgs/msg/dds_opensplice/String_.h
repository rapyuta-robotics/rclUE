#ifndef _H_B0C421E3573E2487EE92604BA3673B87_String__H_
#define _H_B0C421E3573E2487EE92604BA3673B87_String__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  String_
            {
                ::DDS::String_mgr data_;
            };

            typedef DDS_DCPSStruct_var<String_> String__var;
            typedef DDS_DCPSStruct_out < String_> String__out;

        }

    }

}

#endif /* _H_B0C421E3573E2487EE92604BA3673B87_String__H_ */
