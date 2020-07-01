/*
 * Copyright (c) 2006 - 2017 NVIDIA Corporation.  All Rights Reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */
#ifndef INCLUDED_NVCOMMON_H
#define INCLUDED_NVCOMMON_H

/**
 * @file
 * <b> NVIDIA Common Definitions</b>
 *
 * @b Description: This file contains standard definitions used by various
 *    interfaces.
 */

/// Include headers that provide NULL, size_t, offsetof, and [u]intptr_t.  In
/// the event that the toolchain doesn't provide these, provide them ourselves.
#include <stddef.h>
#if defined(__hos__) || (defined(__linux__) && !defined(__KERNEL__)) || defined(__arm) || defined(__APPLE__) || defined(__QNX__) || defined(__INTEGRITY)
#include <stdint.h>
#endif

#if defined(__cplusplus)
extern "C"
{
#endif

/**
 * @defgroup nvcommon Common Declarations
 *
 * Contains standard definitions used by various interfaces.
 *
 * @ingroup common_utils
 * @{
 */


/// OS-related defines.
#if defined(_WIN32) && !defined(NVOS_IS_WINDOWS)
  #define NVOS_IS_WINDOWS 1

#elif defined(__linux__)
  #if !defined(NVOS_IS_LINUX)
    #define NVOS_IS_LINUX 1
    #define NVOS_IS_UNIX 1
    #if defined(__KERNEL__)
      #error nvcommon.h no longer supports the Linux kernel
    #endif
  #endif
#elif defined(__QNX__) || defined(__QNXNTO__)
  #define NVOS_IS_UNIX 1
  #define NVOS_IS_QNX 1
#elif defined(__hos__)
  #define NVOS_IS_HOS 1
#elif defined(__INTEGRITY)
#define NVOS_IS_INTEGRITY 1
#elif defined(__arm__)  && defined(__ARM_EABI__)
    /* GCC arm eabi compiler, potentially used for kernel compilation without
     * __linux__, but also for straight EABI (AOS) executable builds */
#  if defined(__KERNEL__)
#    error nvcommon.h no longer supports the Linux kernel
#  endif
    /* Nothing to define for AOS */
#elif defined(__arm)
  /// For ARM RVDS compiler, we don't know the final target OS at compile time.
#elif defined(__APPLE__)
# define NVOS_IS_DARWIN 1
# define NVOS_IS_UNIX 1
#else
  #error Unknown OS
#endif

#if !defined(NVOS_IS_WINDOWS)
#define NVOS_IS_WINDOWS 0
#endif

#if !defined(NVOS_IS_LINUX)
#define NVOS_IS_LINUX 0
#endif
#if !defined(NVOS_IS_UNIX)
#define NVOS_IS_UNIX 0
#endif
#if !defined(NVOS_IS_INTEGRITY)
#define NVOS_IS_INTEGRITY 0
#endif
#if !defined(NVOS_IS_LINUX_KERNEL)
#define NVOS_IS_LINUX_KERNEL 0
#endif
#if !defined(NVOS_IS_QNX)
#define NVOS_IS_QNX 0
#endif
#if !defined(NVOS_IS_HOS)
#define NVOS_IS_HOS 0
#endif

/// CPU-related defines.
#if defined(_M_IX86) || defined(__i386__) || defined(__x86_64__)
#define NVCPU_IS_X86 1 // any 32-bit or 64-bit x86 system
#define NVCPU_MIN_PAGE_SHIFT 12
#elif defined(_M_ARM) || defined(__arm__)
#define NVCPU_IS_ARM 1
#define NVCPU_MIN_PAGE_SHIFT 12
#elif defined(__aarch64__) || defined(__ARM64__)
#define NVCPU_IS_AARCH64 1
#define NVCPU_MIN_PAGE_SHIFT 12
#else
#error Unknown CPU
#endif
#if !defined(NVCPU_IS_X86)
#define NVCPU_IS_X86 0
#endif
#if !defined(NVCPU_IS_ARM)
#define NVCPU_IS_ARM 0
#endif
#if !defined(NVCPU_IS_AARCH64)
#define NVCPU_IS_AARCH64 0
#endif

#if (NVCPU_IS_X86 && NVOS_IS_WINDOWS)
#define NVOS_IS_WINDOWS_X86 1
#else
#define NVOS_IS_WINDOWS_X86 0
#endif

#if (NVCPU_IS_ARM || NVCPU_IS_AARCH64)
#define NVCPU_IS_FAMILY_ARM 1
#else
#define NVCPU_IS_FAMILY_ARM 0
#endif
/// The minimum page size can be determined from the minimum page shift.
#define NVCPU_MIN_PAGE_SIZE (1 << NVCPU_MIN_PAGE_SHIFT)

/// We don't currently support any big-endian CPUs.
#define NVCPU_IS_BIG_ENDIAN 0

/// Detect whether the system is 64-bit.
#if defined(__x86_64__) || NVCPU_IS_AARCH64
#define NVCPU_IS_64_BITS 1
#else
#define NVCPU_IS_64_BITS 0
#endif

/// Explicitly sized signed and unsigned ints.
typedef unsigned char      NvU8;  /**< 0 to 255 */
typedef unsigned short     NvU16; /**< 0 to 65535 */
typedef unsigned int       NvU32; /**< 0 to 4294967295 */
typedef unsigned long long NvU64; /**< 0 to 18446744073709551615 */
typedef signed char        NvS8;  /**< -128 to 127 */
typedef signed short       NvS16; /**< -32768 to 32767 */
typedef signed int         NvS32; /**< -2147483648 to 2147483647 */
typedef signed long long   NvS64; /**< 2^-63 to 2^63-1 */

/// Explicitly sized floats.
typedef float              NvF32; /**< IEEE Single Precision (S1E8M23) */
typedef double             NvF64; /**< IEEE Double Precision (S1E11M52) */

/// Min/Max values for NvF32
#define NV_MIN_F32  (1.1754944e-38f)
#define NV_MAX_F32  (3.4028234e+38f)

/* Explanation of the current form of these limits:
 *
 * - Decimal is used, as hex values are by default positive.
 * - Casts are not used, as usage in the preprocessor itself (#if) ends poorly.
 * - The subtraction of 1 for some MIN values is used to get around the fact
 *   that the C syntax actually treats -x as NEGATE(x) instead of a distinct
 *   number.  Since 214748648 isn't a valid positive 32-bit signed value, we
 *   take the largest valid positive signed number, negate it, and subtract 1.
 */
#define NV_S8_MIN       (-128)
#define NV_S8_MAX       (+127)
#define NV_U8_MIN       (0U)
#define NV_U8_MAX       (+255U)
#define NV_S16_MIN      (-32768)
#define NV_S16_MAX      (+32767)
#define NV_U16_MIN      (0U)
#define NV_U16_MAX      (+65535U)
#define NV_S32_MIN      (-2147483647 - 1)
#define NV_S32_MAX      (+2147483647)
#define NV_U32_MIN      (0U)
#define NV_U32_MAX      (+4294967295U)
#define NV_S64_MIN      (-9223372036854775807LL - 1LL)
#define NV_S64_MAX      (+9223372036854775807LL)
#define NV_U64_MIN      (0ULL)
#define NV_U64_MAX      (+18446744073709551615ULL)

/// Boolean type
#ifndef NV_TRUE
typedef NvU8 NvBool;
#define NV_TRUE           ((NvBool)(0 == 0))
#define NV_FALSE          ((NvBool)(0 != 0))
#endif

/// Pointer-sized signed and unsigned ints
#if NVCPU_IS_64_BITS
typedef NvU64 NvUPtr;
typedef NvS64 NvSPtr;
#else
typedef NvU32 NvUPtr;
typedef NvS32 NvSPtr;
#endif

/// Declare a 64-bit aligned pointer
#if defined(__GNUC__)
#define NV_ALIGN_POINTER_NAME(f) f##Align
#define NV_ALIGN_POINTER(t, f)                  \
    union {                                     \
        t f;                                    \
        NvU64 NV_ALIGN_POINTER_NAME(f);         \
    }
#else
/* rvds builds don't support anonymous unions but also don't need
 * 64-bit alignment.
 */
#define NV_ALIGN_POINTER(t, f) t f
#endif
/// Function attributes are lumped in here too.
/// INLINE - Make the function inline.
/// NAKED - Create a function without a prologue or an epilogue.
#if NVOS_IS_WINDOWS

#define NV_INLINE __inline
#define NV_FORCE_INLINE __forceinline
#define NV_NAKED __declspec(naked)
#define NV_LIKELY(c)   (c)
#define NV_UNLIKELY(c) (c)
#define NV_UNUSED

#ifdef _MSC_VER
#define __func__ __FUNCTION__
#endif

#elif defined(__ghs__) // GHS COMP
#define NV_INLINE inline
#define NV_FORCE_INLINE inline
#define NV_NAKED
#define NV_LIKELY(c)   (c)
#define NV_UNLIKELY(c) (c)
#define NV_UNUSED __attribute__((unused))

#elif defined(__GNUC__)
#define NV_INLINE __inline__
#define NV_FORCE_INLINE __attribute__((always_inline)) __inline__
#define NV_NAKED __attribute__((naked))
#define NV_LIKELY(c)   __builtin_expect((c),1)
#define NV_UNLIKELY(c) __builtin_expect((c),0)
#define NV_UNUSED __attribute__((unused))

#elif defined(__arm) // ARM RVDS compiler
#define NV_INLINE __inline
#define NV_FORCE_INLINE __forceinline
#define NV_NAKED __asm
#define NV_LIKELY(c)   (c)
#define NV_UNLIKELY(c) (c)
#define NV_UNUSED

#else
#error Unknown compiler
#endif

/// Symbol attributes.
/// ALIGN - Variable declaration to a particular # of bytes (should always be a
///         power of two)
/// WEAK  - Define the symbol weakly so it can be overridden by the user.
#if NVOS_IS_WINDOWS
#define NV_ALIGN(size) __declspec(align(size))
#define NV_WEAK
#elif defined(__ghs__)
#define NV_ALIGN(size) __align(size)
#define NV_WEAK __attribute__((weak))
#elif defined(__GNUC__)
#define NV_ALIGN(size) __attribute__ ((aligned (size)))
#define NV_WEAK __attribute__((weak))
#elif defined(__arm)
#define NV_ALIGN(size) __align(size)
#define NV_WEAK __weak
#else
#error Unknown compiler
#endif

/**
 * This macro wraps its argument with the equivalent of "#if NV_DEBUG", but
 * also can be used where "#ifdef"'s can't, like inside a macro.
 */
#if NV_DEBUG
#define NV_DEBUG_CODE(x) x
#else
#define NV_DEBUG_CODE(x)
#endif

/** Macro for determining the size of an array */
#define NV_ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

/** Macro for taking min or max of a pair of numbers */
#ifndef NV_MIN
#define NV_MIN(a,b) (((a) < (b)) ? (a) : (b))
#endif
#ifndef NV_MAX
#define NV_MAX(a,b) (((a) > (b)) ? (a) : (b))
#endif

/** Macro for determining offset of element e in struct s */
#define NV_OFFSETOF(s,e)        ((NvUPtr)(&(((s*)0)->e)))

/** Macro for determining sizeof an element e in struct s */
#define NV_SIZEOF(s,e)          (sizeof(((s*)0)->e))

/** Get just the lowest bit of the 32 bit number */
#define NV_LOWEST_BIT_ONLY(v)   ((NvU32)(v) & (NvU32)-(NvS32)(v))

/** True if unsigned int v is a power of 2 */
#define NV_IS_POWER_OF_2(v)     (NV_LOWEST_BIT_ONLY(v) == (NvU32)(v))

/**
 * By convention, we use this value to represent an infinite wait interval in
 * APIs that expect a timeout argument.  A value of zero should not be
 * interpreted as infinite -- it should be interpreted as "time out immediately
 * and simply check whether the event has already happened."
 */
#define NV_WAIT_INFINITE 0xFFFFFFFF

/// Macro to help with MSVC Code Analysis false positives
#if defined(_PREFAST_)
#define NV_ANALYSIS_ASSUME(x) __analysis_assume(x)
#else
#define NV_ANALYSIS_ASSUME(x)
#endif

/**
 * Performs the 64-bit division and returns the quotient.
 *
 * If the divisor is 0, returns 0.
 *
 * It is not guaranteed to have 64-bit divide on all the platforms. So,
 * portable code should call this function instead of using / % operators on
 * 64-bit variables.
 */
static NV_FORCE_INLINE  NvU64
NvDiv64Inline(NvU64 dividend, NvU32 divisor)
{
    if (!divisor) return 0;
    return dividend / divisor;
}

#define NvDiv64(dividend, divisor) NvDiv64Inline(dividend, divisor)

/**
 * Union that can be used to view a 32-bit word as your choice of a 32-bit
 * unsigned integer, a 32-bit signed integer, or an IEEE single-precision
 * float.  Here is an example of how you might use it to extract the (integer)
 * bitwise representation of a floating-point number:
 *   NvData32 data;
 *   data.f = 1.0f;
 *   printf("%x", data.u);
 */
typedef union NvData32Rec
{
    NvU32 u;
    NvS32 i;
    NvF32 f;
} NvData32;

/**
 * This structure is used to determine a location on a 2-dimensional object,
 * where the coordinate (0,0) is located at the top-left of the object.  The
 * values of x and y are in pixels.
 */
typedef struct NvPointRec
{
    /** horizontal location of the point */
    NvS32 x;

    /** vertical location of the point */
    NvS32 y;
} NvPoint;

typedef struct NvPointF32Rec
{
    /** horizontal location of the point */
    NvF32 x;

    /** vertical location of the point */
    NvF32 y;
} NvPointF32;
/**
 * This structure is used to define a 2-dimensional rectangle where the
 * rectangle is bottom right exclusive (that is, the right most column, and the
 * bottom row of the rectangle is not included).
 */
typedef struct NvRectRec
{
    /** left column of a rectangle */
    NvS32 left;

    /** top row of a rectangle*/
    NvS32 top;

    /** right column of a rectangle */
    NvS32 right;

    /** bottom row of a rectangle */
    NvS32 bottom;
} NvRect;

/**
 * This structure is used to define a 2-dimensional rectangle
 * relative to some containing rectangle.
 * Rectangle coordinates are normalized to [-1.0...+1.0] range
 */
typedef struct NvRectF32Rec
{
    NvF32 left;
    NvF32 top;
    NvF32 right;
    NvF32 bottom;
} NvRectF32;

/**
 * This structure is used to define a 2-dimensional surface where the surface is
 * determined by it's height and width in pixels.
 */
typedef struct NvSizeRec
{
    /* width of the surface in pixels */
    NvS32 width;

    /* height of the surface in pixels */
    NvS32 height;
} NvSize;


#if defined(__cplusplus)
}
#endif

/** @} */
#endif // INCLUDED_NVCOMMON_H
