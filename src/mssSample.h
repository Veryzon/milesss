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

typedef void (WINAPI* AILSAMPLECB)(HSAMPLE sample);
typedef afxReal32(WINAPI* AILFALLOFFCB)(HSAMPLE sample, afxReal32 distance, afxReal32 rolloff_factor, afxReal32 min_dist, afxReal32 max_dist);

typedef void * LPVOID;
typedef LPVOID AILLPDIRECTSOUND;
typedef LPVOID AILLPDIRECTSOUNDBUFFER;

typedef struct _mssSoundInfo
{
  afxInt32 format;
  void const* data_ptr;
  afxUnit32 data_len;
  afxUnit32 rate;
  afxInt32 bits;
  afxInt32 channels;
  afxUnit32 channel_mask;
  afxUnit32 samples;
  afxUnit32 block_size;
  void const* initial_ptr;
} mssSoundInfo;

DLLEXPORT HSAMPLE WINAPI AIL_allocate_sample_handle(HDIGDRIVER dig);

DLLEXPORT void WINAPI AIL_release_sample_handle(HSAMPLE S);

DLLEXPORT afxInt32 WINAPI AIL_init_sample(HSAMPLE S, afxInt32 format, afxUnit32 flags);

DLLEXPORT afxInt32 WINAPI AIL_set_sample_file(HSAMPLE S, void const* file_image, afxInt32 block);

DLLEXPORT afxInt32 WINAPI AIL_set_sample_info(HSAMPLE S, mssSoundInfo const* info);

DLLEXPORT afxInt32 WINAPI AIL_set_named_sample_file(HSAMPLE S, afxChar const* file_type_suffix, void const* file_image, afxUnit32 file_size, afxInt32 block);

DLLEXPORT HPROVIDER WINAPI AIL_set_sample_processor(HSAMPLE S, afxInt32 pipeline_stage, HPROVIDER provider);

DLLEXPORT HPROVIDER WINAPI AIL_sample_processor(HSAMPLE S, afxInt32 pipeline_stage);

DLLEXPORT void WINAPI AIL_set_sample_adpcm_block_size(HSAMPLE S, afxUnit32 blocksize);

DLLEXPORT void WINAPI AIL_set_sample_address(HSAMPLE S, void const* start, afxUnit32 len);

DLLEXPORT void WINAPI AIL_start_sample(HSAMPLE S);

DLLEXPORT void WINAPI AIL_stop_sample(HSAMPLE S);

DLLEXPORT void WINAPI AIL_resume_sample(HSAMPLE S);

DLLEXPORT void WINAPI AIL_end_sample(HSAMPLE S);

DLLEXPORT void WINAPI AIL_set_sample_playback_rate(HSAMPLE S, afxInt32 playback_rate);

DLLEXPORT void WINAPI AIL_set_sample_volume_pan(HSAMPLE S, afxReal32 volume, afxReal32 pan);

DLLEXPORT void WINAPI AIL_set_sample_volume_levels(HSAMPLE S, afxReal32 left_level, afxReal32 right_level);

DLLEXPORT void WINAPI AIL_set_sample_channel_levels(HSAMPLE S, afxInt32 const* source_speaker_indexes, afxInt32 const* dest_speaker_indexes, afxReal32 const* levels, afxInt32 n_levels);

DLLEXPORT void WINAPI AIL_set_sample_reverb_levels(HSAMPLE S, afxReal32 dry_level, afxReal32 wet_level);

DLLEXPORT void WINAPI AIL_set_sample_low_pass_cut_off(HSAMPLE S, afxReal32 cut_off);

DLLEXPORT void WINAPI AIL_set_sample_loop_count(HSAMPLE S, afxInt32 loop_count);

DLLEXPORT void WINAPI AIL_set_sample_loop_block(HSAMPLE S, afxInt32 loop_start_offset, afxInt32 loop_end_offset);

DLLEXPORT afxInt32 WINAPI AIL_sample_loop_block(HSAMPLE S, afxInt32* loop_start_offset, afxInt32* loop_end_offset);

DLLEXPORT afxUnit32 WINAPI AIL_sample_status(HSAMPLE S);

