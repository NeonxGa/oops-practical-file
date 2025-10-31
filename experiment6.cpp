#include <iostream>
using namespace std;
template <class T>
T square(T num) {
    return num * num;
}

int main() {
    int i = 5;
    float f = 3.5f;
    double d = 2.75;

    cout << "Square of integer " << i << " = " << square(i) << endl;
    cout << "Square of float " << f << " = " << square(f) << endl;
    cout << "Square of double " << d << " = " << square(d) << endl;

    return 0;
}
