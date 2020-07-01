/*
 * Copyright (c) 2014 NVIDIA Corporation.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software and related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

#ifndef INCLUDED_NVBOOT_CRYPTO_RSA_PARAM_H
#define INCLUDED_NVBOOT_CRYPTO_RSA_PARAM_H

#include "arse0.h"
#include "nvboot_se_rsa.h"

#if defined(__cplusplus)
extern "C"
{
#endif

#if defined (_MSC_VER)
#define DECLARE_ALIGNED(var, n) __declspec(align(n)) var
#elif defined __GNUC__
#define DECLARE_ALIGNED(var, n) var __attribute__((aligned(n)))
#endif

typedef enum
{
    RsaKey2048,
    RsaKey3072,

    RSA_KEY_2048 = 2048,
    RSA_KEY_3072 = 3072,

    RSA_KEY_INVALID,
} NvBootCryptoRsaKeySize;

//TODO: change to NVBOOT_CRYPTO_*

enum {NVBOOT_RSA_2048_MODULUS_SIZE_BYTES = 2048 / 8};

enum {NVBOOT_RSA_2048_EXPONENT_SIZE_BYTES = 2048 / 8};

enum {NVBOOT_RSA_2048_MODULUS_SIZE_WORDS = 2048 / 8 / 4};

enum {NVBOOT_RSA_2048_EXPONENT_SIZE_WORDS = 2048 / 8 / 4};

enum {NVBOOT_RSA_3072_MODULUS_SIZE_BYTES = 3072 / 8};

enum {NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES = 3072 / 8};

enum {NVBOOT_RSA_3072_MODULUS_SIZE_WORDS = 3072 / 8 / 4};

enum {NVBOOT_RSA_3072_EXPONENT_SIZE_WORDS = 3072 / 8 / 4};

enum {NVBOOT_RSA_MAX_MODULUS_SIZE_BYTES = NVBOOT_RSA_3072_MODULUS_SIZE_BYTES};

enum {NVBOOT_RSA_MAX_EXPONENT_SIZE_BYTES = NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES};

enum {NVBOOT_RSA_MAX_MODULUS_SIZE_WORDS = NVBOOT_RSA_3072_MODULUS_SIZE_WORDS};

enum {NVBOOT_RSA_MAX_EXPONENT_SIZE_WORDS = NVBOOT_RSA_3072_EXPONENT_SIZE_WORDS};

enum {NVBOOT_RSA_MAX_MODULUS_SIZE_BITS = NVBOOT_RSA_3072_MODULUS_SIZE_WORDS * 8 * 4};

enum {NVBOOT_RSA_MAX_EXPONENT_SIZE_BITS = NVBOOT_RSA_3072_EXPONENT_SIZE_WORDS * 8 * 4};

enum {NVBOOT_RSA_PSS_SIGNATURE_DEFAULT_SIZE_BYTES = NVBOOT_RSA_MAX_MODULUS_SIZE_BYTES};

enum {NVBOOT_RSA_PSS_SIGNATURE_DEFAULT_SIZE_WORDS = NVBOOT_RSA_MAX_MODULUS_SIZE_WORDS};

enum {NVBOOT_RSA_PSS_SIGNATURE_DEFAULT_HASH_ALGORITHM = SE_MODE_PKT_SHAMODE_SHA256};

enum {NVBOOT_RSA_PSS_SIGNATURE_DEFAULT_SLEN = ARSE_SHA256_HASH_SIZE / 8};

enum {NVBOOT_RSA_DEFAULT_PUBLIC_EXPONENT = 0x10001};

enum {NVBOOT_CRYPTO_NV_RSA_DEFAULT_PLATFORM_KEY_SIZE = NVBOOT_RSA_3072_MODULUS_SIZE_BYTES};

/**
 * Defines the length of the RSASSA-PSS salt length (sLen) to use for RSASSA-PSS
 *  signature verifications
 */
enum {NVBOOT_RSA_PSS_SALT_LENGTH_BITS = ARSE_SHA256_HASH_SIZE};
enum {NVBOOT_RSA_PSS_SALT_LENGTH_BYTES = NVBOOT_RSA_PSS_SALT_LENGTH_BITS / 8};


