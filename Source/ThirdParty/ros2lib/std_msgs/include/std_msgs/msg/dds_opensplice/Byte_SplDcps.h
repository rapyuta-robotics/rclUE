#ifndef H_8F73DFFA6353B5D09A48B81760868112_Byte_SPLTYPES_H
#define H_8F73DFFA6353B5D09A48B81760868112_Byte_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Byte_.h"


extern c_metaObject __Byte__std_msgs__load (c_base base);

extern c_metaObject __Byte__std_msgs_msg__load (c_base base);

extern c_metaObject __Byte__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__Byte__metaDescriptor[];
extern const int std_msgs_msg_dds__Byte__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__Byte__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__Byte___load (c_base base);
struct _std_msgs_msg_dds__Byte_ ;
extern  v_copyin_result __std_msgs_msg_dds__Byte___copyIn(c_base base, const struct std_msgs::msg::dds_::Byte_ *from, struct _std_msgs_msg_dds__Byte_ *to);
extern  void __std_msgs_msg_dds__Byte___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__Byte_ {
    c_octet data_;
};

#undef OS_API
#endif
