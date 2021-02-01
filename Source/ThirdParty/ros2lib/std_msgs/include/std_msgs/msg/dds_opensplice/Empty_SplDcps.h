#ifndef H_9FA34D7DF75C8F9043BB0F3B23225BB6_Empty_SPLTYPES_H
#define H_9FA34D7DF75C8F9043BB0F3B23225BB6_Empty_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Empty_.h"


extern c_metaObject __Empty__std_msgs__load (c_base base);

extern c_metaObject __Empty__std_msgs_msg__load (c_base base);

extern c_metaObject __Empty__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__Empty__metaDescriptor[];
extern const int std_msgs_msg_dds__Empty__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__Empty__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__Empty___load (c_base base);
struct _std_msgs_msg_dds__Empty_ ;
extern  v_copyin_result __std_msgs_msg_dds__Empty___copyIn(c_base base, const struct std_msgs::msg::dds_::Empty_ *from, struct _std_msgs_msg_dds__Empty_ *to);
extern  void __std_msgs_msg_dds__Empty___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__Empty_ {
    c_octet structure_needs_at_least_one_member_;
};

#undef OS_API
#endif
