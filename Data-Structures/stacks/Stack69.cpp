#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack <int> v;
    v.push(69);
    if(not v.empty())
    {
    cout<<v.top()<<endl;
    }
    v.pop();
    if(not v.empty())
    {
    cout<<v.top()<<endl;
    }else{
        cout<<"Emplty Stack \n";
    }
}