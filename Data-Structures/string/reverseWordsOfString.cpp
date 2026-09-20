#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q1;
    string line = "Shahid Zaid Ateeq";
    for (int i = 0; i < line.length(); i++)
    {
        string word = "";
        while (line[i] != ' ' && i < line.length())
        {
            word += line[i];
            i++;
        }
        q1.push(word);
    }
    line = "";

    while (!q1.empty())
    {
        string word;
        word = q1.front();
        q1.pop();
        for (int i = 0; i < word.length() / 2; i++)
        {
            swap(word[i], word[word.length() - i - 1]);
        }
        line = line + word + ' ';
    }

    cout << line << endl;

    return 0;
}