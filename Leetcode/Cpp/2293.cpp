#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int minMaxGame(vector<int> &nums)
    {

        while (nums.size() != 1)
        {
            vector<int> currvect;
            bool flag = true;
            for (int i = 0; i < nums.size() - 1; i++)
            {
                if (flag)
                {
                    currvect.push_back(min(nums[i], nums[i + 1]));
                    flag = false;
                }
                else
                {
                    currvect.push_back(max(nums[i], nums[i + 1]));
                    flag = true;
                }
                i++;
            }
            nums = currvect;
        }
        return nums[0];
    }
};

int main()
{
    Solution sol;
    vector<int> x {1,3,5,2,4,8,2,2};
    cout << "Min is : "<< sol.minMaxGame(x) << endl;
    return 0;
}