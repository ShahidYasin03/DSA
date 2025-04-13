#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Hello, word!" << endl;
    return 0;
}
int fun()
{
    vector<int> sum;
    vector<int> a = {1, 2, 3, 4};
    vector<int> b{1, 2, 3, 4};
    for (int i = 0; i < a.size(); i++)
    {
        int x = a[i] + b[i];
        sum.push_back(x);
    }
    for (int i = 0; i < sum.size(); i++)
    {
        cout << sum[i] << "  ";
    }
}
