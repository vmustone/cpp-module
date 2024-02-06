#include "Span.hpp"

Span::Span(unsigned int num) {
	maxSize = num;
}

Span::~Span() {
}

Span::Span(const Span &other) {
	*this = other;
}

Span& Span::operator=(const Span &other) {
	if (this != &other) {
		this->maxSize = other.maxSize;
		this->numbers = other.numbers;
	}
	return (*this);
}

void Span::addNumber(int number) {
    if (numbers.size() >= maxSize) {
        throw std::runtime_error("Cannot add more numbers. Maximum size reached.");
    }
    numbers.push_back(number);
}

void Span::addNumbers(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end) {
    size_t remainingSpace = maxSize - numbers.size();
    size_t inputSize = std::distance(begin, end);

    if (inputSize > remainingSpace) {
        throw std::runtime_error("Cannot add more numbers. Maximum size reached.");
    }
}

int Span::shortestSpan() const{
    if (numbers.size() < 2) {
        throw std::runtime_error("Cannot find span. Not enough numbers.");
    }

    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minSpan = sortedNumbers[1] - sortedNumbers[0];

    for (size_t i = 2; i < sortedNumbers.size(); ++i) {
        int currentSpan = sortedNumbers[i] - sortedNumbers[i - 1];
        minSpan = std::min(minSpan, currentSpan);
    }

    return minSpan;
}

int Span::longestSpan() const{
    if (numbers.size() < 2) {
        throw std::runtime_error("Cannot find span. Not enough numbers.");
    }

    return *std::max_element(numbers.begin(), numbers.end()) - *std::min_element(numbers.begin(), numbers.end());
}