#include <iostream>
#include <vector>
using namespace std;
void evenOdd(vector<int> &j)
{
    int left_ptr = 0;
    int right_ptr = j.size() - 1;
    while (left_ptr < right_ptr)
    {
        if (j[left_ptr] % 2 != 0 && j[right_ptr] % 2 == 0)
        {
            swap(j[left_ptr], j[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        if (j[left_ptr] % 2 == 0)
        {
            left_ptr++;
        }
        if (j[right_ptr] % 2 != 0)
        {
            right_ptr--;
        }
    }
    return;
}
int main()
{
    int x;
    cout << "Enter size : ";
    cin >> x;
    vector<int> v;
    for (int i = 0; i < x; i++)
    {
        int ele;
        cout << "Enter number : ";
        cin >> ele;
        v.push_back(ele);
    }
    evenOdd(v);
    for (int i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }
}