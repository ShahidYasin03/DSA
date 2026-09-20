#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> executeInstructions(int n, vector<int> &startPos, string s)
    {
        vector<int> result;
        vector<int> sP(2);
        for (int i = 0; i < s.length(); i++)
        {
            sP[0] = startPos[0];
            sP[1] = startPos[1];
            int ins = 0;
            for (int j = i; j < s.length(); j++)
            {
                if (s[j] == 'R')
                {
                    sP[1]++;
                }
                else if (s[j] == 'L')
                {
                    sP[1]--;
                }
                else if (s[j] == 'U')
                {
                    sP[0]--;
                }
                else
                {
                    sP[0]++;
                }

                if (sP[0] < 0 || sP[0] >= n || sP[1] < 0 || sP[1] >= n)
                {
                    break;
                }
                ins++;
            }
            result.push_back(ins);
        }
        return result;
    }
};

int main()
{

    Solution sol;

    // Input: n = 3, startPos = [0,1], s = "RRDDLU"
    // Output: [1,5,4,3,1,0]
    // Explanation: Starting from startPos and beginning execution from the ith instruction:
    // - 0th: "RRDDLU". Only one instruction "R" can be executed before it moves off the grid.
    // - 1st:  "RDDLU". All five instructions can be executed while it stays in the grid and ends at (1, 1).
    // - 2nd:   "DDLU". All four instructions can be executed while it stays in the grid and ends at (1, 0).
    // - 3rd:    "DLU". All three instructions can be executed while it stays in the grid and ends at (0, 0).
    // - 4th:     "LU". Only one instruction "L" can be executed before it moves off the grid.
    // - 5th:      "U". If moving up, it would move off the grid.

    // string s = "RRDDLU";
    // vector<int> startPos = {0,1};
    // int n = 3;

    // string s ="LURD";
    // vector<int> startPos = {1,1};
    // int n = 2;

    string s = "LRUD";
    vector<int> startPos = {0, 0};
    int n = 1;
    vector<int> x = sol.executeInstructions(n, startPos, s);

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    return 0;
}