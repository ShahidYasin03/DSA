#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter size : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int element;
        cout<<"Enter num: ";
        cin>>element;
        v.push_back(element);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<"\n";
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]==2)
        {
            x++;
        }
    }
    cout<<"2 is times: "<<x<<endl;
    return 0;
    
}