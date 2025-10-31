#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    // Default constructor (no arguments)
    Complex() {
        real = 0;
        imag = 0;
    }

    // Constructor with one argument (real and imag equal)
    Complex(float r) {
        real = imag = r;
    }

    // Constructor with two arguments (real and imag different)
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Function to add two complex numbers
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1;          // calls default constructor
    Complex c2(5);       // calls single-argument constructor
    Complex c3(3, 7);    // calls two-argument constructor

    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    cout << "Complex number 3: ";
    c3.display();

    // Perform addition
    Complex c4 = c2.add(c3);
    cout << "\nAfter addition (c2 + c3): ";
    c4.display();

    return 0;
}
