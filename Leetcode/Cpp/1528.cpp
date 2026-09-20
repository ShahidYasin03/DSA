#include <iostream>
#include <vector>
using namespace std;

string restoreString(string s, vector<int> &indices)
{
    int n = indices.size();
    vector<char> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[indices[i]] = s[i];
    }
    for (int i = 0; i < n; i++)
    {
        s[i] = ans[i];
    }
    return s;
}

// s = "codeleet", indices = [4,5,6,7,0,2,1,3]
// s = "abc", indices = [0,1,2]

int main()
{
    string s = "codeleet";
    vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};

    string s1 = restoreString(s, indices);

    cout << s1 << endl;

    return 0;
}