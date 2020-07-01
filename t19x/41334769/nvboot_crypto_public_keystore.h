/*
 * Copyright (c) 2014 NVIDIA Corporation.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software and related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

#ifndef INCLUDED_NVBOOT_CRYPTO_PUBLIC_KEYSTORE_H
#define INCLUDED_NVBOOT_CRYPTO_PUBLIC_KEYSTORE_H

typedef struct NvSysRamPublicKeysRec
{
    NvU8 MTS[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES];
    NvU8 MTS_Debug[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES];
    NvU8 MB1[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES]; //this value is only valid for BR run time
    NvU8 MB1_Debug[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES]; //this value is only valid for BR run time
    NvU8 BPMP[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES];
    NvU8 APE[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES];
    NvU8 SPE[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES];
    NvU8 SCE[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES];
    NvU8 RCE[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES];
    NvU8 PVA[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES];
    NvU8 XUSB[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES];
    NvU8 IST[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES];
    NvU8 IST_Debug[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES];
} NvSysRamPublicKeys;

#endif //INCLUDED_NVBOOT_CRYPTO_PUBLIC_KEYSTORE_H
