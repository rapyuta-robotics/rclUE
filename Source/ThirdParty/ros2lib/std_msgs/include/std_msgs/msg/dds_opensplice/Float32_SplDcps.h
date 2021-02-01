#ifndef H_D63E7EE51D9C598930074B555F3FC4D1_Float32_SPLTYPES_H
#define H_D63E7EE51D9C598930074B555F3FC4D1_Float32_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Float32_.h"


extern c_metaObject __Float32__std_msgs__load (c_base base);

extern c_metaObject __Float32__std_msgs_msg__load (c_base base);

extern c_metaObject __Float32__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__Float32__metaDescriptor[];
extern const int std_msgs_msg_dds__Float32__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__Float32__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__Float32___load (c_base base);
struct _std_msgs_msg_dds__Float32_ ;
extern  v_copyin_result __std_msgs_msg_dds__Float32___copyIn(c_base base, const struct std_msgs::msg::dds_::Float32_ *from, struct _std_msgs_msg_dds__Float32_ *to);
extern  void __std_msgs_msg_dds__Float32___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__Float32_ {
    c_float data_;
};

#undef OS_API
#endif
