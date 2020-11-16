#pragma once
// MESSAGE VOLIRO_POSITION_CONTROLLER_MODE PACKING

#define MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE 510

MAVPACKED(
typedef struct __mavlink_voliro_position_controller_mode_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp in milliseconds since system boot*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
 uint8_t control_mode; /*<  integer indicating in which mode the position controller is currently*/
}) mavlink_voliro_position_controller_mode_t;

#define MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN 7
#define MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_MIN_LEN 7
#define MAVLINK_MSG_ID_510_LEN 7
#define MAVLINK_MSG_ID_510_MIN_LEN 7

#define MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_CRC 87
#define MAVLINK_MSG_ID_510_CRC 87



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VOLIRO_POSITION_CONTROLLER_MODE { \
    510, \
    "VOLIRO_POSITION_CONTROLLER_MODE", \
    4, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_position_controller_mode_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_voliro_position_controller_mode_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_voliro_position_controller_mode_t, target_component) }, \
         { "control_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_voliro_position_controller_mode_t, control_mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VOLIRO_POSITION_CONTROLLER_MODE { \
    "VOLIRO_POSITION_CONTROLLER_MODE", \
    4, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_position_controller_mode_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_voliro_position_controller_mode_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_voliro_position_controller_mode_t, target_component) }, \
         { "control_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_voliro_position_controller_mode_t, control_mode) }, \
         } \
}
#endif

/**
 * @brief Pack a voliro_position_controller_mode message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param control_mode  integer indicating in which mode the position controller is currently
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_position_controller_mode_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, uint8_t control_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, control_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN);
#else
    mavlink_voliro_position_controller_mode_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.control_mode = control_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_CRC);
}

/**
 * @brief Pack a voliro_position_controller_mode message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param control_mode  integer indicating in which mode the position controller is currently
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_position_controller_mode_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,uint8_t control_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, control_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN);
#else
    mavlink_voliro_position_controller_mode_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.control_mode = control_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_CRC);
}

/**
 * @brief Encode a voliro_position_controller_mode struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param voliro_position_controller_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_position_controller_mode_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_voliro_position_controller_mode_t* voliro_position_controller_mode)
{
    return mavlink_msg_voliro_position_controller_mode_pack(system_id, component_id, msg, voliro_position_controller_mode->time_boot_ms, voliro_position_controller_mode->target_system, voliro_position_controller_mode->target_component, voliro_position_controller_mode->control_mode);
}

/**
 * @brief Encode a voliro_position_controller_mode struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param voliro_position_controller_mode C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_position_controller_mode_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_voliro_position_controller_mode_t* voliro_position_controller_mode)
{
    return mavlink_msg_voliro_position_controller_mode_pack_chan(system_id, component_id, chan, msg, voliro_position_controller_mode->time_boot_ms, voliro_position_controller_mode->target_system, voliro_position_controller_mode->target_component, voliro_position_controller_mode->control_mode);
}

/**
 * @brief Send a voliro_position_controller_mode message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param control_mode  integer indicating in which mode the position controller is currently
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_voliro_position_controller_mode_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, uint8_t control_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, control_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE, buf, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_CRC);
#else
    mavlink_voliro_position_controller_mode_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.control_mode = control_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE, (const char *)&packet, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_CRC);
#endif
}

/**
 * @brief Send a voliro_position_controller_mode message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_voliro_position_controller_mode_send_struct(mavlink_channel_t chan, const mavlink_voliro_position_controller_mode_t* voliro_position_controller_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_voliro_position_controller_mode_send(chan, voliro_position_controller_mode->time_boot_ms, voliro_position_controller_mode->target_system, voliro_position_controller_mode->target_component, voliro_position_controller_mode->control_mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE, (const char *)voliro_position_controller_mode, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_CRC);
#endif
}

#if MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_voliro_position_controller_mode_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, uint8_t control_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);
    _mav_put_uint8_t(buf, 6, control_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE, buf, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_CRC);
#else
    mavlink_voliro_position_controller_mode_t *packet = (mavlink_voliro_position_controller_mode_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->control_mode = control_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE, (const char *)packet, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_CRC);
#endif
}
#endif

#endif

// MESSAGE VOLIRO_POSITION_CONTROLLER_MODE UNPACKING


/**
 * @brief Get field time_boot_ms from voliro_position_controller_mode message
 *
 * @return [ms] Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_voliro_position_controller_mode_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from voliro_position_controller_mode message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_voliro_position_controller_mode_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field target_component from voliro_position_controller_mode message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_voliro_position_controller_mode_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field control_mode from voliro_position_controller_mode message
 *
 * @return  integer indicating in which mode the position controller is currently
 */
static inline uint8_t mavlink_msg_voliro_position_controller_mode_get_control_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Decode a voliro_position_controller_mode message into a struct
 *
 * @param msg The message to decode
 * @param voliro_position_controller_mode C-struct to decode the message contents into
 */
static inline void mavlink_msg_voliro_position_controller_mode_decode(const mavlink_message_t* msg, mavlink_voliro_position_controller_mode_t* voliro_position_controller_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    voliro_position_controller_mode->time_boot_ms = mavlink_msg_voliro_position_controller_mode_get_time_boot_ms(msg);
    voliro_position_controller_mode->target_system = mavlink_msg_voliro_position_controller_mode_get_target_system(msg);
    voliro_position_controller_mode->target_component = mavlink_msg_voliro_position_controller_mode_get_target_component(msg);
    voliro_position_controller_mode->control_mode = mavlink_msg_voliro_position_controller_mode_get_control_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN? msg->len : MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN;
        memset(voliro_position_controller_mode, 0, MAVLINK_MSG_ID_VOLIRO_POSITION_CONTROLLER_MODE_LEN);
    memcpy(voliro_position_controller_mode, _MAV_PAYLOAD(msg), len);
#endif
}
