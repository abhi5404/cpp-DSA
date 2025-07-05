#include<iostream>
using namespace std;
int main() {
    int n, a[100], key;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter number for search: ";
    cin >> key;

    int st = 0, end = n - 1;
    int found = -1;
    while (st <= end) {
        int mid = (st + end) / 2;
        if (a[mid] == key) {
            found = mid;
            break;
        } else if (a[mid] < key) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    if (found != -1)
        cout << "Key found at index: " << found << endl;
    else
        cout << "Not found" << endl;
    return 0;
}


// TIME COMPLEXITY: O(log n)
// SPACE COMPLEXITY: O(1)