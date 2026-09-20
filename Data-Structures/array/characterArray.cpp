#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0; i< 3; i++)
    {
        for(int k = 0; k<3; k++)
        {
            cout<<"Enter : ";
            cin>>arr[i][k];
        }
        
    }
    for(int i = 0; i< 3; i++)
    {
        for(int k = 0; k<3; k++)
        {
            cout<<arr[i][k]<<" ";
        }
        cout<<endl;
    }
}