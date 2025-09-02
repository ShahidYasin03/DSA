#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
private:
    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    vector<string> simplifiedFractions(int n)
    {
        vector<string> v;
        for (int num = 1; num < n; num++)
        {
            for (int den = num + 1; den <= n; den++)
            {
                if (gcd(num, den) == 1)
                {
                    v.push_back(to_string(num) + "/" + to_string(den));
                }
            }
        }
        return v;
    }
};

int main()
{
    Solution sol;
    int n = 4;
    vector<string> result = sol.simplifiedFractions(n);

    cout << "Simplified fractions for n = " << n << ":\n";
    for (auto &f : result)
        cout << f << " ";
    cout << endl;
}
