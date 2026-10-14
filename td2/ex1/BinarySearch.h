#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include "SearchingAlgorithms.h"

class BinarySearch: public SearchingAlgorithms{
    public:
    int search(vector<int> table, int target);
};

#endif