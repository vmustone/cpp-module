#include "Easyfind.hpp"

int main() {
    try {
        // Example usage with vector
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);
        vec.push_back(4);
        vec.push_back(5);

        int valueToFind = 3;
        auto result = easyfind(vec, valueToFind);
        std::cout << "Value found at index: " << std::distance(vec.begin(), result) << std::endl;

        // Example usage with list
        std::list<int> myList;
        myList.push_back(10);
        myList.push_back(20);
        myList.push_back(30);
        myList.push_back(40);
        myList.push_back(50);

        valueToFind = 25;
        auto result2 = easyfind(myList, valueToFind);
        std::cout << "Value found at index: " << std::distance(myList.begin(), result2) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}