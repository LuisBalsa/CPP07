#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

// Default constructor: empty array
template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

// Constructor with size
template <typename T>
Array<T>::Array(unsigned int n) : _data(NULL), _size(n) {
    if (n > 0)
        _data = new T[n](); // value-initialized
}

// Copy constructor (deep copy)
template <typename T>
Array<T>::Array(const Array& other) : _data(NULL), _size(other._size) {
    if (_size > 0) {
        _data = new T[_size]();
        for (unsigned int i = 0; i < _size; ++i)
            _data[i] = other._data[i];
    }
}

// Assignment operator (deep copy)
template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] _data;
        _size = other._size;
        _data = (_size > 0) ? new T[_size]() : NULL;
        for (unsigned int i = 0; i < _size; ++i)
            _data[i] = other._data[i];
    }
    return *this;
}

// Destructor
template <typename T>
Array<T>::~Array() {
    delete[] _data;
}

// Subscript operator with bounds checking
template <typename T>
T& Array<T>::operator[](unsigned int idx) {
    if (idx >= _size)
        throw std::out_of_range("Index out of bounds");
    return _data[idx];
}

template <typename T>
const T& Array<T>::operator[](unsigned int idx) const {
    if (idx >= _size)
        throw std::out_of_range("Index out of bounds");
    return _data[idx];
}

// Returns the size of the array
template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}

#endif // ARRAY_TPP
