#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> x;
        for (int i = 0; i < nums.size(); i++)
        {
            if (x.find(nums[i]) == x.end())
            {
                x[nums[i]] = i;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;
    vector<int> x{1, 2, 3, 4, 1};
    cout << sol.containsDuplicate(x) << endl;
    return 0;
}