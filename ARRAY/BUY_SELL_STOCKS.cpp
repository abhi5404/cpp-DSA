#include <iostream>
#include <climits>  // Needed for INT_MAX

using namespace std;

void maxProfit(int* prices, int n) {
    int* bestBuy = [100000]  // dynamically allocate bestBuy array
    bestBuy[0] = INT_MAX;    // initialize with first price

    for (int i = 1; i < n; i++) {
        bestBuy[i] = min(bestBuy[i - 1], prices[i]);
    }

    int maxProfit = 0;
    for (int i = 0; i < n; i++) {
        int currentProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currentProfit);
    }

    cout << "Maximum Profit = " << maxProfit << endl;

    delete[] bestBuy;  // free dynamically allocated memory
}

int main() {
    int prices[6] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(int);

    maxProfit(prices, n);
    return 0;
}

// time complexity of this algorithm is O(n)