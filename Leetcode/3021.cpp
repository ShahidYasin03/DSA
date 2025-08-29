#include <iostream>
using namespace std;

class Solution
{
public:
    long long flowerGame(int n, int m)
    {
        long long evenX = (n + 1) / 2;
        long long oddX = n / 2;
        long long evenY = (m + 1) / 2;
        long long oddY = m / 2;
        long long ans = ((evenX * oddY) + (evenY * oddX));
        return ans;
    }
};

int main()
{
    Solution sol;
    cout << sol.flowerGame(3, 2) << endl; 
    cout << sol.flowerGame(4, 5) << endl;
    return 0;
}