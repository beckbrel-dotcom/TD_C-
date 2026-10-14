#include <iostream>
#include "MatrixBase.h"

using namespace std;
template <typename T>


MatrixBase<T>::MatrixBase(){
    data = {};
    cols = 0;
    rows = 0;
}

template <typename T>
MatrixBase<T>::MatrixBase(vector<vector<T>> newdata ,size_t ro, size_t co){
    data = newdata;
    cols = co;
    rows = ro;
}



void Display(ostream& display, double element){
    display << element << endl;
}


        /*MatrixBase(size_t ro, size_t co);
        MatrixBase(const MatrixBase& M);

        void addElement(T element);
        T getElement(size_t ro, size_t co);
        size_t getRows();
        size_t getCols();

        void Display(ostream& display); */