#include <iostream>
#include <vector>
using namespace std;

// class Solution
// {
// public:
//     bool isStrictlyPalindromic(int n)
//     {
//         return false;
//     }
// };

class Solution
{
public:
    bool check(vector<int> num)
    {
        int n = num.size() - 1;
        int i = 0;
        while (i <= n)
        {
            if (num[i] != num[n])
            {
                return false;
            }
            i++;
            n--;
        }
        return true;
    }
    bool isStrictlyPalindromic(int n)
    {
        vector<int> num;
        for (int i = 2; i <= n - 2; i++)
        {
            int x = n;
            num.clear();
            while (x)
            {
                num.push_back(x % i);
                x /= i;
            }
            if (!check(num))
                return false;
        }
        return true;
    }
};

int main()
{
    Solution sol;
    cout << boolalpha;
    cout << "Test case 1: n = 4 -> " << sol.isStrictlyPalindromic(4) << endl;
    cout << "Test case 2: n = 9 -> " << sol.isStrictlyPalindromic(9) << endl;
    return 0;
}