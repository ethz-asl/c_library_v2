#pragma once
// MESSAGE SET_ATTITUDE_THRUST_VECTOR_TARGET_NED PACKING

#define MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED 95

MAVPACKED(
typedef struct __mavlink_set_attitude_thrust_vector_target_ned_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot).*/
 float acc_x; /*< [m/s/s] X acceleration in NED frame*/
 float acc_y; /*< [m/s/s] Y acceleration in NED frame*/
 float acc_z; /*< [m/s/s] Z acceleration in NED frame*/
 float q_w; /*< [1] Quaternion w*/
 float q_x; /*< [1] Quaternion x*/
 float q_y; /*< [1] Quaternion y*/
 float q_z; /*< [1] Quaternion z*/
 float p; /*< [rad/s] Angular velocity p*/
 float q; /*< [rad/s] Angular velocity q*/
 float r; /*< [rad/s] Angular velocity r*/
 float acc_roll; /*< [rad/s/s] roll acceleration in NED frame*/
 float acc_pitch; /*< [rad/s/s] pitch acceleration in NED frame*/
 float acc_yaw; /*< [rad/s/s] yaw acceleration in NED frame*/
 uint16_t type_mask; /*<  Bitmap to indicate which dimensions should be ignored by the vehicle.*/
 uint8_t coordinate_frame; /*<  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9*/
}) mavlink_set_attitude_thrust_vector_target_ned_t;

#define MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN 59
#define MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_MIN_LEN 59
#define MAVLINK_MSG_ID_95_LEN 59
#define MAVLINK_MSG_ID_95_MIN_LEN 59

