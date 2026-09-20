#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Python

// class Solution(object):
//     def minimumBoxes(self, apple, capacity):
//         """
//         :type apple: List[int]
//         :type capacity: List[int]
//         :rtype: int
//         """
//         apple.sort(reverse=True)
//         capacity.sort(reverse=True)
//         i, j, cap = 0, 0, 0

//         while i < len(apple):
//             if cap < apple[i]:
//                 cap += capacity[j]
//                 j += 1
//             else:
//                 cap -= apple[i]
//                 i += 1
//         return j

// C++
class Solution
{
public:
    int minimumBoxes(vector<int> &apple, vector<int> &capacity)
    {
        sort(apple.begin(), apple.end(), greater<int>());
        sort(capacity.begin(), capacity.end(), greater<int>());
        int i = 0, j = 0, cap = 0;

        while (i < apple.size())
        {
            if (cap < apple[i])
            {
                cap += capacity[j++];
            }
            else
            {
                cap -= apple[i++];
            }
        }
        return j;
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<int> apple1 = {1, 3, 2};
    vector<int> capacity1 = {4, 3, 1, 5, 2};
    cout << "Test 1: " << sol.minimumBoxes(apple1, capacity1) << endl;

    // Test case 2
    vector<int> apple2 = {5, 5, 5};
    vector<int> capacity2 = {2, 8, 2};
    cout << "Test 2: " << sol.minimumBoxes(apple2, capacity2) << endl;

    return 0;
}