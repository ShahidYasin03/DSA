#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter numbers : ";
    cin>>a>>b;
    cout<<"A is : "<< a<<endl;
    cout<<"B is : "<< b<<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"After Swap : "<<endl;
    cout<<"A is : "<< a<<endl;
    cout<<"B is : "<< b<<endl;
}