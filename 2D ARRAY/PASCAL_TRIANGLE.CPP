//WAP for pascal trinagle

#include <iostream>
using namespace std;    

int main() {
    int n;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> n;

    int triangle[n][n]; // Declare a 2D array

    // Initialize the triangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1; // First and last elements are always 1
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j]; // Fill in the rest
            }
        }
    }

    // Print the triangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// This code generates Pascal's Triangle up to n rows and prints it.