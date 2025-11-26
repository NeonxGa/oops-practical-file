#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate memory for a single integer
    int *ptr = new int;

    cout << "Enter a number: ";
    cin >> *ptr;

    cout << "You entered: " << *ptr << endl;

    // Free the memory
    delete ptr;

    // Dynamically allocate memory for an array
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the memory allocated for the array
    delete[] arr;

    return 0;
}
