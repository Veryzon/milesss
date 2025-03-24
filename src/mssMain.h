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

#include "mssDefs.h"

typedef afxUnit32 HPROVIDER;
typedef struct _DIG_DRIVER* HDIGDRIVER;
typedef struct _SAMPLE* HSAMPLE;
typedef struct _STREAM* HSTREAM;

struct _DIG_DRIVER
{
    afxMixContext mix;
};

struct _SAMPLE
{
    HDIGDRIVER dd;

};

struct _STREAM
{
    HDIGDRIVER dd;

};

DLLEXPORT afxBool32 WINAPI AIL_startup(void);

DLLEXPORT void WINAPI AIL_shutdown(void);

DLLEXPORT afxInt32 WINAPI AIL_get_preference(afxUnit32 number);

DLLEXPORT afxInt32 WINAPI AIL_set_preference(afxUnit32 number, afxInt32 value);

DLLEXPORT char* WINAPI AIL_last_error(void);

DLLEXPORT void WINAPI AIL_set_error(afxChar const* error_msg);

DLLEXPORT char* WINAPI AIL_set_redist_directory(afxChar const* dir);

DLLEXPORT afxInt32 WINAPI AIL_background_CPU_percent(void);

DLLEXPORT afxInt32 WINAPI AIL_platform_property(void* object, afxInt32 property, void* before_value, void const* new_value, void* after_value);

afxInt32 WINAPI MilesEnqueueEvent(afxInt32 ArgList, afxInt32 /*bufSrc*/a2, afxInt32 /*bufSiz*/ a3, afxFlags a4, afxInt32 /*filter*/ a5, afxInt32 /*filter*/a6);

// flag test 1 used to ignore bufSiz in favor of a fixed 4-byte size.
// flag test 2 used to free lock in ArgList
// flag test 4 used to 
// flag test 8 used to 

afxUnit32 __stdcall MilesStopSoundInstances(afxInt32 a1, afxInt32 /*filter*/ a2, afxInt32 /*filter*/ a3);

afxUnit32 __stdcall MilesPauseSoundInstances(afxInt32 a1, afxInt32 /*filter*/ a2, afxInt32 /*filter*/ a3);

afxUnit32 __stdcall MilesResumeSoundInstances(afxInt32 a1, afxInt32 /*filter*/ a2, afxInt32 /*filter*/ a3);

afxUnit32 __stdcall MilesStartSoundInstance(afxInt32 a1, const afxChar *a2, afxChar a3, afxChar a4, afxInt32 a5, afxInt32 /*bufSrc*/ a6, afxInt32 /*bufSiz*/ a7, afxChar /*flags*/ a8);

// start? = 0
// pause = 1
// resume = 2
// stop = 3
