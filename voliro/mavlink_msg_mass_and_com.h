#pragma once
// MESSAGE MASS_AND_COM PACKING

#define MAVLINK_MSG_ID_MASS_AND_COM 503

MAVPACKED(
typedef struct __mavlink_mass_and_com_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp in milliseconds since system boot*/
 float mass; /*<  mass*/
 float com[3]; /*<  center of mass*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
}) mavlink_mass_and_com_t;

#define MAVLINK_MSG_ID_MASS_AND_COM_LEN 22
#define MAVLINK_MSG_ID_MASS_AND_COM_MIN_LEN 22
#define MAVLINK_MSG_ID_503_LEN 22
#define MAVLINK_MSG_ID_503_MIN_LEN 22

#define MAVLINK_MSG_ID_MASS_AND_COM_CRC 87
#define MAVLINK_MSG_ID_503_CRC 87

#define MAVLINK_MSG_MASS_AND_COM_FIELD_COM_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MASS_AND_COM { \
    503, \
    "MASS_AND_COM", \
    5, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_mass_and_com_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_mass_and_com_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_mass_and_com_t, target_component) }, \
         { "mass", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_mass_and_com_t, mass) }, \
         { "com", NULL, MAVLINK_TYPE_FLOAT, 3, 8, offsetof(mavlink_mass_and_com_t, com) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MASS_AND_COM { \
    "MASS_AND_COM", \
    5, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_mass_and_com_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_mass_and_com_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_mass_and_com_t, target_component) }, \
         { "mass", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_mass_and_com_t, mass) }, \
         { "com", NULL, MAVLINK_TYPE_FLOAT, 3, 8, offsetof(mavlink_mass_and_com_t, com) }, \
         } \
}
#endif

/**
 * @brief Pack a mass_and_com message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param mass  mass
 * @param com  center of mass
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mass_and_com_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float mass, const float *com)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MASS_AND_COM_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, mass);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_float_array(buf, 8, com, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MASS_AND_COM_LEN);
#else
    mavlink_mass_and_com_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.mass = mass;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.com, com, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MASS_AND_COM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MASS_AND_COM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MASS_AND_COM_MIN_LEN, MAVLINK_MSG_ID_MASS_AND_COM_LEN, MAVLINK_MSG_ID_MASS_AND_COM_CRC);
}

/**
 * @brief Pack a mass_and_com message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param mass  mass
 * @param com  center of mass
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mass_and_com_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,float mass,const float *com)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MASS_AND_COM_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, mass);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_float_array(buf, 8, com, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MASS_AND_COM_LEN);
#else
    mavlink_mass_and_com_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.mass = mass;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.com, com, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MASS_AND_COM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MASS_AND_COM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MASS_AND_COM_MIN_LEN, MAVLINK_MSG_ID_MASS_AND_COM_LEN, MAVLINK_MSG_ID_MASS_AND_COM_CRC);
}

/**
 * @brief Encode a mass_and_com struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mass_and_com C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mass_and_com_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mass_and_com_t* mass_and_com)
{
    return mavlink_msg_mass_and_com_pack(system_id, component_id, msg, mass_and_com->time_boot_ms, mass_and_com->target_system, mass_and_com->target_component, mass_and_com->mass, mass_and_com->com);
}

/**
 * @brief Encode a mass_and_com struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mass_and_com C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mass_and_com_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mass_and_com_t* mass_and_com)
{
    return mavlink_msg_mass_and_com_pack_chan(system_id, component_id, chan, msg, mass_and_com->time_boot_ms, mass_and_com->target_system, mass_and_com->target_component, mass_and_com->mass, mass_and_com->com);
}

/**
 * @brief Send a mass_and_com message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param mass  mass
 * @param com  center of mass
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mass_and_com_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float mass, const float *com)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MASS_AND_COM_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, mass);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_float_array(buf, 8, com, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MASS_AND_COM, buf, MAVLINK_MSG_ID_MASS_AND_COM_MIN_LEN, MAVLINK_MSG_ID_MASS_AND_COM_LEN, MAVLINK_MSG_ID_MASS_AND_COM_CRC);
#else
    mavlink_mass_and_com_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.mass = mass;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.com, com, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MASS_AND_COM, (const char *)&packet, MAVLINK_MSG_ID_MASS_AND_COM_MIN_LEN, MAVLINK_MSG_ID_MASS_AND_COM_LEN, MAVLINK_MSG_ID_MASS_AND_COM_CRC);
#endif
}

/**
 * @brief Send a mass_and_com message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mass_and_com_send_struct(mavlink_channel_t chan, const mavlink_mass_and_com_t* mass_and_com)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mass_and_com_send(chan, mass_and_com->time_boot_ms, mass_and_com->target_system, mass_and_com->target_component, mass_and_com->mass, mass_and_com->com);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MASS_AND_COM, (const char *)mass_and_com, MAVLINK_MSG_ID_MASS_AND_COM_MIN_LEN, MAVLINK_MSG_ID_MASS_AND_COM_LEN, MAVLINK_MSG_ID_MASS_AND_COM_CRC);
#endif
}

#if MAVLINK_MSG_ID_MASS_AND_COM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mass_and_com_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float mass, const float *com)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, mass);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_float_array(buf, 8, com, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MASS_AND_COM, buf, MAVLINK_MSG_ID_MASS_AND_COM_MIN_LEN, MAVLINK_MSG_ID_MASS_AND_COM_LEN, MAVLINK_MSG_ID_MASS_AND_COM_CRC);
#else
    mavlink_mass_and_com_t *packet = (mavlink_mass_and_com_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->mass = mass;
    packet->target_system = target_system;
    packet->target_component = target_component;
    mav_array_memcpy(packet->com, com, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MASS_AND_COM, (const char *)packet, MAVLINK_MSG_ID_MASS_AND_COM_MIN_LEN, MAVLINK_MSG_ID_MASS_AND_COM_LEN, MAVLINK_MSG_ID_MASS_AND_COM_CRC);
#endif
}
#endif

#endif

// MESSAGE MASS_AND_COM UNPACKING


/**
 * @brief Get field time_boot_ms from mass_and_com message
 *
 * @return [ms] Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_mass_and_com_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from mass_and_com message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_mass_and_com_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field target_component from mass_and_com message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_mass_and_com_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field mass from mass_and_com message
 *
 * @return  mass
 */
static inline float mavlink_msg_mass_and_com_get_mass(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field com from mass_and_com message
 *
 * @return  center of mass
 */
static inline uint16_t mavlink_msg_mass_and_com_get_com(const mavlink_message_t* msg, float *com)
{
    return _MAV_RETURN_float_array(msg, com, 3,  8);
}

/**
 * @brief Decode a mass_and_com message into a struct
 *
 * @param msg The message to decode
 * @param mass_and_com C-struct to decode the message contents into
 */
static inline void mavlink_msg_mass_and_com_decode(const mavlink_message_t* msg, mavlink_mass_and_com_t* mass_and_com)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mass_and_com->time_boot_ms = mavlink_msg_mass_and_com_get_time_boot_ms(msg);
    mass_and_com->mass = mavlink_msg_mass_and_com_get_mass(msg);
    mavlink_msg_mass_and_com_get_com(msg, mass_and_com->com);
    mass_and_com->target_system = mavlink_msg_mass_and_com_get_target_system(msg);
    mass_and_com->target_component = mavlink_msg_mass_and_com_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MASS_AND_COM_LEN? msg->len : MAVLINK_MSG_ID_MASS_AND_COM_LEN;
        memset(mass_and_com, 0, MAVLINK_MSG_ID_MASS_AND_COM_LEN);
    memcpy(mass_and_com, _MAV_PAYLOAD(msg), len);
#endif
}
