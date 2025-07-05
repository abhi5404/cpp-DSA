#include <iostream>
#include <climits>  // Needed for INT_MIN

using namespace std;

void maxSubarraySum(int* arr, int n) {
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int currSum = 0;
            for (int k = i; k <= j; k++) {
                currSum += arr[k];
                cout << arr[k] << " ";
            }
            cout << "= " << currSum << endl;
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }

    cout << "Maximum Subarray Sum = " << maxSum << endl;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum(arr, n);
    return 0;
}
// This code finds the maximum subarray sum using a brute force approach.

