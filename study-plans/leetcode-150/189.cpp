#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rot(vector<int> &num, int s, int e)
    {
        for (int i = s; i <= (s + e) / 2; i++)
        {
            int temp = num[i];
            num[i] = num[e - (i - s)];
            num[e - (i - s)] = temp;
        }
    }

    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k = k % n;  // Handle cases where k is larger than n
        rot(nums, 0, n - 1);         // Reverse the entire array
        rot(nums, 0, k - 1);         // Reverse the first k elements
        rot(nums, k, n - 1);         // Reverse the remaining n-k elements
    }
};


int main()
{
    vector<int> x {1,2,3,4,5,6,7};
    Solution sol;
    sol.rotate(x, 3);
    for(int i = 0; i < x.size(); i++)
    {
        cout << x[i] << "   ";
    }
    cout<< endl;
    return 0;
}