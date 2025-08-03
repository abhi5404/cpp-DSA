// wap to print all triplets in an array that sum to zero
#include <iostream>
#include <vector>   
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr.begin(), arr.end());

    cout << "Triplets that sum to zero are: " << endl;
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue; // Skip duplicates
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == 0) {
                cout << arr[i] << ", " << arr[left] << ", " << arr[right] << endl;
                while (left < right && arr[left] == arr[left + 1]) left++; // Skip duplicates
                while (left < right && arr[right] == arr[right - 1]) right--; // Skip duplicates
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return 0;
}