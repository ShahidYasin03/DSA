#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    long long sumAndMultiply(int n)
    {
        if (n == 0)
            return n;
        long long sum = 0;
        string s = to_string(n);
        string r = "";
        for (char c : s)
        {
            if (c != '0')
                r += c;
            sum += int(c - '0');
        }
        int num = stoi(r);
        return sum * num;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    cout << "Test 1: n = 123" << endl;
    cout << "Result: " << sol.sumAndMultiply(123) << endl;

    // Test case 2
    cout << "Test 2: n = 102" << endl;
    cout << "Result: " << sol.sumAndMultiply(102) << endl;

    return 0;
}