#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int, int> m;
        int n = nums.size();
        for(int i = 0; i  < n; i++)
        {
           m[nums[i]]++; 
        }

        int max = 0;
        for(auto i:m)
        {
            if(i.second > max)
            {
                max = i.second;
            } 
        }
        int sum = 0;
        for(auto i: m)
        {
            if(i.second == max)
            {
                sum += i.second;
            }
        }
        return sum;
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<int> nums1 = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    cout << "Test Case 1: " << sol.maxFrequencyElements(nums1) << endl;
    // Expected output: 4 (since 4 occurs 4 times, which is the maximum frequency)

    // Test case 2
    vector<int> nums2 = {5, 5, 6, 6, 6, 7, 7, 7, 7};
    cout << "Test Case 2: " << sol.maxFrequencyElements(nums2) << endl;
    // Expected output: 4 (since 7 occurs 4 times, which is the maximum frequency)

    return 0;
}
