#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    string kthDistinct(vector<string> &arr, int k)
    {
        if (k == 0)
        {
            return "";
        }
        unordered_map<string, int> mapp;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            mapp[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (mapp[arr[i]] == 1)
            {
                k--;
                if (k == 0)
                {
                    return arr[i];
                }
            }
        }
        return "";
    }
};

int main()
{
    Solution sol;
    vector<string> arr{"d", "b", "c", "b", "c", "a"};
    int k = 2;
    string result = sol.kthDistinct(arr, k);
    cout << result << endl;
    return 0;
}
