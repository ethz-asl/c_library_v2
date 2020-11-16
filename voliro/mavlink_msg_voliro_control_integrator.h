#pragma once
// MESSAGE VOLIRO_CONTROL_INTEGRATOR PACKING

#define MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR 506

MAVPACKED(
typedef struct __mavlink_voliro_control_integrator_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp in milliseconds since system boot*/
 float yawrate_int; /*<  yawrate integrator*/
 float pitchrate_int; /*<  pitchrate integrator*/
 float rollrate_int; /*<  rollrate integrator*/
 float velz_int; /*<  velocity z integrator*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
}) mavlink_voliro_control_integrator_t;

#define MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN 22
#define MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_MIN_LEN 22
#define MAVLINK_MSG_ID_506_LEN 22
#define MAVLINK_MSG_ID_506_MIN_LEN 22

#define MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_CRC 1
#define MAVLINK_MSG_ID_506_CRC 1



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VOLIRO_CONTROL_INTEGRATOR { \
    506, \
    "VOLIRO_CONTROL_INTEGRATOR", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_control_integrator_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_voliro_control_integrator_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_voliro_control_integrator_t, target_component) }, \
         { "yawrate_int", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_voliro_control_integrator_t, yawrate_int) }, \
         { "pitchrate_int", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_voliro_control_integrator_t, pitchrate_int) }, \
         { "rollrate_int", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_voliro_control_integrator_t, rollrate_int) }, \
         { "velz_int", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_voliro_control_integrator_t, velz_int) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VOLIRO_CONTROL_INTEGRATOR { \
    "VOLIRO_CONTROL_INTEGRATOR", \
    7, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_control_integrator_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_voliro_control_integrator_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_voliro_control_integrator_t, target_component) }, \
         { "yawrate_int", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_voliro_control_integrator_t, yawrate_int) }, \
         { "pitchrate_int", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_voliro_control_integrator_t, pitchrate_int) }, \
         { "rollrate_int", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_voliro_control_integrator_t, rollrate_int) }, \
         { "velz_int", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_voliro_control_integrator_t, velz_int) }, \
         } \
}
#endif

/**
 * @brief Pack a voliro_control_integrator message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param yawrate_int  yawrate integrator
 * @param pitchrate_int  pitchrate integrator
 * @param rollrate_int  rollrate integrator
 * @param velz_int  velocity z integrator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_control_integrator_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float yawrate_int, float pitchrate_int, float rollrate_int, float velz_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, yawrate_int);
    _mav_put_float(buf, 8, pitchrate_int);
    _mav_put_float(buf, 12, rollrate_int);
    _mav_put_float(buf, 16, velz_int);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN);
#else
    mavlink_voliro_control_integrator_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.yawrate_int = yawrate_int;
    packet.pitchrate_int = pitchrate_int;
    packet.rollrate_int = rollrate_int;
    packet.velz_int = velz_int;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_CRC);
}

/**
 * @brief Pack a voliro_control_integrator message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param yawrate_int  yawrate integrator
 * @param pitchrate_int  pitchrate integrator
 * @param rollrate_int  rollrate integrator
 * @param velz_int  velocity z integrator
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_control_integrator_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,float yawrate_int,float pitchrate_int,float rollrate_int,float velz_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, yawrate_int);
    _mav_put_float(buf, 8, pitchrate_int);
    _mav_put_float(buf, 12, rollrate_int);
    _mav_put_float(buf, 16, velz_int);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN);
#else
    mavlink_voliro_control_integrator_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.yawrate_int = yawrate_int;
    packet.pitchrate_int = pitchrate_int;
    packet.rollrate_int = rollrate_int;
    packet.velz_int = velz_int;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_CRC);
}

/**
 * @brief Encode a voliro_control_integrator struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param voliro_control_integrator C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_control_integrator_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_voliro_control_integrator_t* voliro_control_integrator)
{
    return mavlink_msg_voliro_control_integrator_pack(system_id, component_id, msg, voliro_control_integrator->time_boot_ms, voliro_control_integrator->target_system, voliro_control_integrator->target_component, voliro_control_integrator->yawrate_int, voliro_control_integrator->pitchrate_int, voliro_control_integrator->rollrate_int, voliro_control_integrator->velz_int);
}

/**
 * @brief Encode a voliro_control_integrator struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param voliro_control_integrator C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_control_integrator_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_voliro_control_integrator_t* voliro_control_integrator)
{
    return mavlink_msg_voliro_control_integrator_pack_chan(system_id, component_id, chan, msg, voliro_control_integrator->time_boot_ms, voliro_control_integrator->target_system, voliro_control_integrator->target_component, voliro_control_integrator->yawrate_int, voliro_control_integrator->pitchrate_int, voliro_control_integrator->rollrate_int, voliro_control_integrator->velz_int);
}

/**
 * @brief Send a voliro_control_integrator message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param yawrate_int  yawrate integrator
 * @param pitchrate_int  pitchrate integrator
 * @param rollrate_int  rollrate integrator
 * @param velz_int  velocity z integrator
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_voliro_control_integrator_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float yawrate_int, float pitchrate_int, float rollrate_int, float velz_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, yawrate_int);
    _mav_put_float(buf, 8, pitchrate_int);
    _mav_put_float(buf, 12, rollrate_int);
    _mav_put_float(buf, 16, velz_int);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR, buf, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_CRC);
#else
    mavlink_voliro_control_integrator_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.yawrate_int = yawrate_int;
    packet.pitchrate_int = pitchrate_int;
    packet.rollrate_int = rollrate_int;
    packet.velz_int = velz_int;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR, (const char *)&packet, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_CRC);
#endif
}

/**
 * @brief Send a voliro_control_integrator message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_voliro_control_integrator_send_struct(mavlink_channel_t chan, const mavlink_voliro_control_integrator_t* voliro_control_integrator)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_voliro_control_integrator_send(chan, voliro_control_integrator->time_boot_ms, voliro_control_integrator->target_system, voliro_control_integrator->target_component, voliro_control_integrator->yawrate_int, voliro_control_integrator->pitchrate_int, voliro_control_integrator->rollrate_int, voliro_control_integrator->velz_int);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR, (const char *)voliro_control_integrator, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_CRC);
#endif
}

#if MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_voliro_control_integrator_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float yawrate_int, float pitchrate_int, float rollrate_int, float velz_int)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, yawrate_int);
    _mav_put_float(buf, 8, pitchrate_int);
    _mav_put_float(buf, 12, rollrate_int);
    _mav_put_float(buf, 16, velz_int);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR, buf, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_CRC);
#else
    mavlink_voliro_control_integrator_t *packet = (mavlink_voliro_control_integrator_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->yawrate_int = yawrate_int;
    packet->pitchrate_int = pitchrate_int;
    packet->rollrate_int = rollrate_int;
    packet->velz_int = velz_int;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR, (const char *)packet, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_CRC);
#endif
}
#endif

#endif

// MESSAGE VOLIRO_CONTROL_INTEGRATOR UNPACKING


/**
 * @brief Get field time_boot_ms from voliro_control_integrator message
 *
 * @return [ms] Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_voliro_control_integrator_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from voliro_control_integrator message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_voliro_control_integrator_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field target_component from voliro_control_integrator message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_voliro_control_integrator_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field yawrate_int from voliro_control_integrator message
 *
 * @return  yawrate integrator
 */
static inline float mavlink_msg_voliro_control_integrator_get_yawrate_int(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pitchrate_int from voliro_control_integrator message
 *
 * @return  pitchrate integrator
 */
static inline float mavlink_msg_voliro_control_integrator_get_pitchrate_int(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field rollrate_int from voliro_control_integrator message
 *
 * @return  rollrate integrator
 */
static inline float mavlink_msg_voliro_control_integrator_get_rollrate_int(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field velz_int from voliro_control_integrator message
 *
 * @return  velocity z integrator
 */
static inline float mavlink_msg_voliro_control_integrator_get_velz_int(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Decode a voliro_control_integrator message into a struct
 *
 * @param msg The message to decode
 * @param voliro_control_integrator C-struct to decode the message contents into
 */
static inline void mavlink_msg_voliro_control_integrator_decode(const mavlink_message_t* msg, mavlink_voliro_control_integrator_t* voliro_control_integrator)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    voliro_control_integrator->time_boot_ms = mavlink_msg_voliro_control_integrator_get_time_boot_ms(msg);
    voliro_control_integrator->yawrate_int = mavlink_msg_voliro_control_integrator_get_yawrate_int(msg);
    voliro_control_integrator->pitchrate_int = mavlink_msg_voliro_control_integrator_get_pitchrate_int(msg);
    voliro_control_integrator->rollrate_int = mavlink_msg_voliro_control_integrator_get_rollrate_int(msg);
    voliro_control_integrator->velz_int = mavlink_msg_voliro_control_integrator_get_velz_int(msg);
    voliro_control_integrator->target_system = mavlink_msg_voliro_control_integrator_get_target_system(msg);
    voliro_control_integrator->target_component = mavlink_msg_voliro_control_integrator_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN? msg->len : MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN;
        memset(voliro_control_integrator, 0, MAVLINK_MSG_ID_VOLIRO_CONTROL_INTEGRATOR_LEN);
    memcpy(voliro_control_integrator, _MAV_PAYLOAD(msg), len);
#endif
}
