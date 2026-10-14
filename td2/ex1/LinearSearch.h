#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include "SearchingAlgorithms.h"

class LinearSearch: public SearchingAlgorithms{
    public:
    int search(vector<int> table, int target);

};

#endif