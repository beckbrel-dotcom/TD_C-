#ifndef MATRIXNUMERICAL_H
#define MATRIXNUMERICAL_H

#include "MatrixBase.h"

class MatrixNumerical: public MatrixBase<double>{
    public:
        double getDeterminant();
        MatrixNumerical getInverse();
        void getIdentity(int size);

        MatrixNumerical();
        MatrixNumerical();
        MatrixNumerical();

        MatrixNumerical sum(MatrixNumerical M);
        MatrixNumerical diff(MatrixNumerical M);
        MatrixNumerical mult(MatrixNumerical M);
        MatrixNumerical div(MatrixNumerical M);
};

#endif