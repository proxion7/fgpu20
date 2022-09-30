/*
 * SPDX-FileCopyrightText: Copyright (c) 2003-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the Software),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __lr10_dev_sourcetrack_ip_h__
#define __lr10_dev_sourcetrack_ip_h__
/* This file is autogenerated.  Do not edit */
#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_ADDRESS 0x000064a8 /* R--4R */
#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_ADDRESS_ERROR_ADDRESS 9:0 /* R-DVF */
#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_ADDRESS_ERROR_ADDRESS_INIT 0x00000000 /* R-D-V */

#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_ADDRESS_VALID 0x000064ac /* R--4R */
#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_ADDRESS_VALID_VALID 0:0 /* R-DVF */
#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_ADDRESS_VALID_VALID_INVALID 0x00000000 /* R-D-V */
#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_ADDRESS_VALID_VALID_VALID 0x00000001 /* R---V */

#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_ADDRESS 0x00006488 /* R--4R */
#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_ADDRESS_ERROR_ADDRESS 9:0 /* R-DVF */
#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_ADDRESS_ERROR_ADDRESS_INIT 0x00000000 /* R-D-V */

#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_ADDRESS_VALID 0x0000648c /* R--4R */
#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_ADDRESS_VALID_VALID 0:0 /* R-DVF */
#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_ADDRESS_VALID_VALID_INVALID 0x00000000 /* R-D-V */
#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_ADDRESS_VALID_VALID_VALID 0x00000001 /* R---V */

#define NV_SOURCETRACK_ERR_CREQ_TCEN0_TD_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT 0x00006494 /* RW-4R */
#define NV_SOURCETRACK_ERR_CREQ_TCEN0_TD_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT_ERROR_LIMIT 23:0 /* RWDVF */
#define NV_SOURCETRACK_ERR_CREQ_TCEN0_TD_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT_ERROR_LIMIT_INIT 0x00ffffff /* RWD-V */
#define NV_SOURCETRACK_ERR_CREQ_TCEN0_TD_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT_ERROR_LIMIT__PROD 0x007fffff /* RW--V */

#define NV_SOURCETRACK_ERR_LOG_EN_0                        0x00006404      /* RW-4R */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR 0:0 /* RWEVF */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR 5:5 /* RWEVF */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR 7:7 /* RWEVF */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR 8:8  /* RWEVF */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR 13:13 /* RWEVF */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR 15:15 /* RWEVF */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_SOURCETRACK_TIME_OUT_ERR 28:28         /* RWEVF */
#define NV_SOURCETRACK_ERR_LOG_EN_0_SOURCETRACK_TIME_OUT_ERR__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_SOURCETRACK_TIME_OUT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_LOG_EN_0_SOURCETRACK_TIME_OUT_ERR_ENABLE 0x00000001 /* RW--V */

#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0         0x00006410      /* RW-4R */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR 0:0 /* RWEVF */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR 5:5 /* RWEVF */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR 7:7 /* RWEVF */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR 8:8 /* RWEVF */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR 13:13 /* RWEVF */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR 15:15 /* RWEVF */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_SOURCETRACK_TIME_OUT_ERR 28:28 /* RWEVF */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_SOURCETRACK_TIME_OUT_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_SOURCETRACK_TIME_OUT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CORRECTABLE_REPORT_EN_0_SOURCETRACK_TIME_OUT_ERR_ENABLE 0x00000001 /* RW--V */

#define NV_SOURCETRACK_ERR_CONTAIN_EN_0                    0x00006414      /* RW-4R */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR 0:0 /* RWEVF */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR 5:5 /* RWEVF */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR 7:7 /* RWEVF */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR 8:8 /* RWEVF */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR 13:13 /* RWEVF */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR 15:15 /* RWEVF */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_SOURCETRACK_TIME_OUT_ERR 28:28     /* RWEVF */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_SOURCETRACK_TIME_OUT_ERR__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_SOURCETRACK_TIME_OUT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_CONTAIN_EN_0_SOURCETRACK_TIME_OUT_ERR_ENABLE 0x00000001 /* RW--V */

#define NV_SOURCETRACK_ERR_STATUS_0                        0x00006400      /* RW-4R */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR 0:0 /* RWDVF */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR 5:5 /* RWDVF */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR 7:7 /* RWDVF */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR 8:8  /* RWDVF */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR 13:13 /* RWDVF */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR 15:15 /* RWDVF */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_STATUS_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_STATUS_0_SOURCETRACK_TIME_OUT_ERR 28:28         /* RWDVF */
#define NV_SOURCETRACK_ERR_STATUS_0_SOURCETRACK_TIME_OUT_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_STATUS_0_SOURCETRACK_TIME_OUT_ERR_CLEAR 0x00000001 /* RW--V */

#define NV_SOURCETRACK_ERR_FIRST_0                         0x0000641c      /* RW-4R */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR 0:0 /* RWDVF */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR 5:5 /* RWDVF */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR 7:7 /* RWDVF */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR 8:8   /* RWDVF */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR 13:13 /* RWDVF */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR 15:15 /* RWDVF */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_FIRST_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_CLEAR 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FIRST_0_SOURCETRACK_TIME_OUT_ERR 28:28          /* RWDVF */
#define NV_SOURCETRACK_ERR_FIRST_0_SOURCETRACK_TIME_OUT_ERR_NONE 0x00000000 /* RWD-V */
#define NV_SOURCETRACK_ERR_FIRST_0_SOURCETRACK_TIME_OUT_ERR_CLEAR 0x00000001 /* RW--V */

#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_COUNTER 0x00006480 /* RW-4R */
#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_COUNTER_ERROR_COUNT 23:0 /* RWDVF */
#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_COUNTER_ERROR_COUNT_INIT 0x00000000 /* RWD-V */

