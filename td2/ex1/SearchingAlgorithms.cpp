#include "SearchingAlgorithms.h"

int SearchingAlgorithms::totalComparisons = 0;
int SearchingAlgorithms::totalSearch = 0;
double SearchingAlgorithms::averageComparisons = 0;

SearchingAlgorithms::SearchingAlgorithms(){
    numberComparisons = 0;
}

void SearchingAlgorithms::displaySearchResults(ostream& display, int result, int target){
    display << "target is at poition "<< result << " which was " <<target << endl;
}