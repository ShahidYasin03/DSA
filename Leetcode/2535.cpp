#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int differenceOfSum(vector<int> &nums)
    {
        int sum = 0;
        int digSum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (nums[i] <= 9)
            {
                digSum += nums[i];
            }
            else
            {
                int x = nums[i];
                while (x > 9)
                {
                    int digit = x % 10;
                    x /= 10;
                    digSum += digit;
                }
                digSum += x;
            }
        }

        return (abs(sum - digSum));
    }
};
int main()
{
    Solution sol;
    vector<int> x {1,15,6,3};
    cout << "Difference is : " << sol.differenceOfSum(x) << endl;
    return 0;
}