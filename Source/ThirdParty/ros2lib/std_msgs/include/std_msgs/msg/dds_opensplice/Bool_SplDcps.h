#ifndef H_18C1786C3323808F675F31C5E0FE8B97_Bool_SPLTYPES_H
#define H_18C1786C3323808F675F31C5E0FE8B97_Bool_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Bool_.h"


extern c_metaObject __Bool__std_msgs__load (c_base base);

extern c_metaObject __Bool__std_msgs_msg__load (c_base base);

extern c_metaObject __Bool__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__Bool__metaDescriptor[];
extern const int std_msgs_msg_dds__Bool__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__Bool__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__Bool___load (c_base base);
struct _std_msgs_msg_dds__Bool_ ;
extern  v_copyin_result __std_msgs_msg_dds__Bool___copyIn(c_base base, const struct std_msgs::msg::dds_::Bool_ *from, struct _std_msgs_msg_dds__Bool_ *to);
extern  void __std_msgs_msg_dds__Bool___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__Bool_ {
    c_bool data_;
};

#undef OS_API
#endif