#define MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_CRC 203
#define MAVLINK_MSG_ID_95_CRC 203



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED { \
    95, \
    "SET_ATTITUDE_THRUST_VECTOR_TARGET_NED", \
    16, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, time_boot_ms) }, \
         { "coordinate_frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 58, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, coordinate_frame) }, \
         { "type_mask", NULL, MAVLINK_TYPE_UINT16_T, 0, 56, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, type_mask) }, \
         { "acc_x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, acc_x) }, \
         { "acc_y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, acc_y) }, \
         { "acc_z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, acc_z) }, \
         { "q_w", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, q_w) }, \
         { "q_x", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, q_x) }, \
         { "q_y", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, q_y) }, \
         { "q_z", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, q_z) }, \
         { "p", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, p) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, q) }, \
         { "r", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, r) }, \
         { "acc_roll", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, acc_roll) }, \
         { "acc_pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, acc_pitch) }, \
         { "acc_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, acc_yaw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED { \
    "SET_ATTITUDE_THRUST_VECTOR_TARGET_NED", \
    16, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, time_boot_ms) }, \
         { "coordinate_frame", NULL, MAVLINK_TYPE_UINT8_T, 0, 58, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, coordinate_frame) }, \
         { "type_mask", NULL, MAVLINK_TYPE_UINT16_T, 0, 56, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, type_mask) }, \
         { "acc_x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, acc_x) }, \
         { "acc_y", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, acc_y) }, \
         { "acc_z", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, acc_z) }, \
         { "q_w", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, q_w) }, \
         { "q_x", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, q_x) }, \
         { "q_y", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, q_y) }, \
         { "q_z", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, q_z) }, \
         { "p", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, p) }, \
         { "q", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, q) }, \
         { "r", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, r) }, \
         { "acc_roll", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, acc_roll) }, \
         { "acc_pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, acc_pitch) }, \
         { "acc_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_set_attitude_thrust_vector_target_ned_t, acc_yaw) }, \
         } \
}
#endif

/**
 * @brief Pack a set_attitude_thrust_vector_target_ned message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param coordinate_frame  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9
 * @param type_mask  Bitmap to indicate which dimensions should be ignored by the vehicle.
 * @param acc_x [m/s/s] X acceleration in NED frame
 * @param acc_y [m/s/s] Y acceleration in NED frame
 * @param acc_z [m/s/s] Z acceleration in NED frame
 * @param q_w [1] Quaternion w
 * @param q_x [1] Quaternion x
 * @param q_y [1] Quaternion y
 * @param q_z [1] Quaternion z
 * @param p [rad/s] Angular velocity p
 * @param q [rad/s] Angular velocity q
 * @param r [rad/s] Angular velocity r
 * @param acc_roll [rad/s/s] roll acceleration in NED frame
 * @param acc_pitch [rad/s/s] pitch acceleration in NED frame
 * @param acc_yaw [rad/s/s] yaw acceleration in NED frame
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_attitude_thrust_vector_target_ned_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint8_t coordinate_frame, uint16_t type_mask, float acc_x, float acc_y, float acc_z, float q_w, float q_x, float q_y, float q_z, float p, float q, float r, float acc_roll, float acc_pitch, float acc_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, acc_x);
    _mav_put_float(buf, 8, acc_y);
    _mav_put_float(buf, 12, acc_z);
    _mav_put_float(buf, 16, q_w);
    _mav_put_float(buf, 20, q_x);
    _mav_put_float(buf, 24, q_y);
    _mav_put_float(buf, 28, q_z);
    _mav_put_float(buf, 32, p);
    _mav_put_float(buf, 36, q);
    _mav_put_float(buf, 40, r);
    _mav_put_float(buf, 44, acc_roll);
    _mav_put_float(buf, 48, acc_pitch);
    _mav_put_float(buf, 52, acc_yaw);
    _mav_put_uint16_t(buf, 56, type_mask);
    _mav_put_uint8_t(buf, 58, coordinate_frame);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN);
#else
    mavlink_set_attitude_thrust_vector_target_ned_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.acc_x = acc_x;
    packet.acc_y = acc_y;
    packet.acc_z = acc_z;
    packet.q_w = q_w;
    packet.q_x = q_x;
    packet.q_y = q_y;
    packet.q_z = q_z;
    packet.p = p;
    packet.q = q;
    packet.r = r;
    packet.acc_roll = acc_roll;
    packet.acc_pitch = acc_pitch;
    packet.acc_yaw = acc_yaw;
    packet.type_mask = type_mask;
    packet.coordinate_frame = coordinate_frame;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_CRC);
}

/**
 * @brief Pack a set_attitude_thrust_vector_target_ned message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param coordinate_frame  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9
 * @param type_mask  Bitmap to indicate which dimensions should be ignored by the vehicle.
 * @param acc_x [m/s/s] X acceleration in NED frame
 * @param acc_y [m/s/s] Y acceleration in NED frame
 * @param acc_z [m/s/s] Z acceleration in NED frame
 * @param q_w [1] Quaternion w
 * @param q_x [1] Quaternion x
 * @param q_y [1] Quaternion y
 * @param q_z [1] Quaternion z
 * @param p [rad/s] Angular velocity p
 * @param q [rad/s] Angular velocity q
 * @param r [rad/s] Angular velocity r
 * @param acc_roll [rad/s/s] roll acceleration in NED frame
 * @param acc_pitch [rad/s/s] pitch acceleration in NED frame
 * @param acc_yaw [rad/s/s] yaw acceleration in NED frame
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_set_attitude_thrust_vector_target_ned_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint8_t coordinate_frame,uint16_t type_mask,float acc_x,float acc_y,float acc_z,float q_w,float q_x,float q_y,float q_z,float p,float q,float r,float acc_roll,float acc_pitch,float acc_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, acc_x);
    _mav_put_float(buf, 8, acc_y);
    _mav_put_float(buf, 12, acc_z);
    _mav_put_float(buf, 16, q_w);
    _mav_put_float(buf, 20, q_x);
    _mav_put_float(buf, 24, q_y);
    _mav_put_float(buf, 28, q_z);
    _mav_put_float(buf, 32, p);
    _mav_put_float(buf, 36, q);
    _mav_put_float(buf, 40, r);
    _mav_put_float(buf, 44, acc_roll);
    _mav_put_float(buf, 48, acc_pitch);
    _mav_put_float(buf, 52, acc_yaw);
    _mav_put_uint16_t(buf, 56, type_mask);
    _mav_put_uint8_t(buf, 58, coordinate_frame);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN);
#else
    mavlink_set_attitude_thrust_vector_target_ned_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.acc_x = acc_x;
    packet.acc_y = acc_y;
    packet.acc_z = acc_z;
    packet.q_w = q_w;
    packet.q_x = q_x;
    packet.q_y = q_y;
    packet.q_z = q_z;
    packet.p = p;
    packet.q = q;
    packet.r = r;
    packet.acc_roll = acc_roll;
    packet.acc_pitch = acc_pitch;
    packet.acc_yaw = acc_yaw;
    packet.type_mask = type_mask;
    packet.coordinate_frame = coordinate_frame;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_CRC);
}

/**
 * @brief Encode a set_attitude_thrust_vector_target_ned struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param set_attitude_thrust_vector_target_ned C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_attitude_thrust_vector_target_ned_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_set_attitude_thrust_vector_target_ned_t* set_attitude_thrust_vector_target_ned)
{
    return mavlink_msg_set_attitude_thrust_vector_target_ned_pack(system_id, component_id, msg, set_attitude_thrust_vector_target_ned->time_boot_ms, set_attitude_thrust_vector_target_ned->coordinate_frame, set_attitude_thrust_vector_target_ned->type_mask, set_attitude_thrust_vector_target_ned->acc_x, set_attitude_thrust_vector_target_ned->acc_y, set_attitude_thrust_vector_target_ned->acc_z, set_attitude_thrust_vector_target_ned->q_w, set_attitude_thrust_vector_target_ned->q_x, set_attitude_thrust_vector_target_ned->q_y, set_attitude_thrust_vector_target_ned->q_z, set_attitude_thrust_vector_target_ned->p, set_attitude_thrust_vector_target_ned->q, set_attitude_thrust_vector_target_ned->r, set_attitude_thrust_vector_target_ned->acc_roll, set_attitude_thrust_vector_target_ned->acc_pitch, set_attitude_thrust_vector_target_ned->acc_yaw);
}

/**
 * @brief Encode a set_attitude_thrust_vector_target_ned struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param set_attitude_thrust_vector_target_ned C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_set_attitude_thrust_vector_target_ned_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_set_attitude_thrust_vector_target_ned_t* set_attitude_thrust_vector_target_ned)
{
    return mavlink_msg_set_attitude_thrust_vector_target_ned_pack_chan(system_id, component_id, chan, msg, set_attitude_thrust_vector_target_ned->time_boot_ms, set_attitude_thrust_vector_target_ned->coordinate_frame, set_attitude_thrust_vector_target_ned->type_mask, set_attitude_thrust_vector_target_ned->acc_x, set_attitude_thrust_vector_target_ned->acc_y, set_attitude_thrust_vector_target_ned->acc_z, set_attitude_thrust_vector_target_ned->q_w, set_attitude_thrust_vector_target_ned->q_x, set_attitude_thrust_vector_target_ned->q_y, set_attitude_thrust_vector_target_ned->q_z, set_attitude_thrust_vector_target_ned->p, set_attitude_thrust_vector_target_ned->q, set_attitude_thrust_vector_target_ned->r, set_attitude_thrust_vector_target_ned->acc_roll, set_attitude_thrust_vector_target_ned->acc_pitch, set_attitude_thrust_vector_target_ned->acc_yaw);
}

/**
 * @brief Send a set_attitude_thrust_vector_target_ned message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp (time since system boot).
 * @param coordinate_frame  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9
 * @param type_mask  Bitmap to indicate which dimensions should be ignored by the vehicle.
 * @param acc_x [m/s/s] X acceleration in NED frame
 * @param acc_y [m/s/s] Y acceleration in NED frame
 * @param acc_z [m/s/s] Z acceleration in NED frame
 * @param q_w [1] Quaternion w
 * @param q_x [1] Quaternion x
 * @param q_y [1] Quaternion y
 * @param q_z [1] Quaternion z
 * @param p [rad/s] Angular velocity p
 * @param q [rad/s] Angular velocity q
 * @param r [rad/s] Angular velocity r
 * @param acc_roll [rad/s/s] roll acceleration in NED frame
 * @param acc_pitch [rad/s/s] pitch acceleration in NED frame
 * @param acc_yaw [rad/s/s] yaw acceleration in NED frame
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_set_attitude_thrust_vector_target_ned_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint8_t coordinate_frame, uint16_t type_mask, float acc_x, float acc_y, float acc_z, float q_w, float q_x, float q_y, float q_z, float p, float q, float r, float acc_roll, float acc_pitch, float acc_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, acc_x);
    _mav_put_float(buf, 8, acc_y);
    _mav_put_float(buf, 12, acc_z);
    _mav_put_float(buf, 16, q_w);
    _mav_put_float(buf, 20, q_x);
    _mav_put_float(buf, 24, q_y);
    _mav_put_float(buf, 28, q_z);
    _mav_put_float(buf, 32, p);
    _mav_put_float(buf, 36, q);
    _mav_put_float(buf, 40, r);
    _mav_put_float(buf, 44, acc_roll);
    _mav_put_float(buf, 48, acc_pitch);
    _mav_put_float(buf, 52, acc_yaw);
    _mav_put_uint16_t(buf, 56, type_mask);
    _mav_put_uint8_t(buf, 58, coordinate_frame);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED, buf, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_CRC);
#else
    mavlink_set_attitude_thrust_vector_target_ned_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.acc_x = acc_x;
    packet.acc_y = acc_y;
    packet.acc_z = acc_z;
    packet.q_w = q_w;
    packet.q_x = q_x;
    packet.q_y = q_y;
    packet.q_z = q_z;
    packet.p = p;
    packet.q = q;
    packet.r = r;
    packet.acc_roll = acc_roll;
    packet.acc_pitch = acc_pitch;
    packet.acc_yaw = acc_yaw;
    packet.type_mask = type_mask;
    packet.coordinate_frame = coordinate_frame;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED, (const char *)&packet, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_CRC);
#endif
}

/**
 * @brief Send a set_attitude_thrust_vector_target_ned message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_set_attitude_thrust_vector_target_ned_send_struct(mavlink_channel_t chan, const mavlink_set_attitude_thrust_vector_target_ned_t* set_attitude_thrust_vector_target_ned)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_set_attitude_thrust_vector_target_ned_send(chan, set_attitude_thrust_vector_target_ned->time_boot_ms, set_attitude_thrust_vector_target_ned->coordinate_frame, set_attitude_thrust_vector_target_ned->type_mask, set_attitude_thrust_vector_target_ned->acc_x, set_attitude_thrust_vector_target_ned->acc_y, set_attitude_thrust_vector_target_ned->acc_z, set_attitude_thrust_vector_target_ned->q_w, set_attitude_thrust_vector_target_ned->q_x, set_attitude_thrust_vector_target_ned->q_y, set_attitude_thrust_vector_target_ned->q_z, set_attitude_thrust_vector_target_ned->p, set_attitude_thrust_vector_target_ned->q, set_attitude_thrust_vector_target_ned->r, set_attitude_thrust_vector_target_ned->acc_roll, set_attitude_thrust_vector_target_ned->acc_pitch, set_attitude_thrust_vector_target_ned->acc_yaw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED, (const char *)set_attitude_thrust_vector_target_ned, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_CRC);
#endif
}

#if MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_set_attitude_thrust_vector_target_ned_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint8_t coordinate_frame, uint16_t type_mask, float acc_x, float acc_y, float acc_z, float q_w, float q_x, float q_y, float q_z, float p, float q, float r, float acc_roll, float acc_pitch, float acc_yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, acc_x);
    _mav_put_float(buf, 8, acc_y);
    _mav_put_float(buf, 12, acc_z);
    _mav_put_float(buf, 16, q_w);
    _mav_put_float(buf, 20, q_x);
    _mav_put_float(buf, 24, q_y);
    _mav_put_float(buf, 28, q_z);
    _mav_put_float(buf, 32, p);
    _mav_put_float(buf, 36, q);
    _mav_put_float(buf, 40, r);
    _mav_put_float(buf, 44, acc_roll);
    _mav_put_float(buf, 48, acc_pitch);
    _mav_put_float(buf, 52, acc_yaw);
    _mav_put_uint16_t(buf, 56, type_mask);
    _mav_put_uint8_t(buf, 58, coordinate_frame);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED, buf, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_CRC);
#else
    mavlink_set_attitude_thrust_vector_target_ned_t *packet = (mavlink_set_attitude_thrust_vector_target_ned_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->acc_x = acc_x;
    packet->acc_y = acc_y;
    packet->acc_z = acc_z;
    packet->q_w = q_w;
    packet->q_x = q_x;
    packet->q_y = q_y;
    packet->q_z = q_z;
    packet->p = p;
    packet->q = q;
    packet->r = r;
    packet->acc_roll = acc_roll;
    packet->acc_pitch = acc_pitch;
    packet->acc_yaw = acc_yaw;
    packet->type_mask = type_mask;
    packet->coordinate_frame = coordinate_frame;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED, (const char *)packet, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_MIN_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_CRC);
#endif
}
#endif

#endif

// MESSAGE SET_ATTITUDE_THRUST_VECTOR_TARGET_NED UNPACKING


/**
 * @brief Get field time_boot_ms from set_attitude_thrust_vector_target_ned message
 *
 * @return [ms] Timestamp (time since system boot).
 */
static inline uint32_t mavlink_msg_set_attitude_thrust_vector_target_ned_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field coordinate_frame from set_attitude_thrust_vector_target_ned message
 *
 * @return  Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9
 */
static inline uint8_t mavlink_msg_set_attitude_thrust_vector_target_ned_get_coordinate_frame(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  58);
}

