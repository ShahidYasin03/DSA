#include <iostream>
#include <vector>
using namespace std;

auto init = [](){
ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
return 'c';
}();
class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        int five = 0, ten = 0;

        for (int i = 0; i < bills.size(); i++)
        {
            if (bills[i] == 5)
            {
                five++;
            }
            else if (bills[i] == 10)
            {
                ten++;
                if (five > 0)
                {
                    five--;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if (ten && five)
                {
                    ten--;
                    five--;
                }
                else if (five >= 3)
                {
                    five -= 3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};
int main()
{

    Solution sol;
    vector<int> x {5, 5, 5, 10, 20};
    cout << boolalpha;
    cout << sol.lemonadeChange(x) << endl;

    return false;
}