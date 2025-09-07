#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <cstddef>


// Template class for a dynamic array
// Provides bounds-checked access and deep copy semantics
template <typename T>
class Array {
private:
    T* _data;
    unsigned int _size;

public:
    Array();
    Array(unsigned int n);
    Array(const Array& other);
    Array& operator=(const Array& other);
    ~Array();

    T& operator[](unsigned int idx);
    const T& operator[](unsigned int idx) const;
    unsigned int size() const;
};

#include "Array.tpp"

#endif // ARRAY_HPP
