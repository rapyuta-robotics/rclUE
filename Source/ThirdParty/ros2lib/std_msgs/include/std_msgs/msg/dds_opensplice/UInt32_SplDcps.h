#ifndef H_D9AC74956EA18FC21C47A0A89BB78B92_UInt32_SPLTYPES_H
#define H_D9AC74956EA18FC21C47A0A89BB78B92_UInt32_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_UInt32_.h"


extern c_metaObject __UInt32__std_msgs__load (c_base base);

extern c_metaObject __UInt32__std_msgs_msg__load (c_base base);

extern c_metaObject __UInt32__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__UInt32__metaDescriptor[];
extern const int std_msgs_msg_dds__UInt32__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__UInt32__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__UInt32___load (c_base base);
struct _std_msgs_msg_dds__UInt32_ ;
extern  v_copyin_result __std_msgs_msg_dds__UInt32___copyIn(c_base base, const struct std_msgs::msg::dds_::UInt32_ *from, struct _std_msgs_msg_dds__UInt32_ *to);
extern  void __std_msgs_msg_dds__UInt32___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__UInt32_ {
    c_ulong data_;
};

#undef OS_API
#endif
