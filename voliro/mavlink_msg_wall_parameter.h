#pragma once
// MESSAGE WALL_PARAMETER PACKING

#define MAVLINK_MSG_ID_WALL_PARAMETER 505

MAVPACKED(
typedef struct __mavlink_wall_parameter_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp in milliseconds since system boot*/
 float delta_pitch; /*<  desired angular rates*/
 float delta_yaw; /*<  angular acceleration feedforward term*/
 float wall_distance; /*<  distance to the wall*/
 float velocity; /*<  velocity to the wall*/
 float normal_vector[3]; /*<  normal vector of wall expressed in vehicle frame*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
}) mavlink_wall_parameter_t;

#define MAVLINK_MSG_ID_WALL_PARAMETER_LEN 34
#define MAVLINK_MSG_ID_WALL_PARAMETER_MIN_LEN 34
#define MAVLINK_MSG_ID_505_LEN 34
#define MAVLINK_MSG_ID_505_MIN_LEN 34

#define MAVLINK_MSG_ID_WALL_PARAMETER_CRC 114
#define MAVLINK_MSG_ID_505_CRC 114

#define MAVLINK_MSG_WALL_PARAMETER_FIELD_NORMAL_VECTOR_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_WALL_PARAMETER { \
    505, \
    "WALL_PARAMETER", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_wall_parameter_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_wall_parameter_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_wall_parameter_t, target_component) }, \
         { "delta_pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_wall_parameter_t, delta_pitch) }, \
         { "delta_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_wall_parameter_t, delta_yaw) }, \
         { "wall_distance", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_wall_parameter_t, wall_distance) }, \
         { "velocity", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_wall_parameter_t, velocity) }, \
         { "normal_vector", NULL, MAVLINK_TYPE_FLOAT, 3, 20, offsetof(mavlink_wall_parameter_t, normal_vector) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_WALL_PARAMETER { \
    "WALL_PARAMETER", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_wall_parameter_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 32, offsetof(mavlink_wall_parameter_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 33, offsetof(mavlink_wall_parameter_t, target_component) }, \
         { "delta_pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_wall_parameter_t, delta_pitch) }, \
         { "delta_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_wall_parameter_t, delta_yaw) }, \
         { "wall_distance", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_wall_parameter_t, wall_distance) }, \
         { "velocity", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_wall_parameter_t, velocity) }, \
         { "normal_vector", NULL, MAVLINK_TYPE_FLOAT, 3, 20, offsetof(mavlink_wall_parameter_t, normal_vector) }, \
         } \
}
#endif

/**
 * @brief Pack a wall_parameter message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param delta_pitch  desired angular rates
 * @param delta_yaw  angular acceleration feedforward term
 * @param wall_distance  distance to the wall
 * @param velocity  velocity to the wall
 * @param normal_vector  normal vector of wall expressed in vehicle frame
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wall_parameter_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float delta_pitch, float delta_yaw, float wall_distance, float velocity, const float *normal_vector)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WALL_PARAMETER_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, delta_pitch);
    _mav_put_float(buf, 8, delta_yaw);
    _mav_put_float(buf, 12, wall_distance);
    _mav_put_float(buf, 16, velocity);
    _mav_put_uint8_t(buf, 32, target_system);
    _mav_put_uint8_t(buf, 33, target_component);
    _mav_put_float_array(buf, 20, normal_vector, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WALL_PARAMETER_LEN);
#else
    mavlink_wall_parameter_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.delta_pitch = delta_pitch;
    packet.delta_yaw = delta_yaw;
    packet.wall_distance = wall_distance;
    packet.velocity = velocity;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.normal_vector, normal_vector, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WALL_PARAMETER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WALL_PARAMETER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_WALL_PARAMETER_MIN_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_CRC);
}

/**
 * @brief Pack a wall_parameter message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param delta_pitch  desired angular rates
 * @param delta_yaw  angular acceleration feedforward term
 * @param wall_distance  distance to the wall
 * @param velocity  velocity to the wall
 * @param normal_vector  normal vector of wall expressed in vehicle frame
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_wall_parameter_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,float delta_pitch,float delta_yaw,float wall_distance,float velocity,const float *normal_vector)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WALL_PARAMETER_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, delta_pitch);
    _mav_put_float(buf, 8, delta_yaw);
    _mav_put_float(buf, 12, wall_distance);
    _mav_put_float(buf, 16, velocity);
    _mav_put_uint8_t(buf, 32, target_system);
    _mav_put_uint8_t(buf, 33, target_component);
    _mav_put_float_array(buf, 20, normal_vector, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_WALL_PARAMETER_LEN);
#else
    mavlink_wall_parameter_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.delta_pitch = delta_pitch;
    packet.delta_yaw = delta_yaw;
    packet.wall_distance = wall_distance;
    packet.velocity = velocity;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.normal_vector, normal_vector, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_WALL_PARAMETER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_WALL_PARAMETER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_WALL_PARAMETER_MIN_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_CRC);
}

/**
 * @brief Encode a wall_parameter struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param wall_parameter C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wall_parameter_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_wall_parameter_t* wall_parameter)
{
    return mavlink_msg_wall_parameter_pack(system_id, component_id, msg, wall_parameter->time_boot_ms, wall_parameter->target_system, wall_parameter->target_component, wall_parameter->delta_pitch, wall_parameter->delta_yaw, wall_parameter->wall_distance, wall_parameter->velocity, wall_parameter->normal_vector);
}

/**
 * @brief Encode a wall_parameter struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param wall_parameter C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_wall_parameter_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_wall_parameter_t* wall_parameter)
{
    return mavlink_msg_wall_parameter_pack_chan(system_id, component_id, chan, msg, wall_parameter->time_boot_ms, wall_parameter->target_system, wall_parameter->target_component, wall_parameter->delta_pitch, wall_parameter->delta_yaw, wall_parameter->wall_distance, wall_parameter->velocity, wall_parameter->normal_vector);
}

/**
 * @brief Send a wall_parameter message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param delta_pitch  desired angular rates
 * @param delta_yaw  angular acceleration feedforward term
 * @param wall_distance  distance to the wall
 * @param velocity  velocity to the wall
 * @param normal_vector  normal vector of wall expressed in vehicle frame
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_wall_parameter_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float delta_pitch, float delta_yaw, float wall_distance, float velocity, const float *normal_vector)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_WALL_PARAMETER_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, delta_pitch);
    _mav_put_float(buf, 8, delta_yaw);
    _mav_put_float(buf, 12, wall_distance);
    _mav_put_float(buf, 16, velocity);
    _mav_put_uint8_t(buf, 32, target_system);
    _mav_put_uint8_t(buf, 33, target_component);
    _mav_put_float_array(buf, 20, normal_vector, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WALL_PARAMETER, buf, MAVLINK_MSG_ID_WALL_PARAMETER_MIN_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_CRC);
#else
    mavlink_wall_parameter_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.delta_pitch = delta_pitch;
    packet.delta_yaw = delta_yaw;
    packet.wall_distance = wall_distance;
    packet.velocity = velocity;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.normal_vector, normal_vector, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WALL_PARAMETER, (const char *)&packet, MAVLINK_MSG_ID_WALL_PARAMETER_MIN_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_CRC);
#endif
}

/**
 * @brief Send a wall_parameter message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_wall_parameter_send_struct(mavlink_channel_t chan, const mavlink_wall_parameter_t* wall_parameter)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_wall_parameter_send(chan, wall_parameter->time_boot_ms, wall_parameter->target_system, wall_parameter->target_component, wall_parameter->delta_pitch, wall_parameter->delta_yaw, wall_parameter->wall_distance, wall_parameter->velocity, wall_parameter->normal_vector);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WALL_PARAMETER, (const char *)wall_parameter, MAVLINK_MSG_ID_WALL_PARAMETER_MIN_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_CRC);
#endif
}

#if MAVLINK_MSG_ID_WALL_PARAMETER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_wall_parameter_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float delta_pitch, float delta_yaw, float wall_distance, float velocity, const float *normal_vector)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, delta_pitch);
    _mav_put_float(buf, 8, delta_yaw);
    _mav_put_float(buf, 12, wall_distance);
    _mav_put_float(buf, 16, velocity);
    _mav_put_uint8_t(buf, 32, target_system);
    _mav_put_uint8_t(buf, 33, target_component);
    _mav_put_float_array(buf, 20, normal_vector, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WALL_PARAMETER, buf, MAVLINK_MSG_ID_WALL_PARAMETER_MIN_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_CRC);
#else
    mavlink_wall_parameter_t *packet = (mavlink_wall_parameter_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->delta_pitch = delta_pitch;
    packet->delta_yaw = delta_yaw;
    packet->wall_distance = wall_distance;
    packet->velocity = velocity;
    packet->target_system = target_system;
    packet->target_component = target_component;
    mav_array_memcpy(packet->normal_vector, normal_vector, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_WALL_PARAMETER, (const char *)packet, MAVLINK_MSG_ID_WALL_PARAMETER_MIN_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_LEN, MAVLINK_MSG_ID_WALL_PARAMETER_CRC);
#endif
}
#endif

#endif

// MESSAGE WALL_PARAMETER UNPACKING


/**
 * @brief Get field time_boot_ms from wall_parameter message
 *
 * @return [ms] Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_wall_parameter_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from wall_parameter message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_wall_parameter_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  32);
}

/**
 * @brief Get field target_component from wall_parameter message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_wall_parameter_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  33);
}

/**
 * @brief Get field delta_pitch from wall_parameter message
 *
 * @return  desired angular rates
 */
static inline float mavlink_msg_wall_parameter_get_delta_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field delta_yaw from wall_parameter message
 *
 * @return  angular acceleration feedforward term
 */
static inline float mavlink_msg_wall_parameter_get_delta_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field wall_distance from wall_parameter message
 *
 * @return  distance to the wall
 */
static inline float mavlink_msg_wall_parameter_get_wall_distance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field velocity from wall_parameter message
 *
 * @return  velocity to the wall
 */
static inline float mavlink_msg_wall_parameter_get_velocity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field normal_vector from wall_parameter message
 *
 * @return  normal vector of wall expressed in vehicle frame
 */
static inline uint16_t mavlink_msg_wall_parameter_get_normal_vector(const mavlink_message_t* msg, float *normal_vector)
{
    return _MAV_RETURN_float_array(msg, normal_vector, 3,  20);
}

/**
 * @brief Decode a wall_parameter message into a struct
 *
 * @param msg The message to decode
 * @param wall_parameter C-struct to decode the message contents into
 */
static inline void mavlink_msg_wall_parameter_decode(const mavlink_message_t* msg, mavlink_wall_parameter_t* wall_parameter)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    wall_parameter->time_boot_ms = mavlink_msg_wall_parameter_get_time_boot_ms(msg);
    wall_parameter->delta_pitch = mavlink_msg_wall_parameter_get_delta_pitch(msg);
    wall_parameter->delta_yaw = mavlink_msg_wall_parameter_get_delta_yaw(msg);
    wall_parameter->wall_distance = mavlink_msg_wall_parameter_get_wall_distance(msg);
    wall_parameter->velocity = mavlink_msg_wall_parameter_get_velocity(msg);
    mavlink_msg_wall_parameter_get_normal_vector(msg, wall_parameter->normal_vector);
    wall_parameter->target_system = mavlink_msg_wall_parameter_get_target_system(msg);
    wall_parameter->target_component = mavlink_msg_wall_parameter_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_WALL_PARAMETER_LEN? msg->len : MAVLINK_MSG_ID_WALL_PARAMETER_LEN;
        memset(wall_parameter, 0, MAVLINK_MSG_ID_WALL_PARAMETER_LEN);
    memcpy(wall_parameter, _MAV_PAYLOAD(msg), len);
#endif
}
