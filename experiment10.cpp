#include <iostream>
#include <stdexcept>   // for out_of_range
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100];  // assuming max size
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    try {
        int index;
        cout << "Enter the index to access: ";
        cin >> index;

        if (index < 0 || index >= n) {
            throw out_of_range("Index out of range!");
        }

        cout << "Element at index " << index << " = " << arr[index] << endl;
    }
    catch (out_of_range &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
