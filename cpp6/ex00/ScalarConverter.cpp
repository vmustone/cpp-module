#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    *this = other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    if (this == &other)
		return *this;
    return *this;
}

void ScalarConverter::convert(const std::string& literal) {
	char charValue = '\0';
    int intValue = 0;

    try {
        if (literal == "-inf" || literal == "-inff") {
            std::cout << "Char: Impossible" << std::endl;
            std::cout << "Int: Impossible" << std::endl;
            std::cout << "Float: -inff" << std::endl;
            std::cout << "Double: -inf" << std::endl;
            return;
        } else if (literal == "+inf" || literal == "+inff") {
            std::cout << "Char: Impossible" << std::endl;
            std::cout << "Int: Impossible" << std::endl;
            std::cout << "Float: +inff" << std::endl;
            std::cout << "Double: +inf" << std::endl;
            return;
        } else if (literal == "nanf" || literal == "nan") {
            std::cout << "Char: Impossible" << std::endl;
            std::cout << "Int: Impossible" << std::endl;
            std::cout << "Float: nanf" << std::endl;
            std::cout << "Double: nan" << std::endl;
            return;
        }

        intValue = std::stoi(literal);
        std::cout << "Char: ";
        if (intValue >= 0 && intValue <= 127) {
            charValue = static_cast<char>(intValue);
            std::cout << charValue << std::endl;
        } else {
            std::cout << "Impossible" << std::endl;
        }
        std::cout << "Int: " << intValue << std::endl;

        float floatValue = static_cast<float>(intValue);
        double doubleValue = static_cast<double>(intValue);

        std::cout << "Float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
        std::cout << "Double: " << std::fixed << std::setprecision(1) << doubleValue << std::endl;
    } catch (...) {
        if (literal.size() == 1) {
            charValue = literal[0];
            intValue = static_cast<int>(charValue);

            std::cout << "Char: " << charValue << std::endl;
            std::cout << "Int: " << intValue << std::endl;

            float floatValue = static_cast<float>(intValue);
            double doubleValue = static_cast<double>(intValue);

            std::cout << "Float: " << std::fixed << std::setprecision(1) << floatValue << "f" << std::endl;
            std::cout << "Double: " << std::fixed << std::setprecision(1) << doubleValue << std::endl;
        } else {
            std::cout << "Char: Impossible" << std::endl;
            std::cout << "Int: Impossible" << std::endl;
            std::cout << "Float: Impossible" << std::endl;
            std::cout << "Double: Impossible" << std::endl;
        }
    }
}