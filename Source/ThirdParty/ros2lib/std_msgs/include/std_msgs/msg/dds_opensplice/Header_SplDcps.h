#ifndef H_39C85EC7C55BCE2E8027E04F3ABB4668_Header_SPLTYPES_H
#define H_39C85EC7C55BCE2E8027E04F3ABB4668_Header_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Header_.h"
#include "builtin_interfaces/msg/dds_opensplice/Time_SplDcps.h"



extern c_metaObject __Header__std_msgs__load (c_base base);

extern c_metaObject __Header__std_msgs_msg__load (c_base base);

extern c_metaObject __Header__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__Header__metaDescriptor[];
extern const int std_msgs_msg_dds__Header__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__Header__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__Header___load (c_base base);
struct _std_msgs_msg_dds__Header_ ;
extern  v_copyin_result __std_msgs_msg_dds__Header___copyIn(c_base base, const struct std_msgs::msg::dds_::Header_ *from, struct _std_msgs_msg_dds__Header_ *to);
extern  void __std_msgs_msg_dds__Header___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__Header_ {
    struct _builtin_interfaces_msg_dds__Time_ stamp_;
    c_string frame_id_;
};

#undef OS_API
#endif