/*
 *  Defines the storage for an 2048-bit RSA key to be used by the SE.
 *  The SE expects Key inputs to be word aligned.
 */
typedef struct NvBootCryptoRsaKey2048NvU8Rec
{
    // The modulus size is 2048-bits.
    DECLARE_ALIGNED(NvU8 Modulus[NVBOOT_RSA_2048_MODULUS_SIZE_BYTES], 4);
    // The exponent size is 2048-bits.
    DECLARE_ALIGNED(NvU8 Exponent[NVBOOT_RSA_2048_EXPONENT_SIZE_BYTES], 4);
} NvBootCryptoRsaKey2048NvU8;

/*
 *  Defines the storage for an 2048-bit RSA key to be used by the BR.
 *  The SE expects Key inputs to be word aligned.
 */
typedef struct NvBootCryptoRsaKey2048NvU32Rec
{
    // The modulus size is 2048-bits.
    DECLARE_ALIGNED(NvU32 Modulus[NVBOOT_RSA_2048_MODULUS_SIZE_WORDS], 4);
    // The exponent size is 2048-bits.
    DECLARE_ALIGNED(NvU32 Exponent[NVBOOT_RSA_2048_EXPONENT_SIZE_WORDS], 4);
} NvBootCryptoRsaKey2048NvU32;

/*
 *  Defines the storage for an 3072-bit RSA key.
 *  The SE expects Key inputs to be word aligned.
 */
typedef struct NvBootCryptoRsaKey3072NvU8Rec
{
    // The modulus size is 3072-bits.
    DECLARE_ALIGNED(NvU8 Modulus[NVBOOT_RSA_3072_MODULUS_SIZE_BYTES], 4);
    // The exponent size is 3027-bits.
    DECLARE_ALIGNED(NvU8 Exponent[NVBOOT_RSA_3072_EXPONENT_SIZE_BYTES], 4);
} NvBootCryptoRsaKey3072NvU8;

/*
 *  Defines the storage for an 3072-bit RSA key.
 *  The SE expects Key inputs to be word aligned.
 */
typedef struct NvBootCryptoRsaKey3072NvU32Rec
{
    // The modulus size is 3072-bits.
    DECLARE_ALIGNED(NvU32 Modulus[NVBOOT_RSA_3072_MODULUS_SIZE_WORDS], 4);
    // The exponent size is 3072-bits.
    DECLARE_ALIGNED(NvU32 Exponent[NVBOOT_RSA_3072_EXPONENT_SIZE_WORDS], 4);
} NvBootCryptoRsaKey3072NvU32;

/*
 *  Defines the storage for the largest RSA key to be used by the BR. For T210/T210_B01/T186,
 *  this is 2048-bits. For T19x, this is 3072-bits.
 *  Note: The SE can only use keys of 2048-bits. The PKA can accept 3072-bit keys.
 *  The SE expects Key inputs to be word aligned.
 */
typedef struct NvBootCryptoRsaKeyMaxSizeNvU8Rec
{
    // The max modulus size depends on the chip.
    DECLARE_ALIGNED(NvU8 Modulus[NVBOOT_RSA_MAX_MODULUS_SIZE_BYTES], 4);
    // The max exponent size depends on the chip.
    DECLARE_ALIGNED(NvU8 Exponent[NVBOOT_RSA_MAX_EXPONENT_SIZE_BYTES], 4);
} NvBootCryptoRsaKeyMaxSizeNvU8;

/*
 *  Defines the storage for the largest RSA key to be used by the BR. For T210/T210_B01/T186,
 *  this is 2048-bits. For T19x, this is 3072-bits.
 *  Note: The SE can only use keys of 2048-bits. The PKA can accept 3072-bit keys.
 *  The SE expects Key inputs to be word aligned.
 */
