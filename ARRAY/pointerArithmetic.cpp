#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "Array elements using pointer arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    // Addition
    cout << "ptr + 2 points to value: " << *(ptr + 2) << endl;

    // Subtraction
    cout << "ptr + 4 - 2 points to value: " << *(ptr + 4 - 2) << endl;

    // Pointer difference
    int *ptr2 = &arr[4];
    cout << "Difference between ptr2 and ptr: " << (ptr2 - ptr) << endl;

    // Increment
    ptr++;
    cout << "After increment, ptr points to: " << *ptr << endl;

    // Decrement
    ptr--;
    cout << "After decrement, ptr points to: " << *ptr << endl;

    return 0;
}