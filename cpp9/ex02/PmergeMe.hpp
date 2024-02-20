#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <iostream>
#include <deque>
#include <ctime>
#include <sstream>
#include <cstddef>
#include <list>

void mergeInsertSortList(std::list<int> &container, int start, int end);
void mergeSortList(std::list<int> &container, int start, int mid, int end);
void insertSortList(std::list<int> &container, int start, int end);
void mergeInsertSortDeque(std::deque<int> &container, int start, int end);
void mergeSortDeque(std::deque<int> &container, int start, int mid, int end);
void insertSortDeque(std::deque<int> &container, int start, int end);
void caluclateTime(std::list<int> &Lcontainer, std::deque<int> &Dcontainer, double &ListTime, double &deqTime);
void print(std::list<int> &Lis, std::deque<int> &Deq);

#endif