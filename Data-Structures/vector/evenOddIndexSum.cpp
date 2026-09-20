#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size;
    int Esum=0, Osum=0;
    cout<<"Enter size : ";
    cin>>size;

    vector<int> v(size);
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element : ";
        cin>>v[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < size; i++)
    {
        if (i%2==0)
        {
            Esum += v[i];
        }else
        {
            Osum += v[i];
        }
        
    }

    cout<<"Even num sum is: "<<Esum<<endl;
    cout<<"Odd num sum is: "<<Osum<<endl;
    cout<<"Difference between Esum and Osum is : "<<Esum-Osum<<endl;

    return 0;
    
}