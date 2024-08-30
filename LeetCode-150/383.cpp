#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool canConstruct(string ran, string mag)
    {
        sort(ran.begin(), ran.end());
        sort(mag.begin(), mag.end());
        int l = 0, r = 0;
        while (l < ran.length() && r < mag.length())
        {

            if (ran[l] > mag[r])
            {
                r++;
                continue;
            }
            else if (ran[l] != mag[r])
            {
                return false;
            }
            l++;
            r++;
        }
        if(l < ran.length())
        {return false;}
        return true;
    }
};

int main()
{
    Solution sol;
    string ransom = "fihjjjjei";
    string magzine = "hjibagacbhadfaefdjaeaebgi";

    cout << sol.canConstruct(ransom, magzine) << endl;
    return 0;
}