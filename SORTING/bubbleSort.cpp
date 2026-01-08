#include<iostream>
using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
// for decending order, use < instead of >
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Sorted array: ";
    print(arr, n);
}

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    bubbleSort(arr, 5);
    return 0;
}


//time complexity: O(n^2)

// short algorithm for remembering this sort is given below :
// begin : for i=0 to n-1(outer loop)
// begin : for j=0 to n-i-1(inner loop)
// if arr[j]>arr[j+1] then swap(arr[j],arr[j+1])
// end inner loop
// end outer loop