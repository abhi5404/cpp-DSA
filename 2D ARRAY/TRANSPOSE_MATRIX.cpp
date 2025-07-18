// Write a program to Find Transpose of a Matrix.

#include <iostream>
using namespace std;    
const int MAX_COL = 4; // Adjust based on the number of columns in your matrix

void printMatrix(int mat[][MAX_COL], int n, int m) {
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(int mat[][MAX_COL], int n, int m) {
    int transposed[MAX_COL][MAX_COL]; // Create a new matrix for the transposed version

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transposed[j][i] = mat[i][j]; // Swap rows and columns
        }
    }

    // Print the transposed matrix
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    printMatrix(mat, 4, 4);
    transposeMatrix(mat, 4, 4);
    return 0;
}


// time complexity : O(n * m)