#ifndef VECTOR_HPP__
#define VECTOR_HPP__

#include <cstring>
#include <stdexcept>

template <typename T>
class Vector
{
private:
    T* m_data;
    int m_size;
    int m_capacity;
public:
    Vector():m_data(nullptr), m_size(0), m_capacity(0){};
    ~Vector() {
        if(m_data != nullptr) delete[] m_data;
    }

    void push_back(const T& value) {
        if(m_size >= m_capacity) {
            reallocate();
        }
        m_data[m_size++] = value;
    }

    void pop_back(){
        --m_size;
    }

    T& operator[](int index) {
        if(index < 0 || index > m_size){
            throw std::out_of_range("Index out of range");
        }
        return m_data[index];
    }

    const T& operator[](int index) const {
        if(index < 0 || index > m_size){
            throw std::out_of_range("Index out of range");
        }
        return m_data[index];        
    }

    int size() const {
        return m_size;
    }

private:

    void reallocate(){
        m_capacity = 1 > m_capacity * 2 ? 1 : m_capacity * 2;
        T* new_data = new T[m_capacity];
        std::memcpy(new_data, m_data, m_size*sizeof(T));
        delete[] m_data;
        m_data = new_data;
    }
};


#endif