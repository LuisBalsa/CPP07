# CPP07 - C++ Templates

This module covers the use of templates in C++, one of the most powerful tools for creating generic, reusable, and safe code. Each exercise focuses on a fundamental concept for modern C++ programming.

## Structure

- `ex00/` - Basic template functions (`swap`, `min`, `max`)
- `ex01/` - Template function `iter` for arrays
- `ex02/` - Template class `Array`

---

## Exercise 00: Start with a few functions

**Files:** `Makefile`, `main.cpp`, `whatever.hpp`

### What is required?

Implement three template functions:

- `swap`: swaps the value of two parameters.
- `min`: returns the smallest of two values (if equal, returns the second).
- `max`: returns the largest of two values (if equal, returns the second).

### Lesson to learn

You learn to create generic functions that work with any data type, as long as they support the required operators. This is the foundation for understanding how the STL (Standard Template Library) works and how to create reusable and safe code without duplication.

---

## Exercise 01: Iter

**Files:** `Makefile`, `main.cpp`, `iter.hpp`

### What is required?

Implement a template function `iter` that receives:

- An array
- The size of the array
- A function to apply to each element

The function must work for both const and non-const arrays, and accept functions that take the element by reference or by const reference.

### Lesson to learn

You learn to pass functions as parameters to templates, to guarantee const correctness, and to create truly generic code. This is fundamental to understanding STL algorithms and how to create utility functions that work for any data type.

---

## Exercise 02: Array

**Files:** `Makefile`, `main.cpp`, `Array.hpp`, `Array.tpp`

### What is required?

Implement a template class `Array<T>` that:

- Allows creation of dynamic arrays of any type
- Has constructors (empty, with size, copy), assignment operator, and destructor
- Performs deep copy (independent copy)
- Uses `new[]` for dynamic allocation
- Allows safe access with `operator[]` (throws exception if out of bounds)
- Has a `size()` method

### Lesson to learn

You learn to create generic containers, manage dynamic memory safely, implement deep copy, and protect data access. This is essential to understand how STL containers (like `std::vector`) work and to avoid memory leaks and copy bugs.

---

## How to compile and test

For each exercise:

```sh
cd ex0X
make
./<executable_name>
```

---

## Notes

- All templates are defined in headers (`.hpp`) or `.tpp` files included in the header.
- The code follows C++98 standards, as required by the exercises.
- Comments and usage examples are included in the test files (`main.cpp`).

---

**This module is fundamental to understanding how to create generic, safe, and reusable code in C++.**
