#pragma once
// MESSAGE SET_ROLL_PITCH_YAWRATE_THRUST_TARGET PACKING

#define MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET 501

MAVPACKED(
typedef struct __mavlink_set_roll_pitch_yawrate_thrust_target_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp in milliseconds since system boot*/
 float roll; /*<  desired roll angle in rad*/
 float pitch; /*<  desired pitch angle in rad*/
 float yawrate; /*<  desired yawrate in rad/s*/
 float angular_acc_ff[3]; /*<  angular acceleration feedforward term*/
 float thrust[3]; /*<  thrust vector x, y, z in Newton*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
}) mavlink_set_roll_pitch_yawrate_thrust_target_t;

#define MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN 42
#define MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_MIN_LEN 42
#define MAVLINK_MSG_ID_501_LEN 42
#define MAVLINK_MSG_ID_501_MIN_LEN 42

#define MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_CRC 67
#define MAVLINK_MSG_ID_501_CRC 67

#define MAVLINK_MSG_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_FIELD_ANGULAR_ACC_FF_LEN 3
#define MAVLINK_MSG_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_FIELD_THRUST_LEN 3

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET { \
    501, \
    "SET_ROLL_PITCH_YAWRATE_THRUST_TARGET", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, target_component) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, pitch) }, \
         { "yawrate", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, yawrate) }, \
         { "angular_acc_ff", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, angular_acc_ff) }, \
         { "thrust", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, thrust) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET { \
    "SET_ROLL_PITCH_YAWRATE_THRUST_TARGET", \
    8, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, time_boot_ms) }, \
         { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 40, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 41, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, target_component) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, pitch) }, \
         { "yawrate", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, yawrate) }, \
         { "angular_acc_ff", NULL, MAVLINK_TYPE_FLOAT, 3, 16, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, angular_acc_ff) }, \
         { "thrust", NULL, MAVLINK_TYPE_FLOAT, 3, 28, offsetof(mavlink_set_roll_pitch_yawrate_thrust_target_t, thrust) }, \
         } \
}
#endif

/**
 * @brief Pack a set_roll_pitch_yawrate_thrust_target message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param roll  desired roll angle in rad
 * @param pitch  desired pitch angle in rad
 * @param yawrate  desired yawrate in rad/s
 * @param angular_acc_ff  angular acceleration feedforward term
 * @param thrust  thrust vector x, y, z in Newton
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_roll_pitch_yawrate_thrust_target_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float roll, float pitch, float yawrate, const float *angular_acc_ff, const float *thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yawrate);
    _mav_put_uint8_t(buf, 40, target_system);
    _mav_put_uint8_t(buf, 41, target_component);
    _mav_put_float_array(buf, 16, angular_acc_ff, 3);
    _mav_put_float_array(buf, 28, thrust, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN);
#else
    mavlink_set_roll_pitch_yawrate_thrust_target_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yawrate = yawrate;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.angular_acc_ff, angular_acc_ff, sizeof(float)*3);
    mav_array_memcpy(packet.thrust, thrust, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_CRC);
}

/**
 * @brief Pack a set_roll_pitch_yawrate_thrust_target message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param roll  desired roll angle in rad
 * @param pitch  desired pitch angle in rad
 * @param yawrate  desired yawrate in rad/s
 * @param angular_acc_ff  angular acceleration feedforward term
 * @param thrust  thrust vector x, y, z in Newton
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_roll_pitch_yawrate_thrust_target_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t target_system,uint8_t target_component,float roll,float pitch,float yawrate,const float *angular_acc_ff,const float *thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yawrate);
    _mav_put_uint8_t(buf, 40, target_system);
    _mav_put_uint8_t(buf, 41, target_component);
    _mav_put_float_array(buf, 16, angular_acc_ff, 3);
    _mav_put_float_array(buf, 28, thrust, 3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN);
#else
    mavlink_set_roll_pitch_yawrate_thrust_target_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yawrate = yawrate;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.angular_acc_ff, angular_acc_ff, sizeof(float)*3);
    mav_array_memcpy(packet.thrust, thrust, sizeof(float)*3);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_CRC);
}

/**
 * @brief Encode a set_roll_pitch_yawrate_thrust_target struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_roll_pitch_yawrate_thrust_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_roll_pitch_yawrate_thrust_target_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_roll_pitch_yawrate_thrust_target_t* set_roll_pitch_yawrate_thrust_target)
{
    return mavlink_msg_set_roll_pitch_yawrate_thrust_target_pack(system_id, component_id, msg, set_roll_pitch_yawrate_thrust_target->time_boot_ms, set_roll_pitch_yawrate_thrust_target->target_system, set_roll_pitch_yawrate_thrust_target->target_component, set_roll_pitch_yawrate_thrust_target->roll, set_roll_pitch_yawrate_thrust_target->pitch, set_roll_pitch_yawrate_thrust_target->yawrate, set_roll_pitch_yawrate_thrust_target->angular_acc_ff, set_roll_pitch_yawrate_thrust_target->thrust);
}

/**
 * @brief Encode a set_roll_pitch_yawrate_thrust_target struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_roll_pitch_yawrate_thrust_target C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_roll_pitch_yawrate_thrust_target_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_roll_pitch_yawrate_thrust_target_t* set_roll_pitch_yawrate_thrust_target)
{
    return mavlink_msg_set_roll_pitch_yawrate_thrust_target_pack_chan(system_id, component_id, chan, msg, set_roll_pitch_yawrate_thrust_target->time_boot_ms, set_roll_pitch_yawrate_thrust_target->target_system, set_roll_pitch_yawrate_thrust_target->target_component, set_roll_pitch_yawrate_thrust_target->roll, set_roll_pitch_yawrate_thrust_target->pitch, set_roll_pitch_yawrate_thrust_target->yawrate, set_roll_pitch_yawrate_thrust_target->angular_acc_ff, set_roll_pitch_yawrate_thrust_target->thrust);
}

/**
 * @brief Send a set_roll_pitch_yawrate_thrust_target message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp in milliseconds since system boot
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param roll  desired roll angle in rad
 * @param pitch  desired pitch angle in rad
 * @param yawrate  desired yawrate in rad/s
 * @param angular_acc_ff  angular acceleration feedforward term
 * @param thrust  thrust vector x, y, z in Newton
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_roll_pitch_yawrate_thrust_target_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float roll, float pitch, float yawrate, const float *angular_acc_ff, const float *thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yawrate);
    _mav_put_uint8_t(buf, 40, target_system);
    _mav_put_uint8_t(buf, 41, target_component);
    _mav_put_float_array(buf, 16, angular_acc_ff, 3);
    _mav_put_float_array(buf, 28, thrust, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET, buf, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_CRC);
#else
    mavlink_set_roll_pitch_yawrate_thrust_target_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yawrate = yawrate;
    packet.target_system = target_system;
    packet.target_component = target_component;
    mav_array_memcpy(packet.angular_acc_ff, angular_acc_ff, sizeof(float)*3);
    mav_array_memcpy(packet.thrust, thrust, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET, (const char *)&packet, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_CRC);
#endif
}

/**
 * @brief Send a set_roll_pitch_yawrate_thrust_target message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_roll_pitch_yawrate_thrust_target_send_struct(mavlink_channel_t chan, const mavlink_set_roll_pitch_yawrate_thrust_target_t* set_roll_pitch_yawrate_thrust_target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_roll_pitch_yawrate_thrust_target_send(chan, set_roll_pitch_yawrate_thrust_target->time_boot_ms, set_roll_pitch_yawrate_thrust_target->target_system, set_roll_pitch_yawrate_thrust_target->target_component, set_roll_pitch_yawrate_thrust_target->roll, set_roll_pitch_yawrate_thrust_target->pitch, set_roll_pitch_yawrate_thrust_target->yawrate, set_roll_pitch_yawrate_thrust_target->angular_acc_ff, set_roll_pitch_yawrate_thrust_target->thrust);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET, (const char *)set_roll_pitch_yawrate_thrust_target, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_roll_pitch_yawrate_thrust_target_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t target_system, uint8_t target_component, float roll, float pitch, float yawrate, const float *angular_acc_ff, const float *thrust)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll);
    _mav_put_float(buf, 8, pitch);
    _mav_put_float(buf, 12, yawrate);
    _mav_put_uint8_t(buf, 40, target_system);
    _mav_put_uint8_t(buf, 41, target_component);
    _mav_put_float_array(buf, 16, angular_acc_ff, 3);
    _mav_put_float_array(buf, 28, thrust, 3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET, buf, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_CRC);
#else
    mavlink_set_roll_pitch_yawrate_thrust_target_t *packet = (mavlink_set_roll_pitch_yawrate_thrust_target_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->yawrate = yawrate;
    packet->target_system = target_system;
    packet->target_component = target_component;
    mav_array_memcpy(packet->angular_acc_ff, angular_acc_ff, sizeof(float)*3);
    mav_array_memcpy(packet->thrust, thrust, sizeof(float)*3);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET, (const char *)packet, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_MIN_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_ROLL_PITCH_YAWRATE_THRUST_TARGET UNPACKING


/**
 * @brief Get field time_boot_ms from set_roll_pitch_yawrate_thrust_target message
 *
 * @return [ms] Timestamp in milliseconds since system boot
 */
static inline uint32_t mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field target_system from set_roll_pitch_yawrate_thrust_target message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  40);
}

