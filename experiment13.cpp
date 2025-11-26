#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

    // Static data member
    static int count;

public:
    void getData() {
        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter name: ";
        cin >> name;

        count++;   // Increase static count
    }

    void showData() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }

    // Static member function
    static void showCount() {
        cout << "Total students = " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() {
    Student s1, s2, s3;

    s1.getData();
    s2.getData();
    s3.getData();

    cout << endl;
    s1.showData();
    s2.showData();
    s3.showData();

    cout << endl;
    Student::showCount();   // Calling static function

    return 0;
}
