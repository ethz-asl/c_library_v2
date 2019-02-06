#pragma once
// MESSAGE SET_ALLOCATION_MATRIX PACKING

#define MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX 97

MAVPACKED(
typedef struct __mavlink_set_allocation_matrix_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float alpha[36]; /*< [rad] Reference rotor tilt angle.*/
}) mavlink_set_allocation_matrix_t;

#define MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN 148
#define MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_MIN_LEN 148
#define MAVLINK_MSG_ID_97_LEN 148
#define MAVLINK_MSG_ID_97_MIN_LEN 148

#define MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_CRC 108
#define MAVLINK_MSG_ID_97_CRC 108

#define MAVLINK_MSG_SET_ALLOCATION_MATRIX_FIELD_ALPHA_LEN 36

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_ALLOCATION_MATRIX { \
    97, \
    "SET_ALLOCATION_MATRIX", \
    2, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_allocation_matrix_t, time_boot_ms) }, \
         { "alpha", NULL, MAVLINK_TYPE_FLOAT, 36, 4, offsetof(mavlink_set_allocation_matrix_t, alpha) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_ALLOCATION_MATRIX { \
    "SET_ALLOCATION_MATRIX", \
    2, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_allocation_matrix_t, time_boot_ms) }, \
         { "alpha", NULL, MAVLINK_TYPE_FLOAT, 36, 4, offsetof(mavlink_set_allocation_matrix_t, alpha) }, \
         } \
}
#endif

/**
 * @brief Pack a set_allocation_matrix message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param alpha [rad] Reference rotor tilt angle.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_allocation_matrix_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, const float *alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 36);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN);
#else
    mavlink_set_allocation_matrix_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.alpha, alpha, sizeof(float)*36);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_MIN_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_CRC);
}

/**
 * @brief Pack a set_allocation_matrix message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param alpha [rad] Reference rotor tilt angle.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_allocation_matrix_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,const float *alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 36);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN);
#else
    mavlink_set_allocation_matrix_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.alpha, alpha, sizeof(float)*36);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_MIN_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_CRC);
}

/**
 * @brief Encode a set_allocation_matrix struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_allocation_matrix C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_allocation_matrix_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_allocation_matrix_t* set_allocation_matrix)
{
    return mavlink_msg_set_allocation_matrix_pack(system_id, component_id, msg, set_allocation_matrix->time_boot_ms, set_allocation_matrix->alpha);
}

/**
 * @brief Encode a set_allocation_matrix struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_allocation_matrix C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_allocation_matrix_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_allocation_matrix_t* set_allocation_matrix)
{
    return mavlink_msg_set_allocation_matrix_pack_chan(system_id, component_id, chan, msg, set_allocation_matrix->time_boot_ms, set_allocation_matrix->alpha);
}

/**
 * @brief Send a set_allocation_matrix message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param alpha [rad] Reference rotor tilt angle.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_allocation_matrix_send(mavlink_channel_t chan, uint32_t time_boot_ms, const float *alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 36);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX, buf, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_MIN_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_CRC);
#else
    mavlink_set_allocation_matrix_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.alpha, alpha, sizeof(float)*36);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX, (const char *)&packet, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_MIN_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_CRC);
#endif
}

/**
 * @brief Send a set_allocation_matrix message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_allocation_matrix_send_struct(mavlink_channel_t chan, const mavlink_set_allocation_matrix_t* set_allocation_matrix)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_allocation_matrix_send(chan, set_allocation_matrix->time_boot_ms, set_allocation_matrix->alpha);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX, (const char *)set_allocation_matrix, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_MIN_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_allocation_matrix_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, const float *alpha)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, alpha, 36);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX, buf, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_MIN_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_CRC);
#else
    mavlink_set_allocation_matrix_t *packet = (mavlink_set_allocation_matrix_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet->alpha, alpha, sizeof(float)*36);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX, (const char *)packet, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_MIN_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_ALLOCATION_MATRIX UNPACKING


/**
 * @brief Get field time_boot_ms from set_allocation_matrix message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_set_allocation_matrix_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field alpha from set_allocation_matrix message
 *
 * @return [rad] Reference rotor tilt angle.
 */
static inline uint16_t mavlink_msg_set_allocation_matrix_get_alpha(const mavlink_message_t* msg, float *alpha)
{
    return _MAV_RETURN_float_array(msg, alpha, 36,  4);
}

/**
 * @brief Decode a set_allocation_matrix message into a struct
 *
 * @param msg The message to decode
 * @param set_allocation_matrix C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_allocation_matrix_decode(const mavlink_message_t* msg, mavlink_set_allocation_matrix_t* set_allocation_matrix)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_allocation_matrix->time_boot_ms = mavlink_msg_set_allocation_matrix_get_time_boot_ms(msg);
    mavlink_msg_set_allocation_matrix_get_alpha(msg, set_allocation_matrix->alpha);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN? msg->len : MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN;
        memset(set_allocation_matrix, 0, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN);
    memcpy(set_allocation_matrix, _MAV_PAYLOAD(msg), len);
#endif
}
