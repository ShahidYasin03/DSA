#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = prices[0], sell = prices[0], profit = 0;
        for(int i = 1; i < n; i++)
        {
            if(prices[i] > buy)
            {
                profit += prices[i] - buy;
                buy = prices[i];
            }
            if(prices[i] < buy)
            {
                buy = prices[i];
            }
        }
        return profit;
    }
};

int main()
{
    Solution sol;
    vector<int> x{7,1,5,3,6,4};

    cout << sol.maxProfit(x) << endl;
    return 0;
}