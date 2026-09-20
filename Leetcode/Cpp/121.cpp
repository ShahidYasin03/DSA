#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int buy = prices[0];
        int sell = prices[0];
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] > sell) {
                sell = prices[i];
            } else if (prices[i] < buy) {
                buy = prices[i];
                sell = prices[i];
            }
            maxProfit = max(maxProfit, (sell - buy));
        }
        return maxProfit;
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    int result1 = solution.maxProfit(prices1);
    cout << "Max profit for test case 1: " << result1 << endl; // Expected output: 5

    // Test case 2
    vector<int> prices2 = {7, 6, 4, 3, 1};
    int result2 = solution.maxProfit(prices2);
    cout << "Max profit for test case 2: " << result2 << endl; // Expected output: 0
    
    return 0;
}
