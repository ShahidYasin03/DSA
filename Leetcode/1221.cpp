#include <iostream>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int bal = 0;
        int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'L')
            {
                bal++;
            }else{
                bal--;
            }
            if(bal == 0)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Solution sol;
    cout <<"Test Case 1 : "<< sol.balancedStringSplit("RLRRLLRLRL") << endl;
    cout <<"Test Case 2 : "<< sol.balancedStringSplit("LLLLRRRR") << endl;
    cout <<"Test Case 3 : "<< sol.balancedStringSplit("RLRRRLLRLL") << endl;

    return 0;

}