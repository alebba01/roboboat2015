/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <string.h>
#include "RXState_RXState_t.h"

static int __RXState_RXState_t_hash_computed;
static int64_t __RXState_RXState_t_hash;

int64_t __RXState_RXState_t_hash_recursive(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __RXState_RXState_t_get_hash)
            return 0;

    const __lcm_hash_ptr cp = { p, (void*)__RXState_RXState_t_get_hash };
    (void) cp;

    int64_t hash = 0xd1910f9edc18c482LL
         + __float_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __float_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __RXState_RXState_t_get_hash(void)
{
    if (!__RXState_RXState_t_hash_computed) {
        __RXState_RXState_t_hash = __RXState_RXState_t_hash_recursive(NULL);
        __RXState_RXState_t_hash_computed = 1;
    }

    return __RXState_RXState_t_hash;
}

int __RXState_RXState_t_encode_array(void *buf, int offset, int maxlen, const RXState_RXState_t *p, int elements)
{
    int pos = 0, thislen, element;

    for (element = 0; element < elements; element++) {

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].USV_pose, 3);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].USV_vel, 2);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].USV_euler, 3);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].PortState, 2);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_encode_array(buf, offset + pos, maxlen - pos, p[element].StbdState, 2);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].StartTime), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, &(p[element].ElapsedTime), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int RXState_RXState_t_encode(void *buf, int offset, int maxlen, const RXState_RXState_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __RXState_RXState_t_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __RXState_RXState_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int __RXState_RXState_t_encoded_array_size(const RXState_RXState_t *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++) {

        size += __float_encoded_array_size(p[element].USV_pose, 3);

        size += __float_encoded_array_size(p[element].USV_vel, 2);

        size += __float_encoded_array_size(p[element].USV_euler, 3);

        size += __float_encoded_array_size(p[element].PortState, 2);

        size += __float_encoded_array_size(p[element].StbdState, 2);

        size += __double_encoded_array_size(&(p[element].StartTime), 1);

        size += __double_encoded_array_size(&(p[element].ElapsedTime), 1);

    }
    return size;
}

int RXState_RXState_t_encoded_size(const RXState_RXState_t *p)
{
    return 8 + __RXState_RXState_t_encoded_array_size(p, 1);
}

int __RXState_RXState_t_decode_array(const void *buf, int offset, int maxlen, RXState_RXState_t *p, int elements)
{
    int pos = 0, thislen, element;

    for (element = 0; element < elements; element++) {

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].USV_pose, 3);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].USV_vel, 2);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].USV_euler, 3);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].PortState, 2);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __float_decode_array(buf, offset + pos, maxlen - pos, p[element].StbdState, 2);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].StartTime), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, &(p[element].ElapsedTime), 1);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __RXState_RXState_t_decode_array_cleanup(RXState_RXState_t *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {

        __float_decode_array_cleanup(p[element].USV_pose, 3);

        __float_decode_array_cleanup(p[element].USV_vel, 2);

        __float_decode_array_cleanup(p[element].USV_euler, 3);

        __float_decode_array_cleanup(p[element].PortState, 2);

        __float_decode_array_cleanup(p[element].StbdState, 2);

        __double_decode_array_cleanup(&(p[element].StartTime), 1);

        __double_decode_array_cleanup(&(p[element].ElapsedTime), 1);

    }
    return 0;
}

int RXState_RXState_t_decode(const void *buf, int offset, int maxlen, RXState_RXState_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __RXState_RXState_t_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __RXState_RXState_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int RXState_RXState_t_decode_cleanup(RXState_RXState_t *p)
{
    return __RXState_RXState_t_decode_array_cleanup(p, 1);
}

int __RXState_RXState_t_clone_array(const RXState_RXState_t *p, RXState_RXState_t *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {

        __float_clone_array(p[element].USV_pose, q[element].USV_pose, 3);

        __float_clone_array(p[element].USV_vel, q[element].USV_vel, 2);

        __float_clone_array(p[element].USV_euler, q[element].USV_euler, 3);

        __float_clone_array(p[element].PortState, q[element].PortState, 2);

        __float_clone_array(p[element].StbdState, q[element].StbdState, 2);

        __double_clone_array(&(p[element].StartTime), &(q[element].StartTime), 1);

        __double_clone_array(&(p[element].ElapsedTime), &(q[element].ElapsedTime), 1);

    }
    return 0;
}

RXState_RXState_t *RXState_RXState_t_copy(const RXState_RXState_t *p)
{
    RXState_RXState_t *q = (RXState_RXState_t*) malloc(sizeof(RXState_RXState_t));
    __RXState_RXState_t_clone_array(p, q, 1);
    return q;
}

void RXState_RXState_t_destroy(RXState_RXState_t *p)
{
    __RXState_RXState_t_decode_array_cleanup(p, 1);
    free(p);
}

int RXState_RXState_t_publish(lcm_t *lc, const char *channel, const RXState_RXState_t *p)
{
      int max_data_size = RXState_RXState_t_encoded_size (p);
      uint8_t *buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = RXState_RXState_t_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = lcm_publish (lc, channel, buf, data_size);
      free (buf);
      return status;
}

struct _RXState_RXState_t_subscription_t {
    RXState_RXState_t_handler_t user_handler;
    void *userdata;
    lcm_subscription_t *lc_h;
};
static
void RXState_RXState_t_handler_stub (const lcm_recv_buf_t *rbuf,
                            const char *channel, void *userdata)
{
    int status;
    RXState_RXState_t p;
    memset(&p, 0, sizeof(RXState_RXState_t));
    status = RXState_RXState_t_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding RXState_RXState_t!!!\n", status);
        return;
    }

    RXState_RXState_t_subscription_t *h = (RXState_RXState_t_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    RXState_RXState_t_decode_cleanup (&p);
}

RXState_RXState_t_subscription_t* RXState_RXState_t_subscribe (lcm_t *lcm,
                    const char *channel,
                    RXState_RXState_t_handler_t f, void *userdata)
{
    RXState_RXState_t_subscription_t *n = (RXState_RXState_t_subscription_t*)
                       malloc(sizeof(RXState_RXState_t_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->lc_h = lcm_subscribe (lcm, channel,
                                 RXState_RXState_t_handler_stub, n);
    if (n->lc_h == NULL) {
        fprintf (stderr,"couldn't reg RXState_RXState_t LCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int RXState_RXState_t_subscription_set_queue_capacity (RXState_RXState_t_subscription_t* subs,
                              int num_messages)
{
    return lcm_subscription_set_queue_capacity (subs->lc_h, num_messages);
}

int RXState_RXState_t_unsubscribe(lcm_t *lcm, RXState_RXState_t_subscription_t* hid)
{
    int status = lcm_unsubscribe (lcm, hid->lc_h);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe RXState_RXState_t_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}
