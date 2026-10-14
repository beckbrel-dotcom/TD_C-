#include "BinarySearch.h"
#include "LinearSearch.h"
#include "JumpSearch.h"
#include "SearchingAlgorithms.h"

//using namespace std;

int main(){
    vector<int> table = {1,2,3,4,5,6,7};

    LinearSearch lino;
    JumpSearch jumpy;
    BinarySearch bino;

    lino.displaySearchResults(cout, lino.search(table,5), 5);

    bino.displaySearchResults(cout,bino.search(table,5), 5);
    
    cout << lino.averageComparisons << endl;
    return 0;
}