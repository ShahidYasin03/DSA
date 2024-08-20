#include <iostream>
#include <cctype>
using namespace std;

class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        int n = s.length();
        for(int i = 0; i < n - 1; i++)
        {
            if(tolower(s[i]) != tolower(s[i+1]))
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;
    cout << sol.countKeyChanges("aAbBcC") << endl;

    return 0;

}