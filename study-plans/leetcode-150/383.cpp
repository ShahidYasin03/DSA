#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    bool canConstruct(string ran, string mag)
    {

        // Sorting

        // sort(ran.begin(), ran.end());
        // sort(mag.begin(), mag.end());
        // int l = 0, r = 0;
        // while (l < ran.length() && r < mag.length())
        // {

        //     if (ran[l] > mag[r])
        //     {
        //         r++;
        //         continue;
        //     }
        //     else if (ran[l] != mag[r])
        //     {
        //         return false;
        //     }
        //     l++;
        //     r++;
        // }
        // if(l < ran.length())
        // {return false;}
        // return true;

        //Map
        
        unordered_map<char, int> mapy;
        for (int i = 0; i < mag.length(); i++)
        {
            mapy[mag[i]]++;
        }
        for (int i = 0; i < ran.length(); i++)
        {
            char c = ran[i];
            if (mapy.find(c) != mapy.end() && mapy[c] > 0)
            {
                mapy[c]--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string ransom = "aa";
    string magzine = "ab";

    cout << sol.canConstruct(ransom, magzine) << endl;
    return 0;
}