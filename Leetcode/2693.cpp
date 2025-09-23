#include <iostream>
using namespace std;

class Solution
{
public:
    bool isStrictlyPalindromic(int n)
    {
        return false;
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