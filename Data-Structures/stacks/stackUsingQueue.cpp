#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    queue<int> q1;
    queue<int> q2;
    int N;
    Stack()
    {
        N = 0;
    }
    void push(int value)
    {
        q2.push(value);
        N++;
         while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();

        }
        queue<int>temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop()
    {
        q1.pop();
        N--;
    }
    int top()
    {
        return q1.front();
    }
    int size()
    {
        return N;
    }


};

int main()
{
    Stack q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.top()<<endl;


    return 0;
}