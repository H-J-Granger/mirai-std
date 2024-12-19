#ifndef MIRAI_STD_LIB_VECTOR_
#define MIRAI_STD_LIB_VECTOR_

#include <cstdint>      // std::int_least8_t
#include <memory>       // std::allocator
#include <type_traits>  // std::enable_if
#include <vector>       // std::vector
#include "lib/macros.hpp"

namespace mstd {

/**
 * @brief std::vector without specification std::vector<bool>. std::vector<bool>
 * is forwarded in mstd::vector_bool. The comment between two `>' is used to 
 * prevent clang-format from putting them together.
 * 
 * @tparam T The type of the elements.
 * @tparam Allocator An allocator that is used to acquire/release memory and to
 * construct/destroy the elements in that memory. 
 */
template <typename T, typename Allocator = std::allocator<T> /**/>
struct vector : std::vector<T> {};

/**
 * @brief mstd::vector<bool> is actually std::vector<std::intleast8_t>.
 * TODO: check if std::allocator<bool> is inconsistent with this setup.
 * 
 * @tparam Allocator An allocator that is used to acquire/release memory and to
 * construct/destroy the elements in that memory. 
 */
template <typename Allocator>
struct vector<bool, Allocator> : std::vector<std::int_least8_t, Allocator> {
  using type = std::int_least8_t;
};

/**
 * @brief std::vector<bool>.
 * TODO: check if std::allocator<bool> is inconsistent with this setup.
 * 
 * @tparam Allocator An allocator that is used to acquire/release memory and to
 * construct/destroy the elements in that memory. 
 */
template <typename Allocator = std::allocator<bool> /**/>
struct vector_bool : std::vector<bool, Allocator> {};

}  // namespace mstd

#endif  // #ifndef MIRAI_STD_LIB_VECTOR_