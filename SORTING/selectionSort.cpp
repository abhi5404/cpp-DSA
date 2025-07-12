#include<iostream>
using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
// for decending order, use < instead of >
                swap(arr[i], arr[minIndex]);
            }
    cout << "Sorted array: ";
    print(arr, n);
}

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
     selectionSort(arr, 5);
    return 0;
}

//time complexity: O(n^2)