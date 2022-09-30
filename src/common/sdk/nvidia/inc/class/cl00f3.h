/*
 * SPDX-FileCopyrightText: Copyright (c) 2018-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

#include "nvtypes.h"

/*
 * Class definition for creating a memory descriptor from a FLA range in RmAllocMemory.
 * No memory is allocated, only a memory descriptor and memory object is created
 * for later use in other calls. These classes are used by clients who tries to
 * import the memory exported by other GPU(s)/FAM/process. The range, size and
 * other parameters are passed as Nv01MemoryFla structure.
 */

#ifndef _cl00f3_h_
#define _cl00f3_h_

#ifdef __cplusplus
extern "C" {
#endif

#define NV01_MEMORY_FLA                                          (0x000000f3)

/*
 * Structure of NV_FLA_MEMORY_ALLOCATION_PARAMS
 *
 *
 */
typedef struct {
        NvU32    type;           /* FBMEM: NVOS32_TYPE_* */
        NvU32    flags;          /* FBMEM: NVOS32_ALLOC_FLAGS_* */
        NvU32    attr;           /* FBMEM: NVOS32_ATTR_* */
        NvU32    attr2;          /* FBMEM: NVOS32_ATTR2_* */
        NvU64    base;           /* base of FLA range */
        NvU64    align;          /* alignment for FLA range*/
        NvU64    limit NV_ALIGN_BYTES(8);
        //
        // For Direct connected systems, clients need to program this hSubDevice with
        // the exporting GPU, for RM to route the traffic to the destination GPU
        // Clients need not program this for NvSwitch connected systems
        //
        NvHandle hExportSubdevice; /* hSubdevice of the exporting GPU */
        //
        // Instead of base and limit, clients can also pass the FLA handle (or hExportHandle)
        // being exported from destination side to import on the access side
        //
        NvHandle hExportHandle;  /* FLA handle being exported or Export handle */
        // The RM client used to export memory
        NvHandle hExportClient;
        NvU32    flagsOs02;
} NV_FLA_MEMORY_ALLOCATION_PARAMS;

#ifdef __cplusplus
};     /* extern "C" */
#endif
#endif // _cl00f3_h

