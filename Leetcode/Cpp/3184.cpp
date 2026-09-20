#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int countCompleteDayPairs(vector<int> &hours)
    {
        int n = hours.size();
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((hours[i] + hours[j]) % 24 == 0)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;
    vector<int> x {12, 12, 30, 24, 24};
    cout << "Number of pairs: " <<sol.countCompleteDayPairs(x) << endl;
    return 0;
}