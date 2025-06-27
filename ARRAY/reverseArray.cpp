#include<iostream>
using namespace std;

void reverseArray(int arr[], int sz) {
    int start = 0, end = sz - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int n, a[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements in a single line: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    reverseArray(a, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
