#ifndef MIRAI_STD_LIB_MACROS_HPP_
#define MIRAI_STD_LIB_MACROS_HPP_

// The value of __cplusplus in different versions.
#define MIRAI_STD_CPP98 199711L
#define MIRAI_STD_CPP11 201103L
#define MIRAI_STD_CPP14 201402L
#define MIRAI_STD_CPP17 201703L
#define MIRAI_STD_CPP20 202002L
#define MIRAI_STD_CPP23 202302L

// Attributes to real inline functions.
// Supports only GCC recently.
#ifdef __GNUC__
#if __cplusplus < MIRAI_STD_CPP11
#define MIRAI_STD_ATTRIBUTE_INLINE __attribute__((always_inline))
#else
#define MIRAI_STD_ATTRIBUTE_INLINE [[gnu::always_inline]]
#endif
#endif

#endif  // #ifndef MIRAI_STD_LIB_MACROS_HPP_