#pragma once
// MESSAGE SET_WRENCH_TARGET_BODY_NED PACKING

#define MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED 99

MAVPACKED(
typedef struct __mavlink_set_wrench_target_body_ned_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float force_x; /*< [N] X force in NED frame*/
 float force_y; /*< [N] Y force in NED frame*/
 float force_z; /*< [N] Z force in NED frame*/
 float torque_x; /*< [Nm] X torque in NED frame*/
 float torque_y; /*< [Nm] Y torque in NED frame*/
 float torque_z; /*< [Nm] Z torque in NED frame*/
 uint16_t type_mask; /*<  Bitmap to indicate which dimensions should be ignored by the vehicle.*/
 uint8_t coordinate_frame; /*<  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9*/
}) mavlink_set_wrench_target_body_ned_t;

#define MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN 31
#define MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_MIN_LEN 31
#define MAVLINK_MSG_ID_99_LEN 31
#define MAVLINK_MSG_ID_99_MIN_LEN 31

#define MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_CRC 33
#define MAVLINK_MSG_ID_99_CRC 33



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_WRENCH_TARGET_BODY_NED { \
    99, \
    "SET_WRENCH_TARGET_BODY_NED", \
    9, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_wrench_target_body_ned_t, time_boot_ms) }, \
         { "coordinate_frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_set_wrench_target_body_ned_t, coordinate_frame) }, \
         { "type_mask", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_set_wrench_target_body_ned_t, type_mask) }, \
         { "force_x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_set_wrench_target_body_ned_t, force_x) }, \
         { "force_y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_set_wrench_target_body_ned_t, force_y) }, \
         { "force_z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_set_wrench_target_body_ned_t, force_z) }, \
         { "torque_x", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_set_wrench_target_body_ned_t, torque_x) }, \
         { "torque_y", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_set_wrench_target_body_ned_t, torque_y) }, \
         { "torque_z", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_set_wrench_target_body_ned_t, torque_z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_WRENCH_TARGET_BODY_NED { \
    "SET_WRENCH_TARGET_BODY_NED", \
    9, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_wrench_target_body_ned_t, time_boot_ms) }, \
         { "coordinate_frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_set_wrench_target_body_ned_t, coordinate_frame) }, \
         { "type_mask", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_set_wrench_target_body_ned_t, type_mask) }, \
         { "force_x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_set_wrench_target_body_ned_t, force_x) }, \
         { "force_y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_set_wrench_target_body_ned_t, force_y) }, \
         { "force_z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_set_wrench_target_body_ned_t, force_z) }, \
         { "torque_x", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_set_wrench_target_body_ned_t, torque_x) }, \
         { "torque_y", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_set_wrench_target_body_ned_t, torque_y) }, \
         { "torque_z", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_set_wrench_target_body_ned_t, torque_z) }, \
         } \
}
#endif

