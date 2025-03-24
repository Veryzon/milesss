/*
 *           ::::::::    :::::::::::    ::::::::    ::::     ::::       :::
 *          :+:    :+:       :+:       :+:    :+:   +:+:+: :+:+:+     :+: :+:
 *          +:+              +:+       +:+          +:+ +:+:+ +:+    +:+   +:+
 *          +#++:++#++       +#+       :#:          +#+  +:+  +#+   +#++:++#++:
 *                 +#+       +#+       +#+   +#+#   +#+       +#+   +#+     +#+
 *          #+#    #+#       #+#       #+#    #+#   #+#       #+#   #+#     #+#
 *           ########    ###########    ########    ###       ###   ###     ###
 *
 *                     S I G M A   T E C H N O L O G Y   G R O U P
 *
 *                                 Public Test Build
 *                             (c) 2017 SIGMA FEDERATION
 *                      Open sourced under the Qwadro License.
 */

#include "mssMain.h"

typedef struct
{
   afxV3d direction;
   afxInt32 speaker_index[9];
   afxReal32 speaker_level[9];
   afxInt32 n_speakers_affected;
} MSS_RECEIVER_LIST;

DLLEXPORT HDIGDRIVER WINAPI AIL_open_digital_driver(afxUnit32 frequency, afxInt32 bits, afxInt32 channel, afxUnit32 flags);

DLLEXPORT void WINAPI AIL_close_digital_driver(HDIGDRIVER dig);

DLLEXPORT afxInt32 WINAPI AIL_digital_handle_release(HDIGDRIVER drvr);

DLLEXPORT afxInt32 WINAPI AIL_digital_handle_reacquire(HDIGDRIVER drvr);

DLLEXPORT afxInt32 WINAPI AIL_digital_CPU_percent(HDIGDRIVER dig);

DLLEXPORT afxInt32 WINAPI AIL_digital_latency(HDIGDRIVER dig);

DLLEXPORT void WINAPI AIL_set_speaker_configuration(HDIGDRIVER dig, afxV3d array, afxInt32 n_channels, afxReal32 falloff_power);

DLLEXPORT afxV3d* WINAPI AIL_speaker_configuration(HDIGDRIVER dig, afxInt32* n_physical_channels, afxInt32* n_logical_channels, afxReal32* falloff_power, afxInt32* channel_spec);

DLLEXPORT void WINAPI AIL_set_listener_relative_receiver_array(HDIGDRIVER dig, MSS_RECEIVER_LIST* array, afxInt32 n_receivers);

DLLEXPORT MSS_RECEIVER_LIST* WINAPI AIL_listener_relative_receiver_array(HDIGDRIVER dig, afxInt32* n_receivers);

DLLEXPORT void WINAPI AIL_set_speaker_reverb_levels(HDIGDRIVER dig, afxReal32* wet_array, afxReal32* dry_array, afxInt32* speaker_index_array, afxInt32 n_levels);

DLLEXPORT afxInt32 WINAPI AIL_speaker_reverb_levels(HDIGDRIVER dig, afxReal32** wet_array, afxReal32** dry_array, afxInt32 const** speaker_index_array);

DLLEXPORT afxInt32 WINAPI AIL_calculate_3D_channel_levels(HDIGDRIVER dig,
    afxReal32* channel_levels,
    afxInt32 const** speaker_array,
    afxV3d src_pos,
    afxV3d src_face,
    afxV3d src_up,
    afxReal32 src_inner_angle,
    afxReal32 src_outer_angle,
    afxReal32 src_outer_volume,
    afxReal32 src_max_dist,
    afxReal32 src_min_dist,
    afxV3d listen_pos,
    afxV3d listen_face,
    afxV3d listen_up,
    afxReal32 rolloff_factor,
    afxV3d doppler_velocity,
    afxReal32* doppler_shift);


DLLEXPORT HPROVIDER WINAPI AIL_set_digital_driver_processor(HDIGDRIVER dig, afxInt32 pipeline_stage, HPROVIDER provider);

DLLEXPORT HPROVIDER WINAPI AIL_digital_driver_processor(HDIGDRIVER dig, afxInt32 pipeline_stage);

DLLEXPORT void WINAPI AIL_set_digital_master_volume_level(HDIGDRIVER dig, afxReal32 master_volume);

