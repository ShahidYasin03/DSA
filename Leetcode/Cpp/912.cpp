#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums, int l, int r)
    {
        int mid = (l + r) / 2;
        int len1 = mid - l + 1;
        int len2 = r - mid;
        vector<int> arr1(len1);
        vector<int> arr2(len2);

        int k = l;
        for (int i = 0; i < len1; i++)
        {
            arr1[i] = nums[k++];
        }

        k = mid + 1;
        for (int i = 0; i < len2; i++)
        {
            arr2[i] = nums[k++];
        }
        
        int index1 = 0;
        int index2 = 0;
        k = l;
        while (index1 < len1 && index2 < len2)
        {
            if (arr1[index1] < arr2[index2])
            {
                nums[k++] = arr1[index1++];
            }
            else
            {
                nums[k++] = arr2[index2++];
            }
        }

        while (index1 < len1)
        {
            nums[k++] = arr1[index1++];
        }

        while (index2 < len2)
        {
            nums[k++] = arr2[index2++];
        }
    }

    void mergeSort(vector<int> &nums, int l, int r)
    {
        if (l >= r) // Base condition
            return;
        
        int mid = (l + r) / 2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);

        merge(nums, l, r);
    }

    vector<int> sortArray(vector<int> &nums)
    {
        int r = nums.size() - 1;
        mergeSort(nums, 0, r);
        return nums;
    }
};


int main()
{
    Solution sol;
    vector<int> x{4, 2, 3, 5, 1};
    sol.sortArray(x);

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << "   ";
    }
    cout << endl;

    return 0;
}
