/*
 * Copyright (c) 2014 NVIDIA Corporation.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software and related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

/**
 * Defines the parameters and data structure for SATA devices.
 */

#ifndef INCLUDED_NVBOOT_SATA_PARAM_H
#define INCLUDED_NVBOOT_SATA_PARAM_H

#include "nvcommon.h"

#if defined(__cplusplus)
extern "C"
{
#endif


typedef enum
{
    /// Specifies Legacy mode
    NvBootSataMode_LegacyPio = 1,

    /// Specifies AHCI mode compliant with AHCI 1.3 spec
    NvBootSataMode_AhciDma,

    NvBootSataMode_Num,
    NvBootSataMode_Force32 = 0x7FFFFFF
} NvBootSataMode;


typedef enum
{
    /// Specifies SATA clock source to be PLLP.
    NvBootSataClockSource_PllPOut0 = 0,

    /// Specifies SATA clock source to be CLK M.
    NvBootSataClockSource_ClkM = 6,

    NvBootSataClockSource_Num,
    NvBootSataClockSource_Force32 = 0x7FFFFFF
} NvBootSataClockSource;


/**
 * Defines the parameters SATA devices.
 */
typedef struct NvBootSataParamsRec
{

    /**
     * Specifies the Config supported by driver.
     * Sata Config (0-3).
     */
    int8_t SataConfig;

} NvBootSataParams;

#if defined(__cplusplus)
}
#endif

#endif /* #ifndef INCLUDED_NVBOOT_SATA_PARAM_H */
