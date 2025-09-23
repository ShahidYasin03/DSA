// class Solution
// {
// public:
//     string frequencySort(string s)
//     {
//         map<char, int> mp;
//         for (char c : s)
//         {
//             mp[c]++;
//         }
//         string ans = "";
//         for (auto i : mp)
//         {
//             int x = i.second;
//             while (x)
//             {
//                 ans += i.first;
//                 x--;
//             }
//         }
//         return ans;
//     }
// };

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }

        priority_queue<pair<int, char>> pq;
        for (auto &p : mp)
        {
            pq.push({p.second, p.first});
        }

        string ans;
        while (!pq.empty())
        {
            auto temp = pq.top();
            pq.pop();
            ans.append(temp.first, temp.second);
        }

        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.frequencySort("Aabb") << endl;
    return 0;
}
