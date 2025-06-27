#include<iostream>
using namespace std;
int main() {
    int n, a[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements in a single line: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0; int product=1;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        product*=a[i];
    }
    cout << "Sum is " << sum << endl;
     cout << "product is " <<product << endl;
    return 0;
}