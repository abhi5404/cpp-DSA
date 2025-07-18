#include<iostream>
using namespace std;

const int MAX_COL = 4; // Match the column size of your matrix

void search(int mat[][MAX_COL], int n, int m, int key) {
    int i = 0, j = m - 1; // Start from the top-right corner

    while (i < n && j >= 0) {
        if (mat[i][j] == key) {
            // cout << "Element found at (" << i << ", " << j << ")" << endl;
            return;
        } else if (mat[i][j] > key) {
            j--; // Move left
        } else {
            i++; // Move down
        }
    }
    cout << "Element not found" << endl;
}

int countKey(int mat[][MAX_COL], int n, int m, int key) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(mat[i][j] == key)
                count++;
        }
    }
    return count;
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {4, 6, 7, 8},
        {8, 10, 11, 12},
        {11, 14, 15, 16},
    };
    int key = 11; // Element to search for
    search(matrix, 4, 4, key);

    int total = countKey(matrix, 4, 4, key);
    cout << "The number of times key " << key << " is present in the matrix: " << total << endl;

    return 0;
}