typedef struct NvBootCryptoRsaKeyMaxSizeNvU32Rec
{
    // The max modulus size depends on the chip.
    DECLARE_ALIGNED(NvU32 Modulus[NVBOOT_RSA_MAX_MODULUS_SIZE_WORDS], 4);
    // The max exponent size depends on the chip.
    DECLARE_ALIGNED(NvU32 Exponent[NVBOOT_RSA_MAX_EXPONENT_SIZE_WORDS], 4);
} NvBootCryptoRsaKeyMaxSizeNvU32;

/*
 *  Defines the storage for the largest RSA key that can be used by the SE
 *  RSA engine, currently 2048-bits.
 *  The SE expects Key inputs to be word aligned.
 */
typedef struct NvBootCryptoRsaKeyMaxSizeSe0NvU32Rec
{
    // The modulus size is 2048-bits.
    DECLARE_ALIGNED(NvU32 Modulus[NVBOOT_SE_RSA_MAX_MODULUS_SIZE_WORDS], 4);
    // The exponent size is 2048-bits.
    DECLARE_ALIGNED(NvU32 Exponent[NVBOOT_SE_RSA_MAX_EXPONENT_SIZE_WORDS], 4);
} NvBootCryptoRsaKeyMaxSizeSe0NvU32;

/*
 *  Defines the storage for the largest RSA key that can be used by the SE
 *  RSA engine, currently 2048-bits. Byte addressable struct.
 *  The SE expects Key inputs to be word aligned.
 */
typedef struct NvBootCryptoRsaKeyMaxSizeSe0NvU8Rec
{
    // The modulus size is 2048-bits.
    DECLARE_ALIGNED(NvU8 Modulus[NVBOOT_SE_RSA_MAX_MODULUS_SIZE_BYTES], 4);
    // The exponent size is 2048-bits.
    DECLARE_ALIGNED(NvU8 Exponent[NVBOOT_SE_RSA_MAX_EXPONENT_SIZE_BYTES], 4);
} NvBootCryptoRsaKeyMaxSizeSe0NvU8;


/*
 *  Defines the storage for the largest RSA key that can be used by the PKA1
 *  RSA engine, currently 3072-bits.
 *  The SE expects Key inputs to be word aligned.
 */
typedef struct NvBootCryptoRsaKeyMaxSizePka1NvU32Rec
{
    // The modulus size is 3072-bits.
    DECLARE_ALIGNED(NvU32 Modulus[NVBOOT_RSA_MAX_MODULUS_SIZE_WORDS], 4);
    // The exponent size is 3072-bits.
    DECLARE_ALIGNED(NvU32 Exponent[NVBOOT_RSA_MAX_EXPONENT_SIZE_WORDS], 4);
} NvBootCryptoRsaKeyMaxSizePka1NvU32;


/*
 *  Defines the storage for the largest RSA key that can be used
 *  by the BR, irrespective of HW engine. Currently 3072-bits.
 *  The SE expects Key inputs to be word aligned.
 */
typedef struct NvBootCryptoRsaKeyMaxSizeBRNvU32Rec
{
    // The modulus size is 3072-bits.
    DECLARE_ALIGNED(NvU32 Modulus[NVBOOT_RSA_MAX_MODULUS_SIZE_WORDS], 4);
    // The exponent size is 3072-bits.
    DECLARE_ALIGNED(NvU32 Exponent[NVBOOT_RSA_MAX_EXPONENT_SIZE_WORDS], 4);
} NvBootCryptoRsaKeyMaxSizeBRNvU32;


// typedef union NvBootRsaKeyDataRec
// {
    // NvBootCryptoRsaKey2048NvU8 RsaKey2048NvU8;
    // NvBootCryptoRsaKey2048NvU32 RsaKey2048NvU32;
    // NvBootCryptoRsaKeyMaxSizeNvU8 RsaKeyMaxSizeNvU8;
    // NvBootCryptoRsaKeyMaxSizeNvU32 RsaKeyMaxSizeNvU32;
    // NvBootCryptoRsaKeyMaxSizeSe0NvU8 RsaKeyMaxSizeSe0NvU8; // 2048-bits
    // NvBootCryptoRsaKeyMaxSizeSe0NvU32 RsaKeyMaxSizeSe0NvU32;
