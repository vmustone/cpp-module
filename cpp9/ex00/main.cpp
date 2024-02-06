#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>

// Function to parse CSV file and store data in a vector of pairs (date, value)
std::vector<std::pair<std::string, double>> parseCSV(const std::string& filename) {
    std::ifstream file(filename);
    std::vector<std::pair<std::string, double>> data;

    if (file.is_open()) {
        std::string line;
        getline(file, line); // Ignore the header line

        while (getline(file, line)) {
            std::istringstream iss(line);
            std::string date_str, value_str;
            getline(iss, date_str, '|');
            getline(iss, value_str, '|');

            // Remove leading/trailing whitespaces from date and value strings
            date_str.erase(std::remove_if(date_str.begin(), date_str.end(), ::isspace), date_str.end());
            value_str.erase(std::remove_if(value_str.begin(), value_str.end(), ::isspace), value_str.end());

            if (!date_str.empty() && !value_str.empty()) {
                data.push_back({date_str, stod(value_str)});
            }
        }
        file.close();
    }
    return data;
}

std::tm convertToDate(const std::string& date_str) {
    std::tm tm_date = {};
    std::istringstream iss(date_str);
    iss >> std::get_time(&tm_date, "%Y-%m-%d");
    return tm_date;
}

// Function to find the closest date in the database
std::string findClosestDate(const std::vector<std::pair<std::string, double>>& database, const std::string& targetDate) {
    std::tm target_tm = convertToDate(targetDate);

    auto lower = std::lower_bound(database.begin(), database.end(), target_tm,
        [](const std::pair<std::string, double>& entry, const std::tm& target_tm) {
            std::tm entry_tm = convertToDate(entry.first);
            return std::difftime(std::mktime(&entry_tm), std::mktime(&target_tm)) < 0;
        });

    if (lower == database.begin()) {
        return database.begin()->first;
    } else if (lower == database.end()) {
        return std::prev(lower)->first;
    } else {
        const std::string& lowerDate = std::prev(lower)->first;
        const std::string& upperDate = lower->first;
        return (convertToDate(upperDate) - target_tm < target_tm - convertToDate(lowerDate)) ? upperDate : lowerDate;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
        return 1;
    }

    std::string filename(argv[1]);
    std::ifstream inputfile(filename);
    if (!inputfile.is_open()) {
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }

    // Parse the CSV database
    std::vector<std::pair<std::string, double> > database = parseCSV("btc_database.csv");

    std::string line;
    while (getline(inputfile, line)) {
        std::istringstream iss(line);
        std::string date_str, value_str;
        getline(iss, date_str, '|');
        getline(iss, value_str, '|');

        date_str.erase(std::remove_if(date_str.begin(), date_str.end(), ::isspace), date_str.end());
        value_str.erase(std::remove_if(value_str.begin(), value_str.end(), ::isspace), value_str.end());

        if (!date_str.empty() && !value_str.empty()) {
            double value = stod(value_str);
            
            std::string closestDate = findClosestDate(database, date_str);
            auto exchangeRate = database[std::distance(database.begin(), std::lower_bound(database.begin(), database.end(), closestDate,
                	[](const std::pair<std::string, double>& entry, const std::string& date) {
                    return entry.first < date;
                }))].second;

            double result = value * exchangeRate;

            if (value <= 0) {
                std::cerr << "Error: not a positive number." << std::endl;
            } else if (result > 1000) {
                std::cerr << "Error: too large a number." << std::endl;
            } else {
                std::cout << date_str << " => " << value << " = " << result << std::endl;
            }
        } else {
            std::cerr << "Error: bad input => " << line << std::endl;
        }
    }

    inputfile.close();
    return 0;
}