DLLEXPORT afxReal32 WINAPI AIL_digital_master_volume_level(HDIGDRIVER dig);

DLLEXPORT void WINAPI AIL_set_digital_master_reverb(HDIGDRIVER dig, afxReal32 reverb_decay_time, afxReal32 reverb_predelay, afxReal32 reverb_damping);

DLLEXPORT void WINAPI AIL_digital_master_reverb(HDIGDRIVER dig, afxReal32* reverb_time, afxReal32* reverb_predelay, afxReal32* reverb_damping);

DLLEXPORT void WINAPI AIL_set_digital_master_reverb_levels(HDIGDRIVER dig, afxReal32 dry_level, afxReal32 wet_level);

DLLEXPORT void WINAPI AIL_digital_master_reverb_levels(HDIGDRIVER dig, afxReal32* dry_level, afxReal32* wet_level);

// low-level digital services

DLLEXPORT afxInt32 WINAPI AIL_minimum_sample_buffer_size(HDIGDRIVER dig, afxInt32 playback_rate, afxInt32 format);

DLLEXPORT afxInt32 WINAPI AIL_active_sample_count(HDIGDRIVER dig);

DLLEXPORT void WINAPI AIL_digital_configuration(HDIGDRIVER dig, afxInt32* rate, afxInt32* format, afxChar* string);

DLLEXPORT afxInt32 WINAPI AIL_set_DirectSound_HWND(HDIGDRIVER dig, HWND wnd);

// Auxiliary 2D interface calls

DLLEXPORT HDIGDRIVER WINAPI AIL_primary_digital_driver(HDIGDRIVER new_primary);

// 3D-related calls

DLLEXPORT afxInt32 WINAPI AIL_room_type(HDIGDRIVER dig);

DLLEXPORT void WINAPI AIL_set_room_type(HDIGDRIVER dig, afxInt32 room_type);

DLLEXPORT afxReal32 WINAPI AIL_3D_rolloff_factor(HDIGDRIVER dig);

DLLEXPORT void WINAPI AIL_set_3D_rolloff_factor(HDIGDRIVER dig, afxReal32 factor);

DLLEXPORT afxReal32 WINAPI AIL_3D_doppler_factor(HDIGDRIVER dig);

DLLEXPORT void WINAPI AIL_set_3D_doppler_factor(HDIGDRIVER dig, afxReal32 factor);

DLLEXPORT afxReal32 WINAPI AIL_3D_distance_factor(HDIGDRIVER dig);

DLLEXPORT void WINAPI AIL_set_3D_distance_factor(HDIGDRIVER dig, afxReal32 factor);

DLLEXPORT void WINAPI AIL_set_listener_3D_position(HDIGDRIVER dig, afxReal32 X, afxReal32 Y, afxReal32 Z);

DLLEXPORT void WINAPI AIL_set_listener_3D_velocity(HDIGDRIVER dig, afxReal32 dX_per_ms, afxReal32 dY_per_ms, afxReal32 dZ_per_ms, afxReal32 magnitude);

DLLEXPORT void WINAPI AIL_set_listener_3D_velocity_vector(HDIGDRIVER dig, afxReal32 dX_per_ms, afxReal32 dY_per_ms, afxReal32 dZ_per_ms);

DLLEXPORT void WINAPI AIL_set_listener_3D_orientation(HDIGDRIVER dig, afxReal32 X_face, afxReal32 Y_face, afxReal32 Z_face, afxReal32 X_up, afxReal32 Y_up, afxReal32 Z_up);

DLLEXPORT void WINAPI AIL_listener_3D_position(HDIGDRIVER  dig, afxReal32* X, afxReal32* Y, afxReal32* Z);

DLLEXPORT void WINAPI AIL_listener_3D_velocity(HDIGDRIVER  dig, afxReal32* dX_per_ms, afxReal32* dY_per_ms, afxReal32* dZ_per_ms);

DLLEXPORT void WINAPI AIL_listener_3D_orientation(HDIGDRIVER  dig, afxReal32* X_face, afxReal32* Y_face, afxReal32* Z_face, afxReal32* X_up, afxReal32* Y_up, afxReal32* Z_up);

DLLEXPORT void WINAPI AIL_update_listener_3D_position(HDIGDRIVER dig, afxReal32 dt_milliseconds);
