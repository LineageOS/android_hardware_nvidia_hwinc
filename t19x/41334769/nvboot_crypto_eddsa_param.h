/*
 * Copyright (c) 2017 NVIDIA Corporation.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software and related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

#ifndef INCLUDED_NVBOOT_CRYPTO_EDDSA_H
#define INCLUDED_NVBOOT_CRYPTO_EDDSA_H

#include "nvboot_util_int.h"

/**
 *  Compressed EDDSA point.
 *  Encoded points can be represented by b bits where 2b is the size of sha512. So b=256
 *  Encoded point for (x,y) is sign(x)|| y. sign(x) goes to MSB of encoded point in Little Endian.
 *  
 */
#define ED25519_POINT_SIZE_BITS  (256)
#define ED25519_POINT_SIZE_BYTES  (ED25519_POINT_SIZE_BITS>>3)
typedef struct
{
    uint8_t Pxy[ED25519_POINT_SIZE_BYTES];
} NvBootEdDsaPoint;

/**
 *  EdDsa signature is (R,S) where
 *  R: compressed point representing rB
 *     where r = Hash(Hb...H2b-1 || M)
 *     where Hb...H2b-1 = Upper half of Hash(priv_key_scalar)
 *     where 2b = 512
 *     where   B = Base point
 *     where M= message
 *  S: r+ Hash(R,A,M)s(mod l) 
 *     where A =  Public key (sB)
 *     where s = H0...Hb-1 (lower half of priv_key_scalar)
 *     where l = order of B subgroup (cofactor 2^c, #E(F)=2^c * l)
 */
typedef struct
{
    NvBootEdDsaPoint R;
    NvBootEdDsaPoint S;
}DECLARE_ALIGNED(NvBootEdDsaSignature, 4);




#endif
