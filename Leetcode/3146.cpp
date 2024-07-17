#include <iostream>
#include <vector>
using namespace std;

int findPermutationDifference(string s, string t)
{
    int dif = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < t.size(); j++)
        {
            if (s[i] == t[j])
            {
                dif += abs(i - j);
                break;
            }
        }
    }
    return dif;
}

int main()
{
    string s = "abc", t = "bac";

    cout << findPermutationDifference(s, t) << endl;

    return 0;
}