DLLEXPORT afxInt32 WINAPI AIL_sample_playback_rate(HSAMPLE S);

DLLEXPORT void WINAPI AIL_sample_volume_pan(HSAMPLE S, afxReal32* volume, afxReal32* pan);

DLLEXPORT afxInt32 WINAPI AIL_sample_channel_count(HSAMPLE S, afxUnit32* mask);

DLLEXPORT void WINAPI AIL_sample_channel_levels(HSAMPLE S, afxInt32 const* source_speaker_indexes, afxInt32 const* dest_speaker_indexes, afxReal32* levels, afxInt32 n_levels);

DLLEXPORT void WINAPI AIL_sample_volume_levels(HSAMPLE S, afxReal32* left_level, afxReal32* right_level);

DLLEXPORT void WINAPI AIL_sample_reverb_levels(HSAMPLE S, afxReal32* dry_level, afxReal32* wet_level);

DLLEXPORT void WINAPI AIL_sample_output_levels(HSAMPLE S, afxInt32 const *source_speaker_indexes, afxInt32 const *dest_speaker_indexes, afxReal32* levels, afxInt32 n_levels);

DLLEXPORT afxReal32 WINAPI AIL_sample_low_pass_cut_off(HSAMPLE S);

DLLEXPORT afxInt32 WINAPI AIL_sample_loop_count(HSAMPLE S);

DLLEXPORT void WINAPI AIL_set_sample_51_volume_pan(HSAMPLE S, afxReal32 volume, afxReal32 pan, afxReal32 fb_pan, afxReal32 center_level, afxReal32 sub_level);

DLLEXPORT void WINAPI AIL_sample_51_volume_pan(HSAMPLE S, afxReal32* volume, afxReal32* pan, afxReal32* fb_pan, afxReal32* center_level, afxReal32* sub_level);

DLLEXPORT void WINAPI AIL_set_sample_51_volume_levels(HSAMPLE S, afxReal32 f_left_level, afxReal32 f_right_level, afxReal32 b_left_level, afxReal32 b_right_level, afxReal32 center_level, afxReal32 sub_level);

DLLEXPORT void WINAPI AIL_sample_51_volume_levels(HSAMPLE S, afxReal32* f_left_level, afxReal32* f_right_level, afxReal32* b_left_level, afxReal32* b_right_level, afxReal32* center_level, afxReal32* sub_level);

DLLEXPORT afxInt32 WINAPI AIL_set_sample_buffer_count(HSAMPLE S, afxInt32 n_buffers);

DLLEXPORT afxInt32 WINAPI AIL_sample_buffer_count(HSAMPLE S);

DLLEXPORT afxInt32 WINAPI AIL_sample_buffer_available(HSAMPLE S);

DLLEXPORT afxInt32 WINAPI AIL_load_sample_buffer(HSAMPLE S, afxInt32 buff_num, void const* buffer, afxUnit32 len);

DLLEXPORT void WINAPI AIL_request_EOB_ASI_reset(HSAMPLE S, afxUnit32 buff_num, afxInt32 new_stream_position);

DLLEXPORT afxInt32 WINAPI AIL_sample_buffer_info(HSAMPLE S, afxInt32 buff_num, afxUnit32* pos, afxUnit32* len, afxInt32* head, afxInt32* tail);

DLLEXPORT afxUnit32 WINAPI AIL_sample_granularity(HSAMPLE S);

DLLEXPORT void WINAPI AIL_set_sample_position(HSAMPLE S, afxUnit32 pos);

DLLEXPORT afxUnit32 WINAPI AIL_sample_position(HSAMPLE S);

DLLEXPORT AILSAMPLECB WINAPI AIL_register_SOB_callback(HSAMPLE S, AILSAMPLECB SOB);

DLLEXPORT AILSAMPLECB WINAPI AIL_register_EOB_callback(HSAMPLE S, AILSAMPLECB EOB);

DLLEXPORT AILSAMPLECB WINAPI AIL_register_EOS_callback(HSAMPLE S, AILSAMPLECB EOS);

