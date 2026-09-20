#include <iostream>
using namespace std;

class Solution
{
public:
    int countOperations(int num1, int num2)
    {
        int count = 0;
        while (num1 > 0 && num2 > 0)
        {
            if (num1 > num2)
            {
                num1 -= num2;
            }
            else
            {
                num2 -= num1;
            }
            count++;
        }
        return count;
    }
};

int main()
{
    Solution s;
    cout << s.countOperations(2, 3) << endl;   // Test case 1
    cout << s.countOperations(10, 10) << endl; // Test case 2
    return 0;
}