#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter number : ";
    cin>>n;
    int arr[n][n];
    int left = 0;
    int right = n-1;
    int top = 0;
    int bottom = n-1;
    int direction = 0;
    int value = 1;

    while(left <= right && top <= bottom)
    {
        if(direction==0)
        {
            for(int col = left; col<= right; col++)
            {
                arr[top][col]= value++;
            }
            top++;
        }
        else if(direction ==1)
        {
            for(int row = top; row <= bottom; row++)
            {
                arr[row][right] = value++;
            }
            right--;
        }
        else if(direction==2)
        {
            for(int col = right; col>=left; col--)
            {
                arr[bottom][col] = value++;
            }
            bottom--;
        }else{
            for(int row = bottom; row >= top; row--)
            {
                arr[row][left] = value++;
            }
            left++;
        }
        direction = (direction +1)%4;
    }

    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j< n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}