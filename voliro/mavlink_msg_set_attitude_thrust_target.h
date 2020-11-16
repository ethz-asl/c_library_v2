#pragma once
// MESSAGE SET_ATTITUDE_THRUST_TARGET PACKING

#define MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET 502

MAVPACKED(
typedef struct __mavlink_set_attitude_thrust_target_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp in milliseconds since system boot*/
 float q[4]; /*<  desired quaternion*/
 float rates[3]; /*<  desired angular rates*/
 float angular_acc_ff[3]; /*<  angular acceleration feedforward term*/
 float thrust[3]; /*<  thrust vector x, y, z in Newton*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
}) mavlink_set_attitude_thrust_target_t;

#define MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN 58
#define MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_MIN_LEN 58
#define MAVLINK_MSG_ID_502_LEN 58
#define MAVLINK_MSG_ID_502_MIN_LEN 58

#define MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_CRC 120
#define MAVLINK_MSG_ID_502_CRC 120

#define MAVLINK_MSG_SET_ATTITUDE_THRUST_TARGET_FIELD_Q_LEN 4
#define MAVLINK_MSG_SET_ATTITUDE_THRUST_TARGET_FIELD_RATES_LEN 3
#define MAVLINK_MSG_SET_ATTITUDE_THRUST_TARGET_FIELD_ANGULAR_ACC_FF_LEN 3
#define MAVLINK_MSG_SET_ATTITUDE_THRUST_TARGET_FIELD_THRUST_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_ATTITUDE_THRUST_TARGET { \
    502, \
    "SET_ATTITUDE_THRUST_TARGET", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_attitude_thrust_target_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 56, offsetof(mavlink_set_attitude_thrust_target_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 57, offsetof(mavlink_set_attitude_thrust_target_t, target_component) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 4, 4, offsetof(mavlink_set_attitude_thrust_target_t, q) }, \
         { "rates", NULL, MAVLINK_TYPE_FLOAT, 3, 20, offsetof(mavlink_set_attitude_thrust_target_t, rates) }, \
         { "angular_acc_ff", NULL, MAVLINK_TYPE_FLOAT, 3, 32, offsetof(mavlink_set_attitude_thrust_target_t, angular_acc_ff) }, \
         { "thrust", NULL, MAVLINK_TYPE_FLOAT, 3, 44, offsetof(mavlink_set_attitude_thrust_target_t, thrust) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_ATTITUDE_THRUST_TARGET { \
    "SET_ATTITUDE_THRUST_TARGET", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_attitude_thrust_target_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 56, offsetof(mavlink_set_attitude_thrust_target_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 57, offsetof(mavlink_set_attitude_thrust_target_t, target_component) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 4, 4, offsetof(mavlink_set_attitude_thrust_target_t, q) }, \
         { "rates", NULL, MAVLINK_TYPE_FLOAT, 3, 20, offsetof(mavlink_set_attitude_thrust_target_t, rates) }, \
         { "angular_acc_ff", NULL, MAVLINK_TYPE_FLOAT, 3, 32, offsetof(mavlink_set_attitude_thrust_target_t, angular_acc_ff) }, \
         { "thrust", NULL, MAVLINK_TYPE_FLOAT, 3, 44, offsetof(mavlink_set_attitude_thrust_target_t, thrust) }, \
         } \
}
#endif

/**
 * @brief Pack a set_attitude_thrust_target message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param q  desired quaternion
 * @param rates  desired angular rates
 * @param angular_acc_ff  angular acceleration feedforward term
 * @param thrust  thrust vector x, y, z in Newton
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_attitude_thrust_target_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, const float *q, const float *rates, const float *angular_acc_ff, const float *thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 56, target_system);
    _mav_put_uint8_t(buf, 57, target_component);
    _mav_put_float_array(buf, 4, q, 4);
    _mav_put_float_array(buf, 20, rates, 3);
    _mav_put_float_array(buf, 32, angular_acc_ff, 3);
    _mav_put_float_array(buf, 44, thrust, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN);
#else
    mavlink_set_attitude_thrust_target_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.q, q, sizeof(float)*4);
    mav_array_memcpy(packet.rates, rates, sizeof(float)*3);
    mav_array_memcpy(packet.angular_acc_ff, angular_acc_ff, sizeof(float)*3);
    mav_array_memcpy(packet.thrust, thrust, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_CRC);
}

/**
 * @brief Pack a set_attitude_thrust_target message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param q  desired quaternion
 * @param rates  desired angular rates
 * @param angular_acc_ff  angular acceleration feedforward term
 * @param thrust  thrust vector x, y, z in Newton
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_attitude_thrust_target_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,const float *q,const float *rates,const float *angular_acc_ff,const float *thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 56, target_system);
    _mav_put_uint8_t(buf, 57, target_component);
    _mav_put_float_array(buf, 4, q, 4);
    _mav_put_float_array(buf, 20, rates, 3);
    _mav_put_float_array(buf, 32, angular_acc_ff, 3);
    _mav_put_float_array(buf, 44, thrust, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN);
#else
    mavlink_set_attitude_thrust_target_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.q, q, sizeof(float)*4);
    mav_array_memcpy(packet.rates, rates, sizeof(float)*3);
    mav_array_memcpy(packet.angular_acc_ff, angular_acc_ff, sizeof(float)*3);
    mav_array_memcpy(packet.thrust, thrust, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_CRC);
}

/**
 * @brief Encode a set_attitude_thrust_target struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_attitude_thrust_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_attitude_thrust_target_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_attitude_thrust_target_t* set_attitude_thrust_target)
{
    return mavlink_msg_set_attitude_thrust_target_pack(system_id, component_id, msg, set_attitude_thrust_target->time_boot_ms, set_attitude_thrust_target->target_system, set_attitude_thrust_target->target_component, set_attitude_thrust_target->q, set_attitude_thrust_target->rates, set_attitude_thrust_target->angular_acc_ff, set_attitude_thrust_target->thrust);
}

/**
 * @brief Encode a set_attitude_thrust_target struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_attitude_thrust_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_attitude_thrust_target_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_attitude_thrust_target_t* set_attitude_thrust_target)
{
    return mavlink_msg_set_attitude_thrust_target_pack_chan(system_id, component_id, chan, msg, set_attitude_thrust_target->time_boot_ms, set_attitude_thrust_target->target_system, set_attitude_thrust_target->target_component, set_attitude_thrust_target->q, set_attitude_thrust_target->rates, set_attitude_thrust_target->angular_acc_ff, set_attitude_thrust_target->thrust);
}

/**
 * @brief Send a set_attitude_thrust_target message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param q  desired quaternion
 * @param rates  desired angular rates
 * @param angular_acc_ff  angular acceleration feedforward term
 * @param thrust  thrust vector x, y, z in Newton
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_attitude_thrust_target_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, const float *q, const float *rates, const float *angular_acc_ff, const float *thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 56, target_system);
    _mav_put_uint8_t(buf, 57, target_component);
    _mav_put_float_array(buf, 4, q, 4);
    _mav_put_float_array(buf, 20, rates, 3);
    _mav_put_float_array(buf, 32, angular_acc_ff, 3);
    _mav_put_float_array(buf, 44, thrust, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET, buf, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_CRC);
#else
    mavlink_set_attitude_thrust_target_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.q, q, sizeof(float)*4);
    mav_array_memcpy(packet.rates, rates, sizeof(float)*3);
    mav_array_memcpy(packet.angular_acc_ff, angular_acc_ff, sizeof(float)*3);
    mav_array_memcpy(packet.thrust, thrust, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET, (const char *)&packet, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_CRC);
#endif
}

/**
 * @brief Send a set_attitude_thrust_target message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_attitude_thrust_target_send_struct(mavlink_channel_t chan, const mavlink_set_attitude_thrust_target_t* set_attitude_thrust_target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_attitude_thrust_target_send(chan, set_attitude_thrust_target->time_boot_ms, set_attitude_thrust_target->target_system, set_attitude_thrust_target->target_component, set_attitude_thrust_target->q, set_attitude_thrust_target->rates, set_attitude_thrust_target->angular_acc_ff, set_attitude_thrust_target->thrust);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET, (const char *)set_attitude_thrust_target, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_attitude_thrust_target_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, const float *q, const float *rates, const float *angular_acc_ff, const float *thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 56, target_system);
    _mav_put_uint8_t(buf, 57, target_component);
    _mav_put_float_array(buf, 4, q, 4);
    _mav_put_float_array(buf, 20, rates, 3);
    _mav_put_float_array(buf, 32, angular_acc_ff, 3);
    _mav_put_float_array(buf, 44, thrust, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET, buf, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_CRC);
#else
    mavlink_set_attitude_thrust_target_t *packet = (mavlink_set_attitude_thrust_target_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->target_system = target_system;
    packet->target_component = target_component;
    mav_array_memcpy(packet->q, q, sizeof(float)*4);
    mav_array_memcpy(packet->rates, rates, sizeof(float)*3);
    mav_array_memcpy(packet->angular_acc_ff, angular_acc_ff, sizeof(float)*3);
    mav_array_memcpy(packet->thrust, thrust, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET, (const char *)packet, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_ATTITUDE_THRUST_TARGET UNPACKING


/**
 * @brief Get field time_boot_ms from set_attitude_thrust_target message
 *
 * @return [ms] Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_set_attitude_thrust_target_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from set_attitude_thrust_target message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_set_attitude_thrust_target_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  56);
}

/**
 * @brief Get field target_component from set_attitude_thrust_target message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_set_attitude_thrust_target_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  57);
}

/**
 * @brief Get field q from set_attitude_thrust_target message
 *
 * @return  desired quaternion
 */
static inline uint16_t mavlink_msg_set_attitude_thrust_target_get_q(const mavlink_message_t* msg, float *q)
{
    return _MAV_RETURN_float_array(msg, q, 4,  4);
}

/**
 * @brief Get field rates from set_attitude_thrust_target message
 *
 * @return  desired angular rates
 */
static inline uint16_t mavlink_msg_set_attitude_thrust_target_get_rates(const mavlink_message_t* msg, float *rates)
{
    return _MAV_RETURN_float_array(msg, rates, 3,  20);
}

/**
 * @brief Get field angular_acc_ff from set_attitude_thrust_target message
 *
 * @return  angular acceleration feedforward term
 */
static inline uint16_t mavlink_msg_set_attitude_thrust_target_get_angular_acc_ff(const mavlink_message_t* msg, float *angular_acc_ff)
{
    return _MAV_RETURN_float_array(msg, angular_acc_ff, 3,  32);
}

/**
 * @brief Get field thrust from set_attitude_thrust_target message
 *
 * @return  thrust vector x, y, z in Newton
 */
static inline uint16_t mavlink_msg_set_attitude_thrust_target_get_thrust(const mavlink_message_t* msg, float *thrust)
{
    return _MAV_RETURN_float_array(msg, thrust, 3,  44);
}

/**
 * @brief Decode a set_attitude_thrust_target message into a struct
 *
 * @param msg The message to decode
 * @param set_attitude_thrust_target C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_attitude_thrust_target_decode(const mavlink_message_t* msg, mavlink_set_attitude_thrust_target_t* set_attitude_thrust_target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_attitude_thrust_target->time_boot_ms = mavlink_msg_set_attitude_thrust_target_get_time_boot_ms(msg);
    mavlink_msg_set_attitude_thrust_target_get_q(msg, set_attitude_thrust_target->q);
    mavlink_msg_set_attitude_thrust_target_get_rates(msg, set_attitude_thrust_target->rates);
    mavlink_msg_set_attitude_thrust_target_get_angular_acc_ff(msg, set_attitude_thrust_target->angular_acc_ff);
    mavlink_msg_set_attitude_thrust_target_get_thrust(msg, set_attitude_thrust_target->thrust);
    set_attitude_thrust_target->target_system = mavlink_msg_set_attitude_thrust_target_get_target_system(msg);
    set_attitude_thrust_target->target_component = mavlink_msg_set_attitude_thrust_target_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN? msg->len : MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN;
        memset(set_attitude_thrust_target, 0, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_TARGET_LEN);
    memcpy(set_attitude_thrust_target, _MAV_PAYLOAD(msg), len);
#endif
}
