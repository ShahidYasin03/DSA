#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> st;
        for (auto i : tokens)
        {
            if (i == "+" || i == "-" || i == "/" || i == "*")
            {
                int num1 = 0, num2 = 0;
                if (!st.empty())
                    num2 = st.top();
                st.pop();
                if (!st.empty())
                    num1 = st.top();
                st.pop();
                int val = 0;
                switch (i[0])
                {
                case '+':
                    val = num1 + num2;
                    break;
                case '-':
                    val = num1 - num2;
                    break;
                case '/':
                    val = num1 / num2;
                    break;
                case '*':
                    val = num1 * num2;
                    break;
                default:
                    val = 0;
                    break;
                }
                st.push(val);
            }
            else
            {
                st.push(stoi(i));
            }
        }
        return st.top();
    }
};

int main()
{
    Solution sol;

    // Test case 1
    vector<string> tokens1 = {"2", "1", "+", "3", "*"};
    cout << "Test 1: " << sol.evalRPN(tokens1) << endl; // Expected: 9

    // Test case 2
    vector<string> tokens2 = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    cout << "Test 2: " << sol.evalRPN(tokens2) << endl; // Expected: 22

    return 0;
}