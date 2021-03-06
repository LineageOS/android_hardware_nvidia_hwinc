//
// Copyright (c) 2015 NVIDIA Corporation.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//

//
// DO NOT EDIT - generated by simspec!
//

#ifndef ___ARSCE_EVP_H_INC_
#define ___ARSCE_EVP_H_INC_

// Register SCE_EVP_RESET_VEC_0
#define SCE_EVP_RESET_VEC_0                     _MK_ADDR_CONST(0x0)
#define SCE_EVP_RESET_VEC_0_SECURE                      0x0
#define SCE_EVP_RESET_VEC_0_SCR                         0
#define SCE_EVP_RESET_VEC_0_WORD_COUNT                  0x1
#define SCE_EVP_RESET_VEC_0_RESET_VAL                   _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_RESET_VEC_0_RESET_MASK                  _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_RESET_VEC_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SCE_EVP_RESET_VEC_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SCE_EVP_RESET_VEC_0_READ_MASK                   _MK_MASK_CONST(0x0)
#define SCE_EVP_RESET_VEC_0_WRITE_MASK                  _MK_MASK_CONST(0x0)
#define SCE_EVP_RESET_VEC_0_VECTOR_SHIFT                        _MK_SHIFT_CONST(0)
#define SCE_EVP_RESET_VEC_0_VECTOR_FIELD                        _MK_FIELD_CONST(0xffffffff, SCE_EVP_RESET_VEC_0_VECTOR_SHIFT)
#define SCE_EVP_RESET_VEC_0_VECTOR_RANGE                        31:0
#define SCE_EVP_RESET_VEC_0_VECTOR_WOFFSET                      0x0
#define SCE_EVP_RESET_VEC_0_VECTOR_DEFAULT                      _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_RESET_VEC_0_VECTOR_DEFAULT_MASK                 _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_RESET_VEC_0_VECTOR_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCE_EVP_RESET_VEC_0_VECTOR_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SCE_EVP_RESET_VEC_0_VECTOR_INIT_ENUM                    -442503144


// Register SCE_EVP_UNDEF_VEC_0
#define SCE_EVP_UNDEF_VEC_0                     _MK_ADDR_CONST(0x4)
#define SCE_EVP_UNDEF_VEC_0_SECURE                      0x0
#define SCE_EVP_UNDEF_VEC_0_SCR                         0
#define SCE_EVP_UNDEF_VEC_0_WORD_COUNT                  0x1
#define SCE_EVP_UNDEF_VEC_0_RESET_VAL                   _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_UNDEF_VEC_0_RESET_MASK                  _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_UNDEF_VEC_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SCE_EVP_UNDEF_VEC_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SCE_EVP_UNDEF_VEC_0_READ_MASK                   _MK_MASK_CONST(0x0)
#define SCE_EVP_UNDEF_VEC_0_WRITE_MASK                  _MK_MASK_CONST(0x0)
#define SCE_EVP_UNDEF_VEC_0_VECTOR_SHIFT                        _MK_SHIFT_CONST(0)
#define SCE_EVP_UNDEF_VEC_0_VECTOR_FIELD                        _MK_FIELD_CONST(0xffffffff, SCE_EVP_UNDEF_VEC_0_VECTOR_SHIFT)
#define SCE_EVP_UNDEF_VEC_0_VECTOR_RANGE                        31:0
#define SCE_EVP_UNDEF_VEC_0_VECTOR_WOFFSET                      0x0
#define SCE_EVP_UNDEF_VEC_0_VECTOR_DEFAULT                      _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_UNDEF_VEC_0_VECTOR_DEFAULT_MASK                 _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_UNDEF_VEC_0_VECTOR_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCE_EVP_UNDEF_VEC_0_VECTOR_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SCE_EVP_UNDEF_VEC_0_VECTOR_INIT_ENUM                    -442503144


