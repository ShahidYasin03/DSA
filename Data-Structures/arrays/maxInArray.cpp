#include <iostream>
using namespace std;
void input(int * arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter num : ";
        cin>> arr[i];
    }
    
}
void output(int * arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int max(int *arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
   return max; 
}
int main()
{
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    input(arr, size);
    output(arr, size);
    cout<<"Max num is : "<<max(arr, size)<<endl;
    
}
