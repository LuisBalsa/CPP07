#include <iostream>
#include <string>
#include <cstring>
#include "iter.hpp"

template <typename T>
void print(const T &x) {
    std::cout << "Element: " << x << std::endl;
}

void toUpper(char &c) {
    if (c >= 'a' && c <= 'z')
        c = c - ('a' - 'A');
}

void increment(int &x) {
    std::cout << "Incrementing " << x;
    ++x;
    std::cout << " to " << x << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array:" << std::endl;
    iter(arr, len, print<int>);

    iter(arr, len, increment);
    std::cout << "Array after incrementing:" << std::endl;
    iter(arr, len, print<int>);

    const std::string strArr[] = {"hello", "world", "!"};
    std::cout << "Const string array:" << std::endl;
    iter(strArr, 3, print<std::string>);

    char fullName[] = "luis balsa";
    size_t fullNameLength = strlen(fullName);
    std::cout << "Original char array: " << fullName << std::endl;
    iter(fullName, fullNameLength, toUpper);
    std::cout << "Uppercase char array: " << fullName << std::endl;

    return 0;
}
