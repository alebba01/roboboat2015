/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <stdint.h>
#include <stdlib.h>
#include <lcm/lcm_coretypes.h>
#include <lcm/lcm.h>

#ifndef _RXState_RXState_t_h
#define _RXState_RXState_t_h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _RXState_RXState_t RXState_RXState_t;
struct _RXState_RXState_t
{
    float      USV_pose[3];
    float      USV_vel[2];
    float      USV_euler[3];
    float      PortState[2];
    float      StbdState[2];
    double     StartTime;
    double     ElapsedTime;
};

RXState_RXState_t   *RXState_RXState_t_copy(const RXState_RXState_t *p);
void RXState_RXState_t_destroy(RXState_RXState_t *p);

typedef struct _RXState_RXState_t_subscription_t RXState_RXState_t_subscription_t;
typedef void(*RXState_RXState_t_handler_t)(const lcm_recv_buf_t *rbuf,
             const char *channel, const RXState_RXState_t *msg, void *user);

int RXState_RXState_t_publish(lcm_t *lcm, const char *channel, const RXState_RXState_t *p);
RXState_RXState_t_subscription_t* RXState_RXState_t_subscribe(lcm_t *lcm, const char *channel, RXState_RXState_t_handler_t f, void *userdata);
int RXState_RXState_t_unsubscribe(lcm_t *lcm, RXState_RXState_t_subscription_t* hid);
int RXState_RXState_t_subscription_set_queue_capacity(RXState_RXState_t_subscription_t* subs,
                              int num_messages);


int  RXState_RXState_t_encode(void *buf, int offset, int maxlen, const RXState_RXState_t *p);
int  RXState_RXState_t_decode(const void *buf, int offset, int maxlen, RXState_RXState_t *p);
int  RXState_RXState_t_decode_cleanup(RXState_RXState_t *p);
int  RXState_RXState_t_encoded_size(const RXState_RXState_t *p);

// LCM support functions. Users should not call these
int64_t __RXState_RXState_t_get_hash(void);
int64_t __RXState_RXState_t_hash_recursive(const __lcm_hash_ptr *p);
int     __RXState_RXState_t_encode_array(void *buf, int offset, int maxlen, const RXState_RXState_t *p, int elements);
int     __RXState_RXState_t_decode_array(const void *buf, int offset, int maxlen, RXState_RXState_t *p, int elements);
int     __RXState_RXState_t_decode_array_cleanup(RXState_RXState_t *p, int elements);
int     __RXState_RXState_t_encoded_array_size(const RXState_RXState_t *p, int elements);
int     __RXState_RXState_t_clone_array(const RXState_RXState_t *p, RXState_RXState_t *q, int elements);

#ifdef __cplusplus
}
#endif

#endif