// } NvBootCryptoRsaKeyData;

typedef struct NvBootRsaKeyDataRec
{
    // The modulus size is 3072-bits.
    NvU32 Modulus[NVBOOT_RSA_MAX_MODULUS_SIZE_WORDS];
    // The exponent size is 3072-bits.
    NvU32 Exponent[NVBOOT_RSA_MAX_EXPONENT_SIZE_WORDS];
} NvBootCryptoRsaKeyData;

typedef struct NvBootCryptoRsaKeyRec
{
    NvBootCryptoRsaKeySize KeySize;
    NvBootCryptoRsaKeyData KeyData;
} NvBootCryptoRsaKey;


/**
 *  Yet another representation of the key that stores pointers to the key data.
 *  Used in cryptomgr and rsassa_pss modules.
 */
typedef struct RsaKeyDataRec
{
    // The modulus size is 3072-bits.
    uint32_t *Modulus;
    // The exponent size is 3072-bits.
    uint32_t *Exponent;
    // M'  is 3072-bits.
    uint32_t *Mprime;
    // R^2 mod M is 3072-bits.
    uint32_t *Rsquare;
} RsaKeyData;

typedef struct RsaKeyRec
{
    uint32_t KeySize;//bytes
    RsaKeyData KeyData;
} RsaKey;

/**
 *  Defines the storage for a full 2048-bit RSA key pair.
 *  The SE expects Key inputs to be word aligned.
 */
typedef struct NvBootCryptoFullRsa2048KeyPairRec
{
    DECLARE_ALIGNED(uint8_t Modulus[NVBOOT_RSA_2048_MODULUS_SIZE_BYTES], 4);
    DECLARE_ALIGNED(uint8_t Private_exponent_d[NVBOOT_RSA_2048_EXPONENT_SIZE_BYTES], 4);
    DECLARE_ALIGNED(uint8_t Public_exponent_e[NVBOOT_RSA_2048_EXPONENT_SIZE_BYTES], 4);
} NvBootCryptoFullRsa2048KeyPair;

/**
 * RSA related parameters, not NVIDIA specific.
 */
typedef struct NvBootCryptoRsaPublicParamsRec
{
    // RSA Public Key Modulus and Exponent
    // The modulus size is 3072-bits.
    uint32_t Modulus[NVBOOT_RSA_MAX_MODULUS_SIZE_WORDS];
    // Montgomery pre-computed values
    uint32_t Mprime[NVBOOT_RSA_MAX_MODULUS_SIZE_WORDS];
    uint32_t Rsquare[NVBOOT_RSA_MAX_MODULUS_SIZE_WORDS];
} NvBootCryptoRsaPublicParams;

typedef struct NvBootRsaParams
{
    NvBootCryptoRsaKeySize RsaKeySize;
    NvBootCryptoRsaPublicParams RsaPublicParams;
} NvBootRsaParams;

typedef struct NvBootCryptoRsaSsaPssSigNvU8Rec
{
    // The length of the signature is the same as the length of the key used
    // in bytes.
    DECLARE_ALIGNED(uint8_t RsaSsaPssSig[NVBOOT_RSA_MAX_MODULUS_SIZE_BYTES], 4);
} NvBootCryptoRsaSsaPssSigNvU8;

typedef struct NvBootCryptoRsaSsaPssSigNvU32Rec
{
    // The length of the signature is the same as the length of the key used
    // in bytes.
    DECLARE_ALIGNED(NvU32 RsaSsaPssSig[NVBOOT_RSA_MAX_MODULUS_SIZE_WORDS], 4);
} NvBootCryptoRsaSsaPssSigNvU32;

typedef struct NvBootCryptoRsaSsaPssSig
{
    NvU32 RsaSsaPssSig[NVBOOT_RSA_MAX_MODULUS_SIZE_WORDS];
} NvBootCryptoRsaSsaPssSig;

#if defined(__cplusplus)
}
#endif

#endif // INCLUDED_NVBOOT_CRYPTO_RSA_PARAM_H