/**
 * @brief Pack a set_wrench_target_body_ned message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param coordinate_frame  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9
 * @param type_mask  Bitmap to indicate which dimensions should be ignored by the vehicle.
 * @param force_x [N] X force in NED frame
 * @param force_y [N] Y force in NED frame
 * @param force_z [N] Z force in NED frame
 * @param torque_x [Nm] X torque in NED frame
 * @param torque_y [Nm] Y torque in NED frame
 * @param torque_z [Nm] Z torque in NED frame
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_wrench_target_body_ned_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t coordinate_frame, uint16_t type_mask, float force_x, float force_y, float force_z, float torque_x, float torque_y, float torque_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, force_x);
    _mav_put_float(buf, 8, force_y);
    _mav_put_float(buf, 12, force_z);
    _mav_put_float(buf, 16, torque_x);
    _mav_put_float(buf, 20, torque_y);
    _mav_put_float(buf, 24, torque_z);
    _mav_put_uint16_t(buf, 28, type_mask);
    _mav_put_uint8_t(buf, 30, coordinate_frame);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN);
#else
    mavlink_set_wrench_target_body_ned_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.force_x = force_x;
    packet.force_y = force_y;
    packet.force_z = force_z;
    packet.torque_x = torque_x;
    packet.torque_y = torque_y;
    packet.torque_z = torque_z;
    packet.type_mask = type_mask;
    packet.coordinate_frame = coordinate_frame;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_MIN_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_CRC);
}

/**
 * @brief Pack a set_wrench_target_body_ned message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param coordinate_frame  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9
 * @param type_mask  Bitmap to indicate which dimensions should be ignored by the vehicle.
 * @param force_x [N] X force in NED frame
 * @param force_y [N] Y force in NED frame
 * @param force_z [N] Z force in NED frame
 * @param torque_x [Nm] X torque in NED frame
 * @param torque_y [Nm] Y torque in NED frame
 * @param torque_z [Nm] Z torque in NED frame
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_wrench_target_body_ned_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t coordinate_frame,uint16_t type_mask,float force_x,float force_y,float force_z,float torque_x,float torque_y,float torque_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, force_x);
    _mav_put_float(buf, 8, force_y);
    _mav_put_float(buf, 12, force_z);
    _mav_put_float(buf, 16, torque_x);
    _mav_put_float(buf, 20, torque_y);
    _mav_put_float(buf, 24, torque_z);
    _mav_put_uint16_t(buf, 28, type_mask);
    _mav_put_uint8_t(buf, 30, coordinate_frame);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN);
#else
    mavlink_set_wrench_target_body_ned_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.force_x = force_x;
    packet.force_y = force_y;
    packet.force_z = force_z;
    packet.torque_x = torque_x;
    packet.torque_y = torque_y;
    packet.torque_z = torque_z;
    packet.type_mask = type_mask;
    packet.coordinate_frame = coordinate_frame;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_MIN_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_CRC);
}

/**
 * @brief Encode a set_wrench_target_body_ned struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_wrench_target_body_ned C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_wrench_target_body_ned_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_wrench_target_body_ned_t* set_wrench_target_body_ned)
{
    return mavlink_msg_set_wrench_target_body_ned_pack(system_id, component_id, msg, set_wrench_target_body_ned->time_boot_ms, set_wrench_target_body_ned->coordinate_frame, set_wrench_target_body_ned->type_mask, set_wrench_target_body_ned->force_x, set_wrench_target_body_ned->force_y, set_wrench_target_body_ned->force_z, set_wrench_target_body_ned->torque_x, set_wrench_target_body_ned->torque_y, set_wrench_target_body_ned->torque_z);
}

/**
 * @brief Encode a set_wrench_target_body_ned struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_wrench_target_body_ned C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_wrench_target_body_ned_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_wrench_target_body_ned_t* set_wrench_target_body_ned)
{
    return mavlink_msg_set_wrench_target_body_ned_pack_chan(system_id, component_id, chan, msg, set_wrench_target_body_ned->time_boot_ms, set_wrench_target_body_ned->coordinate_frame, set_wrench_target_body_ned->type_mask, set_wrench_target_body_ned->force_x, set_wrench_target_body_ned->force_y, set_wrench_target_body_ned->force_z, set_wrench_target_body_ned->torque_x, set_wrench_target_body_ned->torque_y, set_wrench_target_body_ned->torque_z);
}

/**
 * @brief Send a set_wrench_target_body_ned message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param coordinate_frame  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9
 * @param type_mask  Bitmap to indicate which dimensions should be ignored by the vehicle.
 * @param force_x [N] X force in NED frame
 * @param force_y [N] Y force in NED frame
 * @param force_z [N] Z force in NED frame
 * @param torque_x [Nm] X torque in NED frame
 * @param torque_y [Nm] Y torque in NED frame
 * @param torque_z [Nm] Z torque in NED frame
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_wrench_target_body_ned_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t coordinate_frame, uint16_t type_mask, float force_x, float force_y, float force_z, float torque_x, float torque_y, float torque_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, force_x);
    _mav_put_float(buf, 8, force_y);
    _mav_put_float(buf, 12, force_z);
    _mav_put_float(buf, 16, torque_x);
    _mav_put_float(buf, 20, torque_y);
    _mav_put_float(buf, 24, torque_z);
    _mav_put_uint16_t(buf, 28, type_mask);
    _mav_put_uint8_t(buf, 30, coordinate_frame);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED, buf, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_MIN_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_CRC);
#else
    mavlink_set_wrench_target_body_ned_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.force_x = force_x;
    packet.force_y = force_y;
    packet.force_z = force_z;
    packet.torque_x = torque_x;
    packet.torque_y = torque_y;
    packet.torque_z = torque_z;
    packet.type_mask = type_mask;
    packet.coordinate_frame = coordinate_frame;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED, (const char *)&packet, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_MIN_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_CRC);
#endif
}

/**
 * @brief Send a set_wrench_target_body_ned message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_wrench_target_body_ned_send_struct(mavlink_channel_t chan, const mavlink_set_wrench_target_body_ned_t* set_wrench_target_body_ned)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_wrench_target_body_ned_send(chan, set_wrench_target_body_ned->time_boot_ms, set_wrench_target_body_ned->coordinate_frame, set_wrench_target_body_ned->type_mask, set_wrench_target_body_ned->force_x, set_wrench_target_body_ned->force_y, set_wrench_target_body_ned->force_z, set_wrench_target_body_ned->torque_x, set_wrench_target_body_ned->torque_y, set_wrench_target_body_ned->torque_z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED, (const char *)set_wrench_target_body_ned, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_MIN_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_wrench_target_body_ned_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t coordinate_frame, uint16_t type_mask, float force_x, float force_y, float force_z, float torque_x, float torque_y, float torque_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, force_x);
    _mav_put_float(buf, 8, force_y);
    _mav_put_float(buf, 12, force_z);
    _mav_put_float(buf, 16, torque_x);
    _mav_put_float(buf, 20, torque_y);
    _mav_put_float(buf, 24, torque_z);
    _mav_put_uint16_t(buf, 28, type_mask);
    _mav_put_uint8_t(buf, 30, coordinate_frame);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED, buf, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_MIN_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_CRC);
#else
    mavlink_set_wrench_target_body_ned_t *packet = (mavlink_set_wrench_target_body_ned_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->force_x = force_x;
    packet->force_y = force_y;
    packet->force_z = force_z;
    packet->torque_x = torque_x;
    packet->torque_y = torque_y;
    packet->torque_z = torque_z;
    packet->type_mask = type_mask;
    packet->coordinate_frame = coordinate_frame;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED, (const char *)packet, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_MIN_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_WRENCH_TARGET_BODY_NED UNPACKING


/**
 * @brief Get field time_boot_ms from set_wrench_target_body_ned message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_set_wrench_target_body_ned_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field coordinate_frame from set_wrench_target_body_ned message
 *
 * @return  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9
 */