// Register SCE_EVP_SWI_VEC_0
#define SCE_EVP_SWI_VEC_0                       _MK_ADDR_CONST(0x8)
#define SCE_EVP_SWI_VEC_0_SECURE                        0x0
#define SCE_EVP_SWI_VEC_0_SCR                   0
#define SCE_EVP_SWI_VEC_0_WORD_COUNT                    0x1
#define SCE_EVP_SWI_VEC_0_RESET_VAL                     _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_SWI_VEC_0_RESET_MASK                    _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_SWI_VEC_0_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SCE_EVP_SWI_VEC_0_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SCE_EVP_SWI_VEC_0_READ_MASK                     _MK_MASK_CONST(0x0)
#define SCE_EVP_SWI_VEC_0_WRITE_MASK                    _MK_MASK_CONST(0x0)
#define SCE_EVP_SWI_VEC_0_VECTOR_SHIFT                  _MK_SHIFT_CONST(0)
#define SCE_EVP_SWI_VEC_0_VECTOR_FIELD                  _MK_FIELD_CONST(0xffffffff, SCE_EVP_SWI_VEC_0_VECTOR_SHIFT)
#define SCE_EVP_SWI_VEC_0_VECTOR_RANGE                  31:0
#define SCE_EVP_SWI_VEC_0_VECTOR_WOFFSET                        0x0
#define SCE_EVP_SWI_VEC_0_VECTOR_DEFAULT                        _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_SWI_VEC_0_VECTOR_DEFAULT_MASK                   _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_SWI_VEC_0_VECTOR_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SCE_EVP_SWI_VEC_0_VECTOR_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SCE_EVP_SWI_VEC_0_VECTOR_INIT_ENUM                      -442503144


// Register SCE_EVP_PREFETCH_ABORT_VEC_0
#define SCE_EVP_PREFETCH_ABORT_VEC_0                    _MK_ADDR_CONST(0xc)
#define SCE_EVP_PREFETCH_ABORT_VEC_0_SECURE                     0x0
#define SCE_EVP_PREFETCH_ABORT_VEC_0_SCR                        0
#define SCE_EVP_PREFETCH_ABORT_VEC_0_WORD_COUNT                         0x1
#define SCE_EVP_PREFETCH_ABORT_VEC_0_RESET_VAL                  _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_PREFETCH_ABORT_VEC_0_RESET_MASK                         _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_PREFETCH_ABORT_VEC_0_SW_DEFAULT_VAL                     _MK_MASK_CONST(0x0)
#define SCE_EVP_PREFETCH_ABORT_VEC_0_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SCE_EVP_PREFETCH_ABORT_VEC_0_READ_MASK                  _MK_MASK_CONST(0x0)
#define SCE_EVP_PREFETCH_ABORT_VEC_0_WRITE_MASK                         _MK_MASK_CONST(0x0)
#define SCE_EVP_PREFETCH_ABORT_VEC_0_VECTOR_SHIFT                       _MK_SHIFT_CONST(0)
#define SCE_EVP_PREFETCH_ABORT_VEC_0_VECTOR_FIELD                       _MK_FIELD_CONST(0xffffffff, SCE_EVP_PREFETCH_ABORT_VEC_0_VECTOR_SHIFT)
#define SCE_EVP_PREFETCH_ABORT_VEC_0_VECTOR_RANGE                       31:0
#define SCE_EVP_PREFETCH_ABORT_VEC_0_VECTOR_WOFFSET                     0x0
#define SCE_EVP_PREFETCH_ABORT_VEC_0_VECTOR_DEFAULT                     _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_PREFETCH_ABORT_VEC_0_VECTOR_DEFAULT_MASK                        _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_PREFETCH_ABORT_VEC_0_VECTOR_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SCE_EVP_PREFETCH_ABORT_VEC_0_VECTOR_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SCE_EVP_PREFETCH_ABORT_VEC_0_VECTOR_INIT_ENUM                   -442503144


