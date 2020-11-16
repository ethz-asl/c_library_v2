#pragma once
// MESSAGE DISTANCE_SENSOR_MULTI PACKING

#define MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI 504

MAVPACKED(
typedef struct __mavlink_distance_sensor_multi_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp in milliseconds since system boot*/
 float distance_sensor[4]; /*<  filtered distance sensor measurements LIDAR LITE*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
}) mavlink_distance_sensor_multi_t;

#define MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN 22
#define MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_MIN_LEN 22
#define MAVLINK_MSG_ID_504_LEN 22
#define MAVLINK_MSG_ID_504_MIN_LEN 22

#define MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_CRC 52
#define MAVLINK_MSG_ID_504_CRC 52

#define MAVLINK_MSG_DISTANCE_SENSOR_MULTI_FIELD_DISTANCE_SENSOR_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DISTANCE_SENSOR_MULTI { \
    504, \
    "DISTANCE_SENSOR_MULTI", \
    4, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_distance_sensor_multi_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_distance_sensor_multi_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_distance_sensor_multi_t, target_component) }, \
         { "distance_sensor", NULL, MAVLINK_TYPE_FLOAT, 4, 4, offsetof(mavlink_distance_sensor_multi_t, distance_sensor) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DISTANCE_SENSOR_MULTI { \
    "DISTANCE_SENSOR_MULTI", \
    4, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_distance_sensor_multi_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_distance_sensor_multi_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_distance_sensor_multi_t, target_component) }, \
         { "distance_sensor", NULL, MAVLINK_TYPE_FLOAT, 4, 4, offsetof(mavlink_distance_sensor_multi_t, distance_sensor) }, \
         } \
}
#endif

/**
 * @brief Pack a distance_sensor_multi message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param distance_sensor  filtered distance sensor measurements LIDAR LITE
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_distance_sensor_multi_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, const float *distance_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_float_array(buf, 4, distance_sensor, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN);
#else
    mavlink_distance_sensor_multi_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.distance_sensor, distance_sensor, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_MIN_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_CRC);
}

/**
 * @brief Pack a distance_sensor_multi message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param distance_sensor  filtered distance sensor measurements LIDAR LITE
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_distance_sensor_multi_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,const float *distance_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_float_array(buf, 4, distance_sensor, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN);
#else
    mavlink_distance_sensor_multi_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.distance_sensor, distance_sensor, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_MIN_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_CRC);
}

/**
 * @brief Encode a distance_sensor_multi struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param distance_sensor_multi C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_distance_sensor_multi_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_distance_sensor_multi_t* distance_sensor_multi)
{
    return mavlink_msg_distance_sensor_multi_pack(system_id, component_id, msg, distance_sensor_multi->time_boot_ms, distance_sensor_multi->target_system, distance_sensor_multi->target_component, distance_sensor_multi->distance_sensor);
}

/**
 * @brief Encode a distance_sensor_multi struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param distance_sensor_multi C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_distance_sensor_multi_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_distance_sensor_multi_t* distance_sensor_multi)
{
    return mavlink_msg_distance_sensor_multi_pack_chan(system_id, component_id, chan, msg, distance_sensor_multi->time_boot_ms, distance_sensor_multi->target_system, distance_sensor_multi->target_component, distance_sensor_multi->distance_sensor);
}

/**
 * @brief Send a distance_sensor_multi message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param distance_sensor  filtered distance sensor measurements LIDAR LITE
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_distance_sensor_multi_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, const float *distance_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_float_array(buf, 4, distance_sensor, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI, buf, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_MIN_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_CRC);
#else
    mavlink_distance_sensor_multi_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.distance_sensor, distance_sensor, sizeof(float)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI, (const char *)&packet, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_MIN_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_CRC);
#endif
}

/**
 * @brief Send a distance_sensor_multi message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_distance_sensor_multi_send_struct(mavlink_channel_t chan, const mavlink_distance_sensor_multi_t* distance_sensor_multi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_distance_sensor_multi_send(chan, distance_sensor_multi->time_boot_ms, distance_sensor_multi->target_system, distance_sensor_multi->target_component, distance_sensor_multi->distance_sensor);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI, (const char *)distance_sensor_multi, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_MIN_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_CRC);
#endif
}

#if MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_distance_sensor_multi_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, const float *distance_sensor)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 20, target_system);
    _mav_put_uint8_t(buf, 21, target_component);
    _mav_put_float_array(buf, 4, distance_sensor, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI, buf, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_MIN_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_CRC);
#else
    mavlink_distance_sensor_multi_t *packet = (mavlink_distance_sensor_multi_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->target_system = target_system;
    packet->target_component = target_component;
    mav_array_memcpy(packet->distance_sensor, distance_sensor, sizeof(float)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI, (const char *)packet, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_MIN_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_CRC);
#endif
}
#endif

#endif

// MESSAGE DISTANCE_SENSOR_MULTI UNPACKING


/**
 * @brief Get field time_boot_ms from distance_sensor_multi message
 *
 * @return [ms] Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_distance_sensor_multi_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from distance_sensor_multi message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_distance_sensor_multi_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field target_component from distance_sensor_multi message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_distance_sensor_multi_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field distance_sensor from distance_sensor_multi message
 *
 * @return  filtered distance sensor measurements LIDAR LITE
 */
static inline uint16_t mavlink_msg_distance_sensor_multi_get_distance_sensor(const mavlink_message_t* msg, float *distance_sensor)
{
    return _MAV_RETURN_float_array(msg, distance_sensor, 4,  4);
}

/**
 * @brief Decode a distance_sensor_multi message into a struct
 *
 * @param msg The message to decode
 * @param distance_sensor_multi C-struct to decode the message contents into
 */
static inline void mavlink_msg_distance_sensor_multi_decode(const mavlink_message_t* msg, mavlink_distance_sensor_multi_t* distance_sensor_multi)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    distance_sensor_multi->time_boot_ms = mavlink_msg_distance_sensor_multi_get_time_boot_ms(msg);
    mavlink_msg_distance_sensor_multi_get_distance_sensor(msg, distance_sensor_multi->distance_sensor);
    distance_sensor_multi->target_system = mavlink_msg_distance_sensor_multi_get_target_system(msg);
    distance_sensor_multi->target_component = mavlink_msg_distance_sensor_multi_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN? msg->len : MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN;
        memset(distance_sensor_multi, 0, MAVLINK_MSG_ID_DISTANCE_SENSOR_MULTI_LEN);
    memcpy(distance_sensor_multi, _MAV_PAYLOAD(msg), len);
#endif
}
