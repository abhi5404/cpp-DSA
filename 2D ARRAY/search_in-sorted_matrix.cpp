#include<iostream>
using namespace std;

const int MAX_COL = 4; // Match the column size of your matrix

void search(int mat[][MAX_COL], int n, int m, int key) {
    int i = 0, j = m - 1; // Start from the top-right corner

    while (i < n && j >= 0) {
        if (mat[i][j] == key) {
            cout << "Element found at (" << i << ", " << j << ")" << endl;
            return;
        } else if (mat[i][j] > key) {
            j--; // Move left
        } else {
            i++; // Move down
        }
    }
    cout << "Element not found" << endl;
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int key = 15; // Element to search for
    search(matrix, 4, 4, key);
    return 0;
}


// time complexity: O(n + m)
//this method is called "staircase search" because it starts from the top-right corner and moves either left or down based on the comparison with the key.

