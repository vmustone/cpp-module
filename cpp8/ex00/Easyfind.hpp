#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

template <typename T>
typename T::iterator easyfind(T& container, int value) {
    auto it = std::find(container.begin(), container.end(), value);
    if (it == container.end()) {
        throw std::runtime_error("Value not found in container");
    }
    return it;
}

#endif