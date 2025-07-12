
#include<iostream>
using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int curr=arr[i];
        int prev=i-1;
        while (prev>=0 && arr[prev]>arr[prev+1])
        {
     swap(arr[prev],arr[prev+1]);
     prev--;
        }
        
        arr[prev+1]=curr;
            }
        
    cout << "Sorted array: ";
    print(arr, n);
}

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    insertionSort(arr, 5);
    return 0;
}