#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT 0x00006484 /* RW-4R */
#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT_ERROR_LIMIT 23:0 /* RWDVF */
#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT_ERROR_LIMIT_INIT 0x00ffffff /* RWD-V */
#define NV_SOURCETRACK_ERR_CREQ_TCEN0_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT_ERROR_LIMIT__PROD 0x007fffff /* RW--V */

#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_COUNTER 0x000064a0 /* RW-4R */
#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_COUNTER_ERROR_COUNT 23:0 /* RWDVF */
#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_COUNTER_ERROR_COUNT_INIT 0x00000000 /* RWD-V */

#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT 0x000064a4 /* RW-4R */
#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT_ERROR_LIMIT 23:0 /* RWDVF */
#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT_ERROR_LIMIT_INIT 0x00ffffff /* RWD-V */
#define NV_SOURCETRACK_ERR_CREQ_TCEN1_CRUMBSTORE_ECC_ERROR_COUNTER_LIMIT_ERROR_LIMIT__PROD 0x007fffff /* RW--V */

#define NV_SOURCETRACK_ERR_ECC_CTRL                        0x00006470      /* RW-4R */
#define NV_SOURCETRACK_ERR_ECC_CTRL_CREQ_TCEN0_CRUMBSTORE_ECC_ENABLE 0:0   /* RWEVF */
#define NV_SOURCETRACK_ERR_ECC_CTRL_CREQ_TCEN0_CRUMBSTORE_ECC_ENABLE_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_ECC_CTRL_CREQ_TCEN0_CRUMBSTORE_ECC_ENABLE_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_ECC_CTRL_CREQ_TCEN0_CRUMBSTORE_ECC_ENABLE__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_ECC_CTRL_CREQ_TCEN0_TD_CRUMBSTORE_ECC_ENABLE 5:5 /* RWEVF */
#define NV_SOURCETRACK_ERR_ECC_CTRL_CREQ_TCEN0_TD_CRUMBSTORE_ECC_ENABLE_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_ECC_CTRL_CREQ_TCEN0_TD_CRUMBSTORE_ECC_ENABLE_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_ECC_CTRL_CREQ_TCEN0_TD_CRUMBSTORE_ECC_ENABLE__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_ECC_CTRL_CREQ_TCEN1_CRUMBSTORE_ECC_ENABLE 7:7   /* RWEVF */
#define NV_SOURCETRACK_ERR_ECC_CTRL_CREQ_TCEN1_CRUMBSTORE_ECC_ENABLE_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_ECC_CTRL_CREQ_TCEN1_CRUMBSTORE_ECC_ENABLE_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_ECC_CTRL_CREQ_TCEN1_CRUMBSTORE_ECC_ENABLE__PROD 0x00000001 /* RW--V */

#define NV_SOURCETRACK_CTRL                                0x00006040      /* RW-4R */
#define NV_SOURCETRACK_CTRL_COL_RSP_DIS                    0:0             /* RWEVF */
#define NV_SOURCETRACK_CTRL_COL_RSP_DIS_OFF                0x00000000      /* RWE-V */
#define NV_SOURCETRACK_CTRL_COL_RSP_DIS_ON                 0x00000001      /* RW--V */
#define NV_SOURCETRACK_CTRL_STO_ENB                        9:9             /* RWEVF */
#define NV_SOURCETRACK_CTRL_STO_ENB_ON                     0x00000001      /* RWE-V */
#define NV_SOURCETRACK_CTRL_STO_ENB_OFF                    0x00000000      /* RW--V */

#define NV_SOURCETRACK_MULTISEC_TIMER0                     0x00006044      /* RW-4R */
#define NV_SOURCETRACK_MULTISEC_TIMER0_TIMERVAL0           19:0            /* RWEVF */
#define NV_SOURCETRACK_MULTISEC_TIMER0_TIMERVAL0_INIT      0x00002710      /* RWE-V */
#define NV_SOURCETRACK_MULTISEC_TIMER0_TIMERVAL0__PROD     0x00004000      /* RW--V */

#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0               0x00006408      /* RW-4R */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR 0:0 /* RWEVF */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR 5:5 /* RWEVF */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR 7:7 /* RWEVF */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR 8:8 /* RWEVF */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR 13:13 /* RWEVF */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR 15:15 /* RWEVF */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_SOURCETRACK_TIME_OUT_ERR 28:28 /* RWEVF */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_SOURCETRACK_TIME_OUT_ERR__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_SOURCETRACK_TIME_OUT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_FATAL_REPORT_EN_0_SOURCETRACK_TIME_OUT_ERR_ENABLE 0x00000001 /* RW--V */

#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0           0x0000640c      /* RW-4R */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR 0:0 /* RWEVF */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR 5:5 /* RWEVF */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR 7:7 /* RWEVF */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR__PROD 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_LIMIT_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR 8:8 /* RWEVF */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR 13:13 /* RWEVF */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN0_TD_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR 15:15 /* RWEVF */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_CREQ_TCEN1_CRUMBSTORE_ECC_DBE_ERR_ENABLE 0x00000001 /* RW--V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_SOURCETRACK_TIME_OUT_ERR 28:28 /* RWEVF */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_SOURCETRACK_TIME_OUT_ERR__PROD 0x00000000 /* RW--V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_SOURCETRACK_TIME_OUT_ERR_DISABLE 0x00000000 /* RWE-V */
#define NV_SOURCETRACK_ERR_NON_FATAL_REPORT_EN_0_SOURCETRACK_TIME_OUT_ERR_ENABLE 0x00000001 /* RW--V */
#endif // __lr10_dev_sourcetrack_ip_h__
