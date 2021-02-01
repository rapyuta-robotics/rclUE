#ifndef H_76C5A894B9A7D06AF44EFAD4172EF511_Int64_SPLTYPES_H
#define H_76C5A894B9A7D06AF44EFAD4172EF511_Int64_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Int64_.h"


extern c_metaObject __Int64__std_msgs__load (c_base base);

extern c_metaObject __Int64__std_msgs_msg__load (c_base base);

extern c_metaObject __Int64__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__Int64__metaDescriptor[];
extern const int std_msgs_msg_dds__Int64__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__Int64__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__Int64___load (c_base base);
struct _std_msgs_msg_dds__Int64_ ;
extern  v_copyin_result __std_msgs_msg_dds__Int64___copyIn(c_base base, const struct std_msgs::msg::dds_::Int64_ *from, struct _std_msgs_msg_dds__Int64_ *to);
extern  void __std_msgs_msg_dds__Int64___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__Int64_ {
    c_longlong data_;
};

#undef OS_API
#endif