// Register SCE_EVP_DATA_ABORT_VEC_0
#define SCE_EVP_DATA_ABORT_VEC_0                        _MK_ADDR_CONST(0x10)
#define SCE_EVP_DATA_ABORT_VEC_0_SECURE                         0x0
#define SCE_EVP_DATA_ABORT_VEC_0_SCR                    0
#define SCE_EVP_DATA_ABORT_VEC_0_WORD_COUNT                     0x1
#define SCE_EVP_DATA_ABORT_VEC_0_RESET_VAL                      _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_DATA_ABORT_VEC_0_RESET_MASK                     _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_DATA_ABORT_VEC_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SCE_EVP_DATA_ABORT_VEC_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SCE_EVP_DATA_ABORT_VEC_0_READ_MASK                      _MK_MASK_CONST(0x0)
#define SCE_EVP_DATA_ABORT_VEC_0_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SCE_EVP_DATA_ABORT_VEC_0_VECTOR_SHIFT                   _MK_SHIFT_CONST(0)
#define SCE_EVP_DATA_ABORT_VEC_0_VECTOR_FIELD                   _MK_FIELD_CONST(0xffffffff, SCE_EVP_DATA_ABORT_VEC_0_VECTOR_SHIFT)
#define SCE_EVP_DATA_ABORT_VEC_0_VECTOR_RANGE                   31:0
#define SCE_EVP_DATA_ABORT_VEC_0_VECTOR_WOFFSET                 0x0
#define SCE_EVP_DATA_ABORT_VEC_0_VECTOR_DEFAULT                 _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_DATA_ABORT_VEC_0_VECTOR_DEFAULT_MASK                    _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_DATA_ABORT_VEC_0_VECTOR_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SCE_EVP_DATA_ABORT_VEC_0_VECTOR_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SCE_EVP_DATA_ABORT_VEC_0_VECTOR_INIT_ENUM                       -442503144


// Register SCE_EVP_RSVD_VEC_0
#define SCE_EVP_RSVD_VEC_0                      _MK_ADDR_CONST(0x14)
#define SCE_EVP_RSVD_VEC_0_SECURE                       0x0
#define SCE_EVP_RSVD_VEC_0_SCR                  0
#define SCE_EVP_RSVD_VEC_0_WORD_COUNT                   0x1
#define SCE_EVP_RSVD_VEC_0_RESET_VAL                    _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_RSVD_VEC_0_RESET_MASK                   _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_RSVD_VEC_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define SCE_EVP_RSVD_VEC_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SCE_EVP_RSVD_VEC_0_READ_MASK                    _MK_MASK_CONST(0x0)
#define SCE_EVP_RSVD_VEC_0_WRITE_MASK                   _MK_MASK_CONST(0x0)
#define SCE_EVP_RSVD_VEC_0_VECTOR_SHIFT                 _MK_SHIFT_CONST(0)
#define SCE_EVP_RSVD_VEC_0_VECTOR_FIELD                 _MK_FIELD_CONST(0xffffffff, SCE_EVP_RSVD_VEC_0_VECTOR_SHIFT)
#define SCE_EVP_RSVD_VEC_0_VECTOR_RANGE                 31:0
#define SCE_EVP_RSVD_VEC_0_VECTOR_WOFFSET                       0x0
#define SCE_EVP_RSVD_VEC_0_VECTOR_DEFAULT                       _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_RSVD_VEC_0_VECTOR_DEFAULT_MASK                  _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_RSVD_VEC_0_VECTOR_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SCE_EVP_RSVD_VEC_0_VECTOR_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SCE_EVP_RSVD_VEC_0_VECTOR_INIT_ENUM                     -442503144


// Register SCE_EVP_IRQ_VEC_0
#define SCE_EVP_IRQ_VEC_0                       _MK_ADDR_CONST(0x18)
#define SCE_EVP_IRQ_VEC_0_SECURE                        0x0
#define SCE_EVP_IRQ_VEC_0_SCR                   0
#define SCE_EVP_IRQ_VEC_0_WORD_COUNT                    0x1
#define SCE_EVP_IRQ_VEC_0_RESET_VAL                     _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_IRQ_VEC_0_RESET_MASK                    _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_IRQ_VEC_0_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SCE_EVP_IRQ_VEC_0_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SCE_EVP_IRQ_VEC_0_READ_MASK                     _MK_MASK_CONST(0x0)
#define SCE_EVP_IRQ_VEC_0_WRITE_MASK                    _MK_MASK_CONST(0x0)
#define SCE_EVP_IRQ_VEC_0_VECTOR_SHIFT                  _MK_SHIFT_CONST(0)
#define SCE_EVP_IRQ_VEC_0_VECTOR_FIELD                  _MK_FIELD_CONST(0xffffffff, SCE_EVP_IRQ_VEC_0_VECTOR_SHIFT)
#define SCE_EVP_IRQ_VEC_0_VECTOR_RANGE                  31:0
#define SCE_EVP_IRQ_VEC_0_VECTOR_WOFFSET                        0x0
#define SCE_EVP_IRQ_VEC_0_VECTOR_DEFAULT                        _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_IRQ_VEC_0_VECTOR_DEFAULT_MASK                   _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_IRQ_VEC_0_VECTOR_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SCE_EVP_IRQ_VEC_0_VECTOR_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SCE_EVP_IRQ_VEC_0_VECTOR_INIT_ENUM                      -442503144


