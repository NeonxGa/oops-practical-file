#include <iostream>
using namespace std;

// Abstract base class
class LIST {
public:
    virtual void store(int value) = 0;    // Pure virtual function
    virtual int retrieve() = 0;            // Pure virtual function
    virtual ~LIST() {}                     // Virtual destructor (best practice)
};

// Derived class: STACK (LIFO)
class STACK : public LIST {
    int arr[100];
    int top;
public:
    STACK() { top = -1; }

    void store(int value) override {
        if (top == 99)
            cout << "Stack Overflow!" << endl;
        else
            arr[++top] = value;
    }

    int retrieve() override {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return -1;
        } else
            return arr[top--];
    }
};

// Derived class: QUEUE (FIFO)
class QUEUE : public LIST {
    int arr[100];
    int front, rear;
public:
    QUEUE() {
        front = 0;
        rear = -1;
    }

    void store(int value) override {
        if (rear == 99)
            cout << "Queue Overflow!" << endl;
        else
            arr[++rear] = value;
    }

    int retrieve() override {
        if (front > rear) {
            cout << "Queue Underflow!" << endl;
            return -1;
        } else
            return arr[front++];
    }
};

int main() {
    LIST *listPtr; // Base class pointer

    cout << "Using STACK:\n";
    STACK s;
    listPtr = &s;
    listPtr->store(10);
    listPtr->store(20);
    listPtr->store(30);
    cout << "Retrieve: " << listPtr->retrieve() << endl;
    cout << "Retrieve: " << listPtr->retrieve() << endl;

    cout << "\nUsing QUEUE:\n";
    QUEUE q;
    listPtr = &q;
    listPtr->store(100);
    listPtr->store(200);
    listPtr->store(300);
    cout << "Retrieve: " << listPtr->retrieve() << endl;
    cout << "Retrieve: " << listPtr->retrieve() << endl;

    return 0;
}
