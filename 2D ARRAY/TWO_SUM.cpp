//write a C++ program to find two numbers in an array that add up to a specific target sum

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Indices of the two numbers are: " << i << " and " << j << endl;
                return 0;
            }
        }
    }
    
    cout << "No two numbers found that add up to the target." << endl;
    return 0;
}   