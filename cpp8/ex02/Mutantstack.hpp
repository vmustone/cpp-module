#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	private:
		MutantStack(const MutantStack &other);
		MutantStack& operator=(const MutantStack& other);
	public:
		MutantStack(){};
		~MutantStack(){};
	    using std::stack<T>::c;

		typedef typename std::stack<T>::container_type::iterator iterator;

	    iterator begin() { return std::begin(c); }
	    iterator end() { return std::end(c); }
};

#endif