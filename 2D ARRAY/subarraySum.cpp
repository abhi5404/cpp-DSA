#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1;  // base case: sum 0 has occurred once
    
    int prefixSum = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        prefixSum += nums[i];

        // Check if there exists a prefix sum such that:
        // current prefixSum - previous prefixSum = k
        if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end()) {
            count += prefixSumCount[prefixSum - k];
        }

        // Update the count of the current prefix sum
        prefixSumCount[prefixSum]++;
    }

    return count;
}
int main() {
    vector<int> nums = {1, 1, 1};
    int k = 2;

    int result = subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << ": " << result << endl;

    return 0;
}   