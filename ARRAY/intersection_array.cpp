#include <iostream>
using namespace std;

int main() {
    int n1, n2, a[100], b[100];
    cout << "Enter number of elements in first array: ";
    cin >> n1;
    cout << "Enter " << n1 << " elements for first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> a[i];
    }
    cout << "Enter number of elements in second array: ";
    cin >> n2;
    cout << "Enter " << n2 << " elements for second array: ";
    for (int i = 0; i < n2; i++) {
        cin >> b[i];
    }

    cout << "Common elements are: ";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break; 
            }
        }
    }
    cout << endl;
    return 0;
}