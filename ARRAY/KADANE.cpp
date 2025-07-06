#include <iostream>
#include <climits>  // Needed for INT_MIN

using namespace std;

void maxSubarraySum3(int* arr, int n) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < n; i++) {
        currSum += arr[i];  // fixed this line
        maxSum = max(currSum, maxSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum << endl;
}

int main() {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarraySum3(arr, n);
    return 0;
}
