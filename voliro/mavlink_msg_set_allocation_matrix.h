#pragma once
// MESSAGE SET_ALLOCATION_MATRIX PACKING

#define MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX 97

MAVPACKED(
typedef struct __mavlink_set_allocation_matrix_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float allocation_matrix[36]; /*< [1] Allocation matrix expressed in a vector.*/
 float tilt_angles[6]; /*< [rad] Tilt angles.*/
}) mavlink_set_allocation_matrix_t;

#define MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN 172
#define MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_MIN_LEN 172
#define MAVLINK_MSG_ID_97_LEN 172
#define MAVLINK_MSG_ID_97_MIN_LEN 172

#define MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_CRC 225
#define MAVLINK_MSG_ID_97_CRC 225

#define MAVLINK_MSG_SET_ALLOCATION_MATRIX_FIELD_ALLOCATION_MATRIX_LEN 36
#define MAVLINK_MSG_SET_ALLOCATION_MATRIX_FIELD_TILT_ANGLES_LEN 6

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_ALLOCATION_MATRIX { \
    97, \
    "SET_ALLOCATION_MATRIX", \
    3, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_allocation_matrix_t, time_boot_ms) }, \
         { "allocation_matrix", NULL, MAVLINK_TYPE_FLOAT, 36, 4, offsetof(mavlink_set_allocation_matrix_t, allocation_matrix) }, \
         { "tilt_angles", NULL, MAVLINK_TYPE_FLOAT, 6, 148, offsetof(mavlink_set_allocation_matrix_t, tilt_angles) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_ALLOCATION_MATRIX { \
    "SET_ALLOCATION_MATRIX", \
    3, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_allocation_matrix_t, time_boot_ms) }, \
         { "allocation_matrix", NULL, MAVLINK_TYPE_FLOAT, 36, 4, offsetof(mavlink_set_allocation_matrix_t, allocation_matrix) }, \
         { "tilt_angles", NULL, MAVLINK_TYPE_FLOAT, 6, 148, offsetof(mavlink_set_allocation_matrix_t, tilt_angles) }, \
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
 * @param allocation_matrix [1] Allocation matrix expressed in a vector.
 * @param tilt_angles [rad] Tilt angles.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_allocation_matrix_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, const float *allocation_matrix, const float *tilt_angles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, allocation_matrix, 36);
    _mav_put_float_array(buf, 148, tilt_angles, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN);
#else
    mavlink_set_allocation_matrix_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.allocation_matrix, allocation_matrix, sizeof(float)*36);
    mav_array_memcpy(packet.tilt_angles, tilt_angles, sizeof(float)*6);
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
 * @param allocation_matrix [1] Allocation matrix expressed in a vector.
 * @param tilt_angles [rad] Tilt angles.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_allocation_matrix_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,const float *allocation_matrix,const float *tilt_angles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, allocation_matrix, 36);
    _mav_put_float_array(buf, 148, tilt_angles, 6);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN);
#else
    mavlink_set_allocation_matrix_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.allocation_matrix, allocation_matrix, sizeof(float)*36);
    mav_array_memcpy(packet.tilt_angles, tilt_angles, sizeof(float)*6);
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
    return mavlink_msg_set_allocation_matrix_pack(system_id, component_id, msg, set_allocation_matrix->time_boot_ms, set_allocation_matrix->allocation_matrix, set_allocation_matrix->tilt_angles);
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
    return mavlink_msg_set_allocation_matrix_pack_chan(system_id, component_id, chan, msg, set_allocation_matrix->time_boot_ms, set_allocation_matrix->allocation_matrix, set_allocation_matrix->tilt_angles);
}

/**
 * @brief Send a set_allocation_matrix message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param allocation_matrix [1] Allocation matrix expressed in a vector.
 * @param tilt_angles [rad] Tilt angles.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_allocation_matrix_send(mavlink_channel_t chan, uint32_t time_boot_ms, const float *allocation_matrix, const float *tilt_angles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, allocation_matrix, 36);
    _mav_put_float_array(buf, 148, tilt_angles, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX, buf, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_MIN_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_CRC);
#else
    mavlink_set_allocation_matrix_t packet;
    packet.time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet.allocation_matrix, allocation_matrix, sizeof(float)*36);
    mav_array_memcpy(packet.tilt_angles, tilt_angles, sizeof(float)*6);
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
    mavlink_msg_set_allocation_matrix_send(chan, set_allocation_matrix->time_boot_ms, set_allocation_matrix->allocation_matrix, set_allocation_matrix->tilt_angles);
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
static inline void mavlink_msg_set_allocation_matrix_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, const float *allocation_matrix, const float *tilt_angles)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float_array(buf, 4, allocation_matrix, 36);
    _mav_put_float_array(buf, 148, tilt_angles, 6);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX, buf, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_MIN_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_CRC);
#else
    mavlink_set_allocation_matrix_t *packet = (mavlink_set_allocation_matrix_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    mav_array_memcpy(packet->allocation_matrix, allocation_matrix, sizeof(float)*36);
    mav_array_memcpy(packet->tilt_angles, tilt_angles, sizeof(float)*6);
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
 * @brief Get field allocation_matrix from set_allocation_matrix message
 *
 * @return [1] Allocation matrix expressed in a vector.
 */
static inline uint16_t mavlink_msg_set_allocation_matrix_get_allocation_matrix(const mavlink_message_t* msg, float *allocation_matrix)
{
    return _MAV_RETURN_float_array(msg, allocation_matrix, 36,  4);
}

/**
 * @brief Get field tilt_angles from set_allocation_matrix message
 *
 * @return [rad] Tilt angles.
 */
static inline uint16_t mavlink_msg_set_allocation_matrix_get_tilt_angles(const mavlink_message_t* msg, float *tilt_angles)
{
    return _MAV_RETURN_float_array(msg, tilt_angles, 6,  148);
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
    mavlink_msg_set_allocation_matrix_get_allocation_matrix(msg, set_allocation_matrix->allocation_matrix);
    mavlink_msg_set_allocation_matrix_get_tilt_angles(msg, set_allocation_matrix->tilt_angles);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN? msg->len : MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN;
        memset(set_allocation_matrix, 0, MAVLINK_MSG_ID_SET_ALLOCATION_MATRIX_LEN);
    memcpy(set_allocation_matrix, _MAV_PAYLOAD(msg), len);
#endif
}
