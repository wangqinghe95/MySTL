#ifndef ITERATOR_HPP__
#define ITERATOR_HPP__

#include <cstddef>
#include <iterator>

template <typename T>
class Iterator
{
public:
    using value_type = T;
    using reference = T&;
    using pointer = T*;
    using difference_type = std::ptrdiff_t;
    using itertor_category = std::random_access_iterator_tag;

private:
    pointer m_p;

public:
    Iterator(pointer p) : m_p(p){}

    reference operator*() const {
        return *m_p;
    }

    Iterator& operator++() {
        ++m_p;
        return *this;
    }

    Iterator operator++(int) {
        Iterator tmp(*this);
        operator++();
        return tmp;
    }

    bool operator==(const Iterator& other) const {
        return m_p == other.m_p;
    }

    bool operator!=(const Iterator& other) const {
        return m_p != other.m_p;
    }
};

#endif