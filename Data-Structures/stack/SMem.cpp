#include <iostream>
using namespace std;
class STACK
{
private:
    const static int size = 20;
    char ch[size];
    int top = -1;

public:
    bool isEmplty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if (top == size - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(const char c)
    {
        if (STACK::isFull() != true)
        {
            ch[top + 1] = c;
            top++;
        }
    }
    void pop()
    {
        if(STACK::isEmplty() != true)
        {
            cout<<ch[top]<<endl;
            top--;
        }
    }
};
int main()
{
    STACK obj;
    cout<<obj.isEmplty()<<endl;
    cout<<obj.isFull()<<endl;
    obj.push('N');
    obj.push('E');
    obj.push('X');
    obj.push('T');
    obj.pop();
}