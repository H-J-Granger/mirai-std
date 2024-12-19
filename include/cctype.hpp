#ifndef MIRAI_STD_LIB_CCTYPE_HPP_
#define MIRAI_STD_LIB_CCTYPE_HPP_

#include <cctype>
#include "lib/macros.hpp"

namespace mstd {

/**
 * Thin wrappers for functions in <cctypes>, letting it more type save.
 */
MIRAI_STD_ATTRIBUTE_INLINE
inline bool isalnum(char ch) {
  return std::isalnum(static_cast<unsigned char>(ch));
}
MIRAI_STD_ATTRIBUTE_INLINE
inline bool isalpha(char ch) {
  return std::isalpha(static_cast<unsigned char>(ch));
}
MIRAI_STD_ATTRIBUTE_INLINE
inline bool islower(char ch) {
  return std::islower(static_cast<unsigned char>(ch));
}
MIRAI_STD_ATTRIBUTE_INLINE
inline bool isupper(char ch) {
  return std::isupper(static_cast<unsigned char>(ch));
}
MIRAI_STD_ATTRIBUTE_INLINE
inline bool isalnum(char ch) {
  return std::isalnum(static_cast<unsigned char>(ch));
}
MIRAI_STD_ATTRIBUTE_INLINE
inline bool isdigit(char ch) {
  return std::isdigit(static_cast<unsigned char>(ch));
}
MIRAI_STD_ATTRIBUTE_INLINE
inline bool isxdigit(char ch) {
  return std::isxdigit(static_cast<unsigned char>(ch));
}
MIRAI_STD_ATTRIBUTE_INLINE
inline bool iscntrl(char ch) {
  return std::iscntrl(static_cast<unsigned char>(ch));
}
MIRAI_STD_ATTRIBUTE_INLINE
inline bool isgraph(char ch) {
  return std::isgraph(static_cast<unsigned char>(ch));
}
MIRAI_STD_ATTRIBUTE_INLINE
inline bool isspace(char ch) {
  return std::isspace(static_cast<unsigned char>(ch));
}
MIRAI_STD_ATTRIBUTE_INLINE
inline bool isprint(char ch) {
  return std::isprint(static_cast<unsigned char>(ch));
}
MIRAI_STD_ATTRIBUTE_INLINE
inline bool ispunct(char ch) {
  return std::ispunct(static_cast<unsigned char>(ch));
}
#if __cplusplus >= MIRAI_STD_CPP11
MIRAI_STD_ATTRIBUTE_INLINE
inline bool isblank(char ch) {
  return std::isblank(static_cast<unsigned char>(ch));
}
#endif
MIRAI_STD_ATTRIBUTE_INLINE
inline char tolower(char ch) {
  return static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
}
MIRAI_STD_ATTRIBUTE_INLINE
inline char toupper(char ch) {
  return static_cast<char>(std::toupper(static_cast<unsigned char>(ch)));
}

}  // namespace mstd

#endif  // #ifndef MIRAI_STD_LIB_CCTYPE_HPP_