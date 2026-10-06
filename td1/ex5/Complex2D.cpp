#include <iostream>
#include "Complex2D.h"


//constructeurs
Complex2D::Complex2D(){
    real = 0,
    imaginary = 0;
}

Complex2D::Complex2D(double realPart, double imaginaryPart){
    real = realPart,
    imaginary = imaginaryPart;
}

Complex2D::Complex2D(double commonValue){
    real = commonValue,
    imaginary = commonValue;
}

Complex2D::Complex2D(const Complex2D& complex){
    real = complex.real,
    imaginary = complex.imaginary;
}

//geter seter

void Complex2D::setValues(double newRealPart, double newImaginaryPart){
    real = newRealPart,
    imaginary = newImaginaryPart;
}

double Complex2D::getReal(){
    return real;
}
double Complex2D::getImaginary(){
    return imaginary;
}

//operations

Complex2D Complex2D::addition(Complex2D b){
    Complex2D c;
    c.real = real + b.real;
    c.imaginary = imaginary + b.imaginary;

    return c;
}

Complex2D Complex2D::soustraction(Complex2D b){
    Complex2D c;
    c.real = real - b.real;
    c.imaginary = imaginary - b.imaginary;

    return c;
}

Complex2D Complex2D::multiplication(Complex2D b){
    Complex2D c;
    c.real = real * b.real - imaginary * b.imaginary;
    c.imaginary = real * b.imaginary + b.real * imaginary;

    return c; 
}

Complex2D Complex2D::division(Complex2D b){
    Complex2D c;
    c.real = b.real/(b.real*b.real + b.imaginary*b.imaginary);
    c.imaginary = b.imaginary/(b.real*b.real + b.imaginary*b.imaginary);

    return multiplication(c);
}
bool Complex2D::lessThan(Complex2D b){
    return (real*real + imaginary*imaginary) < (b.real*b.real + b.imaginary*b.imaginary);
}
bool Complex2D::moreThan(Complex2D b){
    return (real*real + imaginary*imaginary) > (b.real*b.real + b.imaginary*b.imaginary);
}