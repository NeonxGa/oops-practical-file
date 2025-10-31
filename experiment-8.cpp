#include <iostream>
#include <fstream>
#include<cctype>
using namespace std;
int main() {
    ifstream fin("input.txt");   // Input file
    ofstream fout("output.txt"); // Output file

    if (!fin) {
        cout << "Error: Could not open input file!" << endl;
        return 1;
    }
    char ch;
    while (fin.get(ch)) {
        // Skip whitespace characters: space, tab, newline, etc.
        if (ch != ' ' && ch != '\t' && ch != '\v' &&
            ch != '\n' && ch != '\r' && ch != '\f') {
            fout << ch;  // Write only non-whitespace characters
        }
    }

    cout << "White spaces removed successfully!\n";
    cout << "Check 'output.txt' for the result." << endl;

    fin.close();
    fout.close();

    return 0;
}
