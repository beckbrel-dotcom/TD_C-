#ifndef MATRIXBASE_H
#define MATRIXBASE_H

#include <vector>
using namespace std;

template <typename T>

class MatrixBase {
    private:
        vector<vector<T>> data;
        size_t rows;
        size_t cols;
    
    public:
        MatrixBase(); 
        MatrixBase(vector<vector<T>> newdata ,size_t ro, size_t co);
        MatrixBase(const MatrixBase& M);

        void addElement(T element);
        T getElement(size_t ro, size_t co);
        size_t getRows();
        size_t getCols();

        void Display(ostream& display, vector<vector<T>> data);

}; 

#endif