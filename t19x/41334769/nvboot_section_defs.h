/*
 * Copyright (c) 2014 NVIDIA Corporation.  All rights reserved.
 * 
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software and related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

#ifndef INCLUDED_NVBOOT_SECTION_DEFS_H
#define INCLUDED_NVBOOT_SECTION_DEFS_H

#if defined(__cplusplus)
extern "C"
{
#endif

#if defined (_MSC_VER)
#define FT_NONSECURE
#else
#define FT_NONSECURE __attribute__((section(".text.nonsecure")))
#define VT_NONSECURE __attribute__((section(".rodata.nonsecure")))
#endif

/* Make function stay close to reset vector
 */
#define FT_BOOTVEC __attribute__((section(".text.boot")))

/* Used by UART */
#define FT_UART __attribute__((section(".text.uart")))

/* Used by NvBootInfoTable */
#define VT_MAINBIT __attribute__((section(".MainBIT")))

/* Used by NvBootConfigTable*/
#define VT_MAINBCT __attribute__((section(".MainBCT")))


/**
 *   Use for all non zero initialized buffers in BTCM. 
 *   1. This saves space by not being part of bootrom
 *   2. Saves time during c runtime init.
 */
#define VT_NOZI __attribute__((section(".nozi.data")))

/**
 *   Use for uninitialized data in SysRAM 
 *   No guarantees that this data in this section will be
 *   preserved after BR exit.
 */
#define VT_SYSRAM __attribute__((section(".noinit.sysram")))

/*  Use for uninitialized data in SysRAM that must be
 *  preserved after BR exit.
 */
#define VT_SYSRAM_PRESERVED __attribute__((section(".noinit.sysram_preserved")))

/**
 *  Used for forcing irom keys to 184K in ROM space
 */
#define VT_IROM_KEYS __attribute__((section(".keys")))

/**
 *  Reserving space in BOOTROM code region for precomputed values.
 */
#define VT_MONT_PRECOMP __attribute__((section(".mont_precomp")))

/**
 *   Use this tag for getting buffers in unimplemented / reserved
 *   SYSRAM address space. Useful for mapping virtual / slave
 *   addresses with AST to master / physical addresses.
 */
#define VT_VIRTUAL_ADDRESS __attribute__((section(".noinit.sysram_c")))

#if defined(__cplusplus)
}
#endif

#endif // INCLUDED_NVBOOT_SECTION_DEFS_H

