#include "ScalarConverter.hpp"
/*
int main(int argc, char **argv)
{
	if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <literal>" << std::endl;
        return 1;
    }

    std::string literal(argv[1]);

    if (isdigit(literal[0]) || (literal.size() > 1 && (literal[0] == '-' || literal[0] == '+'))) {
        ScalarConverter::convertNumber(argv[1]);
    } else {
        ScalarConverter::convertLetter(argv[1]);
    }

	return 0;
}
*/

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: ./ScalarConverter " << argv[1] << std::endl;
        return 1;
    }

    ScalarConverter::convert(argv[1]);

    return 0;
}