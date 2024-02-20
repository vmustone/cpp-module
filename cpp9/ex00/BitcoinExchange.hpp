#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <ctime>
#include <chrono>

std::vector<std::string> split(const std::string &s, char delimiter);
std::map<std::string, float> loadBitcoinData(const std::string &filename);
std::string findClosestDate(const std::map<std::string, float> &bitcoinData, const std::string &targetDate);

bool isValidValue(const std::string &valueString);

#endif