#include "JumpSearch.h"
#include <math.h>

int JumpSearch::search(vector<int> table, int target){
    numberComparisons = 0;
    int foundIndex = -1;

    int current = table[0];
    int jump = sqrt(target);

    for (int i=jump-1;i<table.size();i+=jump){
        numberComparisons++;
        if (table[i]> target){
            for (int k=i; k>i-jump; k--){
                if (table[k] == target){
                    foundIndex = k;
                    break;
                }
            }
        }
    }
    totalComparisons += numberComparisons;
    totalComparisons += 1;
    
    if (totalSearch > 0){
        averageComparisons= totalComparisons/totalSearch;
    }    
    
    return foundIndex;
}