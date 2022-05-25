/*
 * Copyright (c) 2018-2021, NVIDIA CORPORATION. All rights reserved.
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

#ifndef _SPE_CLK_H_
#define _SPE_CLK_H_

#include <stdint.h>

#define AON_CPU_MAX_RATE 408000
#define AON_APB_MAX_RATE 200000

#define CAR_REG(x)              (NV_ADDRESS_MAP_CAR_BASE + CLK_RST_CONTROLLER_##x##_0)
#define CLKEN_REG(reg)          CAR_REG(CLK_OUT_ENB_##reg)
#define CAR_FIELD(reg, field)   CLK_RST_CONTROLLER_##reg##_0_##field##_FIELD
#define CAR_SHIFT(reg, field)   CLK_RST_CONTROLLER_##reg##_0_##field##_SHIFT

#define CAR_DRF_NUM(r, f, n)    NV_DRF_NUM(CLK_RST_CONTROLLER, r, f, n)
#define CAR_DRF_DEF(r, f, c)    NV_DRF_DEF(CLK_RST_CONTROLLER, r, f, c)
#define CAR_DRF_VAL(r, f, v)    NV_DRF_VAL(CLK_RST_CONTROLLER, r, f, v)
#define CAR_DRF_MASK(r, f)      NV_DRF_MASK(CLK_RST_CONTROLLER, r, f)

#define CAR_FLD_SET_DRF_DEF(r, f, c, v)     NV_FLD_SET_DRF_DEF(CLK_RST_CONTROLLER, r, f, c, v)
#define CAR_FLD_SET_DRF_NUM(r, f, n, v)     NV_FLD_SET_DRF_NUM(CLK_RST_CONTROLLER, r, f, n, v)

#define CLK_SRC(clk)            CAR_REG(CLK_SOURCE_##clk)
#define CLK_SRC_IDX(reg, src)   CLK_RST_CONTROLLER_CLK_SOURCE_##reg##_0_##reg##_CLK_SRC_##src

#define CLK_SRC_PLLAON 0
#define CLK_SRC_PLLP 1
#define CLK_SRC_OSC_UNDIV 2
#define CLK_SRC_CLK_S 3
#define CLK_SRC_MAX 4

#define CLK_ID_AON_CPU_NIC_ACTIVE           0
#define CLK_ID_AON_CPU_NIC_ACTIVE_IRQFIQ    1
#define CLK_ID_AON_CPU_NIC_IDLE_SHALLOW     2
#define CLK_ID_AON_CPU_NIC_IDLE_DEEP        3
#define CLK_ID_AON_CPU_NIC_STBY_SHALLOW     4
#define CLK_ID_AON_CPU_NIC_STBY_DEEP        5
#define CLK_ID_AON_CPU_NIC_DORMANT_SHALLOW  6
#define CLK_ID_AON_CPU_NIC_DORMANT_DEEP     7
#define CLK_ID_AON_APB_ACTIVE               8
#define CLK_ID_AON_APB_ACTIVE_IRQFIQ        9
#define CLK_ID_AON_APB_IDLE_SHALLOW         10
#define CLK_ID_AON_APB_IDLE_DEEP            11
#define CLK_ID_AON_APB_STBY_SHALLOW         12
#define CLK_ID_AON_APB_STBY_DEEP            13
#define CLK_ID_AON_APB_DORMANT_SHALLOW      14
#define CLK_ID_AON_APB_DORMANT_DEEP         15
#define CLK_ID_AON_CPU_NIC                  16
#define CLK_ID_AON_APB                      17
#define CLK_ID_MAX                          18

void spe_clk_init(void);
int spe_clk_set_clk_freq(int clk_id, int clk_src, uint32_t freq_khz);
int spe_clk_set_clk_no_div(int clk_id, int clk_src);
void spe_clk_trigger_switch_fsm(void);

void spe_clk_setup_cpu_nic(uint32_t clk_src);
void spe_clk_setup_apb(uint32_t clk_src);

void disable_pllaon(void);
void enable_pllaon(void);

void set_pllaon_state(bool enable);
bool is_pllaon_enabled(void);

#endif
