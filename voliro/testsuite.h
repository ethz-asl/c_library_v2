/** @file
 *    @brief MAVLink comm protocol testsuite generated from voliro.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef VOLIRO_TESTSUITE_H
#define VOLIRO_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_voliro(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_voliro(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_set_wrench_target_body_ned(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_wrench_target_body_ned_t packet_in = {
        963497464,45.0,73.0,101.0,129.0,157.0,185.0,18691,223
    };
    mavlink_set_wrench_target_body_ned_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        packet1.acc_x = packet_in.acc_x;
        packet1.acc_y = packet_in.acc_y;
        packet1.acc_z = packet_in.acc_z;
        packet1.acc_roll = packet_in.acc_roll;
        packet1.acc_pitch = packet_in.acc_pitch;
        packet1.acc_yaw = packet_in.acc_yaw;
        packet1.type_mask = packet_in.type_mask;
        packet1.coordinate_frame = packet_in.coordinate_frame;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_WRENCH_TARGET_BODY_NED_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_wrench_target_body_ned_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_wrench_target_body_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_wrench_target_body_ned_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.coordinate_frame , packet1.type_mask , packet1.acc_x , packet1.acc_y , packet1.acc_z , packet1.acc_roll , packet1.acc_pitch , packet1.acc_yaw );
    mavlink_msg_set_wrench_target_body_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_wrench_target_body_ned_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.coordinate_frame , packet1.type_mask , packet1.acc_x , packet1.acc_y , packet1.acc_z , packet1.acc_roll , packet1.acc_pitch , packet1.acc_yaw );
    mavlink_msg_set_wrench_target_body_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_wrench_target_body_ned_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_wrench_target_body_ned_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.coordinate_frame , packet1.type_mask , packet1.acc_x , packet1.acc_y , packet1.acc_z , packet1.acc_roll , packet1.acc_pitch , packet1.acc_yaw );
    mavlink_msg_set_wrench_target_body_ned_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_set_attitude_thrust_vector_target_ned(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_attitude_thrust_vector_target_ned_t packet_in = {
        963497464,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,353.0,381.0,20147,51
    };
    mavlink_set_attitude_thrust_vector_target_ned_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        packet1.acc_x = packet_in.acc_x;
        packet1.acc_y = packet_in.acc_y;
        packet1.acc_z = packet_in.acc_z;
        packet1.q_w = packet_in.q_w;
        packet1.q_x = packet_in.q_x;
        packet1.q_y = packet_in.q_y;
        packet1.q_z = packet_in.q_z;
        packet1.roll = packet_in.roll;
        packet1.pitch = packet_in.pitch;
        packet1.yaw = packet_in.yaw;
        packet1.acc_roll = packet_in.acc_roll;
        packet1.acc_pitch = packet_in.acc_pitch;
        packet1.acc_yaw = packet_in.acc_yaw;
        packet1.type_mask = packet_in.type_mask;
        packet1.coordinate_frame = packet_in.coordinate_frame;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_ATTITUDE_THRUST_VECTOR_TARGET_NED_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_attitude_thrust_vector_target_ned_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_attitude_thrust_vector_target_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_attitude_thrust_vector_target_ned_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.coordinate_frame , packet1.type_mask , packet1.acc_x , packet1.acc_y , packet1.acc_z , packet1.q_w , packet1.q_x , packet1.q_y , packet1.q_z , packet1.roll , packet1.pitch , packet1.yaw , packet1.acc_roll , packet1.acc_pitch , packet1.acc_yaw );
    mavlink_msg_set_attitude_thrust_vector_target_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_attitude_thrust_vector_target_ned_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.coordinate_frame , packet1.type_mask , packet1.acc_x , packet1.acc_y , packet1.acc_z , packet1.q_w , packet1.q_x , packet1.q_y , packet1.q_z , packet1.roll , packet1.pitch , packet1.yaw , packet1.acc_roll , packet1.acc_pitch , packet1.acc_yaw );
    mavlink_msg_set_attitude_thrust_vector_target_ned_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_attitude_thrust_vector_target_ned_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_attitude_thrust_vector_target_ned_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.coordinate_frame , packet1.type_mask , packet1.acc_x , packet1.acc_y , packet1.acc_z , packet1.q_w , packet1.q_x , packet1.q_y , packet1.q_z , packet1.roll , packet1.pitch , packet1.yaw , packet1.acc_roll , packet1.acc_pitch , packet1.acc_yaw );
    mavlink_msg_set_attitude_thrust_vector_target_ned_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_set_rotor_tilt_target(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_set_rotor_tilt_target_t packet_in = {
        963497464,{ 45.0, 46.0, 47.0, 48.0, 49.0, 50.0 }
    };
    mavlink_set_rotor_tilt_target_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        
        mav_array_memcpy(packet1.alpha, packet_in.alpha, sizeof(float)*6);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SET_ROTOR_TILT_TARGET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_rotor_tilt_target_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_set_rotor_tilt_target_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_rotor_tilt_target_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.alpha );
    mavlink_msg_set_rotor_tilt_target_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_rotor_tilt_target_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.alpha );
    mavlink_msg_set_rotor_tilt_target_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_set_rotor_tilt_target_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_set_rotor_tilt_target_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.alpha );
    mavlink_msg_set_rotor_tilt_target_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_voliro(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_set_wrench_target_body_ned(system_id, component_id, last_msg);
    mavlink_test_set_attitude_thrust_vector_target_ned(system_id, component_id, last_msg);
    mavlink_test_set_rotor_tilt_target(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // VOLIRO_TESTSUITE_H
