#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    int getLucky(string s, int k)
    {
        string num = "";

        for (int i = 0; i < s.length(); i++)
        {
            num += to_string(s[i] - 96);
        }
        // long num1 = stol(num);
        while (k)
        {
            long sum = 0;
            for(int i = 0; i < num.length(); i++)
            {
                sum += num[i] - '0';
            }
            num = to_string(sum);
            k--;
        }
        return stoi(num);
    }
};
int main()
{
    Solution sol;
    string s = "leetcode";
    int k = 2;
    cout << sol.getLucky(s, k) << endl;
    return 0;
}