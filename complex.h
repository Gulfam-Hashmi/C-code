#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;
class Complex {
private:
    double m_real;
    double m_imag;
public:
    Complex(double r = 0.0, double i = 0.0);
    
    // Arithmetic operations
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;
    
    // Comparison
    bool operator==(const Complex& other) const;
    bool operator!=(const Complex& other) const;

    // Display
    void print() const;
    
    // Getters
    double getReal() const { return m_real; }
    double getImag() const { return m_imag; }
};
#endif
