#include "BinarySearch.h"
#include <math.h>

int BinarySearch::search(vector<int> table, int target){
    
    numberComparisons = 0;
    int foundIndex = -1;
    int middle = table.size()/2;
    int left = 0;
    int right = table.size();


    for (int k=middle; k>0; k= (left+right)/2){
        numberComparisons ++;
        if (target< table[k]){
            right = k;
        }
        else if (target> table[k])
        {
            left = k;
        }
        else {
            foundIndex = k;
            break;
        }
    }
    totalComparisons += numberComparisons;
    totalComparisons += 1;

    if (totalSearch > 0){
        averageComparisons= totalComparisons/totalSearch;
    }
    return foundIndex;
}