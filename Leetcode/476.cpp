#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int findComplement(int num)
    {
        if (num == 0)
            return 1;
        int m = num;
        int mask = 0;
        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        return num ^ mask;
    }
};

int main()
{
    Solution sol;
    vector<int> testCases{0, 5, 10, 7, 20, 30};
    for(int i = 0; i < testCases.size(); i++)
    {
        cout << "Compliment of " << testCases[i] << " is: " << sol.findComplement(testCases[i])<< endl;
    }
    return 0;
}