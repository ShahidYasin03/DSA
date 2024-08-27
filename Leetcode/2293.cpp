#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minMaxGame(vector<int>& nums) 
    {
        if(nums.size()==1) return nums[0];
        int n;
        bool flag = true;
        while(nums.size() > 2)
        {
            n = nums.size();
            // vector<int>temp = nums;
            nums.clear();
            for(int i=0;i<n;i+=2)
            {
                if(flag) nums.push_back(min(nums[i], nums[i+1]));
                else nums.push_back(max(nums[i], nums[i+1]));
                flag = !flag;
            }
        }
        return min(nums[0], nums[1]);
    }
};

int main()
{
    cout << "Hello, word!" << endl;
    return 0;
}