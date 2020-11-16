#pragma once
// MESSAGE VOLIRO_COMMAND_TRAJECTORY_POINT PACKING

#define MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT 508

MAVPACKED(
typedef struct __mavlink_voliro_command_trajectory_point_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp in milliseconds since system boot*/
 float position_ref[3]; /*<  position reference command*/
 float velocity_W_ref[3]; /*<  velocity reference command*/
 float acceleration_W_ref[3]; /*<  acceleration reference command*/
 float angular_rate_W_ref[3]; /*<  angular_rate reference command*/
 float orientation_WB_ref[4]; /*<  orientation reference command*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
}) mavlink_voliro_command_trajectory_point_t;

#define MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN 70
#define MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_MIN_LEN 70
#define MAVLINK_MSG_ID_508_LEN 70
#define MAVLINK_MSG_ID_508_MIN_LEN 70

#define MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_CRC 13
#define MAVLINK_MSG_ID_508_CRC 13

#define MAVLINK_MSG_VOLIRO_COMMAND_TRAJECTORY_POINT_FIELD_POSITION_REF_LEN 3
#define MAVLINK_MSG_VOLIRO_COMMAND_TRAJECTORY_POINT_FIELD_VELOCITY_W_REF_LEN 3
#define MAVLINK_MSG_VOLIRO_COMMAND_TRAJECTORY_POINT_FIELD_ACCELERATION_W_REF_LEN 3
#define MAVLINK_MSG_VOLIRO_COMMAND_TRAJECTORY_POINT_FIELD_ANGULAR_RATE_W_REF_LEN 3
#define MAVLINK_MSG_VOLIRO_COMMAND_TRAJECTORY_POINT_FIELD_ORIENTATION_WB_REF_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VOLIRO_COMMAND_TRAJECTORY_POINT { \
    508, \
    "VOLIRO_COMMAND_TRAJECTORY_POINT", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_command_trajectory_point_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 68, offsetof(mavlink_voliro_command_trajectory_point_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 69, offsetof(mavlink_voliro_command_trajectory_point_t, target_component) }, \
         { "position_ref", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_voliro_command_trajectory_point_t, position_ref) }, \
         { "velocity_W_ref", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_voliro_command_trajectory_point_t, velocity_W_ref) }, \
         { "acceleration_W_ref", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_voliro_command_trajectory_point_t, acceleration_W_ref) }, \
         { "angular_rate_W_ref", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_voliro_command_trajectory_point_t, angular_rate_W_ref) }, \
         { "orientation_WB_ref", NULL, MAVLINK_TYPE_FLOAT, 4, 52, offsetof(mavlink_voliro_command_trajectory_point_t, orientation_WB_ref) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VOLIRO_COMMAND_TRAJECTORY_POINT { \
    "VOLIRO_COMMAND_TRAJECTORY_POINT", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_voliro_command_trajectory_point_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 68, offsetof(mavlink_voliro_command_trajectory_point_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 69, offsetof(mavlink_voliro_command_trajectory_point_t, target_component) }, \
         { "position_ref", NULL, MAVLINK_TYPE_FLOAT, 3, 4, offsetof(mavlink_voliro_command_trajectory_point_t, position_ref) }, \
         { "velocity_W_ref", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_voliro_command_trajectory_point_t, velocity_W_ref) }, \
         { "acceleration_W_ref", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_voliro_command_trajectory_point_t, acceleration_W_ref) }, \
         { "angular_rate_W_ref", NULL, MAVLINK_TYPE_FLOAT, 3, 40, offsetof(mavlink_voliro_command_trajectory_point_t, angular_rate_W_ref) }, \
         { "orientation_WB_ref", NULL, MAVLINK_TYPE_FLOAT, 4, 52, offsetof(mavlink_voliro_command_trajectory_point_t, orientation_WB_ref) }, \
         } \
}
#endif

/**
 * @brief Pack a voliro_command_trajectory_point message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param position_ref  position reference command
 * @param velocity_W_ref  velocity reference command
 * @param acceleration_W_ref  acceleration reference command
 * @param angular_rate_W_ref  angular_rate reference command
 * @param orientation_WB_ref  orientation reference command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_command_trajectory_point_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, const float *position_ref, const float *velocity_W_ref, const float *acceleration_W_ref, const float *angular_rate_W_ref, const float *orientation_WB_ref)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 68, target_system);
    _mav_put_uint8_t(buf, 69, target_component);
    _mav_put_float_array(buf, 4, position_ref, 3);
    _mav_put_float_array(buf, 16, velocity_W_ref, 3);
    _mav_put_float_array(buf, 28, acceleration_W_ref, 3);
    _mav_put_float_array(buf, 40, angular_rate_W_ref, 3);
    _mav_put_float_array(buf, 52, orientation_WB_ref, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN);
#else
    mavlink_voliro_command_trajectory_point_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.position_ref, position_ref, sizeof(float)*3);
    mav_array_memcpy(packet.velocity_W_ref, velocity_W_ref, sizeof(float)*3);
    mav_array_memcpy(packet.acceleration_W_ref, acceleration_W_ref, sizeof(float)*3);
    mav_array_memcpy(packet.angular_rate_W_ref, angular_rate_W_ref, sizeof(float)*3);
    mav_array_memcpy(packet.orientation_WB_ref, orientation_WB_ref, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_CRC);
}

/**
 * @brief Pack a voliro_command_trajectory_point message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param position_ref  position reference command
 * @param velocity_W_ref  velocity reference command
 * @param acceleration_W_ref  acceleration reference command
 * @param angular_rate_W_ref  angular_rate reference command
 * @param orientation_WB_ref  orientation reference command
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_voliro_command_trajectory_point_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,const float *position_ref,const float *velocity_W_ref,const float *acceleration_W_ref,const float *angular_rate_W_ref,const float *orientation_WB_ref)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 68, target_system);
    _mav_put_uint8_t(buf, 69, target_component);
    _mav_put_float_array(buf, 4, position_ref, 3);
    _mav_put_float_array(buf, 16, velocity_W_ref, 3);
    _mav_put_float_array(buf, 28, acceleration_W_ref, 3);
    _mav_put_float_array(buf, 40, angular_rate_W_ref, 3);
    _mav_put_float_array(buf, 52, orientation_WB_ref, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN);
#else
    mavlink_voliro_command_trajectory_point_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.position_ref, position_ref, sizeof(float)*3);
    mav_array_memcpy(packet.velocity_W_ref, velocity_W_ref, sizeof(float)*3);
    mav_array_memcpy(packet.acceleration_W_ref, acceleration_W_ref, sizeof(float)*3);
    mav_array_memcpy(packet.angular_rate_W_ref, angular_rate_W_ref, sizeof(float)*3);
    mav_array_memcpy(packet.orientation_WB_ref, orientation_WB_ref, sizeof(float)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_CRC);
}

/**
 * @brief Encode a voliro_command_trajectory_point struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param voliro_command_trajectory_point C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_command_trajectory_point_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_voliro_command_trajectory_point_t* voliro_command_trajectory_point)
{
    return mavlink_msg_voliro_command_trajectory_point_pack(system_id, component_id, msg, voliro_command_trajectory_point->time_boot_ms, voliro_command_trajectory_point->target_system, voliro_command_trajectory_point->target_component, voliro_command_trajectory_point->position_ref, voliro_command_trajectory_point->velocity_W_ref, voliro_command_trajectory_point->acceleration_W_ref, voliro_command_trajectory_point->angular_rate_W_ref, voliro_command_trajectory_point->orientation_WB_ref);
}

/**
 * @brief Encode a voliro_command_trajectory_point struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param voliro_command_trajectory_point C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_voliro_command_trajectory_point_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_voliro_command_trajectory_point_t* voliro_command_trajectory_point)
{
    return mavlink_msg_voliro_command_trajectory_point_pack_chan(system_id, component_id, chan, msg, voliro_command_trajectory_point->time_boot_ms, voliro_command_trajectory_point->target_system, voliro_command_trajectory_point->target_component, voliro_command_trajectory_point->position_ref, voliro_command_trajectory_point->velocity_W_ref, voliro_command_trajectory_point->acceleration_W_ref, voliro_command_trajectory_point->angular_rate_W_ref, voliro_command_trajectory_point->orientation_WB_ref);
}

/**
 * @brief Send a voliro_command_trajectory_point message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param position_ref  position reference command
 * @param velocity_W_ref  velocity reference command
 * @param acceleration_W_ref  acceleration reference command
 * @param angular_rate_W_ref  angular_rate reference command
 * @param orientation_WB_ref  orientation reference command
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_voliro_command_trajectory_point_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, const float *position_ref, const float *velocity_W_ref, const float *acceleration_W_ref, const float *angular_rate_W_ref, const float *orientation_WB_ref)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 68, target_system);
    _mav_put_uint8_t(buf, 69, target_component);
    _mav_put_float_array(buf, 4, position_ref, 3);
    _mav_put_float_array(buf, 16, velocity_W_ref, 3);
    _mav_put_float_array(buf, 28, acceleration_W_ref, 3);
    _mav_put_float_array(buf, 40, angular_rate_W_ref, 3);
    _mav_put_float_array(buf, 52, orientation_WB_ref, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT, buf, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_CRC);
#else
    mavlink_voliro_command_trajectory_point_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.position_ref, position_ref, sizeof(float)*3);
    mav_array_memcpy(packet.velocity_W_ref, velocity_W_ref, sizeof(float)*3);
    mav_array_memcpy(packet.acceleration_W_ref, acceleration_W_ref, sizeof(float)*3);
    mav_array_memcpy(packet.angular_rate_W_ref, angular_rate_W_ref, sizeof(float)*3);
    mav_array_memcpy(packet.orientation_WB_ref, orientation_WB_ref, sizeof(float)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT, (const char *)&packet, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_CRC);
#endif
}

/**
 * @brief Send a voliro_command_trajectory_point message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_voliro_command_trajectory_point_send_struct(mavlink_channel_t chan, const mavlink_voliro_command_trajectory_point_t* voliro_command_trajectory_point)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_voliro_command_trajectory_point_send(chan, voliro_command_trajectory_point->time_boot_ms, voliro_command_trajectory_point->target_system, voliro_command_trajectory_point->target_component, voliro_command_trajectory_point->position_ref, voliro_command_trajectory_point->velocity_W_ref, voliro_command_trajectory_point->acceleration_W_ref, voliro_command_trajectory_point->angular_rate_W_ref, voliro_command_trajectory_point->orientation_WB_ref);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT, (const char *)voliro_command_trajectory_point, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_CRC);
#endif
}

#if MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_voliro_command_trajectory_point_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, const float *position_ref, const float *velocity_W_ref, const float *acceleration_W_ref, const float *angular_rate_W_ref, const float *orientation_WB_ref)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint8_t(buf, 68, target_system);
    _mav_put_uint8_t(buf, 69, target_component);
    _mav_put_float_array(buf, 4, position_ref, 3);
    _mav_put_float_array(buf, 16, velocity_W_ref, 3);
    _mav_put_float_array(buf, 28, acceleration_W_ref, 3);
    _mav_put_float_array(buf, 40, angular_rate_W_ref, 3);
    _mav_put_float_array(buf, 52, orientation_WB_ref, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT, buf, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_CRC);
#else
    mavlink_voliro_command_trajectory_point_t *packet = (mavlink_voliro_command_trajectory_point_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->target_system = target_system;
    packet->target_component = target_component;
    mav_array_memcpy(packet->position_ref, position_ref, sizeof(float)*3);
    mav_array_memcpy(packet->velocity_W_ref, velocity_W_ref, sizeof(float)*3);
    mav_array_memcpy(packet->acceleration_W_ref, acceleration_W_ref, sizeof(float)*3);
    mav_array_memcpy(packet->angular_rate_W_ref, angular_rate_W_ref, sizeof(float)*3);
    mav_array_memcpy(packet->orientation_WB_ref, orientation_WB_ref, sizeof(float)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT, (const char *)packet, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_MIN_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_CRC);
#endif
}
#endif

#endif

// MESSAGE VOLIRO_COMMAND_TRAJECTORY_POINT UNPACKING


/**
 * @brief Get field time_boot_ms from voliro_command_trajectory_point message
 *
 * @return [ms] Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_voliro_command_trajectory_point_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from voliro_command_trajectory_point message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_voliro_command_trajectory_point_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  68);
}

/**
 * @brief Get field target_component from voliro_command_trajectory_point message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_voliro_command_trajectory_point_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  69);
}

/**
 * @brief Get field position_ref from voliro_command_trajectory_point message
 *
 * @return  position reference command
 */
static inline uint16_t mavlink_msg_voliro_command_trajectory_point_get_position_ref(const mavlink_message_t* msg, float *position_ref)
{
    return _MAV_RETURN_float_array(msg, position_ref, 3,  4);
}

/**
 * @brief Get field velocity_W_ref from voliro_command_trajectory_point message
 *
 * @return  velocity reference command
 */
static inline uint16_t mavlink_msg_voliro_command_trajectory_point_get_velocity_W_ref(const mavlink_message_t* msg, float *velocity_W_ref)
{
    return _MAV_RETURN_float_array(msg, velocity_W_ref, 3,  16);
}

/**
 * @brief Get field acceleration_W_ref from voliro_command_trajectory_point message
 *
 * @return  acceleration reference command
 */
static inline uint16_t mavlink_msg_voliro_command_trajectory_point_get_acceleration_W_ref(const mavlink_message_t* msg, float *acceleration_W_ref)
{
    return _MAV_RETURN_float_array(msg, acceleration_W_ref, 3,  28);
}

/**
 * @brief Get field angular_rate_W_ref from voliro_command_trajectory_point message
 *
 * @return  angular_rate reference command
 */
static inline uint16_t mavlink_msg_voliro_command_trajectory_point_get_angular_rate_W_ref(const mavlink_message_t* msg, float *angular_rate_W_ref)
{
    return _MAV_RETURN_float_array(msg, angular_rate_W_ref, 3,  40);
}

/**
 * @brief Get field orientation_WB_ref from voliro_command_trajectory_point message
 *
 * @return  orientation reference command
 */
static inline uint16_t mavlink_msg_voliro_command_trajectory_point_get_orientation_WB_ref(const mavlink_message_t* msg, float *orientation_WB_ref)
{
    return _MAV_RETURN_float_array(msg, orientation_WB_ref, 4,  52);
}

/**
 * @brief Decode a voliro_command_trajectory_point message into a struct
 *
 * @param msg The message to decode
 * @param voliro_command_trajectory_point C-struct to decode the message contents into
 */
static inline void mavlink_msg_voliro_command_trajectory_point_decode(const mavlink_message_t* msg, mavlink_voliro_command_trajectory_point_t* voliro_command_trajectory_point)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    voliro_command_trajectory_point->time_boot_ms = mavlink_msg_voliro_command_trajectory_point_get_time_boot_ms(msg);
    mavlink_msg_voliro_command_trajectory_point_get_position_ref(msg, voliro_command_trajectory_point->position_ref);
    mavlink_msg_voliro_command_trajectory_point_get_velocity_W_ref(msg, voliro_command_trajectory_point->velocity_W_ref);
    mavlink_msg_voliro_command_trajectory_point_get_acceleration_W_ref(msg, voliro_command_trajectory_point->acceleration_W_ref);
    mavlink_msg_voliro_command_trajectory_point_get_angular_rate_W_ref(msg, voliro_command_trajectory_point->angular_rate_W_ref);
    mavlink_msg_voliro_command_trajectory_point_get_orientation_WB_ref(msg, voliro_command_trajectory_point->orientation_WB_ref);
    voliro_command_trajectory_point->target_system = mavlink_msg_voliro_command_trajectory_point_get_target_system(msg);
    voliro_command_trajectory_point->target_component = mavlink_msg_voliro_command_trajectory_point_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN? msg->len : MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN;
        memset(voliro_command_trajectory_point, 0, MAVLINK_MSG_ID_VOLIRO_COMMAND_TRAJECTORY_POINT_LEN);
    memcpy(voliro_command_trajectory_point, _MAV_PAYLOAD(msg), len);
#endif
}
