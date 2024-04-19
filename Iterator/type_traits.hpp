#ifndef WSTL_TYPE_TRAITS_HPP__
#define WSTL_TYPE_TRAITS_HPP__

#include <type_traits>

namespace wstl
{
template <class T, T v>
struct m_integral_constant
{
    static constexpr T value = v;
};

template <bool b>
using m_bool_const = m_integral_constant<bool, b>;

typedef m_bool_const<true>  m_true_type;
typedef m_bool_const<false>  m_false_type;
}

#endif