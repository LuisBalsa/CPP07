#ifndef WHATEVER_HPP
#define WHATEVER_HPP

// swap: Swaps the values of two given parameters. Does not return anything.
template <typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

// min: Returns the smallest of the two values. If equal, returns the second one.
template <typename T>
T const &min(T const &a, T const &b) {
    return (b < a) ? b : a;
}

// max: Returns the greatest of the two values. If equal, returns the second one.
template <typename T>
T const &max(T const &a, T const &b) {
    return (a < b) ? b : a;
}

#endif
