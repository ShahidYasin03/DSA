#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isOneBitCharacter(vector<int> &bits)
    {
        int n = bits.size();
        if (n < 2 && bits[0] == 0)
            return true;
        int i = 0;
        while (i < n - 1)
        {
            i += bits[i] + 1;
        }
        return i == n - 1;
    }
};

int main()
{
    Solution sol;

    // Test case 1: Single zero bit (one-bit character)
    vector<int> bits1 = {0};
    cout << "Test 1: " << (sol.isOneBitCharacter(bits1) ? "PASS" : "FAIL") << endl;

    // Test case 2: Two-bit character followed by one-bit character
    vector<int> bits2 = {1, 0, 0};
    cout << "Test 2: " << (sol.isOneBitCharacter(bits2) ? "PASS" : "FAIL") << endl;

    return 0;
}