#include <iostream>
using namespace std;

class Area {
public:
    // Area of Circle
    float area(float r) {
        return 3.1416 * r * r;
    }

    // Area of Rectangle
    float area(float l, float b) {
        return l * b;
    }

    // Area of Triangle
    float area(int base, int height) {
        return 0.5 * base * height;
    }

    // Area of Square
    int area(int side) {
        return side * side;
    }
};

int main() {
    Area obj;

    float radius, length, breadth;
    int base, height, side;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;

    cout << "Enter side of square: ";
    cin >> side;

    cout << "\nArea of Circle = " << obj.area(radius);
    cout << "\nArea of Rectangle = " << obj.area(length, breadth);
    cout << "\nArea of Triangle = " << obj.area(base, height);
    cout << "\nArea of Square = " << obj.area(side);

    return 0;
}
