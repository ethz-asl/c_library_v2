#pragma once
// MESSAGE SET_ROTOR_TILT_TARGET PACKING

#define MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET 96

MAVPACKED(
typedef struct __mavlink_set_rotor_tilt_target_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float alpha[6]; /*< [rad] Reference rotor tilt angle.*/
}) mavlink_set_rotor_tilt_target_t;

#define MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN 28
#define MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_MIN_LEN 28
#define MAVLINK_MSG_ID_96_LEN 28
#define MAVLINK_MSG_ID_96_MIN_LEN 28

#define MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_CRC 78
#define MAVLINK_MSG_ID_96_CRC 78

#define MAVLINK_MSG_SET_ROTOR_TILT_TARGET_FIELD_ALPHA_LEN 6

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_ROTOR_TILT_TARGET { \
    96, \
    "SET_ROTOR_TILT_TARGET", \
    2, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_rotor_tilt_target_t, time_boot_ms) }, \
         { "alpha", NULL, MAVLINK_TYPE_FLOAT, 6, 4, offsetof(mavlink_set_rotor_tilt_target_t, alpha) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_ROTOR_TILT_TARGET { \
    "SET_ROTOR_TILT_TARGET", \
    2, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_rotor_tilt_target_t, time_boot_ms) }, \
         { "alpha", NULL, MAVLINK_TYPE_FLOAT, 6, 4, offsetof(mavlink_set_rotor_tilt_target_t, alpha) }, \
         } \
}
#endif

/**
 * @brief Pack a set_rotor_tilt_target message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param alpha [rad] Reference rotor tilt angle.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_rotor_tilt_target_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, const float *alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN);
#else
    mavlink_set_rotor_tilt_target_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.alpha, alpha, sizeof(float)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_CRC);
}

/**
 * @brief Pack a set_rotor_tilt_target message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param alpha [rad] Reference rotor tilt angle.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_rotor_tilt_target_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,const float *alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN);
#else
    mavlink_set_rotor_tilt_target_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.alpha, alpha, sizeof(float)*6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_CRC);
}

/**
 * @brief Encode a set_rotor_tilt_target struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_rotor_tilt_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_rotor_tilt_target_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_rotor_tilt_target_t* set_rotor_tilt_target)
{
    return mavlink_msg_set_rotor_tilt_target_pack(system_id, component_id, msg, set_rotor_tilt_target->time_boot_ms, set_rotor_tilt_target->alpha);
}

/**
 * @brief Encode a set_rotor_tilt_target struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_rotor_tilt_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_rotor_tilt_target_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_rotor_tilt_target_t* set_rotor_tilt_target)
{
    return mavlink_msg_set_rotor_tilt_target_pack_chan(system_id, component_id, chan, msg, set_rotor_tilt_target->time_boot_ms, set_rotor_tilt_target->alpha);
}

/**
 * @brief Send a set_rotor_tilt_target message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param alpha [rad] Reference rotor tilt angle.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_rotor_tilt_target_send(mavlink_channel_t chan, uint32_t time_boot_ms, const float *alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET, buf, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_CRC);
#else
    mavlink_set_rotor_tilt_target_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.alpha, alpha, sizeof(float)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET, (const char *)&packet, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_CRC);
#endif
}

/**
 * @brief Send a set_rotor_tilt_target message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_rotor_tilt_target_send_struct(mavlink_channel_t chan, const mavlink_set_rotor_tilt_target_t* set_rotor_tilt_target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_rotor_tilt_target_send(chan, set_rotor_tilt_target->time_boot_ms, set_rotor_tilt_target->alpha);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET, (const char *)set_rotor_tilt_target, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_rotor_tilt_target_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, const float *alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET, buf, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_CRC);
#else
    mavlink_set_rotor_tilt_target_t *packet = (mavlink_set_rotor_tilt_target_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet->alpha, alpha, sizeof(float)*6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET, (const char *)packet, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_ROTOR_TILT_TARGET UNPACKING


/**
 * @brief Get field time_boot_ms from set_rotor_tilt_target message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_set_rotor_tilt_target_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field alpha from set_rotor_tilt_target message
 *
 * @return [rad] Reference rotor tilt angle.
 */
static inline uint16_t mavlink_msg_set_rotor_tilt_target_get_alpha(const mavlink_message_t* msg, float *alpha)
{
    return _MAV_RETURN_float_array(msg, alpha, 6,  4);
}

/**
 * @brief Decode a set_rotor_tilt_target message into a struct
 *
 * @param msg The message to decode
 * @param set_rotor_tilt_target C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_rotor_tilt_target_decode(const mavlink_message_t* msg, mavlink_set_rotor_tilt_target_t* set_rotor_tilt_target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_rotor_tilt_target->time_boot_ms = mavlink_msg_set_rotor_tilt_target_get_time_boot_ms(msg);
    mavlink_msg_set_rotor_tilt_target_get_alpha(msg, set_rotor_tilt_target->alpha);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN? msg->len : MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN;
        memset(set_rotor_tilt_target, 0, MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_LEN);
    memcpy(set_rotor_tilt_target, _MAV_PAYLOAD(msg), len);
#endif
}
