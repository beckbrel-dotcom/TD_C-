#include "LinearSearch.h"
using namespace std;

int LinearSearch::search(vector<int> table, int target){
    //int current = table[0];
    numberComparisons = 0;
    int foundIndex = -1;

    for (int i=0; i< table.size(); i++){
        numberComparisons ++;
        if (table[i] == target){
            foundIndex = i;
            break;
        }
    }

    totalComparisons += numberComparisons;
    totalSearch += 1;
    
    if (totalSearch > 0){
        averageComparisons= totalComparisons/totalSearch;
    }
    
    return foundIndex;
}