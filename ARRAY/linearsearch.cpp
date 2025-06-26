#include<iostream>
using namespace std;
int main() {
    int n, a[100], key;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements in a single line: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter number for search: ";
    cin >> key;

    int found = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            found = i;
            break;
        }
    }
    if (found != -1)
        cout << "The key value is at index " << found << endl;
    else
        cout << "Invalid" << endl;
    return 0;
}

