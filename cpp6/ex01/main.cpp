#include "Serializer.hpp"

int main() {
    // Creating an instance of Data
    Data obj;
    obj.name = "Matti";
    obj.age = 50;

    uintptr_t serialized = Serializer::serialize(&obj);

    Data* deserialized = Serializer::deserialize(serialized);

    if (deserialized != nullptr) {
        std::cout << "Deserialized Data: Name " << deserialized->name << ", Age " << deserialized->age << std::endl;

        // Check if the values match the original
        if (deserialized->name == obj.name && deserialized->age == obj.age) {
            std::cout << "Serialization and Deserialization successful." << std::endl;
        } else {
            std::cout << "Serialization or Deserialization failed. Values don't match." << std::endl;
        }

        // Check if the pointers match
        if (deserialized == &obj) {
            std::cout << "Pointers match!" << std::endl;
        } else {
            std::cout << "Pointers don't match!" << std::endl;
        }
    } else {
        std::cout << "Deserialization failed." << std::endl;
    }

    return 0;
}