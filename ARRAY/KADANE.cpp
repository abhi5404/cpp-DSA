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


// This code implements Kadane's algorithm to find the maximum subarray sum in a given array.
 // algorithm for this code is given below:
// 1. Initialize maxSum to INT_MIN and currSum to 0.    
// 2. Iterate through each element of the array:
//    a. Add the current element to currSum.
//    b. Update maxSum to be the maximum of currSum and maxSum.
//    c. If currSum becomes negative, reset it to 0.
// 3. After the loop, print the maximum subarray sum.
// This algorithm efficiently finds the maximum subarray sum in O(n) time complexity using Kadane's algorithm.
// 4. The algorithm works by maintaining a running sum (currSum) and updating the maximum sum (maxSum) found so far. If the running sum becomes negative, it is reset to 0, as a negative sum would not contribute positively to any future subarray sums