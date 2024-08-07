#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    string numberToWords(int num)
    {
        string ans = "";
        vector<int> temp;
        while(num)
        {
            int digit = num % 10;
            num /= 10;
            temp.push_back(digit);
        }
    }
};

int main()
{

    // 123
    // One Hundred Twenty Three
     // 321 
    cout << "Here goes nothing" << endl;
    return 0;
}