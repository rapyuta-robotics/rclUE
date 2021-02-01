#ifndef H_66603700D1C180F3EAACF87C11821884_Int16_SPLTYPES_H
#define H_66603700D1C180F3EAACF87C11821884_Int16_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Int16_.h"


extern c_metaObject __Int16__std_msgs__load (c_base base);

extern c_metaObject __Int16__std_msgs_msg__load (c_base base);

extern c_metaObject __Int16__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__Int16__metaDescriptor[];
extern const int std_msgs_msg_dds__Int16__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__Int16__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__Int16___load (c_base base);
struct _std_msgs_msg_dds__Int16_ ;
extern  v_copyin_result __std_msgs_msg_dds__Int16___copyIn(c_base base, const struct std_msgs::msg::dds_::Int16_ *from, struct _std_msgs_msg_dds__Int16_ *to);
extern  void __std_msgs_msg_dds__Int16___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__Int16_ {
    c_short data_;
};

#undef OS_API
#endif
