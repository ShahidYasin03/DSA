#include <iostream>
#include <vector>
using namespace std;

int minOperations(vector<string> &logs)
{
    int n = 0;

    int size = logs.size();

    for (int i = 0; i < size; i++)
    {
        if (logs[i] == "../")
        {
            if (n != 0)
            {
                n--;
            }
        }
        else if (logs[i] == "./")
        {
            continue;
        }
        else
        {
            n++;
        }
    }

    return n;
}

int main()
{
    vector<string> x = {"./", "../", "./"};

    cout << minOperations(x) << endl;
    return 0;
}