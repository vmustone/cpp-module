#include "PmergeMe.hpp"

void mergeInsertSortList(std::list<int> &container, int start, int end) {
    int newEnd;
    if (start < end) {
        if ((end - start) < 10)
            insertSortList(container, start, end);
        else {
            newEnd = start + (end - start) / 2;

			mergeInsertSortList(container, start, newEnd);
			mergeInsertSortList(container, newEnd, end);
            mergeSortList(container, start, newEnd, end);
        }
    }
}

void mergeSortList(std::list<int> &container, int start, int mid, int end) {
    std::list<int> left;
    std::list<int> right;

    std::list<int>::iterator it = container.begin();
    std::advance(it, start);
    for (int i = start; i <= mid; ++i) {
        left.push_back(*it);
        ++it;
    }
    for (int i = mid + 1; i <= end; ++i) {
        right.push_back(*it);
        ++it;
    }

    it = container.begin();
    std::advance(it, start);
    std::list<int>::iterator leftIter = left.begin();
    std::list<int>::iterator rightIter = right.begin();
    while (leftIter != left.end() && rightIter != right.end()) {
        if (*leftIter <= *rightIter) {
            *it = *leftIter;
            ++leftIter;
        } else {
            *it = *rightIter;
            ++rightIter;
        }
        ++it;
    }
    while (leftIter != left.end()) {
        *it = *leftIter;
        ++leftIter;
        ++it;
    }
    while (rightIter != right.end()) {
        *it = *rightIter;
        ++rightIter;
        ++it;
    }
}

void insertSortList(std::list<int> &container, int start, int end) {
    std::list<int>::iterator it = container.begin();
    std::advance(it, start);

    for (int index = start; index <= end; ++index) {
        int hold = *it;
        std::list<int>::iterator j = it;

        while (j != container.begin() && *std::prev(j) > hold) {
            --j;
        }

        container.insert(j, hold);

        it = container.erase(it);
    }
}

void mergeInsertSortDeque(std::deque<int> &container, int start, int end)
{
    int newEnd;
    if (start < end)
    {
        if ((end - start) < 10)
            insertSortDeque(container, start, end);
        else
        {
            newEnd = start + (end - start) / 2;
            mergeInsertSortDeque(container,  start, newEnd);
            mergeInsertSortDeque(container, newEnd + 1, end);
            mergeSortDeque(container, start, newEnd, end);
        }
    }
}

void mergeSortDeque(std::deque<int> &container, int start, int mid, int end)
{
    int i, j , k;

    std::deque<int> left(mid - start + 1);
    std::deque<int> right(end - mid);

    for(i = 0; i < (mid - start + 1); ++i)
        left[i] = container[start + i];
    for(j = 0; j < (end - mid); ++j)
        right[j] = container[mid + 1 + j];
    i = 0;
    j = 0;
    k = start;
    while(i < (mid - start + 1) && j < (end - mid))
    {
        if (left[i] <= right[j])
            container[k++] = left[i++];
        else
            container[k++] = right[j++];
    }

    while(i < (mid - start + 1))
        container[k++] =  left[i++];
    while (j < (end - mid))
        container[k++] = right[j++];
}

void insertSortDeque(std::deque<int> &container, int start, int end)
{
    for(int index = start + 1; index <= end; index++)
    {
        int hold = container[index];
        int j = index - 1;
        for(; j >= start && container[j] > hold; --j)
            container[j + 1] = container[j];
        container[j + 1] = hold;
    }
}

void caluclateTime(std::list<int> &Lcontainer, std::deque<int> &Dcontainer,double &ListTime, double &deqTime)
{
    std::clock_t start = std::clock();
    mergeInsertSortList(Lcontainer, 0, Lcontainer.size() - 1);
    std::clock_t end = std::clock();
    double elapsed = static_cast<double>(end - start) / (CLOCKS_PER_SEC / 1000000.0);
    ListTime = elapsed;
    start = std::clock();
    mergeInsertSortDeque(Dcontainer, 0, Dcontainer.size() - 1);
    end = std::clock();
    elapsed = static_cast<double> (end - start) / (CLOCKS_PER_SEC / 1000000.0);
    deqTime = elapsed;
    
}

void print(std::list<int> &Lis, std::deque<int> &Deq)
{
    static int i = 0;

    if (!i)
        std::cout << "before: ";
    else
        std::cout << "after: "; 

    for (std::list<int>::iterator it= Lis.begin(); it != Lis.end(); ++it)
		std::cout << *it << " ";
    std::cout << std::endl;

    if (!i)
        std::cout << "before: ";
    else
        std::cout << "after: ";
    
    for (std::deque<int>::iterator it = Deq.begin(); it != Deq.end(); ++it)
		std::cout << *it << " ";
    std::cout << std::endl;
    i++;
}
