#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> sumZero(int n)
    {
        vector<int> ans;
        int neg = (n - 1) * (n) / 2;
        neg *= -1;
        ans.push_back(neg);
        for (int i = 1; i < n; i++)
        {
            ans.push_back(i);
        }
        return ans;
    }
};

int main()
{
    Solution s1;

    vector<int> ans = s1.sumZero(5);
    int sum = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        sum += ans[i];
    }
    cout << sum << endl;

    vector<int> ans2 = s1.sumZero(6);
    int sum2 = 0;
    for (int i = 0; i < ans2.size(); i++)
    {
        sum2 += ans2[i];
    }
    cout << sum2 << endl;

    return 0;
}