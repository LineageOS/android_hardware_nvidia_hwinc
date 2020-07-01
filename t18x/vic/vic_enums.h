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

// Generated by class/tools/xslt/make_c_class_enum.xslt- DO NOT EDIT
#ifndef _COMPOSITOR_ENUMS_H_
#define _COMPOSITOR_ENUMS_H_
#ifdef __cplusplus
namespace compositorConfig {
#endif
typedef enum _DXVAHD_FRAME_FORMAT {
    DXVAHD_FRAME_FORMAT_PROGRESSIVE = 0,
    DXVAHD_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST                          = 1,
    DXVAHD_FRAME_FORMAT_INTERLACED_BOTTOM_FIELD_FIRST                       = 2,
    DXVAHD_FRAME_FORMAT_TOP_FIELD                                           = 3,
    DXVAHD_FRAME_FORMAT_BOTTOM_FIELD                                        = 4,
    DXVAHD_FRAME_FORMAT_SUBPIC_PROGRESSIVE                                  = 5,
    DXVAHD_FRAME_FORMAT_SUBPIC_INTERLACED_TOP_FIELD_FIRST                   = 6,
    DXVAHD_FRAME_FORMAT_SUBPIC_INTERLACED_BOTTOM_FIELD_FIRST                = 7,
    DXVAHD_FRAME_FORMAT_SUBPIC_TOP_FIELD                                    = 8,
    DXVAHD_FRAME_FORMAT_SUBPIC_BOTTOM_FIELD                                 = 9,
    DXVAHD_FRAME_FORMAT_TOP_FIELD_CHROMA_BOTTOM                             = 10,
    DXVAHD_FRAME_FORMAT_BOTTOM_FIELD_CHROMA_TOP                             = 11,
    DXVAHD_FRAME_FORMAT_SUBPIC_TOP_FIELD_CHROMA_BOTTOM                      = 12,
    DXVAHD_FRAME_FORMAT_SUBPIC_BOTTOM_FIELD_CHROMA_TOP                      = 13
} DXVAHD_FRAME_FORMAT;

typedef enum _DXVAHD_DEINTERLACE_MODE_PRIVATE {
    DXVAHD_DEINTERLACE_MODE_PRIVATE_WEAVE                                   = 0,
    DXVAHD_DEINTERLACE_MODE_PRIVATE_BOB_FIELD                               = 1,
    DXVAHD_DEINTERLACE_MODE_PRIVATE_BOB                                     = 2,
    DXVAHD_DEINTERLACE_MODE_PRIVATE_NEWBOB                                  = 3,
    DXVAHD_DEINTERLACE_MODE_PRIVATE_DISI1                                   = 4,
    DXVAHD_DEINTERLACE_MODE_PRIVATE_WEAVE_LUMA_BOB_FIELD_CHROMA             = 5,
    DXVAHD_DEINTERLACE_MODE_PRIVATE_MAX                                     = 15
} DXVAHD_DEINTERLACE_MODE_PRIVATE;

typedef enum _DXVAHD_ALPHA_FILL_MODE {
    DXVAHD_ALPHA_FILL_MODE_OPAQUE   = 0,
    DXVAHD_ALPHA_FILL_MODE_BACKGROUND                                       = 1,
    DXVAHD_ALPHA_FILL_MODE_DESTINATION                                      = 2,
    DXVAHD_ALPHA_FILL_MODE_COMPOSITED                                       = 4,
    DXVAHD_ALPHA_FILL_MODE_SOURCE_ALPHA                                     = 5
} DXVAHD_ALPHA_FILL_MODE;

typedef enum _FILTER_LENGTH {
    FILTER_LENGTH_1TAP              = 0,
    FILTER_LENGTH_2TAP              = 1,
    FILTER_LENGTH_5TAP              = 2,
    FILTER_LENGTH_10TAP             = 3
} FILTER_LENGTH;

typedef enum _FILTER_TYPE {
    FILTER_TYPE_NORMAL              = 0,
    FILTER_TYPE_NOISE               = 1,
    FILTER_TYPE_DETAIL              = 2
} FILTER_TYPE;

typedef enum _PIXELFORMAT {
    T_A8                            = 0,
    T_L8                            = 1,
    T_A4L4                          = 2,
    T_L4A4                          = 3,
    T_R8                            = 4,
    T_A8L8                          = 5,
    T_L8A8                          = 6,
    T_R8G8                          = 7,
    T_G8R8                          = 8,
    T_B5G6R5                        = 9,
    T_R5G6B5                        = 10,
    T_B6G5R5                        = 11,
    T_R5G5B6                        = 12,
    T_A1B5G5R5                      = 13,
    T_A1R5G5B5                      = 14,
    T_B5G5R5A1                      = 15,
    T_R5G5B5A1                      = 16,
    T_A5B5G5R1                      = 17,
    T_A5R1G5B5                      = 18,
    T_B5G5R1A5                      = 19,
    T_R1G5B5A5                      = 20,
    T_X1B5G5R5                      = 21,
    T_X1R5G5B5                      = 22,
    T_B5G5R5X1                      = 23,
    T_R5G5B5X1                      = 24,
    T_A4B4G4R4                      = 25,
    T_A4R4G4B4                      = 26,
    T_B4G4R4A4                      = 27,
    T_R4G4B4A4                      = 28,
    T_B8_G8_R8                      = 29,
    T_R8_G8_B8                      = 30,
    T_A8B8G8R8                      = 31,
    T_A8R8G8B8                      = 32,
    T_B8G8R8A8                      = 33,
    T_R8G8B8A8                      = 34,
    T_X8B8G8R8                      = 35,
    T_X8R8G8B8                      = 36,
    T_B8G8R8X8                      = 37,
    T_R8G8B8X8                      = 38,
    T_A2B10G10R10                   = 39,
    T_A2R10G10B10                   = 40,
    T_B10G10R10A2                   = 41,
    T_R10G10B10A2                   = 42,
    T_A4P4                          = 43,
    T_P4A4                          = 44,
    T_P8A8                          = 45,
    T_A8P8                          = 46,
    T_P8                            = 47,
    T_P1                            = 48,
    T_U8V8                          = 49,
    T_V8U8                          = 50,
    T_A8Y8U8V8                      = 51,
    T_V8U8Y8A8                      = 52,
    T_Y8_U8_V8                      = 53,
    T_Y8_V8_U8                      = 54,
    T_U8_V8_Y8                      = 55,
    T_V8_U8_Y8                      = 56,
    T_Y8_U8__Y8_V8                  = 57,
    T_Y8_V8__Y8_U8                  = 58,
    T_U8_Y8__V8_Y8                  = 59,
    T_V8_Y8__U8_Y8                  = 60,
    T_Y8___U8V8_N444                = 61,
    T_Y8___V8U8_N444                = 62,
    T_Y8___U8V8_N422                = 63,
    T_Y8___V8U8_N422                = 64,
    T_Y8___U8V8_N422R               = 65,
    T_Y8___V8U8_N422R               = 66,
    T_Y8___U8V8_N420                = 67,
    T_Y8___V8U8_N420                = 68,
    T_Y8___U8___V8_N444             = 69,
    T_Y8___U8___V8_N422             = 70,
    T_Y8___U8___V8_N422R            = 71,
    T_Y8___U8___V8_N420             = 72,
    T_U8                            = 73,
    T_V8                            = 74,
    T_Y10___U10V10_N444             = 75,
    T_Y10___V10U10_N444             = 76,
    T_Y10___U10V10_N422             = 77,
    T_Y10___V10U10_N422             = 78,
    T_Y10___U10V10_N422R            = 79,
    T_Y10___V10U10_N422R            = 80,
    T_Y10___U10V10_N420             = 81,
    T_Y10___V10U10_N420             = 82,
    T_Y10___U10___V10_N444          = 83,
    T_Y10___U10___V10_N422          = 84,
    T_Y10___U10___V10_N422R         = 85,
    T_Y10___U10___V10_N420          = 86,
    T_U10                           = 87,
    T_V10                           = 88,
    T_L10                           = 89,
    T_U10V10                        = 90,
    T_V10U10                        = 91,
    T_Y12___U12V12_N444             = 92,
    T_Y12___V12U12_N444             = 93,
    T_Y12___U12V12_N422             = 94,
    T_Y12___V12U12_N422             = 95,
    T_Y12___U12V12_N422R            = 96,
    T_Y12___V12U12_N422R            = 97,
    T_Y12___U12V12_N420             = 98,
    T_Y12___V12U12_N420             = 99,
    T_Y12___U12___V12_N444          = 100,
    T_Y12___U12___V12_N422          = 101,
    T_Y12___U12___V12_N422R         = 102,
    T_Y12___U12___V12_N420          = 103,
    T_U12                           = 104,
    T_V12                           = 105,
    T_L12                           = 106,
    T_U12V12                        = 107,
    T_V12U12                        = 108,
    T_L16                           = 109,
    T_A16B16G16R16                  = 110,
    T_A16Y16U16V16                  = 111
} PIXELFORMAT;

typedef enum _BLK_KIND {
    BLK_KIND_PITCH                  = 0,
    BLK_KIND_GENERIC_16Bx2          = 1,
    BLK_KIND_BL_NAIVE               = 2,
    BLK_KIND_BL_KEPLER_XBAR_RAW     = 3,
    BLK_KIND_VP2_TILED              = 15
} BLK_KIND;

typedef enum _GAMMA_MODE {
    GAMMA_MODE_NONE                 = 0,
    GAMMA_MODE_SRGB                 = 1,
    GAMMA_MODE_REC709               = 2,
    GAMMA_MODE_REC2020              = 3
} GAMMA_MODE;

typedef enum _BLEND_SRCFACTC {
    BLEND_SRCFACTC_K1               = 0,
    BLEND_SRCFACTC_K1_TIMES_DST     = 1,
    BLEND_SRCFACTC_NEG_K1_TIMES_DST = 2,
    BLEND_SRCFACTC_K1_TIMES_SRC     = 3,
    BLEND_SRCFACTC_ZERO             = 4
} BLEND_SRCFACTC;

typedef enum _BLEND_DSTFACTC {
    BLEND_DSTFACTC_K1               = 0,
    BLEND_DSTFACTC_K2               = 1,
    BLEND_DSTFACTC_K1_TIMES_DST     = 2,
    BLEND_DSTFACTC_NEG_K1_TIMES_DST = 3,
    BLEND_DSTFACTC_NEG_K1_TIMES_SRC = 4,
    BLEND_DSTFACTC_ZERO             = 5,
    BLEND_DSTFACTC_ONE              = 6
} BLEND_DSTFACTC;

typedef enum _BLEND_SRCFACTA {
    BLEND_SRCFACTA_K1               = 0,
    BLEND_SRCFACTA_K2               = 1,
    BLEND_SRCFACTA_NEG_K1_TIMES_DST = 2,
    BLEND_SRCFACTA_ZERO             = 3,
    BLEND_SRCFACTA_MAX              = 7
} BLEND_SRCFACTA;

typedef enum _BLEND_DSTFACTA {
    BLEND_DSTFACTA_K2               = 0,
    BLEND_DSTFACTA_NEG_K1_TIMES_SRC = 1,
    BLEND_DSTFACTA_ZERO             = 2,
    BLEND_DSTFACTA_ONE              = 3,
    BLEND_DSTFACTA_MAX              = 7
} BLEND_DSTFACTA;

typedef enum _BLEND_CKMODE {
    BLEND_CKMODE_DISABLED           = 0,
    BLEND_CKMODE_ENABLED            = 1
} BLEND_CKMODE;

typedef enum _STEREO_INTERLEAVE {
    STEREO_INTERLEAVE_NONE          = 0,
    STEREO_INTERLEAVE_EVEN_COLUMN   = 1,
    STEREO_INTERLEAVE_ODD_COLUMN    = 2
} STEREO_INTERLEAVE;

typedef enum _PLANE_ID {
    PLANE_ID_LUMA                   = 0,
    PLANE_ID_CHROMA                 = 1,
    PLANE_ID_CHROMA_U               = 1,
    PLANE_ID_CHROMA_V               = 2
} PLANE_ID;

typedef enum _BL_MODE {
    BL_MODE_PREPROCESS              = 0,
    BL_MODE_CC_DATA                 = 1,
    BL_MODE_MOTION_LUMA             = 2,
    BL_MODE_MOTION_CHROMA_U         = 3,
    BL_MODE_MOTION_CHROMA_V         = 4
} BL_MODE;

typedef enum _BL_SURFACE {
    BL_SURFACE_TARGET_LUMA          = 0,
    BL_SURFACE_TARGET_CHROMA_U      = 1,
    BL_SURFACE_TARGET_CHROMA_V      = 2,
    BL_SURFACE_NOISE_LUMA           = 3,
    BL_SURFACE_NOISE_CHROMA_U       = 4,
    BL_SURFACE_NOISE_CHROMA_V       = 5,
    BL_SURFACE_MOTION_LUMA          = 6,
    BL_SURFACE_MOTION_CHROMA_U      = 7,
    BL_SURFACE_MOTION_CHROMA_V      = 8,
    BL_SURFACE_COMB_MOTION_LUMA     = 9,
    BL_SURFACE_COMB_MOTION_CHROMA_U = 10,
    BL_SURFACE_COMB_MOTION_CHROMA_V = 11
} BL_SURFACE;

typedef enum _MOTION_DATA {
    MOTION_DATA_NR                  = 0,
    MOTION_DATA_MOTION              = 1,
    MOTION_DATA_COMB_MOTION         = 2,
    MOTION_DATA_COMB_MOTION_INT_CHROMA                                      = 3
} MOTION_DATA;

typedef enum _FC_BASE_ID {
    FC_BASE_ID_TOP_LUMA             = 0,
    FC_BASE_ID_TOP_CHROMA_U         = 1,
    FC_BASE_ID_TOP_CHROMA_V         = 2,
    FC_BASE_ID_BOTTOM_LUMA          = 3,
    FC_BASE_ID_BOTTOM_CHROMA_U      = 4,
    FC_BASE_ID_BOTTOM_CHROMA_V      = 5,
    FC_BASE_ID_PREV_TOP_LUMA        = 6,
    FC_BASE_ID_PREV_TOP_CHROMA_U    = 7,
    FC_BASE_ID_PREV_TOP_CHROMA_V    = 8,
    FC_BASE_ID_PREV_BOTTOM_LUMA     = 9,
    FC_BASE_ID_PREV_BOTTOM_CHROMA_U = 10,
    FC_BASE_ID_PREV_BOTTOM_CHROMA_V = 11,
    FC_BASE_ID_CUR_FLD_LUMA         = 0,
    FC_BASE_ID_CUR_FLD_CHROMA_U     = 1,
    FC_BASE_ID_CUR_FLD_CHROMA_V     = 2,
    FC_BASE_ID_BWD_REF_LUMA         = 3,
    FC_BASE_ID_BWD_REF_CHROMA_U     = 4,
    FC_BASE_ID_BWD_REF_CHROMA_V     = 5,
    FC_BASE_ID_FWD_REF_LUMA         = 6,
    FC_BASE_ID_FWD_REF_CHROMA_U     = 7,
    FC_BASE_ID_FWD_REF_CHROMA_V     = 8,
    FC_BASE_ID_NR_FWD_REF_LUMA      = 9,
    FC_BASE_ID_NR_FWD_REF_CHROMA_U  = 10,
    FC_BASE_ID_NR_FWD_REF_CHROMA_V  = 11,
    FC_BASE_ID_CUR_MOTION_LUMA      = 12,
    FC_BASE_ID_CUR_MOTION_CHROMA_U  = 13,
    FC_BASE_ID_CUR_MOTION_CHROMA_V  = 14,
    FC_BASE_ID_PREV_MOTION_LUMA     = 15,
    FC_BASE_ID_PREV_MOTION_CHROMA_U = 16,
    FC_BASE_ID_PREV_MOTION_CHROMA_V = 17,
    FC_BASE_ID_PREVPREV_MOTION_LUMA = 18,
    FC_BASE_ID_PREVPREV_MOTION_CHROMA_U                                     = 19,
    FC_BASE_ID_PREVPREV_MOTION_CHROMA_V                                     = 20,
    FC_BASE_ID_COMB_MOTION_LUMA                                             = 21,
    FC_BASE_ID_COMB_MOTION_CHROMA_U                                         = 22,
    FC_BASE_ID_COMB_MOTION_CHROMA_V                                         = 23
} FC_BASE_ID;

typedef enum _SC_TARGET {
    SC_TARGET_COMPOSE               = 0,
    SC_TARGET_TN                    = 1,
    SC_TARGET_CD                    = 2,
    SC_TARGET_TN_CD                 = 3,
    SC_TARGET_COMB_MOTION           = 4,
    SC_TARGET_NULL_REQUEST          = 7
} SC_TARGET;

typedef enum _COMPRESSION_KIND {
    COMPRESSION_KIND_2CRA           = 0,
    COMPRESSION_KIND_BRA            = 1,
    COMPRESSION_KIND_MAX            = 15
} COMPRESSION_KIND;

#ifdef __cplusplus
} //namespace compositorConfig
#endif
#endif //_COMPOSITOR_ENUMS_H_
