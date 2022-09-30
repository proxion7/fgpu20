/*
 * SPDX-FileCopyrightText: Copyright (c) 1993-2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef ENGINE_IDX_H
#define ENGINE_IDX_H

#include "utils/nvbitvector.h"

/***************************************************************************\
*                                                                           *
* Module: engine_idx.h
*       List of engines for use by INTR (and MC) modules.
*                                                                           *
\***************************************************************************/

//
// Engine bits for use by various MC HAL routines
//
#define MC_ENGINE_IDX_NULL                          0 // This must be 0
#define MC_ENGINE_IDX_TMR                           1
#define MC_ENGINE_IDX_DISP                          2
#define MC_ENGINE_IDX_FB                            3
#define MC_ENGINE_IDX_FIFO                          4
#define MC_ENGINE_IDX_VIDEO                         5
#define MC_ENGINE_IDX_MD                            6
#define MC_ENGINE_IDX_BUS                           7
// UNUSED
#define MC_ENGINE_IDX_PMGR                          9
#define MC_ENGINE_IDX_VP2                           10
#define MC_ENGINE_IDX_CIPHER                        11
#define MC_ENGINE_IDX_BIF                           12
#define MC_ENGINE_IDX_PPP                           13
#define MC_ENGINE_IDX_PRIVRING                      14
#define MC_ENGINE_IDX_PMU                           15
#define MC_ENGINE_IDX_CE0                           16
#define MC_ENGINE_IDX_CE1                           17
#define MC_ENGINE_IDX_CE2                           18
#define MC_ENGINE_IDX_CE3                           19
#define MC_ENGINE_IDX_CE4                           20
#define MC_ENGINE_IDX_CE5                           21
#define MC_ENGINE_IDX_CE6                           22
#define MC_ENGINE_IDX_CE7                           23
#define MC_ENGINE_IDX_CE8                           24
#define MC_ENGINE_IDX_CE9                           25
#define MC_ENGINE_IDX_VIC                           26
#define MC_ENGINE_IDX_ISOHUB                        27
#define MC_ENGINE_IDX_VGPU                          28
#define MC_ENGINE_IDX_MSENC                         29
#define MC_ENGINE_IDX_MSENC1                        30
#define MC_ENGINE_IDX_MSENC2                        31
#define MC_ENGINE_IDX_C2C                           32
// UNUSED
#define MC_ENGINE_IDX_LTC                           34
#define MC_ENGINE_IDX_FBHUB                         35
#define MC_ENGINE_IDX_HDACODEC                      36
#define MC_ENGINE_IDX_GMMU                          37
#define MC_ENGINE_IDX_SEC2                          38
#define MC_ENGINE_IDX_FSP                           39
#define MC_ENGINE_IDX_NVLINK                        40
#define MC_ENGINE_IDX_GSP                           41
#define MC_ENGINE_IDX_NVJPG                         42
#define MC_ENGINE_IDX_NVJPEG                        MC_ENGINE_IDX_NVJPG
#define MC_ENGINE_IDX_NVJPEG0                       MC_ENGINE_IDX_NVJPEG
#define MC_ENGINE_IDX_RESERVED43                    43
#define MC_ENGINE_IDX_RESERVED44                    44
#define MC_ENGINE_IDX_RESERVED45                    45
#define MC_ENGINE_IDX_RESERVED46                    46
#define MC_ENGINE_IDX_RESERVED47                    47
#define MC_ENGINE_IDX_RESERVED48                    48
#define MC_ENGINE_IDX_RESERVED49                    49
#define MC_ENGINE_IDX_REPLAYABLE_FAULT              50
#define MC_ENGINE_IDX_ACCESS_CNTR                   51
#define MC_ENGINE_IDX_NON_REPLAYABLE_FAULT          52
#define MC_ENGINE_IDX_REPLAYABLE_FAULT_ERROR        53
#define MC_ENGINE_IDX_NON_REPLAYABLE_FAULT_ERROR    54
#define MC_ENGINE_IDX_INFO_FAULT                    55
#define MC_ENGINE_IDX_BSP                           56
#define MC_ENGINE_IDX_NVDEC                         MC_ENGINE_IDX_BSP
#define MC_ENGINE_IDX_NVDEC0                        MC_ENGINE_IDX_NVDEC
#define MC_ENGINE_IDX_NVDEC1                        57
#define MC_ENGINE_IDX_NVDEC2                        58
#define MC_ENGINE_IDX_NVDEC3                        59
#define MC_ENGINE_IDX_NVDEC4                        60
#define MC_ENGINE_IDX_RESERVED61                    61
#define MC_ENGINE_IDX_RESERVED62                    62
#define MC_ENGINE_IDX_RESERVED63                    63
#define MC_ENGINE_IDX_CPU_DOORBELL                  64
#define MC_ENGINE_IDX_PRIV_DOORBELL                 65
#define MC_ENGINE_IDX_MMU_ECC_ERROR                 66
#define MC_ENGINE_IDX_BLG                           67
#define MC_ENGINE_IDX_PERFMON                       68
#define MC_ENGINE_IDX_BUF_RESET                     69
#define MC_ENGINE_IDX_XBAR                          70
#define MC_ENGINE_IDX_ZPW                           71
#define MC_ENGINE_IDX_OFA0                          72
#define MC_ENGINE_IDX_TEGRA                         73
#define MC_ENGINE_IDX_GR                            74
#define MC_ENGINE_IDX_GR0                           MC_ENGINE_IDX_GR
#define MC_ENGINE_IDX_GR1                           75
#define MC_ENGINE_IDX_GR2                           76
#define MC_ENGINE_IDX_GR3                           77
#define MC_ENGINE_IDX_GR4                           78
#define MC_ENGINE_IDX_GR5                           79
#define MC_ENGINE_IDX_GR6                           80
#define MC_ENGINE_IDX_GR7                           81
#define MC_ENGINE_IDX_ESCHED                        82
#define MC_ENGINE_IDX_ESCHED__SIZE                  64
#define MC_ENGINE_IDX_GR_FECS_LOG                   146
#define MC_ENGINE_IDX_GR0_FECS_LOG                  MC_ENGINE_IDX_GR_FECS_LOG
#define MC_ENGINE_IDX_GR1_FECS_LOG                  147
#define MC_ENGINE_IDX_GR2_FECS_LOG                  148
#define MC_ENGINE_IDX_GR3_FECS_LOG                  149
#define MC_ENGINE_IDX_GR4_FECS_LOG                  150
#define MC_ENGINE_IDX_GR5_FECS_LOG                  151
#define MC_ENGINE_IDX_GR6_FECS_LOG                  152
#define MC_ENGINE_IDX_GR7_FECS_LOG                  153
#define MC_ENGINE_IDX_TMR_SWRL                      154
#define MC_ENGINE_IDX_MAX                           155 // This must be kept as the max bit if
                                                        // we need to add more engines
