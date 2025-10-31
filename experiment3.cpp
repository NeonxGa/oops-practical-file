#include <iostream>
using namespace std;
class B;

class A {
    int num1;
    public:
       void setData(int n) 
        {
            num1 = n;
        }
        friend void greatest(A, B);  
};

class B {
    int num2;
public:
    void setData(int n) {
        num2 = n;
    }
    friend void greatest(A, B);  // friend function declaration
};

// Friend function definition
void greatest(A objA, B objB) {
    if (objA.num1 > objB.num2)
        cout << objA.num1 << " is greater than " << objB.num2 << endl;
    else if (objA.num1 < objB.num2)
        cout << objB.num2 << " is greater than " << objA.num1 << endl;
    else
        cout << "Both numbers are equal." << endl;
}

int main() {
    A a;
    B b;
    int x, y;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    a.setData(x);
    b.setData(y);

    greatest(a, b);  // Call friend function

    return 0;
}
