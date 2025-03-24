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

typedef void (WINAPI* AILSTREAMCB)(HSTREAM stream);

DLLEXPORT HSTREAM WINAPI AIL_open_stream(HDIGDRIVER dig, afxChar const  * filename, afxInt32 stream_mem);

DLLEXPORT void WINAPI AIL_close_stream(HSTREAM stream);

DLLEXPORT HSAMPLE  WINAPI AIL_stream_sample_handle(HSTREAM stream);

DLLEXPORT afxInt32 WINAPI AIL_service_stream(HSTREAM stream, afxInt32 fillup);

DLLEXPORT void WINAPI AIL_start_stream(HSTREAM stream);

DLLEXPORT void WINAPI AIL_pause_stream(HSTREAM stream, afxInt32 onoff);

DLLEXPORT afxInt32 WINAPI AIL_stream_loop_count(HSTREAM stream);

DLLEXPORT void WINAPI AIL_set_stream_loop_count(HSTREAM stream, afxInt32 count);

DLLEXPORT void WINAPI AIL_set_stream_loop_block(HSTREAM S, afxInt32 loop_start_offset, afxInt32 loop_end_offset);

DLLEXPORT afxInt32 WINAPI AIL_stream_status(HSTREAM stream);

DLLEXPORT void WINAPI AIL_set_stream_position(HSTREAM stream, afxInt32 offset);

DLLEXPORT afxInt32 WINAPI AIL_stream_position(HSTREAM stream);

DLLEXPORT void WINAPI AIL_stream_info(HSTREAM stream, afxInt32* datarate, afxInt32* sndtype, afxInt32* length, afxInt32* memory);

DLLEXPORT AILSTREAMCB WINAPI AIL_register_stream_callback(HSTREAM stream, AILSTREAMCB callback);

DLLEXPORT void WINAPI AIL_auto_service_stream(HSTREAM stream, afxInt32 onoff);

DLLEXPORT void WINAPI AIL_set_stream_user_data(HSTREAM S, afxUnit32 index, afxInt32 value);

DLLEXPORT afxInt32 WINAPI AIL_stream_user_data(HSTREAM S, afxUnit32 index);

DLLEXPORT void WINAPI AIL_set_stream_ms_position(HSTREAM S, afxInt32 milliseconds);

DLLEXPORT void WINAPI AIL_stream_ms_position(HSTREAM S, afxInt32* total_milliseconds, afxInt32* current_milliseconds);
