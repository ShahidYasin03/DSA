#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    bool isHappy(int n)
    {
        if (n == 1)
        {
            return true;
        }
        unordered_map<int, int> mapp;
        mapp[n]++;
        while (n != 1)
        {
            if (n <= 9)
            {
                n = n * n;
            }
            else
            {
                vector<int> temp;
                while (n > 0)
                {
                    int dig = n % 10;
                    temp.push_back(dig * dig);
                    n /= 10;
                }
                n = 0;
                for (int i = 0; i < temp.size(); i++)
                {
                    n += temp[i];
                }
            }
            if (mapp.find(n) == mapp.end())
            {
                mapp[n] = 1; // Initialize with 1 if 'n' is not present
            }
            else
            {
                return false; // 'n' is already present, return false
            }
        }
        return true;
    }
};
int main()
{
    Solution sol;
    cout << sol.isHappy(2) << endl;
    cout << "Hello, word!" << endl;
    return 0;
}