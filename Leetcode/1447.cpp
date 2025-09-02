#include <iostream>
#include <vector>
#include <string>
#include <numeric>
using namespace std;

class Solution
{
public:
    vector<string> simplifiedFractions(int n)
    {
        int num;
        int den;
        vector<string> v;
        for (int i = 1; i < n; i++)
        {
            for (int j = i; j <= n; j++)
            {
                num = i;
                den = j;
                string a = "";
                if (gcd(num, den) == 1 && num != den && den != 1)
                {
                    a += to_string(num) + '/' + to_string(den);
                    v.push_back(a);
                }
            }
        }
        return v;
    }
};

int main()
{
    Solution sol;
    int n = 5; // Example input
    vector<string> result = sol.simplifiedFractions(n);
    for (const auto &frac : result)
    {
        cout << frac << " ";
    }
    cout << endl;
    return 0;
}