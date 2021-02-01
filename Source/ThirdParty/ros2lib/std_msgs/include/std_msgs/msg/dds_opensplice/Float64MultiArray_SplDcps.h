#ifndef H_6E2D6B72145F4072A78909D32DCD18D5_Float64MultiArray_SPLTYPES_H
#define H_6E2D6B72145F4072A78909D32DCD18D5_Float64MultiArray_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Float64MultiArray_.h"
#include "std_msgs/msg/dds_opensplice/MultiArrayLayout_SplDcps.h"



extern c_metaObject __Float64MultiArray__std_msgs__load (c_base base);

extern c_metaObject __Float64MultiArray__std_msgs_msg__load (c_base base);

extern c_metaObject __Float64MultiArray__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__Float64MultiArray__metaDescriptor[];
extern const int std_msgs_msg_dds__Float64MultiArray__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__Float64MultiArray__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__Float64MultiArray___load (c_base base);
struct _std_msgs_msg_dds__Float64MultiArray_ ;
extern  v_copyin_result __std_msgs_msg_dds__Float64MultiArray___copyIn(c_base base, const struct std_msgs::msg::dds_::Float64MultiArray_ *from, struct _std_msgs_msg_dds__Float64MultiArray_ *to);
extern  void __std_msgs_msg_dds__Float64MultiArray___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__Float64MultiArray_ {
    struct _std_msgs_msg_dds__MultiArrayLayout_ layout_;
    c_sequence data_;
};

#undef OS_API
#endif
