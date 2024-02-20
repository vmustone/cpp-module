#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: btc input_file" << std::endl;
        return 1;
    }

    std::string inputFilename = argv[1];
    std::ifstream inputFile(inputFilename);
    if (!inputFile) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    std::map<std::string, float> bitcoinData = loadBitcoinData("data.csv");

    std::string line;
    while (getline(inputFile, line)) {
        if (line == "date | value") {
            continue;
        }
        std::vector<std::string> parts = split(line, '|');
        if (parts.size() != 2) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::string dateString = parts[0];
        std::string valueString = parts[1];
        float value;
        try {
            if (!isValidValue(valueString)) {
                std::cerr << "Error: not a valid value." << std::endl;
                continue;
            }
            value = stof(valueString);
            if (value < 0) {
                std::cerr << "Error: not a positive number." << std::endl;
                continue;
            }
        } catch (const std::exception &e) {
            std::cerr << "Error: " << e.what() << " => " << valueString << std::endl;
            continue;
        }
		std::string closestDate = findClosestDate(bitcoinData, dateString);
		float exchangeRate = bitcoinData[closestDate];
        std::cout << dateString << "=> " << value << " = " << value * exchangeRate << std::endl;
    }

    return 0;
}
