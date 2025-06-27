#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int n, a[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements in a single line: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min = INT_MAX, max = INT_MIN;
    int minIndex = -1, maxIndex = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            minIndex = i;
        }
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }
    swap(a[minIndex], a[maxIndex]);
    cout << "After swapping max & min the array will be: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}