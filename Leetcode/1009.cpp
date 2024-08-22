#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int bitwiseComplement(int n)
    {
        if (n == 0)
            return 1;
        int m = n;
        int mask = 0;
        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int x = int(n ^ mask);
        return x;
    }
};

int main()
{
    Solution sol;
    int x = sol.bitwiseComplement(10);
    cout << "Compliment is: " << x << endl;
    return 0;
}