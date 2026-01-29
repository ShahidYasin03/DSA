#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     vector<int> lexicalOrder(int n)
//     {
//         vector<string> nums(n);
//         for (int i = 0; i < n; i++)
//         {
//             nums[i] = to_string(i + 1);
//         }
//         sort(nums.begin(), nums.end());
//         vector<int> ans;
//         for (int i = 0; i < n; i++)
//         {
//             ans.push_back(stoi(nums[i]));
//         }
//         return ans;
//     }
// };

class Solution
{
public:
    vector<int> lexicalOrder(int n)
    {
        vector<int> nums;
        int currentNum = 1;
        for (int i = 0; i < n; i++)
        {
            nums.push_back(currentNum);
            if (currentNum * 10 <= n)
            {
                currentNum *= 10;
            }
            else
            {
                while (currentNum % 10 == 9 || currentNum + 1 > n)
                {
                    currentNum /= 10;
                }
                currentNum++;
            }
        }
        return nums;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> result1 = sol.lexicalOrder(13);
    cout << "Test case 1 (n=13): ";
    for (int num : result1)
    {
        cout << num << " ";
    }
    cout << "\n";

    // Test case 2
    vector<int> result2 = sol.lexicalOrder(2);
    cout << "Test case 2 (n=2): ";
    for (int num : result2)
    {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}