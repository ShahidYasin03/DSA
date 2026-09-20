#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int count = 0;
        for(int i = 1; i < n - 1; i++)
        {
            int leftSmaller = 0, rightLarger = 0;
            for(int j = 0; j < i; j++)
            {
                if(rating[j] < rating[i])
                {
                    leftSmaller++;
                }
            }

            for(int j = i + 1; j < n; j++)
            {
                if(rating[j] > rating[i])
                {
                    rightLarger++;
                }
            }

            count += (leftSmaller * rightLarger);

            int leftLarger = i - leftSmaller;
            int rightSmaller = n - i - 1 - rightLarger;

            count += (leftLarger * rightSmaller);
        }
        return count;
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    vector<int> ratings1 = {2, 5, 3, 4, 1};
    cout << "Number of teams for ratings1: " << solution.numTeams(ratings1) << endl;

    // Test case 2
    vector<int> ratings2 = {2, 1, 3};
    cout << "Number of teams for ratings2: " << solution.numTeams(ratings2) << endl;

    return 0;
}