DLLEXPORT AILFALLOFFCB WINAPI AIL_register_falloff_function_callback(HSAMPLE S, AILFALLOFFCB falloff_cb);

DLLEXPORT void WINAPI AIL_set_sample_user_data(HSAMPLE S, afxUnit32 index, afxInt32 value);

DLLEXPORT afxInt32 WINAPI AIL_sample_user_data(HSAMPLE S, afxUnit32 index);

DLLEXPORT afxInt32 WINAPI AIL_set_direct_buffer_control(HSAMPLE S, afxUnit32 command);

DLLEXPORT void WINAPI AIL_get_DirectSound_info(HSAMPLE S, AILLPDIRECTSOUND* lplpDS, AILLPDIRECTSOUNDBUFFER* lplpDSB);

DLLEXPORT void WINAPI AIL_set_sample_ms_position(HSAMPLE S, afxInt32 milliseconds);

DLLEXPORT void WINAPI AIL_sample_ms_position(HSAMPLE S, afxInt32* total_milliseconds, afxInt32* current_milliseconds);

DLLEXPORT void WINAPI AIL_set_sample_obstruction(HSAMPLE S, afxReal32 obstruction);

DLLEXPORT void WINAPI AIL_set_sample_occlusion(HSAMPLE S, afxReal32 occlusion);

DLLEXPORT void WINAPI AIL_set_sample_exclusion(HSAMPLE S, afxReal32 exclusion);

DLLEXPORT afxReal32 WINAPI AIL_sample_obstruction(HSAMPLE S);

DLLEXPORT afxReal32 WINAPI AIL_sample_occlusion(HSAMPLE S);

DLLEXPORT afxReal32 WINAPI AIL_sample_exclusion(HSAMPLE S);

DLLEXPORT void WINAPI AIL_set_sample_3D_distances(HSAMPLE S, afxReal32 max_dist, afxReal32 min_dist, afxInt32 auto_3D_wet_atten);

DLLEXPORT void WINAPI AIL_sample_3D_distances(HSAMPLE S, afxReal32* max_dist, afxReal32* min_dist, afxInt32* auto_3D_wet_atten);

DLLEXPORT void WINAPI AIL_set_sample_3D_cone(HSAMPLE S, afxReal32 inner_angle, afxReal32 outer_angle, afxReal32 outer_volume_level);

DLLEXPORT void WINAPI AIL_sample_3D_cone(HSAMPLE S, afxReal32* inner_angle, afxReal32* outer_angle, afxReal32* outer_volume_level);

DLLEXPORT void WINAPI AIL_set_sample_3D_position(HSAMPLE obj, afxReal32 X, afxReal32 Y, afxReal32 Z);

DLLEXPORT void WINAPI AIL_set_sample_3D_velocity(HSAMPLE obj, afxReal32 dX_per_ms, afxReal32 dY_per_ms, afxReal32 dZ_per_ms, afxReal32 magnitude);

DLLEXPORT void WINAPI AIL_set_sample_3D_velocity_vector(HSAMPLE obj, afxReal32 dX_per_ms, afxReal32 dY_per_ms, afxReal32 dZ_per_ms);

DLLEXPORT void WINAPI AIL_set_sample_3D_orientation(HSAMPLE obj, afxReal32 X_face, afxReal32 Y_face, afxReal32 Z_face, afxReal32 X_up, afxReal32 Y_up, afxReal32 Z_up);

DLLEXPORT afxInt32 WINAPI AIL_sample_3D_position(HSAMPLE obj, afxReal32* X, afxReal32* Y, afxReal32* Z);

DLLEXPORT void WINAPI AIL_sample_3D_velocity(HSAMPLE obj, afxReal32* dX_per_ms, afxReal32* dY_per_ms, afxReal32* dZ_per_ms);

DLLEXPORT void WINAPI AIL_sample_3D_orientation(HSAMPLE obj, afxReal32* X_face, afxReal32* Y_face, afxReal32* Z_face, afxReal32* X_up, afxReal32* Y_up, afxReal32* Z_up);

DLLEXPORT void WINAPI AIL_update_sample_3D_position(HSAMPLE obj, afxReal32 dt_milliseconds);
