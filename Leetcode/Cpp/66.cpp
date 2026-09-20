#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 1;
        int n = digits.size() - 1;
        for (int i = n; i >= 0; i--)
        {
            int num = (digits[i] + carry) % 10;
            carry = (digits[i] + carry) / 10;
            digits[i] = num;
            if (carry == 0)
            {
                return digits;
            }
        }
        if (carry)
            digits.insert(digits.begin(), carry);
        return digits;
    }
};

int main()
{
    Solution sol;

    // Test case 1: [1,2,3] -> [1,2,4]
    vector<int> test1 = {1, 2, 3};
    vector<int> result1 = sol.plusOne(test1);
    cout << "Test 1: ";
    for (int num : result1)
        cout << num << " ";
    cout << endl;

    // Test case 2: [9,9,9] -> [1,0,0,0]
    vector<int> test2 = {9, 9, 9};
    vector<int> result2 = sol.plusOne(test2);
    cout << "Test 2: ";
    for (int num : result2)
        cout << num << " ";
    cout << endl;

    return 0;
}