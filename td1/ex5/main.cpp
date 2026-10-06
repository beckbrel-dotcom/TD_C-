#include <iostream>
using namespace std;
#include "Complex2D.h"

int main(){
    Complex2D complex1(0, 1);
    Complex2D complex2(5);

    cout << complex1.getReal()<< " + " << complex1.getImaginary() << "i" << endl;
    
    cout << complex2.addition(complex1).getReal()<<endl;

    if (complex1.lessThan(complex2)){
        cout << "a < b" << endl;
    }

    return 0;
}