/**
 * @brief Get field type_mask from set_attitude_thrust_vector_target_ned message
 *
 * @return  Bitmap to indicate which dimensions should be ignored by the vehicle.
 */
static inline uint16_t mavlink_msg_set_attitude_thrust_vector_target_ned_get_type_mask(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  56);
}

/**
 * @brief Get field acc_x from set_attitude_thrust_vector_target_ned message
 *
 * @return [m/s/s] X acceleration in NED frame
 */
static inline float mavlink_msg_set_attitude_thrust_vector_target_ned_get_acc_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field acc_y from set_attitude_thrust_vector_target_ned message
 *
 * @return [m/s/s] Y acceleration in NED frame
 */
static inline float mavlink_msg_set_attitude_thrust_vector_target_ned_get_acc_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field acc_z from set_attitude_thrust_vector_target_ned message
 *
 * @return [m/s/s] Z acceleration in NED frame
 */
static inline float mavlink_msg_set_attitude_thrust_vector_target_ned_get_acc_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field q_w from set_attitude_thrust_vector_target_ned message
 *
 * @return [1] Quaternion w
 */
static inline float mavlink_msg_set_attitude_thrust_vector_target_ned_get_q_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field q_x from set_attitude_thrust_vector_target_ned message
 *
 * @return [1] Quaternion x
 */
