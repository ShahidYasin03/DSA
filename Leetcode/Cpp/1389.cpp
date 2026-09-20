#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
    {
        int n = nums.size();
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            res.insert(res.begin() + index[i], nums[i]);
        }
        return res;
    }
};
int main()
{
    Solution sol;
    vector<int> nums{0, 1, 2, 3, 4};
    vector<int> index{0, 1, 2, 2, 1};
    vector<int> x = sol.createTargetArray(nums, index);
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << "   ";
    }
    cout << endl;
    return 0;
}