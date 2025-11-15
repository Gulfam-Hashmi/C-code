#include "complex.h"
#include <iostream>
using namespace std;
Complex::Complex(double r, double i) : m_real(r), m_imag(i) {}

Complex Complex::operator+(const Complex& other) const {
    return Complex(m_real + other.m_real, m_imag + other.m_imag);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(m_real - other.m_real, m_imag - other.m_imag);
}

Complex Complex::operator*(const Complex& other) const {
    return Complex(m_real * other.m_real - m_imag * other.m_imag,
                  m_real * other.m_imag + m_imag * other.m_real);
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other.m_real * other.m_real + other.m_imag * other.m_imag;
    return Complex((m_real * other.m_real + m_imag * other.m_imag) / denominator,
                  (m_imag * other.m_real - m_real * other.m_imag) / denominator);
}

bool Complex::operator==(const Complex& other) const {
    return (m_real == other.m_real) && (m_imag == other.m_imag);
}
bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

void Complex::print() const {
    std::cout << m_real << " + " << m_imag << "i";
}