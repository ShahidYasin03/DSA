#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool stoneGame(vector<int> &piles)
    {
        int alice = 0, bob = 0;
        int i = 0, j = piles.size() - 1;
        bool aliceTurn = true;
        while (i < j)
        {
            if (aliceTurn)
            {
                if (piles[i] > piles[j])
                {
                    alice += piles[i];
                    i++;
                }
                else
                {
                    alice += piles[j];
                    j++;
                }
                aliceTurn = false;
            }
            else
            {
                aliceTurn = true;
                if (piles[i] > piles[j])
                {
                    bob += piles[i];
                    i++;
                }
                else
                {
                    bob += piles[j];
                    j++;
                }
            }
        }
        return alice > bob;
    }
};

int main()
{
    Solution sol = Solution();
    vector<int> case1 = {5,3,4,5};
    cout << sol.stoneGame(case1) << endl;
}
