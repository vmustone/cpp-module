#include "Array.hpp"

#define MAX_VAL 750
/*
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
*/

int main() {
    // Test construction with no parameter (empty array)
    Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;

    // Test construction with an unsigned int n as a parameter
    Array<int> intArray(5);
    std::cout << "Initialized array size: " << intArray.size() << std::endl;

    // Test subscript operator and size function
    for (std::size_t i = 0; i < intArray.size(); ++i) {
        intArray[i] = i * 2;
        std::cout << "Element at index " << i << ": " << intArray[i] << std::endl;
    }

    // Test copy construction and assignment operator
    Array<int> copyArray(intArray);
    std::cout << "Copied array size: " << copyArray.size() << std::endl;

    // Modify the original array and check if the copy remains unchanged
    intArray[0] = 100;
    std::cout << "Modified original array. Copy array first element: " << copyArray[0] << std::endl;

    // Test exception handling for out-of-bounds access
    try {
        intArray[10] = 42; // This should throw an exception
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}