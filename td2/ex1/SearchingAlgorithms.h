#ifndef SEARCHINGALORITHMS_H
#define SEARCHINGALORITHMS_H

#include <iostream>
#include <vector>
using namespace std;

class SearchingAlgorithms{
    protected:
        int numberComparisons;
        
    public:
        SearchingAlgorithms();

        static int totalComparisons;
        static int totalSearch;
        static double averageComparisons;

        virtual int search(vector<int> table, int target) = 0; //virtual pure virtual au debut et la fonction =0
        void displaySearchResults(ostream& display, int result, int target);
};
#endif