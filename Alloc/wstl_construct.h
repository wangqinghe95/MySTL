#ifndef WSTL_CONSTRUCT_HPP__
#define WSTL_CONSTRUCT_HPP__

#include <new>

template <class T1, class T2>
inline void wconstruct(T1* p, const T2& value) {
    new(p) T1(value);
}

template <class T>
inline void wdestroy(T* ptr) {
    ptr->~T();
}

template <class ForwardIterator>
inline void destory(ForwardIterator first, ForwardIterator last) {
    wdestroy(first, last, value_type(first));
}

template <class ForwardIterator, class T>
inline void _wdetory(ForwardIterator first, ForwardIterator last, T*)
{
    typedef typename __type_trait<T>::has_trivial_destructor trivial_destructor;
}

#endif;