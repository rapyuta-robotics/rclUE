#ifndef H_81F1B6DECB7068B8BCD40B3B30F86484_Int32MultiArray_SPLTYPES_H
#define H_81F1B6DECB7068B8BCD40B3B30F86484_Int32MultiArray_SPLTYPES_H

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>
#include <v_copyIn.h>

#include "ccpp_Int32MultiArray_.h"
#include "std_msgs/msg/dds_opensplice/MultiArrayLayout_SplDcps.h"



extern c_metaObject __Int32MultiArray__std_msgs__load (c_base base);

extern c_metaObject __Int32MultiArray__std_msgs_msg__load (c_base base);

extern c_metaObject __Int32MultiArray__std_msgs_msg_dds___load (c_base base);

extern const char *std_msgs_msg_dds__Int32MultiArray__metaDescriptor[];
extern const int std_msgs_msg_dds__Int32MultiArray__metaDescriptorArrLength;
extern const int std_msgs_msg_dds__Int32MultiArray__metaDescriptorLength;
extern c_metaObject __std_msgs_msg_dds__Int32MultiArray___load (c_base base);
struct _std_msgs_msg_dds__Int32MultiArray_ ;
extern  v_copyin_result __std_msgs_msg_dds__Int32MultiArray___copyIn(c_base base, const struct std_msgs::msg::dds_::Int32MultiArray_ *from, struct _std_msgs_msg_dds__Int32MultiArray_ *to);
extern  void __std_msgs_msg_dds__Int32MultiArray___copyOut(const void *_from, void *_to);
struct _std_msgs_msg_dds__Int32MultiArray_ {
    struct _std_msgs_msg_dds__MultiArrayLayout_ layout_;
    c_sequence data_;
};

#undef OS_API
#endif
