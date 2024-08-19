#include <iostream>
using namespace std;

class Solution {
public:
    int minSteps(int n) {
        if(n == 1)
        {
            return 0;
        }
        int arr[1001];
        arr[1] = 0;
        arr[2] = 2;
        for(int i = 3; i <= n; i++)
        {
            arr[i] = i;
            int j = i / 2;
            while(j >= 1)
            {
                if(i % j == 0)
                {
                    arr[i] = min(arr[i], arr[j] + i/j);
                }
                j--;
            }
        }
        return arr[n];
    }
};

int main()
{
    Solution sol;
    int n = 10;
    int out = sol.minSteps(n);
    cout << "Answer : " << out <<endl;
    return 0;
}