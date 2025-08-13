#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size()-1;
        while(s < e)
        {
            int mid = s + (e-s)/2;
            if(arr[mid] > arr[mid + 1])
            {
                e = mid;
            }else {
                s = mid+1;
            }
        }
        return s;
    }
};

int main()
{
    Solution sol;
    vector<int> test1 = {0, 2, 1, 0};
    vector<int> test2 = {1, 3, 5, 4, 2};
    cout << "Test 1 Peak Index: " << sol.peakIndexInMountainArray(test1) << endl;
    cout << "Test 2 Peak Index: " << sol.peakIndexInMountainArray(test2) << endl;
    return 0;
}