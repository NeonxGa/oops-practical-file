#include <iostream>
#include <fstream>
using namespace std;

class Student {
    char name[30];
    int age;
    char sex;
    float height;
    float weight;

public:
    void getData() {
        cout << "Enter name: ";
        cin >> ws;                  // eat up any leftover whitespace
        cin.getline(name, 30);      // correctly read full name

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter sex (M/F): ";
        cin >> sex;

        cout << "Enter height (in cm): ";
        cin >> height;

        cout << "Enter weight (in kg): ";
        cin >> weight;
    }

    void showData() {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nSex: " << sex;
        cout << "\nHeight: " << height << " cm";
        cout << "\nWeight: " << weight << " kg\n";
    }
};

int main() {
    Student s1, s2;
    fstream file;

    // ---- Writing data to file ----
    file.open("student.dat", ios::out | ios::binary);
    if (!file) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    s1.getData();
    file.write((char*)&s1, sizeof(s1));
    file.close();

    cout << "\nData written to file successfully!\n";

    // ---- Reading data back ----
    file.open("student.dat", ios::in | ios::binary);
    if (!file) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    file.read((char*)&s2, sizeof(s2));
    file.close();

    cout << "\nData read from file:\n";
    s2.showData();

    return 0;
}
