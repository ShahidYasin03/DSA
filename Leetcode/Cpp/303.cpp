#include <iostream>
#include <vector>
using namespace std;

class NumArray
{
public:
    vector<int> x;
    NumArray(vector<int> &nums)
    {
        int s = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            s += nums[i];
            x.push_back(s);
        }
    }

    int sumRange(int left, int right)
    {
        if (left == 0)
        {
            return x[right];
        }
        else
        {
            return x[right] - x[left - 1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

int main()
{
    // Test case 1
    vector<int> nums1 = {-2, 0, 3, -5, 2, -1};
    NumArray *obj1 = new NumArray(nums1);
    cout << "Test case 1:" << endl;
    cout << "sumRange(0, 2): " << obj1->sumRange(0, 2) << endl; // Expected: 1
    cout << "sumRange(2, 5): " << obj1->sumRange(2, 5) << endl; // Expected: -1
    cout << "sumRange(0, 5): " << obj1->sumRange(0, 5) << endl; // Expected: -3

    // Test case 2
    vector<int> nums2 = {1, 2, 3, 4, 5};
    NumArray *obj2 = new NumArray(nums2);
    cout << "\nTest case 2:" << endl;
    cout << "sumRange(0, 0): " << obj2->sumRange(0, 0) << endl; // Expected: 1
    cout << "sumRange(1, 3): " << obj2->sumRange(1, 3) << endl; // Expected: 9
    cout << "sumRange(0, 4): " << obj2->sumRange(0, 4) << endl; // Expected: 15

    delete obj1;
    delete obj2;

    return 0;
}