static inline float mavlink_msg_set_attitude_thrust_vector_target_ned_get_q_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field q_y from set_attitude_thrust_vector_target_ned message
 *
 * @return [1] Quaternion y
 */
static inline float mavlink_msg_set_attitude_thrust_vector_target_ned_get_q_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field q_z from set_attitude_thrust_vector_target_ned message
 *
 * @return [1] Quaternion z
 */
static inline float mavlink_msg_set_attitude_thrust_vector_target_ned_get_q_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field p from set_attitude_thrust_vector_target_ned message
 *
 * @return [rad/s] Angular velocity p
 */
static inline float mavlink_msg_set_attitude_thrust_vector_target_ned_get_p(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field q from set_attitude_thrust_vector_target_ned message
 *
 * @return [rad/s] Angular velocity q
 */
static inline float mavlink_msg_set_attitude_thrust_vector_target_ned_get_q(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field r from set_attitude_thrust_vector_target_ned message
 *
 * @return [rad/s] Angular velocity r
 */
static inline float mavlink_msg_set_attitude_thrust_vector_target_ned_get_r(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field acc_roll from set_attitude_thrust_vector_target_ned message
 *
 * @return [rad/s/s] roll acceleration in NED frame
 */
static inline float mavlink_msg_set_attitude_thrust_vector_target_ned_get_acc_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field acc_pitch from set_attitude_thrust_vector_target_ned message
 *
 * @return [rad/s/s] pitch acceleration in NED frame
 */
static inline float mavlink_msg_set_attitude_thrust_vector_target_ned_get_acc_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field acc_yaw from set_attitude_thrust_vector_target_ned message
 *
 * @return [rad/s/s] yaw acceleration in NED frame
 */
static inline float mavlink_msg_set_attitude_thrust_vector_target_ned_get_acc_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Decode a set_attitude_thrust_vector_target_ned message into a struct
 *
 * @param msg The message to decode
 * @param set_attitude_thrust_vector_target_ned C-struct to decode the message contents into
 */
static inline void mavlink_msg_set_attitude_thrust_vector_target_ned_decode(const mavlink_message_t* msg, mavlink_set_attitude_thrust_vector_target_ned_t* set_attitude_thrust_vector_target_ned)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    set_attitude_thrust_vector_target_ned->time_boot_ms = mavlink_msg_set_attitude_thrust_vector_target_ned_get_time_boot_ms(msg);
    set_attitude_thrust_vector_target_ned->acc_x = mavlink_msg_set_attitude_thrust_vector_target_ned_get_acc_x(msg);
    set_attitude_thrust_vector_target_ned->acc_y = mavlink_msg_set_attitude_thrust_vector_target_ned_get_acc_y(msg);
    set_attitude_thrust_vector_target_ned->acc_z = mavlink_msg_set_attitude_thrust_vector_target_ned_get_acc_z(msg);
    set_attitude_thrust_vector_target_ned->q_w = mavlink_msg_set_attitude_thrust_vector_target_ned_get_q_w(msg);
    set_attitude_thrust_vector_target_ned->q_x = mavlink_msg_set_attitude_thrust_vector_target_ned_get_q_x(msg);
    set_attitude_thrust_vector_target_ned->q_y = mavlink_msg_set_attitude_thrust_vector_target_ned_get_q_y(msg);
    set_attitude_thrust_vector_target_ned->q_z = mavlink_msg_set_attitude_thrust_vector_target_ned_get_q_z(msg);
    set_attitude_thrust_vector_target_ned->p = mavlink_msg_set_attitude_thrust_vector_target_ned_get_p(msg);
    set_attitude_thrust_vector_target_ned->q = mavlink_msg_set_attitude_thrust_vector_target_ned_get_q(msg);
    set_attitude_thrust_vector_target_ned->r = mavlink_msg_set_attitude_thrust_vector_target_ned_get_r(msg);
    set_attitude_thrust_vector_target_ned->acc_roll = mavlink_msg_set_attitude_thrust_vector_target_ned_get_acc_roll(msg);
    set_attitude_thrust_vector_target_ned->acc_pitch = mavlink_msg_set_attitude_thrust_vector_target_ned_get_acc_pitch(msg);
    set_attitude_thrust_vector_target_ned->acc_yaw = mavlink_msg_set_attitude_thrust_vector_target_ned_get_acc_yaw(msg);
    set_attitude_thrust_vector_target_ned->type_mask = mavlink_msg_set_attitude_thrust_vector_target_ned_get_type_mask(msg);
    set_attitude_thrust_vector_target_ned->coordinate_frame = mavlink_msg_set_attitude_thrust_vector_target_ned_get_coordinate_frame(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN? msg->len : MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN;
        memset(set_attitude_thrust_vector_target_ned, 0, MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_LEN);
    memcpy(set_attitude_thrust_vector_target_ned, _MAV_PAYLOAD(msg), len);
#endif
}
