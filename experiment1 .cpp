#include <iostream>
using namespace std;

class Matrix {
    int rows, cols;
    int mat[10][10];

public:
    Matrix(int r = 0, int c = 0) {
        rows = r;
        cols = c;
    }
    void input() {
        cout << "Enter elements of " << rows << "x" << cols << " matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }
    void display() {
        cout << "Matrix (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix multiply(Matrix M2) {
        Matrix result(rows, M2.cols);
        if (cols != M2.rows) {
            cout << "Matrix multiplication not possible!\n";
            return result;
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < M2.cols; j++) {
                result.mat[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.mat[i][j] += mat[i][k] * M2.mat[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    Matrix A(r1, c1);
    A.input();

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    Matrix B(r2, c2);
    B.input();

    cout << "\nFirst Matrix:\n";
    A.display();
    cout << "\nSecond Matrix:\n";
    B.display();

    cout << "\nResultant Matrix after Multiplication:\n";
    Matrix C = A.multiply(B);
    C.display();

    return 0;
}
