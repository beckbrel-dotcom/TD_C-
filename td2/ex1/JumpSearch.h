#ifndef JUMPSEARCH_H
#define JUMPSEARCH_H

#include "SearchingAlgorithms.h"

class JumpSearch: public SearchingAlgorithms{
    public:
    int search(vector<int> table, int target);
};

#endif