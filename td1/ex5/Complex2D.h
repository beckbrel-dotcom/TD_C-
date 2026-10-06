#ifndef COMPLEX2D_H
#define COMPLEX2D_H

class Complex2D{
private: 
    double real; 
    double imaginary;

public:
    
    //costructeurs, sous les 4 formes possibles
    Complex2D();
    Complex2D(double realPart, double imaginaryPart);
    Complex2D(double commonValue);
    Complex2D(const Complex2D& complex);

    //geter and seter
    void setValues(double newRealPart, double newImaginaryPart);
    double getReal();
    double getImaginary();

    //usual operations
    Complex2D addition(Complex2D b);
    Complex2D soustraction(Complex2D b);
    Complex2D multiplication(Complex2D b);
    Complex2D division(Complex2D b);
    bool lessThan(Complex2D b);
    bool moreThan(Complex2D b);
};

#endif