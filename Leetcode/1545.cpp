#include <iostream>
using namespace std;

// class Solution
// {
// public:
//     char findKthBit(int n, int k)
//     {
//         string s = "0";
//         n--;
//         while (n)
//         {
//             string temp = "";
//             for (int i = s.length() - 1; i >= 0; i--)
//             {
//                 if (s[i] == '1')
//                 {
//                     temp += '0';
//                 }
//                 else
//                 {
//                     temp += '1';
//                 }
//             }
//             s += '1';
//             s += temp;
//             n--;
//         }

//         cout << s << endl;
//         return s[k - 1];
//     }
// };


class Solution
{
public:
    char findKthBit(int n, int k)
    {
        if (n == 1)
            return '0'; 
        
        int length = (1 << n) - 1; 
        int mid = length / 2 + 1;   

        if (k == mid)
            return '1';  
        if (k < mid)
            return findKthBit(n - 1, k);  
        else
            return invert(findKthBit(n - 1, length - k + 1));  
    }

    char invert(char bit)
    {
        return bit == '0' ? '1' : '0';  
    }
};


int main()
{

    Solution sol;
    cout << sol.findKthBit(3, 1) << endl;

    return 0;
}