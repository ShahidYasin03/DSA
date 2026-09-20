#include <iostream>
#include <stack>
using namespace std;
void reverseString(string s)
{
    stack<string> stac;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }

        stac.push(word);
    }
    while (!(stac.empty()))
    {
        cout << stac.top() << " ";
        stac.pop();
    }
}
int main()
{
    string line = "Hello I am Shahid";

    reverseString(line);
}