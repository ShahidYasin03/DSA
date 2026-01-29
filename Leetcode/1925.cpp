#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    int countTriples(int n)
    {
        int count = 0;
        for (int a = 1; a <= n; a++)
        {
            for (int b = 1; b <= n; b++)
            {
                int sumSq = a * a + b * b;
                int c = sqrt(sumSq);
                if (c * c == sumSq && c <= n)
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

    cout << "Test case 1: n = 5" << endl;
    cout << "Output: " << sol.countTriples(5) << endl;

    cout << "Test case 2: n = 13" << endl;
    cout << "Output: " << sol.countTriples(13) << endl;

    return 0;
}