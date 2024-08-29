#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mappy;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mappy[nums[i]]++;
        }
        for (auto i : mappy) {
            if (i.second > n/2) {
                return i.first;
            }
        }
        return -1;
    }
};
int main()
{
    Solution sol;
    vector<int> x {2,2,1,1,1,2,2}; // Ans = 3
    cout << sol.majorityElement(x) << endl;
    return 0;
}