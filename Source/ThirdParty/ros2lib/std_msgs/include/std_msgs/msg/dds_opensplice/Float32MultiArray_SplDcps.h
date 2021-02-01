#ifndef H_76190CDA9E67F28D4B0FF2179EB8F77F_Float32MultiArray_SPLTYPES_H
#define H_76190CDA9E67F28D4B0FF2179EB8F77F_Float32MultiArray_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Float32MultiArray_.h"
#include "std_msgs/msg/dds_opensplice/MultiArrayLayout_SplDcps.h"



extern c_metaObject __Float32MultiArray__std_msgs__load (c_base base);

extern c_metaObject __Float32MultiArray__std_msgs_msg__load (c_base base);

extern c_metaObject __Float32MultiArray__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__Float32MultiArray__metaDescriptor[];
extern const int std_msgs_msg_dds__Float32MultiArray__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__Float32MultiArray__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__Float32MultiArray___load (c_base base);
struct _std_msgs_msg_dds__Float32MultiArray_ ;
extern  v_copyin_result __std_msgs_msg_dds__Float32MultiArray___copyIn(c_base base, const struct std_msgs::msg::dds_::Float32MultiArray_ *from, struct _std_msgs_msg_dds__Float32MultiArray_ *to);
extern  void __std_msgs_msg_dds__Float32MultiArray___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__Float32MultiArray_ {
    struct _std_msgs_msg_dds__MultiArrayLayout_ layout_;
    c_sequence data_;
};

#undef OS_API
#endif
