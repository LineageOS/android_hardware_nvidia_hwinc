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
 * \file nvboot_crypto_signature.h
 *
 * Defines the structure to hold the various possible types of
 * cryptographic signatures supported by the Boot ROM.
 *
 */
#ifndef NVBOOT_CRYPTO_SIGNATURE_H
#define NVBOOT_CRYPTO_SIGNATURE_H



/**
 *  union to store all ECC signatures
 */
 typedef union NvBootEccSignaturesRec
 {
     NvBootEcdsaSig EcdsaSig;
     NvBootEdDsaSignature EdDsaSig; // EdDsa signature is a compressed point 32 bytes
 } NvBootEccSignatures;
/**
 * \brief           Crypto signature structure.
 *
 * \note Force AES block alignment for all members. This matters
 *       where signatures are sometimes contained in signed sections
 *       (like in the case where BootLoader signatures are inside the
 *       BCT). Sha256 Digest and RSASSA-PSS signatures are inherently
 *       16-byte aligned so the attribute isn't necessary. However,
 *       making it explicit doesn't hurt.
 */
typedef struct NvBootCryptoSignaturesRec
{
    DECLARE_ALIGNED(uint8_t Digest[32], NVBOOT_CRYPTO_BUFFER_ALIGNMENT); //SHA-256 hash
    DECLARE_ALIGNED(NvBootCryptoRsaSsaPssSig RsaSsaPssSig, NVBOOT_CRYPTO_BUFFER_ALIGNMENT);
    DECLARE_ALIGNED(NvBootEccSignatures EccSig, NVBOOT_CRYPTO_BUFFER_ALIGNMENT);
} NvBootCryptoSignatures;

#endif