#define MC_ENGINE_IDX_INVALID                0xFFFFFFFF

// Index GR reference
#define MC_ENGINE_IDX_GRn(x)            (MC_ENGINE_IDX_GR0 + (x))
#define MC_ENGINE_IDX_GRn_FECS_LOG(x)   (MC_ENGINE_IDX_GR0_FECS_LOG + (x))

// Index CE reference
#define MC_ENGINE_IDX_CE(x)             (MC_ENGINE_IDX_CE0 + (x))

// Index MSENC reference
#define MC_ENGINE_IDX_MSENCn(x)         (MC_ENGINE_IDX_MSENC + (x))

// Index NVDEC reference
#define MC_ENGINE_IDX_NVDECn(x)         (MC_ENGINE_IDX_NVDEC + (x))

// Index NVJPEG reference
#define MC_ENGINE_IDX_NVJPEGn(x)        (MC_ENGINE_IDX_NVJPEG + (x))

// Index ESCHED reference
#define MC_ENGINE_IDX_ESCHEDn(x)        (MC_ENGINE_IDX_ESCHED + (x))

MAKE_BITVECTOR(MC_ENGINE_BITVECTOR, MC_ENGINE_IDX_MAX);
typedef MC_ENGINE_BITVECTOR *PMC_ENGINE_BITVECTOR;

#endif // ENGINE_IDX_H