// Register SCE_EVP_FIQ_VEC_0
#define SCE_EVP_FIQ_VEC_0                       _MK_ADDR_CONST(0x1c)
#define SCE_EVP_FIQ_VEC_0_SECURE                        0x0
#define SCE_EVP_FIQ_VEC_0_SCR                   0
#define SCE_EVP_FIQ_VEC_0_WORD_COUNT                    0x1
#define SCE_EVP_FIQ_VEC_0_RESET_VAL                     _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_FIQ_VEC_0_RESET_MASK                    _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_FIQ_VEC_0_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SCE_EVP_FIQ_VEC_0_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SCE_EVP_FIQ_VEC_0_READ_MASK                     _MK_MASK_CONST(0x0)
#define SCE_EVP_FIQ_VEC_0_WRITE_MASK                    _MK_MASK_CONST(0x0)
#define SCE_EVP_FIQ_VEC_0_VECTOR_SHIFT                  _MK_SHIFT_CONST(0)
#define SCE_EVP_FIQ_VEC_0_VECTOR_FIELD                  _MK_FIELD_CONST(0xffffffff, SCE_EVP_FIQ_VEC_0_VECTOR_SHIFT)
#define SCE_EVP_FIQ_VEC_0_VECTOR_RANGE                  31:0
#define SCE_EVP_FIQ_VEC_0_VECTOR_WOFFSET                        0x0
#define SCE_EVP_FIQ_VEC_0_VECTOR_DEFAULT                        _MK_MASK_CONST(0xe59ff018)
#define SCE_EVP_FIQ_VEC_0_VECTOR_DEFAULT_MASK                   _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_FIQ_VEC_0_VECTOR_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SCE_EVP_FIQ_VEC_0_VECTOR_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SCE_EVP_FIQ_VEC_0_VECTOR_INIT_ENUM                      -442503144


// Register SCE_EVP_RESET_ADDR_0
#define SCE_EVP_RESET_ADDR_0                    _MK_ADDR_CONST(0x20)
#define SCE_EVP_RESET_ADDR_0_SECURE                     0x0
#define SCE_EVP_RESET_ADDR_0_SCR                        0
#define SCE_EVP_RESET_ADDR_0_WORD_COUNT                         0x1
#define SCE_EVP_RESET_ADDR_0_RESET_VAL                  _MK_MASK_CONST(0xb480000)
#define SCE_EVP_RESET_ADDR_0_RESET_MASK                         _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_RESET_ADDR_0_SW_DEFAULT_VAL                     _MK_MASK_CONST(0x0)
#define SCE_EVP_RESET_ADDR_0_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SCE_EVP_RESET_ADDR_0_READ_MASK                  _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_RESET_ADDR_0_WRITE_MASK                         _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_RESET_ADDR_0_ADDR_SHIFT                 _MK_SHIFT_CONST(0)
#define SCE_EVP_RESET_ADDR_0_ADDR_FIELD                 _MK_FIELD_CONST(0xffffffff, SCE_EVP_RESET_ADDR_0_ADDR_SHIFT)
#define SCE_EVP_RESET_ADDR_0_ADDR_RANGE                 31:0
#define SCE_EVP_RESET_ADDR_0_ADDR_WOFFSET                       0x0
#define SCE_EVP_RESET_ADDR_0_ADDR_DEFAULT                       _MK_MASK_CONST(0xb480000)
#define SCE_EVP_RESET_ADDR_0_ADDR_DEFAULT_MASK                  _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_RESET_ADDR_0_ADDR_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SCE_EVP_RESET_ADDR_0_ADDR_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)


