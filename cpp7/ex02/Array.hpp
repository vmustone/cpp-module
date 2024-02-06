#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
private:
    T* elements;
    std::size_t arraySize;

public:
    // Construction with no parameter: Creates an empty array.
    Array() : elements(nullptr), arraySize(0) {}

    // Construction with an unsigned int n as a parameter: Creates an array of n elements initialized by default.
    explicit Array(std::size_t n) : elements(new T[n]), arraySize(n) {
        for (std::size_t i = 0; i < arraySize; ++i) {
            elements[i] = T();
        }
    }

    // Copy construction
    Array(const Array& other) : elements(new T[other.arraySize]), arraySize(other.arraySize) {
        for (std::size_t i = 0; i < arraySize; ++i) {
            elements[i] = other.elements[i];
        }
    }

    // Assignment operator
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] elements;

            arraySize = other.arraySize;
            elements = new T[arraySize];

            for (std::size_t i = 0; i < arraySize; ++i) {
                elements[i] = other.elements[i];
            }
        }
        return *this;
    }

    // Destructor
    ~Array() {
        delete[] elements;
    }

    // Elements can be accessed through the subscript operator: []
    T& operator[](std::size_t index) {
        if (index >= arraySize) {
            throw std::out_of_range("Index out of bounds");
        }
        return elements[index];
    }

    // When accessing an element with the [ ] operator, if its index is out of bounds, an std::exception is thrown.
    const T& operator[](std::size_t index) const {
        if (index >= arraySize) {
            throw std::out_of_range("Index out of bounds");
        }
        return elements[index];
    }

    // A member function size() that returns the number of elements in the array.
    std::size_t size() const {
        return arraySize;
    }
};

#endif