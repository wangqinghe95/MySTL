#ifndef FUNCTOR_HPP__
#define FUNCTOR_HPP__

#include "../Iterator/Iterator.hpp"
#include <utility>

template <typename T>
void Swap(T& a, T&b) 
{
    T temp = std::move(a);
    a = std::move(b);
    b = std::move(temp);
}

template <typename T>
void Sort(T* first, T* last)
{
    for(T* i = first; i != last; i++) {
        for(T* j = i; j != last; ++j) {
            if(*j < *i) Swap(i,j);
        }
    }
}

template <typename T>
T* Find(T* first, T* last, const T& value)
{
    for(T* i = first; i != last; ++i) {
        if(*i == value) return i;
    }
    return last;
}

#endif