// Register SCE_EVP_UNDEF_ADDR_0
#define SCE_EVP_UNDEF_ADDR_0                    _MK_ADDR_CONST(0x24)
#define SCE_EVP_UNDEF_ADDR_0_SECURE                     0x0
#define SCE_EVP_UNDEF_ADDR_0_SCR                        0
#define SCE_EVP_UNDEF_ADDR_0_WORD_COUNT                         0x1
#define SCE_EVP_UNDEF_ADDR_0_RESET_VAL                  _MK_MASK_CONST(0xb480004)
#define SCE_EVP_UNDEF_ADDR_0_RESET_MASK                         _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_UNDEF_ADDR_0_SW_DEFAULT_VAL                     _MK_MASK_CONST(0x0)
#define SCE_EVP_UNDEF_ADDR_0_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SCE_EVP_UNDEF_ADDR_0_READ_MASK                  _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_UNDEF_ADDR_0_WRITE_MASK                         _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_UNDEF_ADDR_0_ADDR_SHIFT                 _MK_SHIFT_CONST(0)
#define SCE_EVP_UNDEF_ADDR_0_ADDR_FIELD                 _MK_FIELD_CONST(0xffffffff, SCE_EVP_UNDEF_ADDR_0_ADDR_SHIFT)
#define SCE_EVP_UNDEF_ADDR_0_ADDR_RANGE                 31:0
#define SCE_EVP_UNDEF_ADDR_0_ADDR_WOFFSET                       0x0
#define SCE_EVP_UNDEF_ADDR_0_ADDR_DEFAULT                       _MK_MASK_CONST(0xb480004)
#define SCE_EVP_UNDEF_ADDR_0_ADDR_DEFAULT_MASK                  _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_UNDEF_ADDR_0_ADDR_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SCE_EVP_UNDEF_ADDR_0_ADDR_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)


// Register SCE_EVP_SWI_ADDR_0
#define SCE_EVP_SWI_ADDR_0                      _MK_ADDR_CONST(0x28)
#define SCE_EVP_SWI_ADDR_0_SECURE                       0x0
#define SCE_EVP_SWI_ADDR_0_SCR                  0
#define SCE_EVP_SWI_ADDR_0_WORD_COUNT                   0x1
#define SCE_EVP_SWI_ADDR_0_RESET_VAL                    _MK_MASK_CONST(0xb480008)
#define SCE_EVP_SWI_ADDR_0_RESET_MASK                   _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_SWI_ADDR_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define SCE_EVP_SWI_ADDR_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SCE_EVP_SWI_ADDR_0_READ_MASK                    _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_SWI_ADDR_0_WRITE_MASK                   _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_SWI_ADDR_0_ADDR_SHIFT                   _MK_SHIFT_CONST(0)
#define SCE_EVP_SWI_ADDR_0_ADDR_FIELD                   _MK_FIELD_CONST(0xffffffff, SCE_EVP_SWI_ADDR_0_ADDR_SHIFT)
#define SCE_EVP_SWI_ADDR_0_ADDR_RANGE                   31:0
#define SCE_EVP_SWI_ADDR_0_ADDR_WOFFSET                 0x0
#define SCE_EVP_SWI_ADDR_0_ADDR_DEFAULT                 _MK_MASK_CONST(0xb480008)
#define SCE_EVP_SWI_ADDR_0_ADDR_DEFAULT_MASK                    _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_SWI_ADDR_0_ADDR_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SCE_EVP_SWI_ADDR_0_ADDR_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register SCE_EVP_PREFETCH_ABORT_ADDR_0
#define SCE_EVP_PREFETCH_ABORT_ADDR_0                   _MK_ADDR_CONST(0x2c)
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_SECURE                    0x0
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_SCR                       0
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_WORD_COUNT                        0x1
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_RESET_VAL                         _MK_MASK_CONST(0xb48000c)
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_RESET_MASK                        _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_SW_DEFAULT_VAL                    _MK_MASK_CONST(0x0)
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_READ_MASK                         _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_WRITE_MASK                        _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_ADDR_SHIFT                        _MK_SHIFT_CONST(0)
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_ADDR_FIELD                        _MK_FIELD_CONST(0xffffffff, SCE_EVP_PREFETCH_ABORT_ADDR_0_ADDR_SHIFT)
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_ADDR_RANGE                        31:0
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_ADDR_WOFFSET                      0x0
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_ADDR_DEFAULT                      _MK_MASK_CONST(0xb48000c)
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_ADDR_DEFAULT_MASK                 _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_ADDR_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SCE_EVP_PREFETCH_ABORT_ADDR_0_ADDR_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)


