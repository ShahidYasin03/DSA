#include <iostream>
using namespace std;
void print(int * arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void sort(int *arr, int n)
{
    int left_ptr = 0;
    int right_ptr = n-1;
    while(left_ptr < right_ptr)
    {
       if (arr[left_ptr] > arr[right_ptr])
       {
        swap(arr[left_ptr],arr[right_ptr]);
        left_ptr++;
        right_ptr--;
       }
       if (arr[left_ptr] < arr[right_ptr])
       {
        left_ptr++;
       }
       if (arr[left_ptr] < arr[right_ptr])
       {
        left_ptr++;
       }
       
        
    }
}
int main()
{
    int size;
    cout<<"Enter size : ";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element : ";
        cin>>arr[i];
    }

    
}