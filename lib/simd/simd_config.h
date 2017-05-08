#define MMX64_PRESENT_MASK (0x00000001)
#define NEON128_PRESENT_MASK (0x00000002)
#define SSE128_PRESENT_MASK (0x00000004)
#define AVX256_PRESENT_MASK (0x00000008)
#define AVX512_PRESENT_MASK (0x00000010)

#if defined(HAVE_MMX)
	#define MMX_PRESENT MMX_PRESENT_MASK
#else
	#define MMX_PRESENT (0)
#endif

#if defined(HAVE_NEON128)
	#define NEON128_PRESENT NEON128_PRESENT_MASK
#else
	#define NEON128_PRESENT (0)
#endif

#if defined(HAVE_SSE128)
	#define SSE128_PRESENT SSE128_PRESENT_MASK
#else
	#define SSE128_PRESENT (0)
#endif

#if defined(HAVE_AVX)
	#define AVX256_PRESENT AVX_PRESENT_MASK
#else
	#define AVX256_PRESENT (0)
#endif

#if define (HAVE_AVX512)
	#define AVX512_PRESENT AVX512_PRESENT_MASK
#else
	#define AVX512_PRESENT AVX512_PRESENT_MASK
#endif

#define SIMD_PRESENT (MMX_PRESENT | NEON128_PRESENT | SSE128_PRESENT | AVX256_PRESENT | AVX512_PRESENT)