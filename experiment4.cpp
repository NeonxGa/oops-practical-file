#include <iostream>
#include <cstring>  
using namespace std;
class String {
    char str[100];
public:
    String() {
        str[0] = '\0';
    }

    String(const char s[]) {
        strcpy(str, s);
    }
    String operator+(const String &s) {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
    String operator=(const String &s) {
        strcpy(str, s.str);
        return *this;
    }
    bool operator<=(const String &s) {
        return (strcmp(str, s.str) <= 0);
    }
    void display() const {
        cout << str;
    }
    void length() const {
        cout << "Length of string: " << strlen(str) << endl;
    }
    void tolowercase() {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
        }
    }
    void touppercase() {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
        }
    }
};
int main() {
    String s1("Hello"), s2("World"), s3;

    cout << "String 1: ";
    s1.display();
    cout << "\nString 2: ";
    s2.display();

    cout << "\n\n--- Concatenation (+) ---\n";
    s3 = s1 + s2;
    cout << "After concatenation: ";
    s3.display();

    cout << "\n\n--- Copy (=) ---\n";
    String s4;
    s4 = s1;
    cout << "Copied string: ";
    s4.display();

    cout << "\n\n--- Comparison (<=) ---\n";
    if (s1 <= s2)
        cout << "\nString 1 is less than or equal to String 2";
    else
        cout << "\nString 1 is greater than String 2";

    cout << "\n\n--- String Length ---\n";
    s1.length();

    cout << "\n--- To Lowercase ---\n";
    s1.tolowercase();
    s1.display();

    cout << "\n\n--- To Uppercase ---\n";
    s2.touppercase();
    s2.display();

    cout << endl;
    return 0;
}
