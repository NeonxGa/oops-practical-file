#include <iostream>
using namespace std;

// Class template
template <class T>
class Compare {
    T a, b;  // data members
public:
    // Constructor (special function)
    Compare(T x, T y) {
        a = x;
        b = y;
        cout << "Constructor called. Values initialized: " << a << " and " << b << endl;
    }

    // Member function to find bigger number
    void findBigger() {
        if (a > b)
            cout << "Bigger number is: " << a << endl;
        else if (b > a)
            cout << "Bigger number is: " << b << endl;
        else
            cout << "Both numbers are equal." << endl;
    }

    // Destructor (special function)
    ~Compare() {
        cout << "Destructor called. Object destroyed." << endl;
    }
};

int main() {
    cout << "--- Integer Comparison ---" << endl;
    Compare<int> c1(10, 25);
    c1.findBigger();

    cout << "\n--- Float Comparison ---" << endl;
    Compare<float> c2(12.5, 7.8);
    c2.findBigger();

    cout << "\n--- Double Comparison ---" << endl;
    Compare<double> c3(15.25, 15.25);
    c3.findBigger();

    return 0;
}
