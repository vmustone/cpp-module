#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

class Span {

	private:
		unsigned int maxSize;
		std::vector<int> numbers;
	public:
		Span(unsigned int num);
		~Span();
		Span(const Span &other);
		Span& operator=(const Span &other);

		void addNumber(int number);
		void addNumbers(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		int shortestSpan() const;
		int longestSpan() const;

};

#endif