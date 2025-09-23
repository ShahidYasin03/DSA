#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int compareVersion(string version1, string version2)
    {
        int n1 = version1.length();
        int n2 = version2.length();
        int x1 = 0, x2 = 0, i = 0, j = 0;
        while (i < n1 || j < n2)
        {
            while (i < n1 && version1[i] != '.')
            {
                x1 *= 10;
                x1 += version1[i] - '0';
                i++;
            }

            while (j < n2 && version2[j] != '.')
            {
                x2 *= 10;
                x2 += version2[j] - '0';
                j++;
            }
            if (x1 < x2)
                return -1;
            if (x1 > x2)
                return 1;
            i++;
            j++;
            x1 = 0;
            x2 = 0;
        }
        return 0;
    }
};

int main()
{
    Solution sol;
    cout << sol.compareVersion("1.2", "1.10") << endl;  // Output: -1
    cout << sol.compareVersion("1.0", "1.0.0") << endl; // Output: 0
    return 0;
}