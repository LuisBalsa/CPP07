#ifndef ITER_HPP
#define ITER_HPP

// Main template function to iterate over non-const arrays
// Applies func to each element (by reference)
template <typename T, typename F>
void iter(T *array, size_t length, F func) {
    for (size_t i = 0; i < length; ++i)
        func(array[i]);
}

// Overload for const arrays
// Applies func to each element (by const reference)
template <typename T, typename F>
void iter(const T *array, size_t length, F func) {
    for (size_t i = 0; i < length; ++i)
        func(array[i]);
}

#endif
