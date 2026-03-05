#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minOperations(string s)
    {
        char flag = '1';
        int count1 = 0, count2 = 0;
        for (char c : s)
        {
            if (c != flag)
            {
                count1++;
            }
            flag = (flag == '1') ? '0' : '1';
        }
        flag = '0';
        for (char c : s)
        {
            if (c != flag)
            {
                count2++;
            }
            flag = (flag == '1') ? '0' : '1';
        }
        return min(count1, count2);
    }
};

int main()
{
    Solution sol;

    // Test case 1
    string s1 = "010";
    cout << "Input: " << s1 << endl;
    cout << "Output: " << sol.minOperations(s1) << endl;

    // Test case 2
    string s2 = "0111";
    cout << "Input: " << s2 << endl;
    cout << "Output: " << sol.minOperations(s2) << endl;

    return 0;
}