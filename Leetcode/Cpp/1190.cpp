// 1190. Reverse Substrings Between Each Pair of Parentheses

#include <iostream>
#include <stack>


using namespace std;

string reverseParentheses(string s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            st.push(s[i]);
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            string x = "";
            while (!st.empty() && st.top() != '(')
            {
                x += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }

            for (auto j : x)
            {
                st.push(j);
            }
        }
    }
    string result = "";
    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }
    int n = result.length();
    for (int i = 0; i < n / 2; i++)
    {
        char temp = result[i];
        result[i] = result[n - i - 1];
        result[n - i - 1] = temp;
    }
    return result;
}

int main()
{

    cout << reverseParentheses("(ed(et(oc))el)") << endl;

    return 0;
}
