#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 0, 5, 6, 1, 2};
    int target, pair = 0;
    cout<<"Enter Number : ";
    cin>>target;
    for (int i = 0; i < 6 ; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (arr[j] + arr[i] == target)
            {
                pair++;
            }
            
        }
        
    }
    cout<<"Pairs are : "<<pair<<endl;
    return 0;
    
}