static inline uint8_t mavlink_msg_set_wrench_target_body_ned_get_coordinate_frame(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  30);
}

/**
 * @brief Get field type_mask from set_wrench_target_body_ned message
 *
 * @return  Bitmap to indicate which dimensions should be ignored by the vehicle.
 */
static inline uint16_t mavlink_msg_set_wrench_target_body_ned_get_type_mask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field force_x from set_wrench_target_body_ned message
 *
 * @return [N] X force in NED frame
 */
static inline float mavlink_msg_set_wrench_target_body_ned_get_force_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field force_y from set_wrench_target_body_ned message
 *
 * @return [N] Y force in NED frame
 */
static inline float mavlink_msg_set_wrench_target_body_ned_get_force_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field force_z from set_wrench_target_body_ned message
 *
 * @return [N] Z force in NED frame
 */
static inline float mavlink_msg_set_wrench_target_body_ned_get_force_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field torque_x from set_wrench_target_body_ned message
 *
 * @return [Nm] X torque in NED frame
 */
static inline float mavlink_msg_set_wrench_target_body_ned_get_torque_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field torque_y from set_wrench_target_body_ned message
 *
 * @return [Nm] Y torque in NED frame
 */
static inline float mavlink_msg_set_wrench_target_body_ned_get_torque_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field torque_z from set_wrench_target_body_ned message
 *
 * @return [Nm] Z torque in NED frame
 */
static inline float mavlink_msg_set_wrench_target_body_ned_get_torque_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a set_wrench_target_body_ned message into a struct
 *
 * @param msg The message to decode
 * @param set_wrench_target_body_ned C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_wrench_target_body_ned_decode(const mavlink_message_t* msg, mavlink_set_wrench_target_body_ned_t* set_wrench_target_body_ned)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_wrench_target_body_ned->time_boot_ms = mavlink_msg_set_wrench_target_body_ned_get_time_boot_ms(msg);
    set_wrench_target_body_ned->force_x = mavlink_msg_set_wrench_target_body_ned_get_force_x(msg);
    set_wrench_target_body_ned->force_y = mavlink_msg_set_wrench_target_body_ned_get_force_y(msg);
    set_wrench_target_body_ned->force_z = mavlink_msg_set_wrench_target_body_ned_get_force_z(msg);
    set_wrench_target_body_ned->torque_x = mavlink_msg_set_wrench_target_body_ned_get_torque_x(msg);
    set_wrench_target_body_ned->torque_y = mavlink_msg_set_wrench_target_body_ned_get_torque_y(msg);
    set_wrench_target_body_ned->torque_z = mavlink_msg_set_wrench_target_body_ned_get_torque_z(msg);
    set_wrench_target_body_ned->type_mask = mavlink_msg_set_wrench_target_body_ned_get_type_mask(msg);
    set_wrench_target_body_ned->coordinate_frame = mavlink_msg_set_wrench_target_body_ned_get_coordinate_frame(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN? msg->len : MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN;
        memset(set_wrench_target_body_ned, 0, MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_LEN);
    memcpy(set_wrench_target_body_ned, _MAV_PAYLOAD(msg), len);
#endif
}
