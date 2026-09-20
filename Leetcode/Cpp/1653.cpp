#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minimumDeletions(string s)
    {
        int a = 0, mn = s.length();
        for (char i : s)
        {
            if (i == 'a')
                a++;
        }
        int b = 0;
        for (char i : s)
        {
            if (i == 'a')
                a--;
            mn = min(mn, a + b);
            if (i == 'b')
                b++;
        }
        return mn;
    }
};

int main()
{
    Solution sol;

    // Test cases
    std::string test1 = "aababb";
    std::cout << "Minimum deletions for " << test1 << ": " << sol.minimumDeletions(test1) << std::endl;

    std::string test2 = "aabbab";
    std::cout << "Minimum deletions for " << test2 << ": " << sol.minimumDeletions(test2) << std::endl;

    std::string test3 = "ababab";
    std::cout << "Minimum deletions for " << test3 << ": " << sol.minimumDeletions(test3) << std::endl;

    std::string test4 = "bbb";
    std::cout << "Minimum deletions for " << test4 << ": " << sol.minimumDeletions(test4) << std::endl;

    std::string test5 = "aaa";
    std::cout << "Minimum deletions for " << test5 << ": " << sol.minimumDeletions(test5) << std::endl;

    return 0;
}
