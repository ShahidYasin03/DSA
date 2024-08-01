#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int countSeniors(std::vector<std::string> &details)
    {
        int n = details.size();
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            // Extract the age substring and convert it to an integer
            int age = std::stoi(details[i].substr(11, 2));
            if (age > 60)
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