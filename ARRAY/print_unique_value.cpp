#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements in a single line: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Unique values in the array are: ";
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}