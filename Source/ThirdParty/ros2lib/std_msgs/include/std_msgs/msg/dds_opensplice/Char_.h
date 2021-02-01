#ifndef _H_EE8395FB8CE16470F56969B1DB3132A3_Char__H_
#define _H_EE8395FB8CE16470F56969B1DB3132A3_Char__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  Char_
            {
                ::DDS::Octet data_;
            };

            typedef DDS_DCPSStruct_var<Char_> Char__var;
            typedef Char_& Char__out;

        }

    }

}

#endif /* _H_EE8395FB8CE16470F56969B1DB3132A3_Char__H_ */
