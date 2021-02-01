#ifndef _H_A4B03EF7B4562CFFBC22A682471F8D52_ColorRGBA__H_
#define _H_A4B03EF7B4562CFFBC22A682471F8D52_ColorRGBA__H_

#include "sacpp_mapping.h"
#include "cpp_dcps_if.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            struct  ColorRGBA_
            {
                ::DDS::Float r_;
                ::DDS::Float g_;
                ::DDS::Float b_;
                ::DDS::Float a_;
            };

            typedef DDS_DCPSStruct_var<ColorRGBA_> ColorRGBA__var;
            typedef ColorRGBA_& ColorRGBA__out;

        }

    }

}

#endif /* _H_A4B03EF7B4562CFFBC22A682471F8D52_ColorRGBA__H_ */