// Register SCE_EVP_DATA_ABORT_ADDR_0
#define SCE_EVP_DATA_ABORT_ADDR_0                       _MK_ADDR_CONST(0x30)
#define SCE_EVP_DATA_ABORT_ADDR_0_SECURE                        0x0
#define SCE_EVP_DATA_ABORT_ADDR_0_SCR                   0
#define SCE_EVP_DATA_ABORT_ADDR_0_WORD_COUNT                    0x1
#define SCE_EVP_DATA_ABORT_ADDR_0_RESET_VAL                     _MK_MASK_CONST(0xb480010)
#define SCE_EVP_DATA_ABORT_ADDR_0_RESET_MASK                    _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_DATA_ABORT_ADDR_0_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SCE_EVP_DATA_ABORT_ADDR_0_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SCE_EVP_DATA_ABORT_ADDR_0_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_DATA_ABORT_ADDR_0_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_DATA_ABORT_ADDR_0_ADDR_SHIFT                    _MK_SHIFT_CONST(0)
#define SCE_EVP_DATA_ABORT_ADDR_0_ADDR_FIELD                    _MK_FIELD_CONST(0xffffffff, SCE_EVP_DATA_ABORT_ADDR_0_ADDR_SHIFT)
#define SCE_EVP_DATA_ABORT_ADDR_0_ADDR_RANGE                    31:0
#define SCE_EVP_DATA_ABORT_ADDR_0_ADDR_WOFFSET                  0x0
#define SCE_EVP_DATA_ABORT_ADDR_0_ADDR_DEFAULT                  _MK_MASK_CONST(0xb480010)
#define SCE_EVP_DATA_ABORT_ADDR_0_ADDR_DEFAULT_MASK                     _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_DATA_ABORT_ADDR_0_ADDR_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SCE_EVP_DATA_ABORT_ADDR_0_ADDR_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)


// Register SCE_EVP_RSVD_ADDR_0
#define SCE_EVP_RSVD_ADDR_0                     _MK_ADDR_CONST(0x34)
#define SCE_EVP_RSVD_ADDR_0_SECURE                      0x0
#define SCE_EVP_RSVD_ADDR_0_SCR                         0
#define SCE_EVP_RSVD_ADDR_0_WORD_COUNT                  0x1
#define SCE_EVP_RSVD_ADDR_0_RESET_VAL                   _MK_MASK_CONST(0xb480014)
#define SCE_EVP_RSVD_ADDR_0_RESET_MASK                  _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_RSVD_ADDR_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SCE_EVP_RSVD_ADDR_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SCE_EVP_RSVD_ADDR_0_READ_MASK                   _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_RSVD_ADDR_0_WRITE_MASK                  _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_RSVD_ADDR_0_ADDR_SHIFT                  _MK_SHIFT_CONST(0)
#define SCE_EVP_RSVD_ADDR_0_ADDR_FIELD                  _MK_FIELD_CONST(0xffffffff, SCE_EVP_RSVD_ADDR_0_ADDR_SHIFT)
#define SCE_EVP_RSVD_ADDR_0_ADDR_RANGE                  31:0
#define SCE_EVP_RSVD_ADDR_0_ADDR_WOFFSET                        0x0
#define SCE_EVP_RSVD_ADDR_0_ADDR_DEFAULT                        _MK_MASK_CONST(0xb480014)
#define SCE_EVP_RSVD_ADDR_0_ADDR_DEFAULT_MASK                   _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_RSVD_ADDR_0_ADDR_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SCE_EVP_RSVD_ADDR_0_ADDR_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)


