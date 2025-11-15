#include "complex.h"
#include "rational.h"
#include "vector.h"
#include "matrix33.h"
#include "mexception33.h"
#include <iostream>
using namespace std;

int main() {
    try {
        // Test Complex numbers
        Complex c1(1.0, 2.0);
        Complex c2(3.0, 4.0);
        Complex c3 = c1 + c2;
        std::cout << "Complex addition: ";
        c3.print();
        std::cout << std::endl;

        // Test Rational numbers
        Rational r1(1, 2);
        Rational r2(3, 4);
        Rational r3 = r1 * r2;
        std::cout << "Rational multiplication: ";
        r3.print();
        std::cout << std::endl;

        // Test Vectors
        Vector3 v1(1.0, 2.0, 3.0);
        Vector3 v2(4.0, 5.0, 6.0);
        Vector3 v3 = v1.cross(v2);
        std::cout << "Vector cross product: ";
        v3.display();
        std::cout << std::endl;

        // Test Matrix33 with int
        int intMat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        Matrix33<int> m1(intMat);
        std::cout << "Integer matrix:" << std::endl;
        m1.print();

        // Test Matrix33 with Complex
        Complex compMat[3][3] = {{c1, c2, c3}, {c3, c1, c2}, {c2, c3, c1}};
        Matrix33<Complex> m2(compMat);
        std::cout << "Complex matrix:" << std::endl;
        m2.print();

        // Test Null33 and Identity33
        Null33<int> nullMatrix;
        Identity33<int> identityMatrix;
        std::cout << "Null matrix:" << std::endl;
        nullMatrix.print();
        std::cout << "Identity matrix:" << std::endl;
        identityMatrix.print();

        // Test operations
        Matrix33<int> sum = m1 + identityMatrix;
        std::cout << "Sum of integer matrix and identity:" << std::endl;
        sum.print();

        // Test exception
        try {
            std::cout << "Attempting to access invalid index..." << std::endl;
            std::cout << m1[3][0]; // This should throw
        } catch (const MException33& e) {
            std::cout << "Caught exception: " << e.what() 
                      << " (code: " << e.getErrorCode() << ")" << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}