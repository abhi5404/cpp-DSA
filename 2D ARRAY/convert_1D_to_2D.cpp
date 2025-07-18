#include <iostream>
using namespace std;

int main() {
    int original[] = {1, 2, 3, 4,5,6,7,8,9};
    int size = sizeof(original) / sizeof(original[0]);

    int m = 3; // number of rows
    int n = 3; // number of columns

    // Check if reshaping is possible
    if (size != m * n) {
        cout << "Cannot reshape the array!" << endl;
        return 0;
    }

    // Create 2D array
    int result[10][10]; // assuming max size is 10x10 for simplicity

    // Fill the 2D array from original
    for (int i = 0; i < size; i++) {
        int row = i / n;
        int col = i % n;
        result[row][col] = original[i];
    }

    // Print the 2D array
    cout << "2D Array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
