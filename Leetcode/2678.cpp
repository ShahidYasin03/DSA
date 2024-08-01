#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countSeniors(vector<string> &details)
    {
        int n = details.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            string str = "";
            str += details[i][11];
            str += details[i][12];
            if (str > "60")
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution sl;
    vector<string> x{"7868190130M7522", "5303914400F9211", "9273338290F4010"};
    int count = sl.countSeniors(x);
    cout << "Count: " << count << endl;
    return 0;
}