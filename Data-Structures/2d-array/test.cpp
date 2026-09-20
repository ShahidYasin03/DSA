#include <iostream>
using namespace std;

void inputarray(int* arr, int R, int C) {
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> *(arr + i * C + j);
        }
    }
}

void outputarray(int* arr, int R, int C) {
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cout << *(arr + i * C + j) << " ";
        }
        cout << endl;
    }
}

void multiply(int* arr, int* arr2, int* result, int r1, int c1, int r2, int c2) {
    if(c1 != r2)
    {
        cout<<"Multiplication not possible \n";
        return;
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            int value = 0;
            for (int k = 0; k < c1; k++) {
                value += *(arr + i * c1 + k) * *(arr2 + k * c2 + j);
            }
            *(result + i * c2 + j) = value;
        }
    }
}

int main() {
    int r1, c1, r2, c2;
    cout << "Enter Rows of 1st matrix: ";
    cin >> r1;
    cout << "Enter Cols of 1st matrix: ";
    cin >> c1;

    int Mat1[r1][c1];
    inputarray((int*)Mat1, r1, c1);
    outputarray((int*)Mat1, r1, c1);

    cout << endl;

    cout << "Enter Rows of 2nd matrix: ";
    cin >> r2;
    cout << "Enter Cols of 2nd matrix: ";
    cin >> c2;

    int Mat2[r2][c2];
    inputarray((int*)Mat2, r2, c2);
    outputarray((int*)Mat2, r2, c2);

    cout << endl;

    int Mat3[r1][c2];
    multiply((int*)Mat1, (int*)Mat2, (int*)Mat3, r1, c1, r2, c2);
    outputarray((int*)Mat3, r1, c2);

    return 0;
}
