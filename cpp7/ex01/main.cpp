#include "iter.hpp"

int main() {
    // Test with an array of integers
    int intArray[] = {1, 2, 3, 4, 5};
    std::size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Iterating over integers: ";
    iter(intArray, intArrayLength, printElement<int>);
    std::cout << std::endl;

    // Test with an array of doubles
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::size_t doubleArrayLength = sizeof(doubleArray) / sizeof(doubleArray[0]);

    std::cout << "Iterating over doubles: ";
    iter(doubleArray, doubleArrayLength, printElement<double>);
    std::cout << std::endl;

    // Test with an array of strings
    std::string stringArray[] = {"apple", "banana", "orange", "grape", "kiwi"};
    std::size_t stringArrayLength = sizeof(stringArray) / sizeof(stringArray[0]);

    std::cout << "Iterating over strings: ";
    iter(stringArray, stringArrayLength, printElement<std::string>);
    std::cout << std::endl;

    return 0;
}