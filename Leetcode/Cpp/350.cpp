#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0, j = 0;
    vector<int> result;

    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] < nums2[j])
        {
            i++;
        }
        else if (nums1[i] > nums2[j])
        {
            j++;
        }
        else
        {
            result.push_back(nums1[i]);
            i++;
            j++;
        }
    }

    return result;
}
int main()
{

    vector<int> n1 = {1, 2, 2, 1};
    vector<int> n2 = {2, 2};
    vector<int> x = intersect(n1, n2);

    for (auto i : x)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}