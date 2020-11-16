#pragma once
// MESSAGE VOLIRO_GENERIC_PAYLOAD_TARGET PACKING

#define MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET 507

MAVPACKED(
typedef struct __mavlink_voliro_generic_payload_target_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp in milliseconds since system boot*/
 float control[4]; /*<  payload control command*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
}) mavlink_voliro_generic_payload_target_t;

#define MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN 22
#define MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_MIN_LEN 22
#define MAVLINK_MSG_ID_507_LEN 22
#define MAVLINK_MSG_ID_507_MIN_LEN 22

#define MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_CRC 230
#define MAVLINK_MSG_ID_507_CRC 230

#define MAVLINK_MSG_VOLIRO_GENERIC_PAYLOAD_TARGET_FIELD_CONTROL_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VOLIRO_GENERIC_PAYLOAD_TARGET { \
    507, \
    "VOLIRO_GENERIC_PAYLOAD_TARGET", \
    4, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_generic_payload_target_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_voliro_generic_payload_target_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_voliro_generic_payload_target_t, target_component) }, \
         { "control", NULL, MAVLINK_TYPE_FLOAT, 4, 4, offsetof(mavlink_voliro_generic_payload_target_t, control) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VOLIRO_GENERIC_PAYLOAD_TARGET { \
    "VOLIRO_GENERIC_PAYLOAD_TARGET", \
    4, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_generic_payload_target_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_voliro_generic_payload_target_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_voliro_generic_payload_target_t, target_component) }, \
         { "control", NULL, MAVLINK_TYPE_FLOAT, 4, 4, offsetof(mavlink_voliro_generic_payload_target_t, control) }, \
         } \
}
#endif

/**
 * @brief Pack a voliro_generic_payload_target message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param control  payload control command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_generic_payload_target_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, const float *control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_float_array(buf, 4, control, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN);
#else
    mavlink_voliro_generic_payload_target_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.control, control, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_CRC);
}

/**
 * @brief Pack a voliro_generic_payload_target message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param control  payload control command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_generic_payload_target_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,const float *control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_float_array(buf, 4, control, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN);
#else
    mavlink_voliro_generic_payload_target_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.control, control, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_CRC);
}

/**
 * @brief Encode a voliro_generic_payload_target struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param voliro_generic_payload_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_generic_payload_target_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_voliro_generic_payload_target_t* voliro_generic_payload_target)
{
    return mavlink_msg_voliro_generic_payload_target_pack(system_id, component_id, msg, voliro_generic_payload_target->time_boot_ms, voliro_generic_payload_target->target_system, voliro_generic_payload_target->target_component, voliro_generic_payload_target->control);
}

/**
 * @brief Encode a voliro_generic_payload_target struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param voliro_generic_payload_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_generic_payload_target_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_voliro_generic_payload_target_t* voliro_generic_payload_target)
{
    return mavlink_msg_voliro_generic_payload_target_pack_chan(system_id, component_id, chan, msg, voliro_generic_payload_target->time_boot_ms, voliro_generic_payload_target->target_system, voliro_generic_payload_target->target_component, voliro_generic_payload_target->control);
}

/**
 * @brief Send a voliro_generic_payload_target message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param control  payload control command
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_voliro_generic_payload_target_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, const float *control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_float_array(buf, 4, control, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET, buf, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_CRC);
#else
    mavlink_voliro_generic_payload_target_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.control, control, sizeof(float)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET, (const char *)&packet, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_CRC);
#endif
}

/**
 * @brief Send a voliro_generic_payload_target message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_voliro_generic_payload_target_send_struct(mavlink_channel_t chan, const mavlink_voliro_generic_payload_target_t* voliro_generic_payload_target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_voliro_generic_payload_target_send(chan, voliro_generic_payload_target->time_boot_ms, voliro_generic_payload_target->target_system, voliro_generic_payload_target->target_component, voliro_generic_payload_target->control);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET, (const char *)voliro_generic_payload_target, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_CRC);
#endif
}

#if MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_voliro_generic_payload_target_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, const float *control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_float_array(buf, 4, control, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET, buf, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_CRC);
#else
    mavlink_voliro_generic_payload_target_t *packet = (mavlink_voliro_generic_payload_target_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->target_system = target_system;
    packet->target_component = target_component;
    mav_array_memcpy(packet->control, control, sizeof(float)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET, (const char *)packet, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_CRC);
#endif
}
#endif

#endif

// MESSAGE VOLIRO_GENERIC_PAYLOAD_TARGET UNPACKING


/**
 * @brief Get field time_boot_ms from voliro_generic_payload_target message
 *
 * @return [ms] Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_voliro_generic_payload_target_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from voliro_generic_payload_target message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_voliro_generic_payload_target_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field target_component from voliro_generic_payload_target message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_voliro_generic_payload_target_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field control from voliro_generic_payload_target message
 *
 * @return  payload control command
 */
static inline uint16_t mavlink_msg_voliro_generic_payload_target_get_control(const mavlink_message_t* msg, float *control)
{
    return _MAV_RETURN_float_array(msg, control, 4,  4);
}

/**
 * @brief Decode a voliro_generic_payload_target message into a struct
 *
 * @param msg The message to decode
 * @param voliro_generic_payload_target C-struct to decode the message contents into
 */
static inline void mavlink_msg_voliro_generic_payload_target_decode(const mavlink_message_t* msg, mavlink_voliro_generic_payload_target_t* voliro_generic_payload_target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    voliro_generic_payload_target->time_boot_ms = mavlink_msg_voliro_generic_payload_target_get_time_boot_ms(msg);
    mavlink_msg_voliro_generic_payload_target_get_control(msg, voliro_generic_payload_target->control);
    voliro_generic_payload_target->target_system = mavlink_msg_voliro_generic_payload_target_get_target_system(msg);
    voliro_generic_payload_target->target_component = mavlink_msg_voliro_generic_payload_target_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN? msg->len : MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN;
        memset(voliro_generic_payload_target, 0, MAVLINK_MSG_ID_VOLIRO_GENERIC_PAYLOAD_TARGET_LEN);
    memcpy(voliro_generic_payload_target, _MAV_PAYLOAD(msg), len);
#endif
}
