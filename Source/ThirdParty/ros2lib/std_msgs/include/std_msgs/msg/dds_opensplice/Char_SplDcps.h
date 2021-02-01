#ifndef H_EE8395FB8CE16470F56969B1DB3132A3_Char_SPLTYPES_H
#define H_EE8395FB8CE16470F56969B1DB3132A3_Char_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Char_.h"


extern c_metaObject __Char__std_msgs__load (c_base base);

extern c_metaObject __Char__std_msgs_msg__load (c_base base);

extern c_metaObject __Char__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__Char__metaDescriptor[];
extern const int std_msgs_msg_dds__Char__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__Char__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__Char___load (c_base base);
struct _std_msgs_msg_dds__Char_ ;
extern  v_copyin_result __std_msgs_msg_dds__Char___copyIn(c_base base, const struct std_msgs::msg::dds_::Char_ *from, struct _std_msgs_msg_dds__Char_ *to);
extern  void __std_msgs_msg_dds__Char___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__Char_ {
    c_octet data_;
};

#undef OS_API
#endif
