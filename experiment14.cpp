#include <iostream>
using namespace std;

class Time {
private:
    int hr, min, sec;

public:
    void getTime() {
        cout << "Enter hours: ";
        cin >> hr;
        cout << "Enter minutes: ";
        cin >> min;
        cout << "Enter seconds: ";
        cin >> sec;
    }

    void showTime() {
        cout << hr << " hrs " << min << " mins " << sec << " secs" << endl;
    }

    // Function that takes two Time objects and returns their sum
    Time add(Time t1, Time t2) {
        Time temp;
        temp.sec = t1.sec + t2.sec;
        temp.min = t1.min + t2.min;
        temp.hr  = t1.hr  + t2.hr;

        // Adjust seconds
        if (temp.sec >= 60) {
            temp.sec -= 60;
            temp.min++;
        }

        // Adjust minutes
        if (temp.min >= 60) {
            temp.min -= 60;
            temp.hr++;
        }

        return temp;
    }
};

int main() {
    Time t1, t2, t3;

    cout << "Enter first time:" << endl;
    t1.getTime();

    cout << "\nEnter second time:" << endl;
    t2.getTime();

    // Passing objects as arguments
    t3 = t3.add(t1, t2);

    cout << "\nFirst time: ";
    t1.showTime();

    cout << "Second time: ";
    t2.showTime();

    cout << "\nTotal time: ";
    t3.showTime();

    return 0;
}
