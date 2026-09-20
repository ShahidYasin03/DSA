#include <iostream>
#include <vector>
using namespace std;

vector<int> buildArray(vector<int> &nums)
{
    vector<int> x;
    for (int i = 0; i < nums.size(); i++)
    {
        x.push_back(nums[nums[i]]);
    }
    return x;
}


int main()
{
    cout<< "Hello world" <<endl;

    return 0;
}