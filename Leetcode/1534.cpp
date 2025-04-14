#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
    public:
        int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
            int n = arr.size();
            int count = 0;
            for(int i = 0; i < n; i++)
            {
                for(int j = i+1; j < n; j++)
                {
                    for(int k = j+1; k < n; k++)
                    {
                        if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                        {
                            count++;
                        }
                    }
                }
            }
            return count;
        }
    };


    int main() {
        Solution solution;

        // Test case 1
        vector<int> arr1 = {3, 0, 1, 1, 9, 7};
        int a1 = 7, b1 = 2, c1 = 3;
        cout << "Test case 1 result: " << solution.countGoodTriplets(arr1, a1, b1, c1) << endl;

        // Test case 2
        vector<int> arr2 = {1, 1, 2, 2, 3};
        int a2 = 0, b2 = 0, c2 = 1;
        cout << "Test case 2 result: " << solution.countGoodTriplets(arr2, a2, b2, c2) << endl;

        return 0;
    }