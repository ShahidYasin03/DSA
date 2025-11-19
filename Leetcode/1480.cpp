#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> runSum;
        int sum = 0;
        for (auto i : nums)
        {
            sum += i;
            runSum.push_back(sum);
        }
        return runSum;
    }
};

void printVec(const vector<int> &v)
{
    cout << "[";
    for (size_t i = 0; i < v.size(); ++i)
    {
        if (i)
            cout << ", ";
        cout << v[i];
    }
    cout << "]";
}

int main()
{
    Solution sol;

    // Test case 1
    vector<int> t1 = {1, 2, 3, 4};
    vector<int> r1 = sol.runningSum(t1);
    cout << "Input: ";
    printVec(t1);
    cout << " -> Output: ";
    printVec(r1);
    cout << "\n";

    // Test case 2
    vector<int> t2 = {1, 1, 1, 1, 1};
    vector<int> r2 = sol.runningSum(t2);
    cout << "Input: ";
    printVec(t2);
    cout << " -> Output: ";
    printVec(r2);
    cout << "\n";

    return 0;
}