#include "BitcoinExchange.hpp"

std::vector<std::string> split(const std::string &s, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::stringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

std::map<std::string, float> loadBitcoinData(const std::string &filename) {
    std::map<std::string, float> bitcoinData;
    std::ifstream file(filename);
    std::string line;
    getline(file, line);
    while (getline(file, line)) {
        std::vector<std::string> parts = split(line, ',');
        if (parts.size() == 2) {
            std::string dateString = parts[0];
            std::string priceString = parts[1];
            bitcoinData[dateString] = stof(priceString);
        }
    }
    return bitcoinData;
}


std::string findClosestDate(const std::map<std::string, float> &bitcoinData, const std::string &targetDate) {
    std::string closestDate;
    double minDifference = std::numeric_limits<double>::max();

    std::tm targetTm = {};
    strptime(targetDate.c_str(), "%Y-%m-%d", &targetTm);
    time_t targetTime = mktime(&targetTm);

    for (std::map<std::string, float>::const_iterator it = bitcoinData.begin(); it != bitcoinData.end(); ++it) {
        // Muunna mapin avain tm-rakenteeksi
        const std::string &key = it->first;
        const float &value = it->second;

        std::tm mapTm = {};
        strptime(key.c_str(), "%Y-%m-%d", &mapTm);
        time_t mapTime = mktime(&mapTm);

        double difference = std::abs(difftime(mapTime, targetTime));
        if (difference < minDifference) {
            minDifference = difference;
            closestDate = key;
        }
    }

    return closestDate;
}

bool isValidValue(const std::string &valueString) {
    try {
        float value = stof(valueString);
        if (value < 0 || value > 1000) {
            return false;
        }
        return true;
    } catch (const std::exception &) {
        return false;
    }
}
