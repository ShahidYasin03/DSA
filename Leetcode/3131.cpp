#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int addedInteger(vector<int> &num1, vector<int> &num2)
    {
        int min1 = 1001, min2 = 1001;
        for (int i = 0; i < num1.size(); i++)
        {
            if (num1[i] < min1)
                min1 = num1[i];
        }
        for (int i = 0; i < num2.size(); i++)
        {
            if (num2[i] < min2)
                min2 = num2[i];
        }
        if (min1 == min2)
        {
            return 0;
        }
        else
        {
            return min2 - min1;
        }
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> num1_1 = {1, 2, 3};
    vector<int> num2_1 = {4, 5, 6};
    cout << "Test 1: " << sol.addedInteger(num1_1, num2_1) << endl;

    // Test case 2
    vector<int> num1_2 = {5, 10, 15};
    vector<int> num2_2 = {8, 13, 18};
    cout << "Test 2: " << sol.addedInteger(num1_2, num2_2) << endl;

    return 0;
}