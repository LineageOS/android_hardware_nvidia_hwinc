/*
 * Copyright (c) 2015 NVIDIA Corporation.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software and related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

/**
 * Defines the parameters and data structure for UFS controller.
 */

#ifndef INCLUDED_NVBOOT_UFS_PARAM_H
#define INCLUDED_NVBOOT_UFS_PARAM_H

#if defined(__cplusplus)
extern "C"
{
#endif

/// Defines the parameters that can be changed after BCT is read.
typedef struct NvBootUfsParamsRec
{
    /// Supported Gears PWM G1 ~ G4
    NvS32 UfsConfig;

} NvBootUfsParams;

#if defined(__cplusplus)
}
#endif

#endif /* #ifndef INCLUDED_NVBOOT_UFS_PARAM_H */
