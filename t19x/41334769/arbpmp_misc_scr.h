//
// Copyright (c) 2018 NVIDIA Corporation.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// Redistributions of source code must retain the above copyright notice,
// this list of conditions and the following disclaimer.
//
// Redistributions in binary form must reproduce the above copyright notice,
// this list of conditions and the following disclaimer in the documentation
// and/or other materials provided with the distribution.
//
// Neither the name of the NVIDIA Corporation nor the names of its contributors
// may be used to endorse or promote products derived from this software
// without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//

//
// DO NOT EDIT - generated by simspec!
//

#ifndef ___ARBPMP_MISC_SCR_H_INC_
#define ___ARBPMP_MISC_SCR_H_INC_
#define NV_MOBILE_ARBPMP_MISC_SCR_H_UNIT_OF_OFFSET 1B


// Register BPMP_MISC_SCR_SCR_SHARED_0
#define BPMP_MISC_SCR_SCR_SHARED_0                      _MK_ADDR_CONST(0x800)
#define BPMP_MISC_SCR_SCR_SHARED_0_SECURE                       0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_DUAL                         0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_SCR                  0
#define BPMP_MISC_SCR_SCR_SHARED_0_WORD_COUNT                   0x1
#define BPMP_MISC_SCR_SCR_SHARED_0_RESET_VAL                    _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_RESET_MASK                   _MK_MASK_CONST(0x3fffffff)
#define BPMP_MISC_SCR_SCR_SHARED_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_READ_MASK                    _MK_MASK_CONST(0x3fffffff)
#define BPMP_MISC_SCR_SCR_SHARED_0_WRITE_MASK                   _MK_MASK_CONST(0x3fffffff)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_LCK_SHIFT                        _MK_SHIFT_CONST(29)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_LCK_FIELD                        _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_SEC_LCK_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_LCK_RANGE                        29:29
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_LCK_WOFFSET                      0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_LCK_DEFAULT                      _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_LCK_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_LCK_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_LCK_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_LCK_PARITY_PROTECTION                    _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_LCK_PLATFORM_DEPENDENT                   _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_WEN_SHIFT                        _MK_SHIFT_CONST(28)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_WEN_FIELD                        _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_SEC_WEN_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_WEN_RANGE                        28:28
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_WEN_WOFFSET                      0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_WEN_DEFAULT                      _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_WEN_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_WEN_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_WEN_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_WEN_PARITY_PROTECTION                    _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_WEN_PLATFORM_DEPENDENT                   _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_REN_SHIFT                        _MK_SHIFT_CONST(27)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_REN_FIELD                        _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_SEC_REN_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_REN_RANGE                        27:27
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_REN_WOFFSET                      0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_REN_DEFAULT                      _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_REN_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_REN_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_REN_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_REN_PARITY_PROTECTION                    _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_REN_PLATFORM_DEPENDENT                   _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_OWNER_SHIFT                      _MK_SHIFT_CONST(24)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_OWNER_FIELD                      _MK_FIELD_CONST(0x7, BPMP_MISC_SCR_SCR_SHARED_0_SEC_OWNER_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_OWNER_RANGE                      26:24
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_OWNER_WOFFSET                    0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_OWNER_DEFAULT                    _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_OWNER_DEFAULT_MASK                       _MK_MASK_CONST(0x7)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_OWNER_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_OWNER_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_OWNER_PARITY_PROTECTION                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_SEC_OWNER_PLATFORM_DEPENDENT                 _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_PR7_SHIFT                    _MK_SHIFT_CONST(23)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR7_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_PR7_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR7_RANGE                    23:23
#define BPMP_MISC_SCR_SCR_SHARED_0_PR7_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_PR7_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR7_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR7_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR7_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR7_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR7_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_PR6_SHIFT                    _MK_SHIFT_CONST(22)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR6_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_PR6_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR6_RANGE                    22:22
#define BPMP_MISC_SCR_SCR_SHARED_0_PR6_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_PR6_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR6_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR6_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR6_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR6_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR6_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_PR5_SHIFT                    _MK_SHIFT_CONST(21)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR5_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_PR5_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR5_RANGE                    21:21
#define BPMP_MISC_SCR_SCR_SHARED_0_PR5_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_PR5_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR5_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR5_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR5_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR5_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR5_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_PR4_SHIFT                    _MK_SHIFT_CONST(20)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR4_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_PR4_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR4_RANGE                    20:20
#define BPMP_MISC_SCR_SCR_SHARED_0_PR4_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_PR4_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR4_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR4_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR4_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR4_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR4_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_PR3_SHIFT                    _MK_SHIFT_CONST(19)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR3_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_PR3_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR3_RANGE                    19:19
#define BPMP_MISC_SCR_SCR_SHARED_0_PR3_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_PR3_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR3_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR3_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR3_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR3_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR3_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_PR2_SHIFT                    _MK_SHIFT_CONST(18)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR2_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_PR2_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR2_RANGE                    18:18
#define BPMP_MISC_SCR_SCR_SHARED_0_PR2_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_PR2_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR2_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR2_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR2_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR2_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR2_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_PR1_SHIFT                    _MK_SHIFT_CONST(17)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR1_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_PR1_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR1_RANGE                    17:17
#define BPMP_MISC_SCR_SCR_SHARED_0_PR1_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_PR1_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR1_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR1_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR1_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR1_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR1_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_PR0_SHIFT                    _MK_SHIFT_CONST(16)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR0_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_PR0_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR0_RANGE                    16:16
#define BPMP_MISC_SCR_SCR_SHARED_0_PR0_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_PR0_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR0_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR0_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR0_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR0_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_PR0_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G7W_SHIFT                    _MK_SHIFT_CONST(15)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7W_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G7W_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7W_RANGE                    15:15
#define BPMP_MISC_SCR_SCR_SHARED_0_G7W_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G7W_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7W_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7W_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7W_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7W_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7W_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G6W_SHIFT                    _MK_SHIFT_CONST(14)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6W_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G6W_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6W_RANGE                    14:14
#define BPMP_MISC_SCR_SCR_SHARED_0_G6W_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G6W_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6W_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6W_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6W_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6W_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6W_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G5W_SHIFT                    _MK_SHIFT_CONST(13)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5W_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G5W_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5W_RANGE                    13:13
#define BPMP_MISC_SCR_SCR_SHARED_0_G5W_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G5W_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5W_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5W_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5W_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5W_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5W_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G4W_SHIFT                    _MK_SHIFT_CONST(12)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4W_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G4W_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4W_RANGE                    12:12
#define BPMP_MISC_SCR_SCR_SHARED_0_G4W_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G4W_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4W_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4W_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4W_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4W_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4W_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G3W_SHIFT                    _MK_SHIFT_CONST(11)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3W_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G3W_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3W_RANGE                    11:11
#define BPMP_MISC_SCR_SCR_SHARED_0_G3W_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G3W_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3W_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3W_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3W_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3W_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3W_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G2W_SHIFT                    _MK_SHIFT_CONST(10)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2W_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G2W_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2W_RANGE                    10:10
#define BPMP_MISC_SCR_SCR_SHARED_0_G2W_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G2W_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2W_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2W_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2W_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2W_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2W_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G1W_SHIFT                    _MK_SHIFT_CONST(9)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1W_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G1W_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1W_RANGE                    9:9
#define BPMP_MISC_SCR_SCR_SHARED_0_G1W_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G1W_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1W_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1W_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1W_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1W_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1W_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G0W_SHIFT                    _MK_SHIFT_CONST(8)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0W_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G0W_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0W_RANGE                    8:8
#define BPMP_MISC_SCR_SCR_SHARED_0_G0W_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G0W_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0W_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0W_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0W_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0W_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0W_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G7R_SHIFT                    _MK_SHIFT_CONST(7)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7R_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G7R_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7R_RANGE                    7:7
#define BPMP_MISC_SCR_SCR_SHARED_0_G7R_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G7R_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7R_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7R_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7R_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7R_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G7R_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G6R_SHIFT                    _MK_SHIFT_CONST(6)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6R_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G6R_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6R_RANGE                    6:6
#define BPMP_MISC_SCR_SCR_SHARED_0_G6R_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G6R_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6R_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6R_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6R_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6R_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G6R_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G5R_SHIFT                    _MK_SHIFT_CONST(5)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5R_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G5R_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5R_RANGE                    5:5
#define BPMP_MISC_SCR_SCR_SHARED_0_G5R_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G5R_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5R_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5R_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5R_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5R_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G5R_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G4R_SHIFT                    _MK_SHIFT_CONST(4)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4R_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G4R_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4R_RANGE                    4:4
#define BPMP_MISC_SCR_SCR_SHARED_0_G4R_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G4R_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4R_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4R_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4R_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4R_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G4R_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G3R_SHIFT                    _MK_SHIFT_CONST(3)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3R_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G3R_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3R_RANGE                    3:3
#define BPMP_MISC_SCR_SCR_SHARED_0_G3R_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G3R_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3R_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3R_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3R_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3R_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G3R_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G2R_SHIFT                    _MK_SHIFT_CONST(2)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2R_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G2R_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2R_RANGE                    2:2
#define BPMP_MISC_SCR_SCR_SHARED_0_G2R_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G2R_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2R_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2R_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2R_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2R_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G2R_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G1R_SHIFT                    _MK_SHIFT_CONST(1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1R_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G1R_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1R_RANGE                    1:1
#define BPMP_MISC_SCR_SCR_SHARED_0_G1R_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G1R_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1R_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1R_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1R_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1R_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G1R_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)

#define BPMP_MISC_SCR_SCR_SHARED_0_G0R_SHIFT                    _MK_SHIFT_CONST(0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0R_FIELD                    _MK_FIELD_CONST(0x1, BPMP_MISC_SCR_SCR_SHARED_0_G0R_SHIFT)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0R_RANGE                    0:0
#define BPMP_MISC_SCR_SCR_SHARED_0_G0R_WOFFSET                  0x0
#define BPMP_MISC_SCR_SCR_SHARED_0_G0R_DEFAULT                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0R_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0R_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0R_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0R_PARITY_PROTECTION                        _MK_MASK_CONST(0x0)
#define BPMP_MISC_SCR_SCR_SHARED_0_G0R_PLATFORM_DEPENDENT                       _MK_MASK_CONST(0x1)


//
// REGISTER LIST
//
#define LIST_ARBPMP_MISC_SCR_REGS(_op_) \
_op_(BPMP_MISC_SCR_SCR_SHARED_0)


//
// ADDRESS SPACES
//

#define BASE_ADDRESS_BPMP_MISC_SCR      0x00000800

//
// ARBPMP_MISC_SCR REGISTER BANKS
//

#define BPMP_MISC_SCR0_FIRST_REG 0x0800 // BPMP_MISC_SCR_SCR_SHARED_0
#define BPMP_MISC_SCR0_LAST_REG 0x0800 // BPMP_MISC_SCR_SCR_SHARED_0

// To satisfy various compilers and platforms,
// we let users control the types and syntax of certain constants, using macros.
#ifndef _MK_SHIFT_CONST
  #define _MK_SHIFT_CONST(_constant_) _constant_
#endif
#ifndef _MK_MASK_CONST
  #define _MK_MASK_CONST(_constant_) _constant_
#endif
#ifndef _MK_ENUM_CONST
  #define _MK_ENUM_CONST(_constant_) (_constant_ ## UL)
#endif
#ifndef _MK_ADDR_CONST
  #define _MK_ADDR_CONST(_constant_) _constant_
#endif
#ifndef _MK_FIELD_CONST
  #define _MK_FIELD_CONST(_mask_, _shift_) (_MK_MASK_CONST(_mask_) << _MK_SHIFT_CONST(_shift_))
#endif

#endif // ifndef ___ARBPMP_MISC_SCR_H_INC_
