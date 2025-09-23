#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

// class Solution {
// public:
//     static vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
//         const int n = names.size();
//         vector<pair<int, string>> hn(n);
//         for (int i = 0; i < n; i++)
//             hn[i] = {heights[i], names[i]};

//         sort(hn.begin(), hn.end(), greater<>());

//         for (int i = 0; i < n; i++)
//             names[i] = hn[i].second;

//         return names;
//     }
// };

class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        priority_queue<pair<int, string>> pq;
        int n = names.size();
        for (int i = 0; i < n; i++)
        {
            pq.push({heights[i], names[i]});
        }

        vector<string> ans;
        while (!pq.empty())
        {
            auto temp = pq.top();
            pq.pop();
            ans.push_back(temp.second);
        }
        return ans;
    }
};

auto init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();

int main()
{
    // Test case 1
    Solution s;
    vector<string> names1 = {"Alice", "Bob", "Charlie"};
    vector<int> heights1 = {155, 180, 165};
    vector<string> result1 = s.sortPeople(names1, heights1);
    cout << "Test Case 1: ";
    for (const string &name : result1)
    {
        cout << name << ", ";
    }
    cout << endl; // Expected output: Bob Charlie Alice

    // Test case 2
    vector<string> names2 = {"Tom", "Jerry", "Spike"};
    vector<int> heights2 = {150, 120, 180};
    vector<string> result2 = s.sortPeople(names2, heights2);
    cout << "Test Case 2: ";
    for (const string &name : result2)
    {
        cout << name << ", ";
    }
    cout << endl; // Expected output: Spike Tom Jerry

    return 0;
}
