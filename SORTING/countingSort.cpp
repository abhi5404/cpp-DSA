#include<iostream>
#include<climits>
using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void countingSort(int arr[], int n) {
    int minVal = INT_MAX, maxVal = INT_MIN;

    // Find min and max
    for (int i = 0; i < n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    int range = maxVal - minVal + 1;
    int freq[range] = {0};  // Initialize frequency array with 0

    // 1st step: Count frequency
    for (int i = 0; i < n; i++) {
        freq[arr[i] - minVal]++;
    }

    // 2nd step: Reconstruct sorted array
    int j = 0;
    for (int i = 0; i < range; i++) {
        while (freq[i] > 0) {
            arr[j++] = i + minVal;
            freq[i]--;
        }
    }

    print(arr, n);
}

int main() {
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
    countingSort(arr, 8);
    return 0;
}
