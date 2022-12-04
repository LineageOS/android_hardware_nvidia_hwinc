/*
 * Copyright (c) 2020-2022, NVIDIA CORPORATION.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *  * Neither the name of NVIDIA CORPORATION nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef TCU_PRIV_H
#define TCU_PRIV_H

#include <stdint.h>

#define rtos_task_define_s(_t_, _fn_, _name_, _prio_, _params_,_stack_depth_) \
    static const rtosTaskParameters _t_##_params = \
    {                                              \
        .pvTaskCode         = & _fn_,              \
        .pcTaskName         = _name_,              \
        .uxPriority         = _prio_,              \
        .pvParameters       = _params_,            \
        .uxStackDepthBytes  = _stack_depth_        \
    }

#define TCU_ID_CCPLEX           (0U)
#define TCU_ID_SCE              (1U)
#define TCU_ID_TZ               (2U)
#define TCU_ID_BPMP             (3U)
#define TCU_ID_RCE              (4U)
#define TCU_ID_FSI              (5U)
#define TCU_ID_PSC              (6U)
#define TCU_ID_DCE              (7U)

#define TCU_TAG_MIN             (0xe1U)
#define TCU_TAG_CCPLEX          (0xe1U)
#define TCU_TAG_BPMP            (0xe2U)
#define TCU_TAG_SCE             (0xe3U)
#define TCU_TAG_TZ              (0xe4U)
#define TCU_TAG_RCE             (0xe5U)
#define TCU_TAG_FSI             (0xe6U)
#define TCU_TAG_PSC             (0xe7U)
#define TCU_TAG_DCE             (0xe8U)
#define TCU_TAG_MAX             (0xe8U)

#define SPE_NUM_MSGS            (16UL)
#define SPE_MSG_SIZE            (128UL)
#define EXT_CLIENT_MSG_SIZE     (256UL)
#define EXT_CLIENT_RX_BUF_SIZE  (256UL)

#endif