// Register SCE_EVP_IRQ_ADDR_0
#define SCE_EVP_IRQ_ADDR_0                      _MK_ADDR_CONST(0x38)
#define SCE_EVP_IRQ_ADDR_0_SECURE                       0x0
#define SCE_EVP_IRQ_ADDR_0_SCR                  0
#define SCE_EVP_IRQ_ADDR_0_WORD_COUNT                   0x1
#define SCE_EVP_IRQ_ADDR_0_RESET_VAL                    _MK_MASK_CONST(0xb480018)
#define SCE_EVP_IRQ_ADDR_0_RESET_MASK                   _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_IRQ_ADDR_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define SCE_EVP_IRQ_ADDR_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SCE_EVP_IRQ_ADDR_0_READ_MASK                    _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_IRQ_ADDR_0_WRITE_MASK                   _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_IRQ_ADDR_0_ADDR_SHIFT                   _MK_SHIFT_CONST(0)
#define SCE_EVP_IRQ_ADDR_0_ADDR_FIELD                   _MK_FIELD_CONST(0xffffffff, SCE_EVP_IRQ_ADDR_0_ADDR_SHIFT)
#define SCE_EVP_IRQ_ADDR_0_ADDR_RANGE                   31:0
#define SCE_EVP_IRQ_ADDR_0_ADDR_WOFFSET                 0x0
#define SCE_EVP_IRQ_ADDR_0_ADDR_DEFAULT                 _MK_MASK_CONST(0xb480018)
#define SCE_EVP_IRQ_ADDR_0_ADDR_DEFAULT_MASK                    _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_IRQ_ADDR_0_ADDR_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SCE_EVP_IRQ_ADDR_0_ADDR_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register SCE_EVP_FIQ_ADDR_0
#define SCE_EVP_FIQ_ADDR_0                      _MK_ADDR_CONST(0x3c)
#define SCE_EVP_FIQ_ADDR_0_SECURE                       0x0
#define SCE_EVP_FIQ_ADDR_0_SCR                  0
#define SCE_EVP_FIQ_ADDR_0_WORD_COUNT                   0x1
#define SCE_EVP_FIQ_ADDR_0_RESET_VAL                    _MK_MASK_CONST(0xb48001c)
#define SCE_EVP_FIQ_ADDR_0_RESET_MASK                   _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_FIQ_ADDR_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define SCE_EVP_FIQ_ADDR_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SCE_EVP_FIQ_ADDR_0_READ_MASK                    _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_FIQ_ADDR_0_WRITE_MASK                   _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_FIQ_ADDR_0_ADDR_SHIFT                   _MK_SHIFT_CONST(0)
#define SCE_EVP_FIQ_ADDR_0_ADDR_FIELD                   _MK_FIELD_CONST(0xffffffff, SCE_EVP_FIQ_ADDR_0_ADDR_SHIFT)
#define SCE_EVP_FIQ_ADDR_0_ADDR_RANGE                   31:0
#define SCE_EVP_FIQ_ADDR_0_ADDR_WOFFSET                 0x0
#define SCE_EVP_FIQ_ADDR_0_ADDR_DEFAULT                 _MK_MASK_CONST(0xb48001c)
#define SCE_EVP_FIQ_ADDR_0_ADDR_DEFAULT_MASK                    _MK_MASK_CONST(0xffffffff)
#define SCE_EVP_FIQ_ADDR_0_ADDR_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SCE_EVP_FIQ_ADDR_0_ADDR_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


//
// REGISTER LIST
//
#define LIST_ARSCE_EVP_REGS(_op_) \
_op_(SCE_EVP_RESET_VEC_0) \
_op_(SCE_EVP_UNDEF_VEC_0) \
_op_(SCE_EVP_SWI_VEC_0) \
_op_(SCE_EVP_PREFETCH_ABORT_VEC_0) \
_op_(SCE_EVP_DATA_ABORT_VEC_0) \
_op_(SCE_EVP_RSVD_VEC_0) \
_op_(SCE_EVP_IRQ_VEC_0) \
_op_(SCE_EVP_FIQ_VEC_0) \
_op_(SCE_EVP_RESET_ADDR_0) \
_op_(SCE_EVP_UNDEF_ADDR_0) \
_op_(SCE_EVP_SWI_ADDR_0) \
_op_(SCE_EVP_PREFETCH_ABORT_ADDR_0) \
_op_(SCE_EVP_DATA_ABORT_ADDR_0) \
_op_(SCE_EVP_RSVD_ADDR_0) \
_op_(SCE_EVP_IRQ_ADDR_0) \
_op_(SCE_EVP_FIQ_ADDR_0)


//
// ADDRESS SPACES
//

#define BASE_ADDRESS_SCE_EVP    0x00000000

//
// ARSCE_EVP REGISTER BANKS
//

#define SCE_EVP0_FIRST_REG 0x0000 // SCE_EVP_RESET_VEC_0
#define SCE_EVP0_LAST_REG 0x003c // SCE_EVP_FIQ_ADDR_0

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

#endif // ifndef ___ARSCE_EVP_H_INC_
