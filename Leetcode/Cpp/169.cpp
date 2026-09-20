#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0;
        int element = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
            {
                count = 1;
                element = nums[i];
            }
            else if (nums[i] == element)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return element;
    }
};

int main()
{
    Solution sol;
    vector<int> test1 = {3, 2, 3};
    vector<int> test2 = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority element in test1: " << sol.majorityElement(test1) << endl;
    cout << "Majority element in test2: " << sol.majorityElement(test2) << endl;

    return 0;
}