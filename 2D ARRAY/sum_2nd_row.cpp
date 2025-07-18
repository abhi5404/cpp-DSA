//  : Print out the sum of the numbers in the second row of the “nums” array. 
// Example : 
// Input - int nums[ ][ ] = { {1,4,9}, {11,4,3}, {2,2,3} }; 
// Output - 18 



#include <iostream>
using namespace std;
const int MAX_COL = 4; // Adjust based on the number of columns in your matrix
void sumSecondRow(int nums[][MAX_COL], int n) {
    int sum = 0;
    for (int j = 0; j < MAX_COL; j++) {
        sum += nums[1][j]; // Accessing the second row (index 1)
    }
    cout << "Sum of the second row: " << sum << endl;
}   
int main() {
    int nums[4][MAX_COL] = { {1, 4, 9, 10}, {18, 4, 3, 12}, {2, 2, 3, 14}, {5, 6, 7, 8} };
    int n = sizeof(nums) / sizeof(nums[0]); // Number of rows
    sumSecondRow(nums, n);
    return 0;
}