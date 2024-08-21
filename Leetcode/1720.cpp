#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> decode(vector<int> &encoded, int first)
    {
        int n = encoded.size();
        vector<int> x(n + 1);
        x[0] = first;
        for (int i = 0; i < n; i++)
        {
            x[i + 1] = encoded[i] ^ x[i];
        }
        return x;
    }
};
int main()
{
    Solution sol;
    vector<int> in{1, 2, 3};
    vector<int> x = sol.decode(in, 1);
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << "    ";
    }
    cout << "\n";
    return 0;
}