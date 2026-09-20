#include <iostream>
#include <vector>
#include <stack>
#include <map>
using namespace std;

string countOfAtoms(string formula)
{

    int n = formula.length(), i, j, k;
    stack<pair<string, int>> st;
    for (i = 0; i < n; i++)
    {
        char ch = formula[i];

        if (isupper(ch))
        {
            string el = "";
            el += ch;
            for (j = i + 1; j < n; j++)
            {
                if (islower(formula[j]))
                {
                    el += formula[j];
                }
                else
                {
                    break;
                }
            }

            string dig = "";

            for (k = j; k < n; k++)
            {
                ch = formula[k];
                if (isdigit(ch))
                {
                    dig += ch;
                }
                else
                {
                    break;
                }
            }
            if (dig == "")
            {
                dig = "1";
            }
            int num = stoi(dig);
            st.push({el, num});
            i = k - 1;
        }
        else if (ch == '(')
        {
            st.push({"(", -1});
        }
        else if (ch == ')')
        {
            string dig = "";
            for (j = i + 1; j < n; j++)
            {
                ch = formula[j];
                if (isdigit(ch))
                {
                    dig += ch;
                }
                else
                {
                    break;
                }
            }
            if (dig == "")
            {
                dig = "1";
            }
            int num = stoi(dig);

            vector<pair<string, int>> temp;
            pair<string, int> opening = {"(", -1};

            while (st.top() != opening)
            {
                pair<string, int> p = st.top();
                st.pop();

                temp.push_back({p.first, p.second * num});
            }
            st.pop();

            while (temp.size() > 0)
            {
                st.push(temp.back());
                temp.pop_back();
            }
            i = j - 1;
        }
    }
    map<string, int> mp;
    while (!st.empty())
    {
        pair<string, int> p = st.top();
        st.pop();
        mp[p.first] += p.second;
    }
    string ans = "";
    for (auto p : mp)
    {
        string el = p.first;
        string dig = to_string(p.second);
        if (dig == "1")
        {
            dig = "";
        }

        ans += el + dig;
    }

    return ans;
}

int main()
{

    string x = countOfAtoms("K4(ON(SO3)2)2");

    cout << x << endl;

    return 0;
}
