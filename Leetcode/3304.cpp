#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    char kthCharacter(int k)
    {
        string a = "a";
        while (a.length() < k)
        {
            string s = "";
            for (int i = 0; i < a.length(); i++)
            {
                s += ((a[i] + 1) <= 'z') ? char(a[i] + 1) : 'a';
            }
            a += s;
        }
        return a[k - 1];
    }
};

int main() {
    Solution sol;

    // Test Case 1
    int k1 = 1;
    cout << "Test Case 1 (k = " << k1 << "): " << sol.kthCharacter(k1) << endl;

    // Test Case 2
    int k2 = 10;
    cout << "Test Case 2 (k = " << k2 << "): " << sol.kthCharacter(k2) << endl;


    return 0;
}