/**
 * @brief Get field target_component from set_roll_pitch_yawrate_thrust_target message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  41);
}

/**
 * @brief Get field roll from set_roll_pitch_yawrate_thrust_target message
 *
 * @return  desired roll angle in rad
 */
static inline float mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pitch from set_roll_pitch_yawrate_thrust_target message
 *
 * @return  desired pitch angle in rad
 */
static inline float mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field yawrate from set_roll_pitch_yawrate_thrust_target message
 *
 * @return  desired yawrate in rad/s
 */
static inline float mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_yawrate(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field angular_acc_ff from set_roll_pitch_yawrate_thrust_target message
 *
 * @return  angular acceleration feedforward term
 */
static inline uint16_t mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_angular_acc_ff(const mavlink_message_t* msg, float *angular_acc_ff)
{
    return _MAV_RETURN_float_array(msg, angular_acc_ff, 3,  16);
}

/**
 * @brief Get field thrust from set_roll_pitch_yawrate_thrust_target message
 *
 * @return  thrust vector x, y, z in Newton
 */
static inline uint16_t mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_thrust(const mavlink_message_t* msg, float *thrust)
{
    return _MAV_RETURN_float_array(msg, thrust, 3,  28);
}

/**
 * @brief Decode a set_roll_pitch_yawrate_thrust_target message into a struct
 *
 * @param msg The message to decode
 * @param set_roll_pitch_yawrate_thrust_target C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_roll_pitch_yawrate_thrust_target_decode(const mavlink_message_t* msg, mavlink_set_roll_pitch_yawrate_thrust_target_t* set_roll_pitch_yawrate_thrust_target)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_roll_pitch_yawrate_thrust_target->time_boot_ms = mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_time_boot_ms(msg);
    set_roll_pitch_yawrate_thrust_target->roll = mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_roll(msg);
    set_roll_pitch_yawrate_thrust_target->pitch = mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_pitch(msg);
    set_roll_pitch_yawrate_thrust_target->yawrate = mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_yawrate(msg);
    mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_angular_acc_ff(msg, set_roll_pitch_yawrate_thrust_target->angular_acc_ff);
    mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_thrust(msg, set_roll_pitch_yawrate_thrust_target->thrust);
    set_roll_pitch_yawrate_thrust_target->target_system = mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_target_system(msg);
    set_roll_pitch_yawrate_thrust_target->target_component = mavlink_msg_set_roll_pitch_yawrate_thrust_target_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN? msg->len : MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN;
        memset(set_roll_pitch_yawrate_thrust_target, 0, MAVLINK_MSG_ID_SET_ROLL_PITCH_YAWRATE_THRUST_TARGET_LEN);
    memcpy(set_roll_pitch_yawrate_thrust_target, _MAV_PAYLOAD(msg), len);
#endif
}
